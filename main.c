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

#include "incl/declaration.h"




int main() {
    clear;
    printf("Press Enter to Start ");
    hideCursor();
    getchar();
    welcomeTheme();
    getchar();
    enum HALL userInput=SelectHallFunction(); //add number of seats available
    
    getchar();

    return 0;
}








#include "Effects/TypingEffect.h"
#include "incl/PlayAudio.h"
#include "incl/hideCursor.h"
#include "incl/moveTo.h"
#include "Effects/Blink.h"
#include "incl/welcomeTheme.h"
#include "Effects/SelectHall.h"




// int main()
// {
//     PlaySound("audio/welcome.wav", NULL, SND_ASYNC);
//     getch();
//     return 0;
//
// -lwinmm

// Playsound(NULL,NULL,SND_ASYNC); // to Stop the audio ..
// }