void Blink(char *normal_string, int timeDelay, enum colorTemplet color){
    short int string_len = strlen(normal_string);
    while(!kbhit()){
        if(color == rred){
            red(normal_string);
        }
        else if(color == ggreen){
            green(normal_string);
        }
        else if(color == bblue){
            blue(normal_string);
        }
        else if(color == yyellow){
            yellow(normal_string);
        }
        else{
            printf("%s",normal_string);
        }
        
        fflush(stdout);
        Sleep(timeDelay);
        for(int i=0;i<string_len;i++){
            printf("\b \b");           
        }
        Sleep(timeDelay);

    }
}