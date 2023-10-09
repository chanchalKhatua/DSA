
class Solution
{
    public:
    //Function to check if the given pattern exists in the given string or not.
    bool search(string pat, string txt) 
    { 
    	// Your code here
    // 		int i=0, j=0;
    // 	int len1=pat.length()-1;
    // 	int len2=txt.length()-1;
    
    // 	while(i<=len1 && j<=len2)
    // 	{  
    	   
    // 	    if(pat[i]==txt[j])
    // 	    {
    	      
    // 	        i++;
    	   
    // 	    } 
    // 	        j++;
    // 	        if(i==(len1+1))
    // 	        return true;
    	        
    // 	}
    // 	return false;
      if (txt.find(pat) != string::npos)
      return true;
    else
      return false;
    } 
};

