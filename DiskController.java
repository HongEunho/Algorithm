import java.util.ArrayList;
import java.util.PriorityQueue;

class Disk{
	public int solution(int[][] jobs) {
		int answer=0;
		PriorityQueue<Job> pq = new PriorityQueue<>();
		ArrayList<Job> list = new ArrayList<>();
		
		for(int i=0; i<jobs.length; i++)
			pq.add(new Job(jobs[i][0],jobs[i][1]));
		
		for(int i=0; i<jobs.length; i++)
			list.add(pq.poll());
		
		int time=0;
		while(list.size()>0)
		{
			for(int i=0; i<list.size();i++)
			{
				if(time >= list.get(i).start)
				{
					time += list.get(i).use;
					answer += time - list.get(i).start;
					list.remove(i);
					break;
				}
				if(i == list.size()-1) time++;
			}
		}
		
		answer /= jobs.length;
		return answer;
	}
}

class Job implements Comparable<Job>{

	int start;
	int use;
	
	public Job(int start, int use) {
		this.start=start;
		this.use=use;
	}
	
	@Override
	public int compareTo(Job o) {
		if(this.use > o.use) return 1;
		if(this.use < o.use) return -1;
		
		return (this.start < o.start) ? -1:1;
	}
	
}

public class DiskController {

	public static void main(String[] args) {
		Disk disk = new Disk();
		int jobs[][] = {{0,3},{1,9},{2,6}};
		int answer = disk.solution(jobs);
		System.out.println(answer);
	}

}
