import java.io.*;
import java.util.*;

public class ReverseFile{
	public static void main(String[] args) throws IOException{
		try{
          	String fileName = args[0];
	        File newFile=new File(fileName);
          	Scanner texts=new Scanner(newFile);
			System.out.println("\n\n\nThe Content of the file in reverse order is: \n\n");

          	while(texts.hasNextLine()){
             		String s=texts.nextLine();
             		StringBuffer buffer = new StringBuffer(s);
             		buffer=buffer.reverse();
             		String rs=buffer.toString();
					System.out.println(" "+ rs);
          	}
          	texts.close();    
        }

        catch(Exception e){
			System.out.println("File not Found...");
        }
    }
}
