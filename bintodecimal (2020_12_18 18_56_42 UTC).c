#include <stdio.h>
#include <conio.h>
#include<math.h>

int main()
{
long int a,b,x=0,i,n;   
int d;
float e; 
printf("enter binary number\n");
scanf("%ld",&n);

for (i=0;n!=0;++i)
{
    a=n%10;
    x=a+(pow(2,i))+x;
    n=n/10;
}
printf("%ld",x);
    return 0;
}