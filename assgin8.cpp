#include<iostream>
using namespace std;
class rectangle
{
	float height,width;
	public:
		rectangle(float,float);
		~rectangle();
		float takeheight();
		float takewidth();
};
rectangle::rectangle(float hit,float wid)
{
	height=hit;
	width=wid;
}
rectangle::~rectangle()
{
	cout<<endl<<"program complete"<<endl;
}


inline float rectangle::takeheight(){	return height;}
inline float rectangle::takewidth(){	return width;}

float area(rectangle tmp)
{
	float cal;
	cal=tmp.takeheight()*tmp.takewidth();
	return cal;
}

int main()
{
	float height,width;
	cout<<"Enter height of the box : ";
	cin>>height;
	cout<<"Enter width of the box : ";
	cin>>width;

	rectangle box(height,width);
	cout<<endl<<"Area of the Box = "<<area(box)<<endl;
	return 0;
}



