#include<stdio.h>
#include<conio.h>
#define MAX_ARRAY 50
int main(){
    int array[MAX_ARRAY],i,size,search_value;
    int found = 0;
    printf("Enter the size of array: \n");
    scanf("%d",&size);
    printf("Enter the %d items of array: \n",size);
    for (i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the value that you wanted to search: \n");
    scanf("%d",&search_value);
    for (i = 0; i < size; i++)
    {
        if (array[i]==search_value&&i<size)
        {
            found = 1;
            break;
        }
        if(i<size)
        {
            printf("The array is found at %d index",i);
        }
        else
        printf("The array is not found at array: ");  
    }
    
    
    getch();
}
