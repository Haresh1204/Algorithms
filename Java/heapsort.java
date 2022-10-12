package Sorting;

public class heapify {

   public void sort(int a[])
    {
        int n=a.length;
        for(int i=(n/2)-1;i>=0;i--)
        {
            hepify(a,n,i);
        }
        for(int i=n-1;i>=0;i--) {

            int temp=a[0];
            a[0]=a[i];
            a[i]=temp;

            hepify(a,i,0);
        }
    }





    static void hepify(int a[],int n,int i)
    {
        int larest;

        int left=(2*i)+1;
        int right=(2*i)+2;

       if(left<n && a[left]>a[i])
        {
            larest=left;
        }
       else{
            larest=i;
       }
       if(right<n && a[right]>a[larest])
        {
            larest=right;
        }
       if(larest!=i)
       {
           int temp;
           temp=a[i];
           a[i]=a[larest];
           a[larest]=temp;

           hepify(a,n,larest);
       }
    }

    static void display(int a[])
    {
        for(int i=0;i<a.length;i++)
        {
            System.out.println(a[i]);
        }
    }



    public static void main(String args[])
    {

        int a[]={10,12,5,8,6,4,3,89};
        heapify data=new heapify();
        data.sort(a);
        display(a);

    }
}
