#include<iostream>
using namespace std;
class publication
{
	string title;
	float price;
	public:
		void get()
		{
			cout<<"Enter title for publication : ";
			cin>>title;
			cout<<"Enter price for publishers : ";
			cin>>price;
		}
		void pub()
		{
			cout<<endl<<"Title = "<<title
				<<endl<<"Price = "<<price;
		}
};

class books:private publication
{
	int count;
	public:
	void get_data()
	{
		get();
		cout<<"ENter how many pages have in book : ";
		cin>>count;
	}
	void put_data()
	{
		pub();
		cout<<endl<<"pages : "<<count<<endl;
	}
};

class tape:private publication
{
	float time;
	public:
	void get_data()
	{
		get();
		cout<<"Enter times : ";
		cin>>time;
	}
	void put_data()
	{
		pub();
		cout<<endl<<"Time = "<<time<<endl;
	}
};

int main()
{
	books thriller;
	cout<<endl<<endl<<"********* For Books *************"<<endl<<endl;
	thriller.get_data();
	thriller.put_data();
	cout<<endl<<endl<<"********* For Tapes *************"<<endl<<endl;
	tape music;
	music.get_data();
	music.put_data();
	return 0;
}


	
