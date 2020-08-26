import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.HashMap;

class Solution {
    public String solution(String[] participant, String[] completion) {
        String answer = "";
        Arrays.sort(participant);
        Arrays.sort(completion);
        
        for(int i=0; i<completion.length; i++)
        {
        	if(!participant[i].equals(completion[i]))
        		return participant[i];
        }
        
        return participant[participant.length-1];
    }
}

public class NotCompleteMarathon {

	public static void main(String[] args) {
		
	}

}
