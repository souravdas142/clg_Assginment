#include<iostream>
using namespace std;
class shape;						//	forward declearation for shape
class price							//	shape is incomplete type
{									//	to inform compiler that a class shape es exist later 
	float unitarea,total;			//		
	public:
		price(float prc)
		{
			unitarea=prc;
		}
		float calprice(shape);
};
class shape
{
	float height,width,area;
	public:
		shape(float hgt,float wdt)
		{
			height=hgt;
			width=wdt;
		}
		float calarea()
		{
			area=height*width;
			return area;
		}
		friend float price::calprice(shape tmp);
};

float price::calprice(shape tmp)
{
	total=tmp.area*unitarea;
	return total;
}
int main()
{
	float height,width,dam;
	cout<<"Enter height : ";
	cin>>height;
	cout<<"Enter width : ";
	cin>>width;

	shape rectangle(height,width);
	cout<<"Enter price for unit area : ";
	cin>>dam;
	price rate(dam);
	cout<<"Area = "<<rectangle.calarea()<<endl;
	cout<<endl<<"Total Price = "<<rate.calprice(rectangle)<<endl;
	return 0;
}


