#include <stdio.h>
#include <windows.h>

int main(){
        PlaySound("audio/click.wav", NULL, SND_FILENAME | SND_ASYNC);
        getchar();
    return 0;
}