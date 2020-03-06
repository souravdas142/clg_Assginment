    import java.sql.*;
  
    class SelectRecord{ 
 
    	public static void main(String args[]){  
    	try{  
  
    	Class.forName("oracle.jdbc.driver.OracleDriver");  

    	Connection con=DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","Ora2","Ora2");  
      

    	Statement stmt=con.createStatement(); 
    
    	System.out.println("_________________________________\n EName     Age");  
    	System.out.println("_________________________________");  

	String str = "select * from emp ";
	        
    
    	ResultSet rs = stmt.executeQuery(str);  

    	while(rs.next())  
    		System.out.println(rs.getString(1)+"  "+rs.getInt(2));  
      
    	con.close();  
      
    	}catch(Exception e){ 
		System.out.println(e);
	}  
      
    }  
   }  