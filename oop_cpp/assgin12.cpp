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
			cout<<real<<" + "<<img<<"i"<<endl<<endl;
		}

		complexx operator --();
		complexx operator --(int);
};
		complexx complexx::operator --()
		{
			complexx tmp;
			real-=1,img-=1;
			tmp.real=real,tmp.img=img;
			return tmp;
		}
complexx complexx::operator --(int)
{
	complexx tmp;
	tmp.real=real-=1,tmp.img=img-=1;
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
	cout<<endl<<"Before Decrement : ";
	number.display();
	cout<<endl<<"After Prefix Decrement : ";
	--number;
	number.display();
	cout<<"After Postfix Decrement : ";
	number--;
	number.display();
	return 0;
}

