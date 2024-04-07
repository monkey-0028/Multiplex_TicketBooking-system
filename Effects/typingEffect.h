void typingEffect(char *normalstring,int timedelay,enum colorTemplet color){
    char ch[2] = "a";
    for(int i=0;i<strlen(normalstring);i++){
        ch[0]=normalstring[i];
        if(color ==  rred){
            red(ch);
        }
        else if(color == ggreen){
            green(ch);
        }
        else if(color == yyellow){
            yellow(ch);
        }
        else if(color == bblue){
            blue(ch);
        }
        else{
            printf("%s",ch);
        }
        fflush(stdout);
        Sleep(timedelay);
    }
}
