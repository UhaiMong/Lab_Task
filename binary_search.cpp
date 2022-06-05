#include<stdio.h>
#include<conio.h>
#define MAX_ARRAY 50
main()
{
    int array[MAX_ARRAY],left,right,mid,search,size,i;
    printf("Enter the size of array: \n");
    scanf("%d",&size);
    printf("Enter the %d elements of array: \n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the value that you want to search: \n");
    scanf("%d",&search);
    left = 0;
    right = size-1;
    while (left<right)
    {
        mid = (left+right)/2;

        if(array[mid]==search)
        {
            printf("The item is found at %d index",mid+1);
            return mid;
        }
        else if (array[mid]<search)
        {
            left = mid + 1;
        }
        else if (array[mid]>search)
        {
            right = mid - 1;
        }
        
        else if (left==right)
        {
            printf("The item is found at %d index",mid);
        }
        else if (left>right)
        {
            printf("The entered data %d is no found in this array",search);
        }  
        
    }
    return -1;   
}