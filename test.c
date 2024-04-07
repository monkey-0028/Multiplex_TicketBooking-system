#include<stdio.h>
#include <windows.h>

int main(){
    char *var = "this";
    printf("%s",var);
    for(int i=0;i<4;i++){
        printf("\b \b");
        Sleep(1000);
    }
}