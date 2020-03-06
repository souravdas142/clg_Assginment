class Employee{
	private int id;
	String name,department;
	double salary;
	Employee(){}
	void accept(int idd,String nam,String depar,double sal){
		name=nam;id=idd;name=nam;department=depar;salary=sal;
	}
	void display(){
		System.out.println("id = "+id);
	}
}

class Manager extends Employee{
	private double bonus;
	Manager(){}
	void accept(int idd,String nam,String depar,double sal,double bon){
		bonus=bon;
		super.accept(idd,nam,depar,sal);
	}
	void display(){
		System.out.println("Name = "+name);
		System.out.println("Department name = "+department);
		System.out.println("Salary = "+salary);
		System.out.println("Total Salry is :"+(salary+bonus));
	}
}

class EmployeeMan{
	public static void main(String[] emp){
		Manager employ=new Manager();
		employ.accept(Integer.parseInt(emp[0]),emp[1],emp[2],Double.parseDouble(emp[3]),Double.parseDouble(emp[4]));
		employ.display();
	}
}
