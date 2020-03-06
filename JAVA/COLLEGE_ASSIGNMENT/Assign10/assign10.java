class student{
	int stdid;
	String stdob,stdName;
	double math,history,science;
	student(int id,String dob,String Name,double math,double history,double science){
		stdid=id;stdob=dob;stdName=Name;
		this.math=math;this.history=history;this.science=science;
	}
	void print(){
		System.out.println("Student id = "+stdid);
		System.out.println("Student Name = "+stdName);
		System.out.println("Student Date of birth = "+stdob);
		System.out.println("Marks obtained in math : "+math);
		System.out.println("Marks obtained in history : "+history);
		System.out.println("marks obttained in science : "+science);
	}
}

class mainStudent{
	public static void main(String[] std){
		student stdnt=new student(Integer.parseInt(std[0]),std[1],std[2],Double.parseDouble(std[3]),Double.parseDouble(std[4]),Double.parseDouble(std[5]));
		stdnt.print();
	}
}

