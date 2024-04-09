void PlayAudio(const char *filename);
void typingEffect(char *normalstring,int timedelay,enum colorTemplet color);
void hideCursor();
void moveTo(int y, int x);
void Blink(char *normal_string, int timeDelay, enum colorTemplet color);
void welcomeTheme();
enum HALL SelectHallFunction(struct hall_seat *one,struct hall_seat *two, struct hall_seat *three, struct hall_seat *four);
void init_q(struct priorityQueue *head);

void enqueue(struct priorityQueue *head, int data,int p);
void printq(struct priorityQueue *head,struct hall_seat *hall_s);
void GenerateBill(int noramalTicket,int seniorTicket,char *name);
short int main_menu();
void generate_booking_list(struct hall_seat *one,struct hall_seat *two,struct hall_seat *three,struct hall_seat *four);

