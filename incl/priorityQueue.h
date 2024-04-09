void init_q(struct priorityQueue *head){
    head->member_size_left=100;
    head->rear = -1;
    head->front = -1;
}
void printq(struct priorityQueue *head,struct hall_seat *hall_s){
    int rrear=head->rear;
    int stack[30];
    int len=-1;
    if((head->rear ==0) && (head->front == 0)){
        printf("%d",head->members[head->rear]);
        stack[++len] = head->members[head->rear];
        return;
    }
    while(rrear!=head->front){
        printf("%d ",head->members[rrear]);
        stack[++len] = head->members[rrear];
        rrear++;
        if(rrear>99){
            rrear=0;
        }
    }
    printf("%d ",head->members[head->front]);
    stack[++len] = head->members[head->front];
    printf("\n");

    for(int i=len;i>=0;i--){
        hall_s->seat[++(hall_s->seat_ptr)] = stack[i];
        hall_s->seat_left--;
    }

    //printing seat status
    printf("\nSeatStatus : ");
    for(int i=0;i<hall_s->seat_ptr+1;i++){
        printf("%d ",hall_s->seat[i]);
    }


    

}


void enqueue(struct priorityQueue *head, int data,int p){
    if(head->member_size_left == 0){
        printf("no size left");
        return;
    }

    if((head->rear==-1) && (head->front == -1)){
        head->rear=0;
        head->front=0;
    }
    else if(p==0){ // check priority here..
        head->rear--;
        if(head->rear < 0 ){
            head->rear=99;
        }
    }
    else{
        head->front++;
        if(head->front>99){
            head->front=0;
        }
    }
    if(p==0)
        head->members[head->rear] = data;
    else
        head->members[head->front]=data;
    
    head->member_size_left--;
}
