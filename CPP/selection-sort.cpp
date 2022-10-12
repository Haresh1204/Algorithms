#include <iostream>

using namespace std;

void selection(int a[6],int n)
{
    int min;
    for(int i=0;i<n;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
            int temp;
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}

int main()
{
  
  int a[6]={3,4,5,7,9,1};
  int n=6;
  selection(a,6);
  

    return 0;
}
