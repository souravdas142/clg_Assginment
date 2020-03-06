class numbers{
	int num1,num2;
	numbers(int a,int b){
		num1=a;num2=b;
		if(num1>num2)
			System.out.println(num1+" is greater than "+num2);
		else
			System.out.println(num2+" is greater than "+num1);
	}
}

class mainCheck{
	public static void main(String[] Sourav) {
		numbers obj=new numbers(Integer.parseInt(Sourav[0]),Integer.parseInt(Sourav[1]));
	}
}
