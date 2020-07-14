import java.util.LinkedList;
import java.util.Queue;

class TruckBridge{
	public int solution(int bridge_length, int weight, int[] truck_weights) {
        int answer = 0;
        int now_weight = 0;
        int time=1;
        
        Queue<Truck> TruckQ = new LinkedList<Truck>();
        Queue<Truck> BridgeQ = new LinkedList<Truck>();
        
        Truck[] truck = new Truck[truck_weights.length];
        
        for(int i=0; i<truck_weights.length; i++)
        {
        	truck[i] = new Truck(0,truck_weights[i]);
        	TruckQ.offer(truck[i]);
        }
        
        now_weight += truck[0].weight;
        BridgeQ.offer(TruckQ.poll());
        
        while(!BridgeQ.isEmpty())
        {
        	for(Truck truck2 : BridgeQ)
        		truck2.time++;
        	
        	if(BridgeQ.peek().time >= bridge_length)
        		now_weight -= BridgeQ.poll().weight;
        	
        	if(!TruckQ.isEmpty() && now_weight + TruckQ.peek().weight <= weight)
        	{
        		now_weight += TruckQ.peek().weight;
        		BridgeQ.offer(TruckQ.poll());
        	}
        	time++;
        }
        
       answer = time;
        
        return answer;
    }
}

class Truck{
	int time;
	int weight;
	
	public Truck(int time, int weight)
	{
		this.time=time;
		this.weight = weight;
	}
}


public class Bridge {

	public static void main(String[] args) {
		TruckBridge bri = new TruckBridge();
		int[] weights = {7,4,5,6};
		int ans = bri.solution(2, 10, weights);
		System.out.println(ans);
	}

}
