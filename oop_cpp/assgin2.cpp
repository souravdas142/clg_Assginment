#include<iostream>
using namespace std;
class temperature
{
	float temp;
	public:
	temperature(){}
	temperature(float);
	float tempchng();
};

temperature::temperature(float temp){this->temp=temp;}
float temperature::tempchng()
{
	float cel;
	cel=((temp-32)*5)/9;
	return cel;
}

int main()
{
	temperature ferhen;
	float fer;
	cout<<"Enter farenhiet temperature : ";
	cin>>fer;
	ferhen=temperature(fer);
	cout<<"ferhenhiet = "<<ferhen.tempchng()<<endl;
	return 0;
}


