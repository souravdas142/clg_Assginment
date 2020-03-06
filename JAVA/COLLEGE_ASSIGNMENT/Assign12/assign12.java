class base{
	base(){}
	void print(){
		System.out.println("hello Sourav's base");
	}
}

class derives extends base{
	derives(){}
	void print(){
		super.print(); // this is automaticall call the super class methods that inharitate same at it's derived... 
						// thus you can prevent the overriding sense... in this case both method is being called
		System.out.println("hello Sourav's derive");
	}
}

class mainOver{
	public static void main(String[] args){
		derives obj=new derives();
		obj.print();
	}
}

