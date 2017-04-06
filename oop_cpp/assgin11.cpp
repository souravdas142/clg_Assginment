#include<iostream>
using namespace std;
class complexx
{
	int real,img;
	public:
		complexx(){real=0,img=0;}
		complexx(int a,int b)
		{
			real=a,img=b;
		}
		void display()
		{
			cout<<endl<<real<<" + "<<img<<"i"<<endl;
		}

		complexx operator --();
};
		complexx complexx::operator --()
		{
			complexx tmp;
			real-=1,img-=1;
			tmp.real=real,tmp.img=img;
			return tmp;
		}
int main()
{
	complexx number;
	int a,b;
	cout<<"Enter a number for a : ";
	cin>>a;
	cout<<"Enter a number for b : ";
	cin>>b;
	number=complexx(a,b);
	cout<<endl<<"Before Decrement : "<<endl;
	number.display();
	cout<<endl<<"After Decrement : "<<endl;
	--number;
	number.display();
	return 0;
}

