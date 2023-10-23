//https://practice.geeksforgeeks.org/batch/cip-1/track/P100-Strings/video/MTM5OA%3D%3D
//https://practice.geeksforgeeks.org/batch/cip-1/track/P100-Strings/problem/pattern-search-kmp
//User function Template for C++


//Function to fill lps[] for given patttern pat[0..M-1].
void computeLPSArray(string pat, int M, int* lps) 
{ 
	// Your code here
	lps[0]=0;
	int i=1;
	int lent=0;
	while(i<M)
	{
	    if(pat[i]==pat[lent])
	    {
	        lent++;
	        lps[i++]=lent;
	    }
	    else
	    {
	        if(lent==0)
	        {
	            lps[i++]=0;
	        }
	        else
	        {
	            lent=lps[lent-1];
	        }
	    }
	    
	}
} 

//Function to check if the pattern exists in the string or not.
bool KMPSearch(string pat, string txt) 
{
    // Your code here
    int patLength=pat.length();
    int txtLength=txt.length();
    
    int preSuffixArray[patLength];
    computeLPSArray(pat,patLength, preSuffixArray);
    int i=0,j=0;
    while(i<txtLength)
    {
        if(pat[j]==txt[i])
        {
            i++;
            j++;
        }
        if(j==patLength)
        {
            return true;
            // if you have to return number of match then
            // count++;
            //j=preSuffixArray[j-1];
        }
        else if(i<txtLength && pat[j]!=txt[i] )
        {
            if(j==0)
            {
                i++;
            }
            else
            {
                j=preSuffixArray[j-1];
            }
        }
    }
    return false;
    
}
