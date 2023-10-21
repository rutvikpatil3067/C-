#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter the number\n";
	cin>>num;
	int flag=0;
	for(int i=2;i<=num;i++)
	{
		if(num%i==0)
		{
			flag=1;
		}
	}
	if(flag==0)
	{
		cout<<num<<" "<<"is a prime number\n";
	}
	else
	{ 
	   cout<<num<<" "<<"is a not prime number\n";
	}
	
}
