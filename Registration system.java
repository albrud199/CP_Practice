import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    
	    HashMap <String, Integer> hp = new HashMap<>();
	    Scanner n = new Scanner(System.in);
	    
	    int x = n.nextInt();
	    
	    while(x-- >0)
	    {
	        String b = n.next();
	        
	        if (hp.containsKey(b))
	        {
	            System.out.println(b + hp.get(b));
	            hp.put(b, hp.get(b) + 1);
	        }     
	        
	        else 
	        {
	            System.out.println("OK");
	            hp.put(b,1);
	        }
	        
	    }
	    
		
	}
}
