#include<iostream>
#include<string.h>
using namespace std;

class Hotel
{ 	public:
	int id;
	int staff_size;
	int room_size;
	int establish_year;
	char name[100];
	char rating_type[100];
	char website[100];
	
	void setdata()
	{
		cout<<"Enter id :";
		cin>>id;
		
		cout<<"Enter Staff size :";
		cin>>staff_size;
		
		cout<<"Enter room size :";
		cin>>room_size;
		
		cout<<"Enter establish year:";
		cin>>establish_year;
		
		cout<<"Enter Rating Type:";
		cin>>rating_type;
			
		cout<<"Enter Hotel Name :";
		cin>>name;
			
		cout<<"Enter Website :";
		cin>>website;
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
	s2.setdata();
	cout<<endl<<"---------------------------------"<<endl;

	s1.getdata();
	s2.getdata();
		
	return 0;
}
