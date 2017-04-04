#include<iostream>
using namespace std;
int main()
{
	int hold=1,take;
	cout<<"Enter a number : ";
	cin>>take;
	for(int i=take;i>=1;i--)
		hold=hold*i;
	cout<<"factorial of "<<take<<" = "<<hold<<endl;
	return 0;
}
