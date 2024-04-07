#include <stdio.h>
#include <windows.h>
#include <mmsystem.h>
#include<string.h>
#include <conio.h>

#include "incl/ColorCode.h"

enum colorTemplet{
    rred,bblue,ggreen,yyellow,
};

#include "incl/declaration.h"






int main() {
    hideCursor();
    getchar();
    welcomeTheme();

    return 0;
}






#include "Effects/TypingEffect.h"
#include "incl/PlayAudio.h"
#include "incl/hideCursor.h"
#include "incl/moveTo.h"
#include "Effects/Blink.h"
#include "incl/welcomeTheme.h"




// int main()
// {
//     PlaySound("audio/welcome.wav", NULL, SND_ASYNC);
//     getch();
//     return 0;
//
// -lwinmm

// Playsound(NULL,NULL,SND_ASYNC); // to Stop the audio ..
// }