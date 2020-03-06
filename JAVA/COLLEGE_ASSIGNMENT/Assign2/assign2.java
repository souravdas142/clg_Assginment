class numbers{
	int[] num;
	int odd,even;
	numbers(){}
	numbers(int a){
		num=new int[a+1];
		for(int i=0;i<=a;i++){
			num[i]=i*i;
		}
		odd=0;even=0;
		for(int k=0;k<=a;k++){
			if(num[k]%2==0)
				even=even+num[k];
			else
				odd=odd+num[k];
		}
	}
	void print(){
		System.out.println("Sum of even number : "+even);
		System.out.println("Sum of odd number : "+odd);
	}
}

class EvenOddSum{
	public static void main(String[] Sourav){
		numbers obj=new numbers();
		obj=new numbers(Integer.parseInt(Sourav[0]));
		obj.print();
	}
}
