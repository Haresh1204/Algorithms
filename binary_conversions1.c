#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main()
{
    int n,i=0,z,j;
    scanf("%d",&n);
    int *a = (int*)malloc(sizeof(int));
    
    while(n>0)
    {
        z=n%2;
        a[i]=z;
        i++;
        n/=2;
    }
    i--;
    while(i>=0)
    {
        printf("%d",a[i]);
        i--;
    }
}
Footer
© 2022 GitHub, Inc.
