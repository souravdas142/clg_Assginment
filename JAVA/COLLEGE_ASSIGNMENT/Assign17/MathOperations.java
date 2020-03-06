package Maths;

public class MathOperations{
	public static int findMax(int a,int b,int c){
		int max=0;
		if(a>b){
			if(a>c){
				max=a;
			}
		}
		if(b>a){
				if(b>c){
					max=b;
				}
		}
		if(c>a){
			if(c>b){
			max=c;
			}
		}
		return max;
	}
	public static int findMin(int a,int b,int c){
		int min=0;
		if(a<b){
			if(a<c){
				min= a;
			}
		}
		if(b<a){
				if(b<c){
					min= b;
				}
		}
		if(c<a){
			if(c<b){
			min= c;
			}
		}
		return min;
	}
}
		
