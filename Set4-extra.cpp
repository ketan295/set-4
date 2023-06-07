#include<iostream>
#include<string.h>
using namespace std;

class Student
{ 	public:
	int id;
	int standard;
	int contact;
	char name[100];
	char address[100];
	
	void setdata()
	{
		cout<<"Enter id :";
		cin>>id;
		
		cout<<"Enter Standard :";
		cin>>standard;
		
		cout<<"Enter Name :";
		cin>>name;
		
		cout<<"Enter Address:";
		cin>>address;
		
		cout<<"Enter Contact :";
		cin>>contact;
		
	}
	
	void getdata()
	{
	
		cout<<"id ="<<id<<endl;
		cout<<"Name="<<name<<endl;
		cout<<"standard ="<<standard<<endl;
		cout<<"Address ="<<address<<endl;
		cout<<"Contact ="<<contact<<endl;
	} 
		
}; 

int main()
{
	Student s1 ,s2;
	
	s1.setdata();
	//s2.setdata();
	cout<<endl<<"---------------------------------"<<endl;

	s1.getdata();
	//s2.getdata();
		
	return 0;
}
