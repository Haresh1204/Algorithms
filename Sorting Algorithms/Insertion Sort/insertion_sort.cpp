//Insert an element from unsorted array to its correct position in the sorted array.
#include<iostream>
using namespace std;
int main()
{
    int n;
    // cout<<"Enter the number of elements of array: ";
    cin>>n;
    int array[n];
    // cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int count=0;
    for(int i=1;i<n;i++)
    {
        // count=0;
        int j=i-1;
        int current=array[i];
        while(array[j]>current && j>=0)
        {
            array[j+1]=array[j];
            j--;
            count++;
        }
       array[j+1]=current;
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<array[i]<<" ";
    // }
    cout<<count;
        return 0;
}