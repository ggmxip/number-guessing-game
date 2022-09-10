#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number, guess, nguess=1;
    srand(time(0));
    number = rand()%100 + 1;//gets me a random number
do
{
   printf("Enter the number, should be b/w 1-100 \n");
   scanf("%d",&guess);
  if(guess>number){
  printf("\nThe number is GREATER than the required number, please enter a LOWER number \n");
}
else if(guess<number)  
  {
    printf("\nThe number is SMOL than the required number, please enter a LARGER number \n");
  }
else{
    printf("The number was guessed in %d attempts",nguess);
    }  
    nguess++;
} while (guess!=number);

return(0);
}