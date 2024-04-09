enum HALL SelectHallFunction(struct hall_seat *one,struct hall_seat *two, struct hall_seat *three, struct hall_seat *four){
    clear;
    

    CONSOLE_SCREEN_BUFFER_INFO screeninfo;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE),&screeninfo);

    int x=screeninfo.srWindow.Right;
    int y=screeninfo.srWindow.Bottom;

    short int selectHall=1;
    short int prevSelectHall=1;
    short int isINP=-1;
    char *Hall[]={
        "  ## ##      ##     ##     ###     ##        ##            ## ##  ",
        "  ## ##      ##     ##    ## ##    ##        ##            ## ##  ",
        "#########    ##     ##   ##   ##   ##        ##          #########",
        "  ## ##      #########  ##     ##  ##        ##            ## ##  ",
        "#########    ##     ##  #########  ##        ##          #########",
        "  ## ##      ##     ##  ##     ##  ##        ##            ## ##  ",
        "  ## ##      ##     ##  ##     ##  ########  ########      ## ##  ",
    };
    short int linearLen=strlen(Hall[0]);
    char *HallNumber1[]={
        "  ##  ",
        "####  ",
        "  ##  ",
        "  ##  ",
        "  ##  ",
        "  ##  ",
        "######",
        "         "
    };
    char *HallNumber2[]={
        " ####### ",
        "##     ##",
        "       ##",
        " ####### ",
        "##       ",
        "##       ",
        "#########",
        "         "
    };
    char *HallNumber3[]={
        " ####### ",
        "##     ##",
        "       ##",
        " ####### ",
        "       ##",
        "##     ##",
        " ####### ",
        "         "
    };
    char *HallNumber4[]={
        "##       ",
        "##    ## ",
        "##    ## ",
        "##    ## ",
        "#########",
        "      ## ",
        "      ## ",
        "         "
    };
    char userInput=0;
    while(1){
        if(isINP == -1){
            for(int i=0;i<7;i++){
                moveTo(0,(x/2)-linearLen-space);
                yellow(Hall[i]);
                printf("\n");
            }
            printf("\n");
            short int lenOfHallNum=strlen(HallNumber1[6]);
            for(int m=0;m<7;m++){
                 moveTo(0,(x/2)-40-space);
                if(selectHall == 1){
                    green(HallNumber1[m]);
                    printf("\n");
                }
                else if(selectHall == 2){
                    green(HallNumber2[m]);
                    printf("\n");
                }
                else if(selectHall == 3){
                    green(HallNumber3[m]);
                    printf("\n");
                }
                else if(selectHall == 4){
                    green(HallNumber4[m]);
                    printf("\n");
                }
                else{
                    printf("out of arnge");
                }
            }
        }
        else{
            for(int main_block=0;main_block<7;main_block++){
                for(int iHall=0;iHall<7;iHall++){
                    moveTo(0,(x/2)-linearLen-space);
                    yellow(Hall[iHall]);
                    printf("\n");
                }
                printf("\n");
                for(int iAppear=0;iAppear<main_block+1;iAppear++){
                    printf("\n");
                }
                for(int iDel=main_block+1;iDel<7;iDel++){
                    moveTo(0,(x/2)-40-space);
                    if(prevSelectHall==1){
                        green(HallNumber1[iDel]);
                        printf("\n");
                    }
                    else if(prevSelectHall == 2){
                        green(HallNumber2[iDel]);
                        printf("\n");
                    }
                    else if(prevSelectHall == 3){
                        green(HallNumber3[iDel]);
                        printf("\n");
                    }
                    else if(prevSelectHall == 4){
                        green(HallNumber4[iDel]);
                        printf("\n");
                    }
                    else{
                        printf("out of range error");
                    }
                }
            Sleep(10);
            clear;
            }

            for(int iNum=0;iNum<7;iNum++){
                for(int i=0;i<7;i++){
                    moveTo(0,(x/2)-linearLen-space);
                    yellow(Hall[i]);
                    printf("\n");
                }
                printf("\n");
                for(int internal=0;internal<iNum+1;internal++){
                    moveTo(0,(x/2)-40-space);
                    if(selectHall == 1){
                        green(HallNumber1[internal]);
                        printf("\n");
                    }
                    else if(selectHall == 2){
                        green(HallNumber2[internal]);
                        printf("\n");
                    }
                    else if(selectHall == 3){
                        green(HallNumber3[internal]);
                        printf("\n");
                    }
                    else if(selectHall==4){
                        green(HallNumber4[internal]);
                        printf("\n");
                    }
                    else{
                        printf("noth")  ;
                    }
                }
                Sleep(10);
                if(iNum!=6){clear;};

            }

        }
    struct hall_seat *head;
    switch(selectHall){
        case 1:
        head = one;break;
        case 2:
        head = two;break;
        case 3:
        head = three;break;
        case 4:
        head = four;break;
    }

    moveTo(1,(x/2)-45-space);
    green("Available Seats : ");printf("%d",head->seat_left);
    PlaySound("audio/click.wav", NULL, SND_FILENAME | SND_ASYNC);
    userInput=getch();
    clear;
    if(userInput == 56){
        prevSelectHall = selectHall;
        selectHall--;
        if(selectHall<1){
            selectHall=4;
        }
        isINP=1;
    }
    else if(userInput == 50){
        prevSelectHall = selectHall;
        selectHall++;
        if(selectHall>4){
            selectHall=1;
        }
        isINP=1;
    }
    else if(userInput == 13){
        PlaySound("audio/finish.wav", NULL, SND_FILENAME | SND_ASYNC);
        if(selectHall==1){return h1;}
        else if(selectHall ==2){return h2;}
        else if(selectHall==3){return h3;}
        else if(selectHall==4){return h4;}
        else{return h1;}

    }
    else{
        isINP=-1;
    }
    }
    

    
    
};

