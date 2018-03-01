#include<stdio.h>
#include<string.h>
int main()
{
	char a[10];
	int i,j,n;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
    	n=0;
		for(j=0;a[j]!='\0';j++)
		{
			if(a[i]==a[j])
			n++; 
		}
		printf("%c - %d\n",a[i],n);
	}
return 0;
}
