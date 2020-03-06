abstract class shape{
	double length,width,area;
	shape(double len,double wid){
		length=len;width=wid;
	}
	abstract double getArea();
}

class rectangle extends shape{
	rectangle(double len,double wid){
		super(len,wid);
	}
	double getArea(){
		area=length*width;
		return area;
	}
}


class mainAbs{
	public static void main(String[] args){
		rectangle obj=new rectangle(5,6);
		System.out.println("Area is : "+obj.getArea());
	}
}
