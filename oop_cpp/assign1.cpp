#include<iostream>
using namespace std;
#define SIZE 500	
int main()
{
	int numbers[SIZE],n;
	cout<<"Enter up boundary : ";
	cin>>n;
	cout<<"Enter numbers : "<<endl;
	for(int i=0;i<n;i++)
		cin>>numbers[i];
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<(n-1)-i;j++)
		{
			if(numbers[j]>numbers[j+1])
				swap(numbers[j],numbers[j+1]);
		}
	}
	cout<<"Descending orders : "<<endl;
	for(i=0;i<n;i++)
		cout<<numbers[i]<<endl;
	return 0;
}
