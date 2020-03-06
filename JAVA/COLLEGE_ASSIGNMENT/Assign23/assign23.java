class InvalidCharacterInputException extends Exception{
	InvalidCharacterInputException(String err){
		super(err);
	}
}
    
class MoreThanOneLengthStringException extends Exception{
	MoreThanOneLengthStringException(String err){
		super(err);
	}
}


class DisplayColor{
	public static void main(String[] args){
		try{
			if(args.length>1 || args[0].length()>1)
				throw new MoreThanOneLengthStringException("Arguments must be one and length of the string must be one");

			char c=args[0].charAt(0);
			if(c>=65 && c<=90 || c>=97 && c<=122){
				switch (c){
				case 'v':
				case 'V':
					System.out.println("Violet");
					break;
				case 'i':
				case 'I':
					System.out.println("Indigo");
					break;
				case 'b':
				case 'B':
					System.out.println("Blue");
					break;
				case 'g':
				case 'G':
					System.out.println("Green");
					break;
				case 'y':
				case 'Y':
					System.out.println("Yellow");
					break;
				case 'o':
				case 'O':
					System.out.println("Orange");
					break;
				case 'r':
				case 'R':
					System.out.println("Red");
					break;
				default:
					throw new InvalidCharacterInputException("Please input a VIBGYOR Character");
				}
			}
			else
				throw new InvalidCharacterInputException("Please Input an Alphabet Character");
		}
		catch(InvalidCharacterInputException e){
			System.out.println(e);
		}
		catch(MoreThanOneLengthStringException e){
			System.out.println(e);
		}
	}
}



