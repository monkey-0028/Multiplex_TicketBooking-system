short int main_menu(){
    clear;
    int ptrToarr = 0;
    char userINP='\0';
    char *arr[]={" BOOK TICKET "," GENERATE BOOKING LIST "};
    while(1){
        if(ptrToarr == 0){
            printf("\x1b[100m1.%s\n\x1b[0m",arr[0]);
            printf("2.%s",arr[1]);
        }
        else{
            printf("1.%s\n",arr[0]);
            printf("\x1b[100m2.%s\x1b[0m",arr[1]);
        }
        click;
        userINP = getch();
        
        if(userINP == 56 || userINP == 50){
            ptrToarr = (ptrToarr+1)%2;
        }
        if(userINP==13){
            enter;
            return ptrToarr;
        }
        clear;
    }

}