#include<stdio.h>
int sequence_sum(int num){
    if(num==1)  return 1;
    else
     return sequence_sum(num-1)+num;
}
int fact_function(int n, int fact,int i)
{
    printf("Enter an integer value to calculate factorial: \n");
    scanf("%d",&n);
    for(i = 1; i<=n; i++)
    {
        fact = fact * i;
    }

}
main()
{
    printf("The sum is: %d \n",sequence_sum(4));
    fact_function();
    printf("The factorial is : %d",fact_function(n));
}
