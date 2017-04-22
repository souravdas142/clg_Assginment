#include<iostream>
#include<fstream>
using namespace std;
class cars
{
	string model;
	double cost;
	public:
		cars()
		{
			cin>>model;
			cin>>cost;
			ofstream fort;
			fort.open("cars.txt");
			fort<<model<<endl;
			fort<<cost<<endl;
			fort.close();
		}
		void print()
		{
			ifstream fort;
			char line[100];
			fort.open("cars.txt");
			while(fort)
			{
				fort.getline(line,100);
				cout<<line<<endl;
			}
			fort.close();
		}
};
int main()
{
	cars jhigo;
	jhigo.print();
	return 0;
}


