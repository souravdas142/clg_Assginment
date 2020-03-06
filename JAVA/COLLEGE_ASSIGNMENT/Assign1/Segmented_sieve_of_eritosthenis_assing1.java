class prime{
	int[] numbers,preprime;
	int sqare,max,min;
	boolean flag;
	prime(int minm,int maxm){
		max=maxm;min=minm;
		if(min >=0 && max >= 2){
			numbers=new int[max+1];
			sqare=((int)Math.sqrt(max));
			preprime=new int[((int)(sqare/2))+1];
			makePrePrime();
			makePrime();
			flag=true;
		}
		else
			flag=false;
	}
	void makePrePrime(){
		int rtsqr=((int)(Math.sqrt(sqare)))+1;
		for(int i=2;i<=rtsqr;i++)
		{
			if(numbers[i]==0){
				for(int j=2;i*j<=sqare;j++){
					numbers[i*j]=1;
				}
			}
		}
		int count=-1;
		for(int i=2;i<=sqare;i++){  // storing all the prime numbers upto squareroot of the max range 
			if(numbers[i]==0){
				++count;
				preprime[count]=i;
			}
		}

		for(int j=0;j<=sqare;j++)  //revert all the values to initial state
			if(numbers[j]==1)
				numbers[j]=0;
	}

	void makePrime(){
		int div,nearestComposit;
		for(int i=0;i<=((int)(sqare/2));i++){
			if(preprime[i]==0)
				break;
	//		if(i>((int)(sqare/2))+1)
	//			break;
			div=(int)(min/preprime[i]);
			nearestComposit=div*preprime[i];
			for(int j=nearestComposit;j<=max;j+=preprime[i]){
				if(j >= min && j<=max){
					numbers[j]=1;
				}
				
			}
		}
		numbers[0]=1;
		numbers[1]=1;
	}

	void print(){
		if(flag==true){
			if(min<sqare){
				for(int i=0;i<(((int)(sqare/2))+1);i++){
					if(preprime[i]==0)
						break;
					if(preprime[i]>=min)
						System.out.println(preprime[i]);
				}
			}
			for(int i=min;i<=max;i++){
				if(numbers[i]==0)
					System.out.println(i);
			}
		}
		else
			System.out.println("range is incorrect. check both min and max value are greater than or equal to 0");
	}
}
class PrimeMain{
	public static void main(String[] prim){
		prime obj=new prime(Integer.parseInt(prim[0]),Integer.parseInt(prim[1]));
		obj.print();
	}
}
