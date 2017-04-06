#include<iostream>
using namespace std;
class complexx
{
	int real,img;
	public:
		complexx(){real=0,img=0;}
		complexx(int a,int b){real=a,img=b;}
		complexx(complexx &);
		void display()
		{
			cout<<"Real part = "<<real<<endl
				<<"Imaginary part = "<<img<<endl
				<<"Imaginary Number = "<<real<<" + "<<img<<"i"<<endl;
		}
};
	complexx::complexx(complexx &tmp)

		{
			real=tmp.real;
			img=tmp.img;
		}

int main()
{
	complexx number1,number2;
	number1=complexx(8,5);
	number2=number1;
	cout<<"For Number 1 : "<<endl;
	number1.display();
	cout<<"For Number 1 : "<<endl;
	number2.display();
	return 0;
}
			

