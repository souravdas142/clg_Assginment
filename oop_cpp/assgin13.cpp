#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
class stringg
{
	char str[20];
	public:
	stringg()
	{
		cout<<"Enter Stirng : ";
		gets(str);
	}
	int operator ==(stringg tmp)
	{
		if(!strcmp(str,tmp.str))
			return 1;
		return 0;
	}
};
int main()
{
	stringg name1,name2;
	if(name1==name2)
		cout<<"String are equal"<<endl;
	else
		cout<<"String are not equal"<<endl;
	return 0;
}
