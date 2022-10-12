
#include<stdio.h>
void merge(int a[],int low,int mid,int high)
{ int i,j,k,b[50];
  i=low;
  j=mid+1;
  k=low;
  
    while(i<=mid&&j<=high)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++,k++;
        }
        else
        {
             b[k]=a[j];
            j++,k++;
        }

    }
    while(i<=mid)
    {
         b[k]=a[i];
                i++,k++;
    }
    while(j<=high)
    {
          b[k]=a[j];
            j++,k++;
        
    }
    for(int i=low;i<=high;i++)
    {
        a[i]=b[i];
    }
}
void ms(int a[],int low,int high)
{
    if(low<high)
    {
        int mid=(high+low)/2;
        ms(a,low,mid);
        ms(a,mid+1,high);
        merge(a,low,mid,high);
        
    }
}
void display(int a[],int n)
{
    for(int i=0;i<=n;i++)
    {
        printf("%d\n",a[i]);
    }
}
int main()
{
    int a[6]={11,52,42,63,54};
    int n=4;
    ms(a,0,4);
    display(a,4);
    return 0;
}
