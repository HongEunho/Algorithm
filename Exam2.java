
class Top {
    public int[] solution(int[] prices) {
        int[] answer = new int[prices.length];
        
        for(int i=0;i<prices.length;i++)
        {
        	int count=0;
        	for(int j=i+1;j<prices.length;j++)
        	{
        		if(prices[i]<=prices[j])
        		{
        			count++;
        		}
        		else
        		{
        			count++;
        			break;
        		}
        	}
        	answer[i]=count;
        }
        answer[prices.length-1]=0;
        
        return answer;
    }
}

public class Exam2 {

	public static void main(String[] args) {
		int prices[]= {1,2,3,2,3};
		int price[] = new int[5];
		Top top = new Top();
		price = top.solution(prices);
		for(int i : price)
			System.out.print(i);
	}

}
