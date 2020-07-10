import java.util.Collections;
import java.util.PriorityQueue;
import java.util.Queue;

class Ramen{
	public int solution(int stock, int[] dates, int[] supplies, int k) {
        int answer = 0;
        PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());
        int index=0;
        for(int i=0; i<k; i++)
        {
        	if(index < dates.length && i == dates[index])
        		pq.add(supplies[index++]);
        	
        	if(stock == 0)
        	{
        		stock += pq.poll();
        		answer++;
        	}
        	stock--;
        }
        
        return answer;
    }
}

public class RamenFactory {

	public static void main(String[] args) {
		int stock = 4;
		int[] dates = {4,10,15};
		int[] supplies = {20,5,10};
		int k = 30;
		
		Ramen solution = new Ramen();
		int answer = solution.solution(stock, dates, supplies, k);
		System.out.println(answer);
	}

}
