class base{
	int roll;
	String name;
	base(int rl,String nme){
		roll=rl;name=nme;
	}
	void print(){
		System.out.println("Name = "+name+"\n roll = "+roll);
	}
}

class derive extends base{
	int age;
	derive(int rl,String name,int ag){
		super(rl,name); //super keyword initilize base class constructor
		age=ag;
	}
	void print(){
		super.print();
		System.out.println("hello "+name+" welcom in java");
		System.out.println("your age is "+age);
	}
}

class mainConst{
	public static void main(String[] args){
		derive hello=new derive(5,"Sourav",19);
		hello.print();
	}
}
