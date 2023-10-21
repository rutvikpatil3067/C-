#include<iostream>
using namespace std;
int main()
{
	int num,sum=0,rem1,anum;
	num=anum;
	cout<<"enter the number\n";
	cin>>num;
	num=anum;
	while(num!=0)
{
	rem1=num%10;
	num=num/10;
	sum=sum+rem1*rem1*rem1;
	
	}
  if (sum==anum)	
  {
  	cout<<"it is Armstrong number\n";
  }
  else 
  cout<<"it is not Armstrong number\n";
}
	
	
	

