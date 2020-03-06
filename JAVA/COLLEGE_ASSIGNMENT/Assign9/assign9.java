class overloadMethod{
	int integ;
	double doubl;
	String Str;
	overloadMethod(){}
	void sum(int a,int b){
		integ=a+b;
		System.out.println("Sum = "+integ);
	}
	void sum(int a,double b){
		doubl=a+b;
		System.out.println("sum = "+doubl);
	}
	void sum(int a,String s){
		Str=a+s;
		System.out.println("Sum = "+Str);
	}
	void sum(double a,String b){
		Str=a+b;
		System.out.println("Sum = "+Str);
	}
	void sum(double a,double b){
		doubl=a+b;
		System.out.println("Sum = "+doubl);
	}
	void sum(String a,String b){
		Str=a+b;
		System.out.println("Sum = "+ Str);
	}
	void sum(double a,int b){
		doubl=a+b;
		System.out.println("sum = "+doubl);
	}
	void sum(String a,int s){
		integ=(Integer.parseInt(a)+(s));
		System.out.println("Sum = "+integ);
	}
	void sum(String a,double b){
		Str=a+b;
		System.out.println("Sum = "+Str);
	}
}

class mainOverld{
	public static void main(String[] arg){
		overloadMethod obj=new overloadMethod();
		obj.sum(5,5);
		obj.sum("5",5);
		obj.sum(5.6,2);
		obj.sum(5.6,3.9);
		obj.sum("hello","Sourav");
		obj.sum(5.6,"5.9");
		obj.sum(5,"10");
		obj.sum("25",5.9);
	}
}

