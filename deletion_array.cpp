#include<stdio.h>
#include<conio.h>
#define MAX_ARRAY 50
main()
{
    int array[MAX_ARRAY],i,size,position;
    printf("Enter the size of array: \n");
    scanf("%d",&size);
    printf("Enter the %d elements of array: \n",size);
    for (i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the position that you wnat to delete: \n");
    scanf("%d",&position);

    if (position<=0||position>size)
    {
        printf("Invalid position");
    }
    else
    {
        for (i = position-1; i < size-1; i++)
        {
            array[i]=array[i+1];
        }
        size--;
          
    }
         for (i = 0; i < size; i++)
        {
            printf("[%d] = %d\n",i,array[i]);
        }
     
    getch();
}
