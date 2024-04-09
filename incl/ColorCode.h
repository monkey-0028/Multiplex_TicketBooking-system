#define green(string) printf("\x1b[32m%s\x1b[0m",string)
#define red(string) printf("\x1b[31m%s\x1b[0m",string)
#define yellow(string) printf("\x1b[33m%s\x1b[0m",string)
#define blue(string) printf("\x1b[34m%s\x1b[0m",string)
#define clear system("cls")
#define space 75

#define click PlaySound("audio/click.wav", NULL, SND_FILENAME | SND_ASYNC);
#define enter PlaySound("audio/finish.wav", NULL, SND_FILENAME | SND_ASYNC);

