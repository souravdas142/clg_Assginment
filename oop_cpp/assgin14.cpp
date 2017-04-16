#include<iostream>
using namespace std;
class student
{
	int entyNo;
	char name[21];
	public:
	student()
	{
		while(1)
		{
			cout<<"Enter Entry no.('1' for Science '2' for Arts) : ";
			cin>>entyNo;
			if(entyNo==1 || entyNo==2)
				break;
			else
				cout<<"wrong input"<<endl;
		}
		cout<<endl<<"ENter your Name : ";
		cin>>name;
		cout<<endl;
	}
	void printS()
	{
		cout<<endl<<"Entry No. "<<entyNo<<endl
			<<"Name = "<<name;
	}
};
class science:private student
{
	float Physics,chemestry,mathematics;
	public:
	science()
	{
		cout<<"Enter marks for Physics :";
		cin>>Physics;
		cout<<"Enter marks for chemestry :";
		cin>>chemestry;
		cout<<"Enter marks for Mathematics :";
		cin>>mathematics;
	}
	void print()
	{
		printS();
		cout<<endl<<"Mathematics : "<<mathematics
			<<endl<<"Physics : "<<Physics
			<<endl<<"Chemistry : "<<chemestry<<endl;
	}
};
class Arts:private student
{
	float English,History,Economics;
	public:
		Arts()
		{

			cout<<"Enter marks for English :";
			cin>>English;
			cout<<"Enter marks for History :";
			cin>>History;
			cout<<"Enter marks for Economics :";
			cin>>Economics;
		}
	void print()
	{
		printS();
		cout<<endl<<"English : "<<English
			<<endl<<"History : "<<History
			<<endl<<"Economics : "<<Economics<<endl;
	}
};
int main()
{
	science sourav,suraj,sayak;
	Arts sky,sam;
	cout<<endl<<"****************** Science ******************"<<endl
		<<endl;
	sourav.print();
	suraj.print();
	sayak.print();
	cout<<endl<<"****************** Arts ******************"<<endl
		<<endl;
	sky.print();
	sam.print();

	return 0;
}
