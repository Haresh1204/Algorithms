//don't run
#include<stdlib.h>
#include<stdio.h>

int main(int argc, char *argv[])
{
	int i;
	i = atoi(argv[1]);
	printf("bye\n");
	sleep((i-1)*60);
//	printf("world");
	
    system("shutdown /s");
    
    return 0;
}