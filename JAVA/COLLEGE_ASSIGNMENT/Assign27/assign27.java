import java.applet.*;  
import java.awt.*;  
  
class UseParameter extends Applet{  
  
	public void paint(Graphics g){  
		String str=getParameter("msg");  
		g.drawString(str,50, 50);  
	}	  
  
}  
