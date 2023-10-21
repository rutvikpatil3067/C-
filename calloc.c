#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,sum=0;
	int*ptr;
	printf("Enter the no of element \n");
	scanf("%d",&n);
	ptr= (int*)calloc(n,sizeof (int));
	printf("accept the element");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	
	}
	for(i=0;i<n;i++)
	{ sum=sum+ *(ptr+i);
	//printf("summation is %d\n",sum);
//	free(ptr);	
	}
	printf("summation is %d\n",sum);
	free(ptr);
	}
