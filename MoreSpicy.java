import java.util.ArrayList;
import java.util.List;
import java.util.PriorityQueue;

class Solution{
	public int complement(int []base, int[] other)
	{
		int index=0;
		ArrayList<Integer> intList = new ArrayList<>();
		
		for(int i=0;i<base.length;i++)
			intList.add(base[i]);
		
		for(int j=0; j<base.length;j++)
		{
			if(intList.contains(other[index]))
			{
				intList.remove(j);
				index++;
			}
		}
		
		return intList.size();
	}
	
	public int sum(int[] base, int[] other)
	{
		ArrayList<Integer> intList = new ArrayList<>();
		
		
		for(int i=0;i<base.length;i++)
		{
			if(!intList.contains(base[i]))
				intList.add(base[i]);		
		}
		for(int j=0;j<other.length;j++)
		{
			if(!intList.contains(other[j]))
				intList.add(other[j]);
		}
		
		return intList.size();
	}
	
	public int[] Aset(int[] arrayA)
	{
		ArrayList<Integer> intList = new ArrayList<>();
		
		for(int i=0; i<arrayA.length;i++)
		{
			if(!intList.contains(arrayA[i]))
				intList.add(arrayA[i]);
		}
		
		int[] answer = new int[intList.size()];
		for(int i=0; i<intList.size();i++)
			answer[i]=intList.get(i);
		
		arrayA = answer;
		return answer;
	}
	
	public int[] solution(int[] arrayA, int[] arrayB)
	{
		int na = arrayA.length;
		int nb = arrayB.length;
		
		int[] answer= {Aset(arrayA).length,Aset(arrayB).length, sum(arrayA,arrayB),complement(arrayA,arrayB)};
		return answer;
	}
}

public class MoreSpicy {

	public static void main(String[] args) {
		Solution solution = new Solution();
		int answer[] = new int[5];
		int arrayA[] = {1,2,3,2};
		int arrayB[] = {1,3};
		answer = solution.solution(arrayA, arrayB);
		
		System.out.println(answer[0]+","+answer[1]+","+answer[2]+","+answer[3]);
	}

}
