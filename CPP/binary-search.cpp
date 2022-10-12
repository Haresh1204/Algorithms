#include <iostream>

using namespace std;


int binary(int a[6],int l,int r,int x)
{
    int mid;
    
    while(l<=r)
    {
        mid=(l+r)/2;
        
        if(a[mid]==x)
        {
            return mid;
        }
        if(a[mid]>x)
        {
            r=mid-1;
            return binary(a,l,r,x);
        }
        if(a[mid]<x)
        {
            l=mid+1;
            return binary(a,l,r,x);
        }
    }
    return-1;
}

int main()
{
    int a[6]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    int d=binary(a,0,n-1,3);
    cout<<d;
    return 0;
    
}
