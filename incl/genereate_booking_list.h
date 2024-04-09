void generate_booking_list(struct hall_seat *one,struct hall_seat *two,struct hall_seat *three,struct hall_seat *four){
    clear;
    FILE *file;
    file = fopen("BOOKING_LIST","w");

    yellow("HALL 1\n");
    fprintf(file,"HALL 1\n");

    if(30 - one->seat_left >= 18){
        printf("Rear seats-->");
        fprintf(file,"Rear seats-->");

        for(int i=0;i<15;i++){
            printf("%d ",one->seat[i]);
            fprintf(file,"%d ",one->seat[i]);
        }

        printf("\nFront seats-->");
        fprintf(file,"\nFront seats-->");

        for(int i=15;i<30-one->seat_left;i++){
            printf("%d ",one->seat[i]);
            fprintf(file,"%d ",one->seat[i]);
        }
    }
    else{
        red("60 percent ticket is not sold yet ");
        fprintf(file,"60 percent ticket is not sold yet");
    }

    yellow("\n\nHALL 2\n");
    fprintf(file,"\n\nHALL 2\n");

    if(30 - two->seat_left >= 18){
        printf("Rear seats-->");
        fprintf(file,"Rear seats-->");

        for(int i=0;i<15;i++){
            printf("%d ",two->seat[i]);
            fprintf(file,"%d ",two->seat[i]);
        }

        printf("\nFront seats-->");
        fprintf(file,"\nFront seats-->");

        for(int i=15;i<30-two->seat_left;i++){
            printf("%d ",two->seat[i]);
            fprintf(file,"%d ",two->seat[i]);
        }
    }
    else{
        red("60 percent ticket is not sold yet ");
        fprintf(file,"60 percent ticket is not sold yet");
    }

    yellow("\n\nHALL 3\n");
    fprintf(file,"\n\nHALL 3\n");

    if(30 - three->seat_left >= 18){
        printf("Rear seats-->");
        fprintf(file,"Rear seat-->");
        for(int i=0;i<15;i++){
            printf("%d ",three->seat[i]);
            fprintf(file,"%d ",three->seat[i]);
        }

        printf("\nFront seats-->");
        fprintf(file,"\nFront seats");

        for(int i=15;i<30-three->seat_left;i++){
            printf("%d ",three->seat[i]);
            fprintf(file,"%d ",three->seat[i]);
        }
    }
    else{
        red("60 percent ticket is not sold yet ");
        fprintf(file,"60 percent tiket is not sold yet");
    }

    yellow("\n\nHALL 4\n");
    fprintf(file,"\n\nHALL 4\n");

    if(30 - four->seat_left >= 18){
        printf("Rear seats-->");
        fprintf(file,"Rear seats-->");
        for(int i=0;i<15;i++){
            printf("%d ",four->seat[i]);
            fprintf(file,"%d ",four->seat[i]);
        }

        printf("\nFront seats-->");
        fprintf(file,"\nFront seats-->");

        for(int i=15;i<30-four->seat_left;i++){
            printf("%d ",four->seat[i]);
            fprintf(file,"%d ",four->seat[i]);
        }
    }
    else{
        red("60 percent ticket is not sold yet ");
        fprintf(file,"60 percent ticket is not sold yet");
    }
    fclose(file);
    getchar();


}
