
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ofstream fout;
  fout.open("Hello.dat");
  fout<<"Hello this is sourav\n";
  fout<<"from Bishnupur this is very good\n";
  fout<<"end of the day\n";
  fout.close();
  const int N=100;
  char line[N];
  ifstream fin;
  fin.open("Hello.dat");
  cout<<"************* Read File**************"<<endl<<endl;
  while(fin)
  {
    fin.getline(line,N);
    cout<<line;
  }
  fin.close();
  return 0;
  
  }
