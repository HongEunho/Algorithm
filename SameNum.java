import java.util.ArrayList;

class Same {
    public int[] solution(int []arr) {
        int[] answer = {};
        ArrayList<Integer> list = new ArrayList<>();
        
        for(int i=0; i<arr.length-1; i++)
        {
        	if(arr[i] != arr[i+1])
        	{
        		list.add(arr[i]);
        	}
        }
        list.add(arr[arr.length-1]);
        
        answer = new int[list.size()];
        for(int i=0; i<list.size(); i++)
        	answer[i] = list.get(i);

        return answer;
    }
}

public class SameNum {

	public static void main(String[] args) {
		Same same = new Same();
		int []arr = {1,1,3,3,0,1,1};
		for(int i=0; i<same.solution(arr).length; i++)
		{
			System.out.println(same.solution(arr)[i]);
		}

	}

}
