#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream dyn;
	char file[30];
	cout<<"ENter file name : ";
	cin>>file;
	dyn.open(file);
	char c;
	cout<<"ENter texts : "<<endl;
	while(cin>>c)
	{
		dyn<<c;
	}
	dyn.close();
	return 0;

}
