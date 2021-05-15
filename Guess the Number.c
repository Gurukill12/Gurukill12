#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{

int I,n,g=1;
srand(time(0));
I=rand()%100+1;
printf("%d",I);
do{
printf("Guess the number from 1 to 100\n");
scanf("%d",&n);

if(n<I){
printf("Higher number please\n");
}
else if(n>I){
printf("Lower number please\n");
}
else{
printf("You guessed it in %d attempts",g);
}
g++;
}while(n!=I);
   return 0;
}