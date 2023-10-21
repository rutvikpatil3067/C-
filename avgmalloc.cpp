#include<iostream>
using namespace std;
int main()
{
	int n,m,i,sum=0;
	float avg;
	cout<<"enter the no of subjects\n";
	cin>>m;
	cout<<"enter the no of character\n";
	cin>>n;
	int*marks_m= new int[m];
	char*s_name=new char[n+1];
	for (i=0;i<=m;i++)
	{
		cin>>marks_m[i];
		sum=sum+marks_m[i];
	}
	avg=(float)sum/m;
	cout<<"enter name of student\n";
	cin>>s_name;
	cout<<"name is  "<<s_name;
	cout<<"avg is   "<<avg;
	delete[]marks_m;
	delete[]s_name;
}


	
	//	scanf("%s",ptr);
	
	
//	for(i=0;i<n;i++)
//	{ sum=sum+ *(ptr+i);
	//printf("summation is %d\n",sum);
//	free(ptr);	
	
//	printf("string is %s\n",ptr);
//	free(ptr);
//}
