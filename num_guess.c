#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int num,guess,try=1;
    srand(time(0));
    num= rand()%100+1;

    do{
        printf("********Enter your guess (1-100)********\n");
        scanf("%d",&guess);
        if (guess>num){
            printf("make your guess lower\n*********************\n");
        }
        else if(guess<num){
            printf("make your guess bigger\n*********************\n");
        }
        else{
           printf("CONGRATULATION, You have made it!\nNumber of Turns-->%d",try); 
        }
        try++;
    }while(guess!=num);
    return 0;
}
