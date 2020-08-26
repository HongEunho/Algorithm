import java.util.ArrayList;

class Gym {
    public int solution(int n, int[] lost, int[] reserve) {
    	int answer = n-lost.length;
        
        ArrayList<Integer> llist = new ArrayList<Integer>();
        ArrayList<Integer> rlist = new ArrayList<Integer>();
        
        
        for(int i=0;i<lost.length;i++)
        	llist.add(lost[i]);
        for(int i=0;i<reserve.length;i++)
        	rlist.add(reserve[i]);
        
        
        for(int i=0; i<llist.size();i++)
        	for(int j=0; j<rlist.size();j++)
        	{
        		if(llist.get(i) == rlist.get(j))
        		{
                    answer++;
        			llist.remove(i);
        			rlist.remove(j);
        			i--;
        			break;
        		}
        	}
        
        for(int i=0; i<llist.size();i++)
        	for(int j=0; j<rlist.size();j++)
        	{
        		if(llist.get(i) == rlist.get(j)-1 || llist.get(i) == rlist.get(j)+1)
        		{
                    answer++;
        			rlist.remove(j);
        			break;
        		}
        	}
        	
        answer = list.size();
        return answer;
    }
}

public class GymClothes {

	public static void main(String[] args) {
		int n=5;
		int[] lost = {1,2};
		int[] reserve = {2,3};
		Gym gym = new Gym();
		System.out.println(gym.solution(n, lost, reserve));
	}

}
