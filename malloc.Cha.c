#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;

	char*ptr;
	printf("Enter the no of character \n");
	scanf("%d",&n);
	ptr= (int*)malloc(n*sizeof (char)+1);
	printf("accept the characters\n");
//	for(i=0;i<n;i++)
	
		scanf("%s",ptr);
	
	
//	for(i=0;i<n;i++)
//	{ sum=sum+ *(ptr+i);
	//printf("summation is %d\n",sum);
//	free(ptr);	
	
	printf("string is %s\n",ptr);
	free(ptr);
	}
