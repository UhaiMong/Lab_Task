#include<bits/stdc++.h>
using namespace std;
#define MAX_ARRAY 50
main()
{
    int array[MAX_ARRAY],i,j,size,temp,a;
    cout<<"Enter the size of array: "<<"\n";
    cin>>size;
    cout<<"Enter the "<<size<<" elements of the array: "<<"\n";
    for(a=0; a<size; a++)
    {
        cin>>array[a];
    }
    for ( i = 0; i < size-1; i++)
    {
        for (j = 0; j < size - 1 -i; j++)
        {
            if(array[j]>array[j+1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                 array[j + 1] = temp;
            }
        }

    }
    cout<<"Sorted array is :"<<"\n";
    for (a = 0; a < size; a++)
    {
        cout<<" "<<array[a];
    }


}
