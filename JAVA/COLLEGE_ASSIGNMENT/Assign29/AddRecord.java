import java.sql.*;
  
class AddRecord{ 
 
    public static void main(String args[])throws Exception{  
      
    Class.forName("oracle.jdbc.driver.OracleDriver");  

    Connection con = DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","Ora2","Ora2"); 
 
    Statement stmt=con.createStatement();  
      
    String str ="insert into emp (ename, age) values('"+args[0] +"',"+ Integer.parseInt(args[1]) +")";

    int result= stmt.executeUpdate(str);  
      
    System.out.println(" \n " + str + "\n\n " + result+" records Inserted into the data base....");  

    con.close();  
    }
}  
