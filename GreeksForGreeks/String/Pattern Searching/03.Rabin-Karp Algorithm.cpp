// https://www.geeksforgeeks.org/rabin-karp-algorithm-for-pattern-searching/
// https://practice.geeksforgeeks.org/batch/cip-1/track/P100-Strings/video/MTM5NQ%3D%3D
// https://practice.geeksforgeeks.org/batch/cip-1/track/P100-Strings/problem/rabin-karp-pattern-searching
//User function Template for C++

// d is the number of characters in the input alphabet 
#define d 256 

//Function to check if the pattern is present in string or not.
bool search(string pat, string txt, int q) 
{ 
	// Your code here\
 //Compute (d^(M-1))%q
 int M=pat.length();
 int N=txt.length();
    int h=1;
    for(int i=1;i<=M-1;i++)
        h=(h*d)%q;
    
    //Compute p and to
    int p=0,t=0;
    for(int i=0;i<M;i++){
        p=(p*d+pat[i])%q;
        t=(t*d+txt[i])%q;
    }
    
    for(int i=0;i<=(N-M);i++){
       //Check for hit
       if(p==t){
           bool flag=true;
           for(int j=0;j<M;j++)
                if(txt[i+j]!=pat[j]){flag=false;break;}
            if(flag==true)
            return true;;
       }
       //Compute ti+1 using ti
       if(i<N-M){
           t=((d*(t-txt[i]*h))+txt[i+M])%q;
        if(t<0)t=t+q;
       }
    }
    
    return false;
    
} 
