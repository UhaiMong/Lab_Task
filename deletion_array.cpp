#include<stdio.h>
#include<conio.h>
#define MAX_ARRAY 50
main()
{
    int array[MAX_ARRAY],i,size,position,choice,insert_elements;
    printf("Enter the size of array: \n");
    scanf("%d",&size);
    printf("Enter the %d elements of array: \n",size);
    for (i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter 1 for insertion: \nEnter 2 for deletion: \n");
    scanf("%d",&choice);
    if(choice!=1&&choice!=2)
    {
        printf("ivalide choice\n");
        getch();
    }
    else if (choice==1)
    {
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
        return choice;
    }

    else if (choice==2)
    {
        printf("Enter the position that you want to delete: \n");
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
        return choice;
    }

    getch();
}

