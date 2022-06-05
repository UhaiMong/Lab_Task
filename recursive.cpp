#include<stdio.h>
int sequence_sum(int num){
    if(num==1)  return 1;
    else
     return sequence_sum(num-1)+num;
}
int fact(int num2)
{
    if (num2 == 1)
    return 1;
    else
     num2*(num2-1);
    
}
main()
{
    printf("The sum is: %d \n",sequence_sum(4));
    fact(5);
    printf("The factorial is : %d",fact);
}