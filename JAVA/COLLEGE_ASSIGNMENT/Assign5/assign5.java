class numberToCheck{
	double logOfNum;
	int[] storeReverse;
	int length;
	numberToCheck(int num){
		logOfNum=num;
		length=((int)(Math.log10(logOfNum)))+1;
		storeReverse=new int[length];
		int temp=(int)logOfNum,reminder,iterate=0;
		while(temp!=0){
			reminder=temp%10;
			storeReverse[iterate]=reminder;
			temp/=10;
			iterate++;
		}
	}
	void print(){
		int i=0;
		System.out.println("Reverse of "+(int)logOfNum+" is : " );
		while(i<length){
			System.out.print(storeReverse[i]);
			i++;
		}
	}

}

class Reverse{
	public static void main(String[] numbers){
		numberToCheck number=new numberToCheck(Integer.parseInt(numbers[0]));
	number.print();
	System.out.println("");
	}
}
