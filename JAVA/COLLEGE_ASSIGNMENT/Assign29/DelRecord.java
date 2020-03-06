    import java.sql.*;  

    class DelRecord{  

    	public static void main(String args[])throws Exception{  
      
    	Class.forName("oracle.jdbc.driver.OracleDriver");  

    	Connection con=DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","Ora2","Ora2");  

    	Statement stmt=con.createStatement();  

    	int result=stmt.executeUpdate("delete from emp where ename='"+args[0]+"'");  
      
    	System.out.println("\n\nMessage : " + result +" records affected......\n\n\n");  

    	con.close();  
    	}	
    }  