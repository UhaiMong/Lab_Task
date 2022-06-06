#include<bits/stdc++.h>
#define MAX_ARRAY 50
using namespace std;
main()
{
    int array[MAX_ARRAY],right,left,mid,size,data,search_val;
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter the data of "<<size<<" elements"<<"\n";
    for(int i = 0; i<size; i++)
    {
        cin>>array[i];
    }
    cout<<"Enter the value that you want to search: \n";
    cin>>search_val;
    left = 0;
    right = size-1;
    while (left<=right)
    {
        mid = (left+right)/2;
        if(array[mid]<search_val)
        {
            left = mid+1;
        }
        else if (array[mid]==search_val)
        {
            cout<<"The array "<<search_val<<" is founded at "<<mid+1<<" index"<<"\n";
            break;
        }
        else
        right = mid-1;
        
    }
    if(left>right)
    {
        cout<<"The array is not found!";
    }
    
}