#include <stdio.h>
#include <windows.h>
#include <mmsystem.h>
#include<string.h>
#include <conio.h>

#include "incl/ColorCode.h"

enum colorTemplet{
    rred,bblue,ggreen,yyellow,
};
enum HALL{
    h1,h2,h3,h4
};

struct item{
    int id;
    int priority;
};

struct priorityQueue{
    int members[100];
    int member_size_left;
    int front;
    int rear;
};
struct hall_seat{
    int seat[30];
    int seat_left;
    int seat_ptr;
};
#include "incl/declaration.h"



void init_hallSeat(struct hall_seat *head);

int main() {
    
    struct priorityQueue family,*head_f=&family;
    struct hall_seat hall_one,hall_two,hall_three,hall_four,*hall_head;
    init_hallSeat(&hall_one);init_hallSeat(&hall_two);init_hallSeat(&hall_three);init_hallSeat(&hall_four);
    init_q(head_f);

    char Name[30]={'\0'};
    int normal_ticket=0;
    int senior_ticket=0;
    int customer_id=100;

    int TotalTicket=0;

    enum HALL hallNo;
    
    clear;
    
    printf("Press Enter to Start ");
    hideCursor();
    getchar();
    welcomeTheme();
    getchar();
    
    
    while(1){
        char ch = '\0';
        ch = main_menu();
        if(ch != 0){generate_booking_list(&hall_one,&hall_two,&hall_three,&hall_four);continue;}

        hallNo = SelectHallFunction(&hall_one,&hall_two,&hall_three,&hall_four);

        switch(hallNo){
            case h1:
            hall_head = &hall_one;break;
            case h2:
            hall_head = &hall_two;break;
            case h3:
            hall_head = &hall_three;break;
            case h4:
            hall_head = &hall_four;break;
        }
        green("Hall selected..");getchar();


        yellow("Name : ");scanf("%s",Name);getchar();
        blue("\n*Normal Ticket (Press 1 to Book)\n*Senior Ticket (Press 2 to Book)\n*Exit(press 3)\n\n");
        green("Avaliable seats : ");printf("%d",hall_head->seat_left);printf("\n\n");
        while(1){
            click;
            ch = getch();
            if(ch == '1'){
                enqueue(head_f,customer_id,0);
                green("One ");yellow("Normal Ticket ");green("Booked..");
                printf(" #%d",customer_id);
                customer_id++;
                TotalTicket++;
                normal_ticket++;
            }
            else if(ch == '2'){
                enqueue(head_f,customer_id,1);
                green("One ");blue("Senior Ticket ");green("Booked..");
                printf(" #%d",customer_id);
                TotalTicket++;
                customer_id++;
                senior_ticket++;
            }
            else if(ch == '3'){ //generate the bill here..
                printf("Order -->");
                printq(head_f,hall_head);
                yellow("\nPress Enter to Generate Bill");
                getchar();
                GenerateBill(normal_ticket,senior_ticket,Name);
                Name[0]='\0';
                normal_ticket=0;
                senior_ticket=0;
                TotalTicket=0;
                init_q(head_f);
                hall_head = NULL;
                break;

            }
            else{
                red("Wrong input\n");
            }

            if(hall_head->seat_left <= TotalTicket){
                red(" (seats:");printf("%d",hall_head->seat_left-TotalTicket);red(")\n");
                red("HOUSEFULL\n");
                printf("Order-->");printq(head_f,hall_head);
                yellow("\nPress Enter to Generate Bill");
                getchar();click; GenerateBill(normal_ticket,senior_ticket,Name);
                Name[0]='\0';
                normal_ticket=0;
                senior_ticket=0;
                TotalTicket=0;
                init_q(head_f);
                hall_head=NULL;
                break;
                
            }
            else{
                green(" (seats : ");
                printf("%d",hall_head->seat_left-TotalTicket);
                green(")\n");
            }
        }
        if(ch == '1'){
            continue;
        } 
    }

    return 0;
}


void init_hallSeat(struct hall_seat *head){
    head->seat_left=30;
    head->seat_ptr=-1;
}






#include "Effects/TypingEffect.h"
#include "incl/PlayAudio.h"
#include "incl/hideCursor.h"
#include "incl/moveTo.h"
#include "Effects/Blink.h"
#include "incl/welcomeTheme.h"
#include "Effects/SelectHall.h"
#include "incl/priorityQueue.h"
#include "incl/GenerateBill.h"
#include "Effects/main_menu.h"
#include "incl/genereate_booking_list.h"

