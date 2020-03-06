class CricketPlayer{
	String name;
	int no_of_innings,no_times_notout,total_runs;
	double bat_avg;
	CricketPlayer(String nm,int inn,int ntot,int rns){
		name=nm;no_of_innings=inn;no_times_notout=ntot;total_runs=rns;
	}
	static double bat_avge(CricketPlayer temp){
		double bat=temp.total_runs/temp.no_of_innings;
		return bat;
	}
	static void sort_Player(CricketPlayer[] players,int len){
		int length=len;
		CricketPlayer temp;
		int j;
		for(int i=1;i<length;i++){
			temp=players[i];
			for(j=i;j>0;j--){
				if(players[j-1].bat_avg>temp.bat_avg){
					players[j]=players[j-1];
				}
				else
					break;
			}
			players[j]=temp;
		}

		for(int i=0;i<length;i++){
			System.out.println("Name = "+players[i].name);
			System.out.println("Number of innings : "+players[i].no_of_innings);
			System.out.println("Number of Times Not Out : "+players[i].no_times_notout);
			System.out.println("Total Runs = "+players[i].total_runs);
			System.out.println("Batting Average = "+players[i].bat_avg+"\n");
		}	
	
	}
}
class Cricket{
	public static void main(String[] str){
		CricketPlayer[] players=new CricketPlayer[4];
		int length=players.length;
		players[0]=new CricketPlayer("Sourav",3,2,50);
		players[1]=new CricketPlayer("Abhijit",5,3,120);
		players[2]=new CricketPlayer("Mangla",6,4,280);
		players[3]=new CricketPlayer("kaka",4,2,80);

		
		for(int i=0;i<4;i++){
			players[i].bat_avg=CricketPlayer.bat_avge(players[i]);
		}
		CricketPlayer.sort_Player(players,length);
	}
}
