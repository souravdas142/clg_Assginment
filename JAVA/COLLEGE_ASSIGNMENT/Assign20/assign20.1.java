import java.lang.String;

	class GenSubStr{
		
		public static void main(String[] str){

			char[] VOWEL={'A','a','E','e','I','i','O','o','U','u'}; //we know the vowel so store it in an array
			int i,j;
			int[] Index=new int[str[0].length()+1]; // making an extra slot if there is all vowel in string

			int k=-1;		// initially for seek of simplicity we have assign the value of 'k' is -1

			for(i=0;i<str[0].length();i++){	//this loop scan the whole string and find the existacy of a vowel
				for(j=0;j<10;j++){				// if vowel exist,then store (the index of that vowel in string) in another array call Index
					if(str[0].charAt(i)==VOWEL[j]){
						k++;
						Index[k]=i;
						break;
					}
				}
			}

			if(k<0)k=0; // handle if k=-1 (throwing IndexOutOfBound exception);

			int length=k; // storing the actual length of the Index array(thats mean how much vowel has been found + length of string)

			for(i=0;i<=length;i++){  //Print the substring in which contain only one vowel that is starting of the substring

				System.out.print(str[0].charAt(Index[i]));
			}
			System.out.println();

	// the following statements are commented out because if you want to manually print the substring without using the standard method provided by String Class
	
//
//			for(i=0;i<length;i++){
//				for(j=Index[i];j<(Index[i+1]);j++){
//					System.out.print(str[0].charAt(j));
//				}
//				System.out.println("");
//			}
		
		}

	}





