
public class NegativeNumberException extends Exception{
	NegativeNumberException(String Message){
		super(Message);
	}

}

class mainException{
	public static void main(String[] args){
		try{
			if(Integer.parseInt(args[0])<0)
				throw new NegativeNumberException("you've input a negative number");
			else
				System.out.println("Number is a postive Number");
		}
		catch(NegativeNumberException e){
			System.out.println("Err code "+400+" "+e);
		}
	}
}
