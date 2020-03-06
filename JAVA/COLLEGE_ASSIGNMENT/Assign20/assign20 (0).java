import java.lang.String;
import java.util.Arrays;

	class GenSubStr{
		
		public static void main(String[] str){

			char[] VOWEL={'A','a','E','e','I','i','O','o','U','u'};
			int i,j;
			int[] Index=new int[str[0].length()];
			int k=-1;
			for(i=0;i<str[0].length();i++){
				for(j=0;j<10;j++){
					if(str[0].charAt(i)==VOWEL[j]){
						k++;
						Index[k]=i;
						break;
					}
				}
			}
//			Index[k+1]=Index[k];
//			Index[k+2]=Index[k];
//			System.out.println("value of "+Index[0]);
			for(int m=0;m<=k;m++){
				System.out.println(Index[m]);
			}
			Arrays.sort(Index);  // Sort array

			for(i=0;i<=k;i++){
				System.out.println(str[0].substring(Index[i],Index[i+2]));
				i++;
			}
		}

	}





