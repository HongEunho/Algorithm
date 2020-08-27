import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;

class Kth {
    public int[] solution(int[] array, int[][] commands) {
        int[] answer = {};
        answer = new int[commands.length];
        ArrayList<Integer> List1 = new ArrayList<>();
        ArrayList<Integer> List2 = new ArrayList<>();
        
        for(int i=0;i<commands.length;i++)
        {
        	for(int j=commands[i][0]-1; j<=commands[i][1]-1; j++)
        	{
        		List1.add(array[j]);
        	}
        	Collections.sort(List1);
        	List2.add(List1.get(commands[i][2]-1));
        	List1.clear();
        	
        }
        
        for(int i=0; i<commands.length; i++)
        {
        	answer[i] = List2.get(i);
        }
        
        
        return answer;
    }
}

public class KthNumber {

	public static void main(String[] args) {
		Kth K = new Kth();
		int[] array= {1,5,2,6,3,7,4};
		int[][] commands = {{2,5,3},{4,4,1},{1,7,3}};
		int [] answer = new int[3];
		answer = K.solution(array, commands);
		
		for(int i=0;i<3;i++)
			System.out.println(answer[i]);	
		
	}

}
