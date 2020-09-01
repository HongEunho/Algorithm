import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

class Printe {
    public int solution(int[] priorities, int location) {
        int answer = 0;
        Queue <Integer> queue = new LinkedList<>();
        
        ArrayList <Integer> prior2 = new ArrayList<>();
        int tmp=0, tmpi=0, flag=0, count=1;
        
        for(int i=0; i<priorities.length; i++)
        {
        	queue.add(i); //���� �ε���
        	prior2.add(priorities[i]); //�迭�� ť�� �ű��
        }
        
        while(true)
        {
        	tmp = prior2.remove(0);
        	tmpi = queue.poll();
        	flag = 0;
        	for(int i=0; i<queue.size(); i++)
        	{
        		if(tmp < prior2.get(i)) //�켱������ ���� ������ ������
        		{
        			prior2.add(tmp);
        			queue.add(tmpi);
        			flag = 1;
        		}
        	
        	}
        	if(flag == 0) //�켱������ ���� ������ �������� �ʴ´ٸ�
        	{
        		if(location == tmpi)
        		{
        			answer = count;
        			break;
        		}
        		else
        			count++;
        	}
        }
        
        return answer;
    }
}

public class Printer {

	public static void main(String[] args) {
		int[] priorities = {2,1,3,2};
		int location = 2;
		Printe printe = new Printe();
		int ans = printe.solution(priorities, location);
		System.out.println(ans);
	}

}
