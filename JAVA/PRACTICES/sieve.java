class prime{
	boolean[] numbers;
	int up_Bound;
	prime(int upBound){
		numbers=new boolean[upBound+1];
		numbers[0]=true;
		numbers[1]=true;
		for(int i=2;i<=Math.sqrt(upBound);i++)
			for(int j=2;i*j<=upBound;j++)
				numbers[i*j]=true;
		up_Bound=upBound;
	}
	void print(){
		for(int i=0;i<=up_Bound;i++)
			if(numbers[i]==false)
				System.out.println(i+" ");
	}
}

class mainP{

	public static void main(String[] prime){

		prime numbers=new prime(Integer.parseInt(prime[0]));
		numbers.print();
	}
}
