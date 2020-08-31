class Day {
    public String solution(int a, int b) {
        String answer = "";
        int total = 0;
        
        for(int i=1; i<a; i++)
        {
        	if(i == 4 || i == 6 || i == 9 || i == 11)
        		total += 30;
        	if(i == 2)
        		total += 29;
        	else
        		total += 31;
        }
        total += b;
        
        switch(total%7)
        {
        case 0:
        	answer = "THU";
        	break;
        case 1:
        	answer = "FRI";
        	break;
        case 2:
        	answer = "SAT";
        	break;
        case 3:
        	answer = "SUN";
        	break;
        case 4:
        	answer = "MON";
        	break;
        case 5:
        	answer = "TUE";
        	break;
        case 6:
        	answer = "WED";
        	break;
        }
        
        return answer;
    }
}

public class DayQuest {

	public static void main(String[] args) {
		Day solution = new Day();
		String string = "";
		string = solution.solution(5, 24);
		System.out.println(string);
	}

}
