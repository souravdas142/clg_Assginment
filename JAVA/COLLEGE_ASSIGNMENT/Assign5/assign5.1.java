class numberToCheck{
	int number,length,constR=0;
	numberToCheck(int num){
		number=num;
		int reminder,temp=number,i=0;
		length=(int)(Math.log10(number))+1;
		while(temp!=0){
			reminder=temp%10;
			constR+=reminder*(int)Math.pow(10,(length-(++i)));
			temp/=10;
		}
	}
	void print(){
		System.out.println(constR);
		}
}
class Reverse{
	public static void main(String[] numbers){
		numberToCheck number=new numberToCheck(Integer.parseInt(numbers[0]));
		number.print();
		System.out.println("");
	}
}
