#include <stdio.h>
#include <time.h>

int hour; 

int main()
{
   time_t now;
   struct tm*now_tm;

   time(NULL);
   now_tm = localtime (&now);
   hour +
   printf("Current local time and date: %s", asctime(timeinfo));
   printf("Tell me the hour in military time:\n");
   scanf("%d", &hour);
   if(hour < 12){
    printf("Good Morning! Early bird gets the worm :)\n");
   }else if (hour < 18){
    printf("Good Afternoon!\n");
   }else{
    printf("Good Evening!\n");
   }
    return 0;
}