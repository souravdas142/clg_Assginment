class number implements Runnable{
	public void run(){
		for(int i=0;i<10;i++){
			try{
				Thread.sleep(400);
			}
			catch(InterruptedException e){
				System.out.println(e);
				
			}
			System.out.println(i+"Sourav");
		}
	}
}

class klass implements Runnable{
	public void run(){
		for(int i=0;i<10;i++){
			try{
				Thread.sleep(400);
			}
			catch(InterruptedException e){
				System.out.println(e);
				
			}
			System.out.println((i+2)+"Das");
		}
	}
}

class Main{
	public static void main(String[] args){
		number n1=new number();
		klass n2=new klass();
		Thread thread1=new Thread(n1);
		Thread thread2=new Thread(n2);
		thread2.start();
		thread1.start();
	}
}
