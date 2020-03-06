class circleArea{
	double radius,Area;
	final double PI=3.146;
	circleArea(){}
	void getData(double rad){
		radius=rad;
		Area=Math.pow(radius,2)*PI;
	}
	void calArea(){
		System.out.println(Area);
	}
}

class mainCircle{
	public static void main(String[] rad){
		circleArea circle=new circleArea();
		circle.getData(Integer.parseInt(rad[0]));
		circle.calArea();
	}
}
