#include <stdio.h>

int main(void){
char animal[20];
char place[20];
char verb[20];
printf("Name an animal: \n");
scanf("%s",animal);
printf("Name a place: \n");
scanf("%s",place);
printf("Name a verb: \n");
scanf("%s",verb);
    printf("The %s walked to the %s and did %s with his friend the angry turtle.\n", animal, place, verb);
    return 0;
}