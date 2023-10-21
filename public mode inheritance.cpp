#include<iostream>
using namespace std;
class student
{
	int c;
	public:
	int a;
	protected:
		int b;
	public:
		void display()
		{
		cout<<" in display of A\n";
	}	
		};
class employee:public student
	{
		public:
			void show()
			{
				cout<<a;
				cout<<b;
				
			}
	};
class atharva:public employee
{
	public:
		void show()
		{
			cout<<a;
			cout<<b;
		}
	};	
	
	int main()
	{
	 employee e1;
	 e1.show();
	 atharva a1;
	// student s1;
    a1.show();
     e1.display();
	}

