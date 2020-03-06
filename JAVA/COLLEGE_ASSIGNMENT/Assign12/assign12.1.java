
class base{
	base(){}
	final void print(){ // now the final keyword will complain if it's derive class has a same method or simply it'll not let override the methods thus you can prevent a method overriding
		System.out.println("hello Sourav's base");
	}
}

class derives extends base{
	derives(){}
	void print(){
		System.out.println("hello Sourav's derive");
	}
}

class mainOver{
	public static void main(String[] args){
		derives obj=new derives();
		obj.print();
	}
}

