import java.lang.String;

class RetUpStr{
	static String check(String str,int size){
		if(size<3)
			return str.toUpperCase();
		int findIndex=(size-3);

		String _3Up=(str.substring(0,findIndex)).concat( ((str.substring(findIndex,size)).toUpperCase()) );
		return _3Up;

//		String PreUp=str.substring(0,findIndex);
//		String PostUp=str.substring(findIndex,size);
//		String upperCase=PostUp.toUpperCase();
//		String combine = PreUp.concat(upperCase);
//		return combine;

	}

	public static void main(String[] args){
		System.out.println(RetUpStr.check(args[0],args[0].length()));
		System.out.println();
	}
}

