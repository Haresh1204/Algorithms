//Repeatedly swap two adjacent elements if they are in wrong order.
// For n elements of an array, it takes (n-1) iterations to complete. So, for i^th iteration, it will be (n-i).
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in an array: ";
    cin>>n;
    int array[n];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int counter=1;
    while(counter<n-1)
    {
        for(int i=0;i<n-1;i++)
        {
            if(array[i]>array[i+1])
            {
                int temp= array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
        counter++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}
