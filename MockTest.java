import java.util.ArrayList;

class Mock{
	public int[] solution(int[] answers) {
        int[] answer = {};
        int stu1[] = {1,2,3,4,5};
        int stu2[] = {2,1,2,3,2,4,2,5};
        int stu3[] = {3,3,1,1,2,2,4,4,5,5};
        int ans[] = new int[3];
        int count=0;
        
        for(int i=0; i<answers.length; i++)
        {
        	if(answers[i] == stu1[i%5])
        		ans[0]++;
        	if(answers[i] == stu2[i%8])
        		ans[1]++;
        	if(answers[i] == stu3[i%10])
        		ans[2]++;
        }
        int max = Math.max(Math.max(ans[0],ans[1]),ans[2]);
        
        
        for(int i=0;i<3;i++)
        {
        	if(max == ans[i])
        		count++;
        }
        
        answer = new int[count];
        int j=0;
        
        for(int i=0; i<3; i++)
        	if(max == ans[i])
        		answer[j++]=i+1;
        				
        
        /*ArrayList<Integer> list = new ArrayList<Integer>();
        for(int i=0; i<3; i++)
        	if(max == ans[i]) list.add(i+1);
        
        answer = new int[list.size()];
        for(int i=0; i<answer.length;i++)
        	answer[i]=list.get(i);
        */
        return answer;
    }
}


public class MockTest {

	public static void main(String[] args) {
		Mock mock = new Mock();
		int answer[] = {4,4,4,2,1};
		int answers[] = mock.solution(answer);
		for(int i=0;i<answers.length;i++)
			System.out.println(answers[i]);
	}

}
