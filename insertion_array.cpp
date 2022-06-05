#include<stdio.h>
#include<conio.h>
#define MAX_ARRAY 50
int main()
{
    int array[MAX_ARRAY],i,size,position,insert_elements;
    printf("Enter the size of array: \n");
    scanf("%d",&size);
    printf("Enter the %d elements of array: \n",size);
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("where you want to insert: \n");
    scanf("%d",&position);
    printf("Enter the insert element: \n");
    scanf("%d",&insert_elements);
    for ( i = size-1; i >= position-1; i--)
    {
        array[i+1] = array[i];
    }
    array[position-1] = insert_elements;
    size++;
    for ( i = 0; i < size; i++)
    {
        printf("[%d] = %d\n",i,array[i]);
    }
    
   getch();
}
