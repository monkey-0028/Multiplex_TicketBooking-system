void GenerateBill(int noramalTicket,int seniorTicket,char *name){
    FILE *file;
    file = fopen(name,"w");
    fprintf(file,"#################\n");
    fprintf(file,"# SOORAJ CINEMA #\n");
    fprintf(file,"#################\n");
    fprintf(file,"\n");
    fprintf(file,"address : kalyani\n");
    fprintf(file,"\n\n");
    fprintf(file,"Name : %s\n",name);
    fprintf(file,"normal ticket - x%d = %d\n\n",noramalTicket,noramalTicket*250);
    fprintf(file,"senior ticket -x%d = %d\n\n",seniorTicket,seniorTicket*250);
    fprintf(file,"Net Amount : %d\n",(noramalTicket*250) + (seniorTicket*250));
    fprintf(file,"\n\n");
    fprintf(file,"Please Pay The Bill At Counter ..\n");
    
    printf("Your Bill has generated Mr.%s ..\n\nPress enter to return to the main_screen",name);
    getchar();
    fclose(file);
}