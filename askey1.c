#include<stdio.h>
main()
{
	char ch[] = "red";
	int i;
	
	for(i=0;i<3;i++)
	{
		printf("%c",ch[i]-32);
	}
}
