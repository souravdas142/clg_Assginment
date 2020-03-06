import java.lang.String;

class numberToCheck{
	int number,length,constR=0;
	boolean Preflag=false,Postflag=false;
	String PreStr,PostStr;

	//method
	numberToCheck(int num,int len){
		number=num;
		int reminder,temp=number,i=0;
		if(number<=0)
			length=1;
		else
			length=(int)(Math.log10(number))+1;
		char[] pre,post;
		pre=new char[len+1];
		post=new char[len+1];
		int diff=len-length;
		while(diff>0){
			if(Preflag==false)
				Preflag=true;
			pre[i]='0';
			diff--;
			i++;
		}
		i=0;
		int ii=0;
		while(temp!=0){
			reminder=temp%10;
			if(reminder==0 && Postflag==false){
				post[ii]='0';
				ii++;
			}
			if(reminder>0)
				Postflag=true;
			constR+=reminder*(int)Math.pow(10,(length-(++i)));
			temp/=10;
		}

		PostStr=new String(pre);
		PreStr=new String(post);
	}
	void print(){
		if(Preflag==true && Postflag==true)
			System.out.println(PreStr+constR+PostStr);
		else if(Preflag==true)
			System.out.println(constR+PostStr);
		else if(Postflag==true)
			System.out.println(PreStr+constR);
		//if(Preflag==false && Postflag==false)
		else
			System.out.println(constR);
		}
}
class Reverse{
	public static void main(String[] numbers){
		numberToCheck number=new numberToCheck(Integer.parseInt(numbers[0]),numbers[0].length());
		number.print();
		System.out.println("");
	}
}
