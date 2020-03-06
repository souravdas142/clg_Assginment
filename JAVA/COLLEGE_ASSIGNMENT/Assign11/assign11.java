abstract class Shape{
	double area,vol;
	final double PI=3.146;
	double calArea(){return area;}
	double calVol(){return vol;}
}

class Sphere extends Shape{
	double radius;
	Sphere(double rad){radius=rad;}
	double calArea(){
		return area=4*PI*Math.pow(radius,2.0);
	}
	double calVol(){
		return vol=(4.0/3.0)*PI*Math.pow(radius,3.0);
	}
}

class Cone extends Shape{
	double radius,height;
	Cone(double rad,double hg){
		radius=rad;height=hg;
	}
	double calArea(){
		return area=PI*Math.pow(radius,2.0)+(PI*radius*Math.sqrt(Math.pow(radius,2.0)+Math.pow(height,2.0)));
	}
	double calVol(){
		return vol=(1.0/3.0)*PI*Math.pow(radius,2.0)*height;
	}
}

class Cylinder extends Shape{
	double radius,height;
	Cylinder(double rad,double heig){
		radius=rad;height=heig;
	}
	double calArea(){
		return	area=2*PI*radius*height;
	}
	double calVol(){
		return vol=PI*Math.pow(radius,2.0)*height;
	}
}

class Box extends Shape{
	double length,bridth,height;
	Box(double length,double bridth,double height){
		this.length=length;this.bridth=bridth;this.height=height;
	}
	double calArea(){
		return area=2*(height*bridth)+2*(height*length)+2*(bridth*length);
	}
	double calVol(){
		return vol=height*bridth*length;
	}
}

class shapeArea{
	public static void main(String[] args){
		Sphere sphere=new Sphere(5.9);
		System.out.println("Area of Sphere : "+sphere.calArea());
		System.out.println("Volume of Sphere : "+sphere.calVol()+"\n");

		Cone cone=new Cone(2.3,5.9);
		System.out.println("Area of Cone : "+cone.calArea());
		System.out.println("Volume of Cone : "+cone.calVol()+"\n");

		Cylinder cylinder=new Cylinder(3.6,7.8);
		System.out.println("Area of Cylinder : "+cylinder.calArea());
		System.out.println("Volume of Cylinder : "+cylinder.calVol()+"\n");

		Box box=new Box(2.5,6.3,5.3);
		System.out.println("Area of Box : "+box.calArea());
		System.out.println("Volume of Box : "+box.calVol()+"\n");
	}

}
