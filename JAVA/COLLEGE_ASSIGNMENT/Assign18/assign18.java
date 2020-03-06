class vehicle{
	String company;
	double price;
	vehicle(String comp,double pr){
		company=comp;
		price=pr;
	}
}

class LightMotorVehicle extends vehicle{
	double mileage;
	LightMotorVehicle(String comp,double pr,double mil){
		super(comp,pr);
		mileage=mil;
	}
	void display(){
		System.out.println("Company Name = "+company);
		System.out.println("Price = "+price);
		System.out.println("mileage = "+mileage);
	}
}

	
class HeavyMotorVehicle extends vehicle{
	int capacity_in_tons;
	HeavyMotorVehicle(String comp,double pr,int cap){
		super(comp,pr);
		capacity_in_tons=cap;
	}
	void display(){
		System.out.println("Company Name = "+company);
		System.out.println("Price = "+price);
		System.out.println("Capacity in tons = "+capacity_in_tons);
	}
}


class VehicleMain{
	public static void main(String[] args){
		int s=Integer.parseInt(args[0]);
		if(s==0){
			LightMotorVehicle[] vehcl=new LightMotorVehicle[Integer.parseInt(args[1])];
		for(int i=0;i<vehcl.length;i++)
			vehcl[i]=new LightMotorVehicle("Hayabhusa",1500000.00,40);
		for(int j=0;j<vehcl.length;j++)
			vehcl[j].display();
		}
		else{
			HeavyMotorVehicle[] heavy=new HeavyMotorVehicle[Integer.parseInt(args[1])];
			for(int i=0;i<heavy.length;i++)
				heavy[i]=new HeavyMotorVehicle("Bolaro",500000.00,300);
			for(int j=0;j<heavy.length;j++)
				heavy[j].display();
		}
	}
}
