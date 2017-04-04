#include<iostream>
using namespace std;
#define PI 3.142
class shape
{
	float height,width,radious,calculate;
	public:
	float area(float);
	float area(float,float);
};
float shape::area(float height,float width)
{
	this->height=height;
	this->width=width;
	calculate=0.5*(this->height)*(this->width);
	return calculate;
}
float shape::area(float radious)
{
	this->radious=radious;
	calculate=PI*(this->radious)*(this->radious);
	return calculate;
}

int main()
{
	shape triangle,circle;
	float height,width,radious;
	cout<<"Enter height : ";
	cin>>height;
	cout<<"Enter width : ";
	cin>>width;
	cout<<"Area of triangle = "<<triangle.area(height,width)<<endl;
	cout<<"Enter radious of circle : ";
	cin>>radious;
	cout<<"Adrea of Circle = "<<circle.area(radious)<<endl;
	return 0;
}
