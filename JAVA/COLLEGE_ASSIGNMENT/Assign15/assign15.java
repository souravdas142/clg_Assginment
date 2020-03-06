class AgeNotWithinRangeException extends Exception{
	AgeNotWithinRangeException(String e){
		super(e);
	}
}
class NameNotValidException extends Exception{
	NameNotValidException(String e){
		super(e);
	}
}


class Student extends Thread{
	byte rollno,age;
	String name,course;
	Student(byte rollno,byte age,String Name,String Course){
		this.rollno=rollno;
		this.age=age;
		name=Name;course=Course;
	}

	public void checkNumber(){
		try{

			if(age>=15 && age<=21){
				System.out.println("Age is ok");
			}
			else
				throw new AgeNotWithinRangeException("Age must be between 15 and 16");
		}
			catch(AgeNotWithinRangeException e){
				System.out.println(e);
		}
	}

	public void checkString(){
		char c;
		boolean flag=false;
		try{

			for(int i=0;i<name.length();i++){
				c=name.charAt(i);
				if(c>=65 && c<=91 || c>=97 && c<=123){

					if(i==name.length()-1)	
						System.out.println("Name is valid");
				}
				else
					throw new NameNotValidException("Name not valid");
			}
		}
		catch(NameNotValidException e){
			System.out.println(e);
		}

	}

	public void run(){
		checkNumber();
		checkString();
	}

}

class Main{
	public static void main(String[] args){
		Student kgei=new Student(Byte.parseByte(args[0]),Byte.parseByte(args[1]),args[2],args[3]);
		kgei.setName("Student Process");
		System.out.println("Thread Name : "+kgei.getName());
		kgei.start();
		Thread m=kgei;
		System.out.println(m); 
	}
}
