import java.lang.String;

class CompString{
	static char[] string;
	private static boolean Compare(String temp){
		string=new char[temp.length()];
		int len,length=len=(temp.length()-1);
		for(;len>=0;len--){
			string[length-len]=temp.charAt(len);
		}
		String Rev=new String(string);
		if(temp.equalsIgnoreCase(Rev))
			return true;
		return false;
	}
	public static void main(String[] string){
		if(CompString.Compare(string[0]))
			System.out.println(string[0]+" is palindrome");
		else
			System.out.println(string[0]+" is not palindrome");
	}
}



