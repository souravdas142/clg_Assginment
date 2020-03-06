    import java.sql.*;  

    class UpdateRecord{  

    	public static void main(String args[])throws Exception{  
      
    	Class.forName("oracle.jdbc.driver.OracleDriver");  

    	Connection con=DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","Ora2","Ora2");  

    	Statement stmt=con.createStatement(); 

	int result=stmt.executeUpdate("update emp set ename='" + args[0] + "' where ename='"+args[1]+"'");   
      
    	System.out.println("\n\n Message : " + result+" records affected");  

    	con.close();  

    	}
	
    }  