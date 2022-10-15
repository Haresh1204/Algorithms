#include<iostream>
using namespace std;
void merge(int array[],int l,int mid,int r)
{
    int n1=mid+1-l;
    int n2=r-mid;

    int a[n1];
    int b[n2]; 
    // temporary arrays.

    for(int i=0;i<n1;i++)
    {
        a[i]=array[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        b[i]=array[mid+1+i];
    }

    int i=0;int j=0; int k=l;
    while(i<n1 and j<n2)
    {
        if(a[i]<b[j])
        {
            array[k]=a[i];
            i++;
            k++;
        }
        else
        {
            array[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<n1)
    {
        array[k]=a[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        array[k]=b[j];
        k++;
        j++;
    }
}
void mergesort(int array[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(array,l,mid);
        mergesort(array,mid+1,r);

        merge(array,l,mid,r);
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int array[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl<<endl;
    mergesort(array,0,n-1);
    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}