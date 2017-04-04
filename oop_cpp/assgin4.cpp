#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int up_bound=0,low_bound=0,i,j,sq=0,flag;
    cout<<"Enter lower bound : ";
    cin>>low_bound;
    if(low_bound<0)
        return 1;
    cout<<"Enter upper bound : ";
    cin>>up_bound;
    for(i=low_bound;i<=up_bound;i++)
    {
		sq=(int)sqrt(i);
		if(i==2 || i==3){
			flag=1;
		}
		else if(i%2==0)
			continue;
		else if(sq<3)
		{
			if(i%3!=0)
				flag=1;		
		}
	else
	{   
        flag=0;
        for(j=3;j<=sq;j=j+2)
        {
            if(i%j==0)
			{
				flag=0;
                break;
			}
			else flag=1;
        }
	}
        if(flag==1)
            cout<<i<<endl;
    }
    return 0;
}
