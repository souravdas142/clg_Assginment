//find all primes between 50 and 100


#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdlib>
const int SIZE=5000;
using namespace std;
int str[SIZE],count=0;
int smplesieve[SIZE];
void simplsieve(int high){
	int highbound=floor(sqrt(high));
	memset(smplesieve,0,sizeof smplesieve);
	memset(str,-1,sizeof str);
	for(int i=2;i<=floor(sqrt(highbound));i++){
		if(smplesieve[i]==0){
			for(int j=2;i*j<=highbound;j++){
					smplesieve[i*j]=1;
			}
		}
	}

	for(int i=2;i<=highbound;i++){
		if(smplesieve[i]==0)
			str[count++]=i;
	}
}

void segsieve(int low,int high){
	memset (smplesieve,0,sizeof smplesieve);
	int lowestdivPrim;
	int i=0;
	if(low<2)
		smplesieve[1]=1;
	while(1){
		if(str[i]==-1){
			break;
		}
		lowestdivPrim=(int)(low/str[i]);
		lowestdivPrim=lowestdivPrim*str[i];

		for(int j=lowestdivPrim;j<=high;j+=str[i]){
			if(j>=low && j<=high){
				if(smplesieve[j]==0)
					smplesieve[j]=1;
			}
		}
		i++;
	}

}

void print(int low,int high){
	if(low<(int)sqrt(high)){
		for(int i=0;str[i]!=-1;i++){
			cout<<str[i]<<"\t";
		}
	}
	for(int i=low;i<=high;i++){
		if(smplesieve[i]==0){
			cout<<i<<"\t";
		}
	}
}


int main()
{
	int low,high;
	cin>>low>>high;
	cout<<"Find prime in betwween "<<low<<"and "<<high<<endl;
	simplsieve(high);
	segsieve(low,high);
	print(low,high);
	cout<<endl<<endl;
	return 0;
}

