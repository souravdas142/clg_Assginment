import Maths.MathOperations;
import Stats.StatOperations;

class Numbers{

	public static void main(String[] arg){
		System.out.println("Maximum Number is : "+MathOperations.findMax(Integer.parseInt(arg[0]),Integer.parseInt(arg[1]),Integer.parseInt(arg[2])));
		System.out.println("Minimum Number is : " +MathOperations.findMin(Integer.parseInt(arg[0]),Integer.parseInt(arg[1]),Integer.parseInt(arg[2])));
		System.out.println("Average of three numbers is : "+StatOperations.Average(Integer.parseInt(arg[0]),Integer.parseInt(arg[1]),Integer.parseInt(arg[2])));
	}
}

