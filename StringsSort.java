class Strings {
    public String[] solution(String[] strings, int n) {
        String[] answer = {};
        String temp = "";
        
        for(int i=0; i<strings.length-1; i++)
        {
        	for(int j=i+1; j<strings.length; j++)
        	{
        		if(strings[i].charAt(n) > strings[j].charAt(n))
        		{
        			temp = strings[i];
    				strings[i] = strings[j];
    				strings[j] = temp;
        		}
        		
        		else if(strings[i].charAt(n) == strings[j].charAt(n))
        		{
        			if(strings[i].compareTo(strings[j]) > 0)
        			{
        				temp = strings[i];
        				strings[i] = strings[j];
        				strings[j] = temp;
        			}
        		}
        	}
        }
        
        answer = strings;
        return answer;
    }
}

public class StringsSort {

	public static void main(String[] args) {
		String[] strings = {"sun","bed","car"};
		String[] result = new String[3];
		Strings s = new Strings();
		result = s.solution(strings, 1);
		
		for(int i=0;i<3;i++)
			System.out.println(result[i]);
	}

}
