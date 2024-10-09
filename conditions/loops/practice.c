#include <stdio.h>
char sibs[3][20]= {" sam", " vicky", " mandy"};
int i;
int main(){
    while(i<3){
        printf("%s", sibs[i]);
        i++;
    }
    return 0;
}