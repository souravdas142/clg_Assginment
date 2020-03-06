class Box{
	double width,depth,height;
	Box(){}
	Box(double width,double depth,double height){
		this.width=width;
		this.depth=depth;
		this.height=height;
	}
	double findVol(){
		return (width*height*depth);
		
	}
}

class objToBox{
	public static void main(String[] volm){
		Box objBox=new Box(Double.parseDouble(volm[0]),Double.parseDouble(volm[1]),Double.parseDouble(volm[2]));
		System.out.println("Volume of the Box is : "+objBox.findVol());
	}
}
