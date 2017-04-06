#include<iostream>
using namespace std;
class destanse
{
	int feet,inch;
	public:
		destanse(){feet=0;inch=0;}
		destanse(int,int);
		float showDetails();
		destanse operator +(destanse);
};

destanse::destanse(int a,int b)
{
	feet=a, inch=b;
}

float destanse::showDetails()
{
	float total;
	total=feet+(float)(inch/100.0);
	return total;
}

destanse destanse::operator +(destanse ref)
{
	destanse temp;
	int tmp=0;
	temp.inch=inch+ref.inch;
	tmp=temp.inch/12;
	temp.feet=feet+ref.feet+tmp;
	tmp=temp.inch%12;
	temp.inch=tmp;
	return temp;
}

int main()
{
	destanse road1,road2,road3,road4;
	road1=destanse(2048,10);
	road2=destanse(1054,5);
	road3=destanse(5,10);
	road4=road1 + road2 + road3;
	cout<<"Total Distance = "<<road4.showDetails()<<endl;
	return 0;
}

