#include<iostream>
using namespace std;
void binary(int);
void hex(int);
void octal(int);
int main()
{
	int decimal;
	cout<<"Enter a decimal number : ";
	cin>>decimal;
	cout<<endl<<"Equivalant Binary code : ";
	binary(decimal);
	cout<<endl<<"Equivalant Hexadecimal code : ";
	hex(decimal);
	cout<<endl<<"Equivalant Octal code : ";
	octal(decimal);
	return 0;
}


void binary(int decimal)
{
	int i=0,binary[100],remind;
	while(decimal!=0)
	{
		remind=decimal%2;
		decimal=decimal/2;
		binary[i]=remind;
		i++;
	}
	for(int k=i-1;k>=0;k--)
		cout<<binary[k]<<"   ";
	cout<<endl<<endl;
}

void hex(int decimal)
{
	int i=0,reminder;
	char hex[100];
	while(decimal!=0)
	{
		reminder=decimal%16;
		decimal=decimal/16;
		switch(reminder)
		{
		case 15:
			hex[i]='F';
			break;
		case 14:

			hex[i]='E';

			break;
		case 13:
			hex[i]='D';
			break;
		case 12:
			hex[i]='C';
			break;
		case 11:
			hex[i]='B';
			break;
		case 10:
			hex[i]='A';
	default:
		hex[i]=48+reminder;
		break;
	}
//	if(reminder==15)
//		hex[i]='F';
//	else if(reminder==14)
//		hex[i]='E';
//	else if(reminder==13)
//		hex[i]='D';
//	else if(reminder==12)
//		hex[i]='C';
//	else if(reminder==11)
//		hex[i]='B';
//	else if(reminder==10)
//		hex[i]='A';
//	else 
//		hex[i]=48+reminder;
	i++;
	}
	for(int k=i-1;k>=0;k--)
		cout<<hex[k]<<"  ";
	cout<<endl<<endl;
}



void octal(int decimal)
{
	int i=0,octal[100],remind;
	while(decimal!=0)
	{
		remind=decimal%8;
		decimal=decimal/8;
		octal[i]=remind;
		i++;
	}
	for(int k=i-1;k>=0;k--)
		cout<<octal[k]<<"   ";
	cout<<endl<<endl;
}
