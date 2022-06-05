#include<stdio.h>
#include<conio.h>
#define MAX_ARRAY 50

int main()
{
    int array[MAX_ARRAY],i,size;
    printf("Please enter the size of array: \n");
    scanf("%d",&size);
    printf("Please enter the elements of array: \n");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    for ( i = 0; i < size; i++)
    {
        printf("[%d] = %d \n",i,array[i]);
    }
    
    
    getch();
}
