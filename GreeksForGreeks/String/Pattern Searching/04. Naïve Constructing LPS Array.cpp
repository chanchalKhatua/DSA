https://practice.geeksforgeeks.org/batch/cip-1/track/P100-Strings/video/MTM5Nw%3D%3D
int longPropPreSuff(string str, int n){
    for(int len=n-1;len>0;len--){
        bool flag=true;
        for(int i=0;i<len;i++)
            if(str[i]!=str[n-len+i])
                flag=false;
                
        if(flag==true)
            return len;
    }
    return 0;
}

void fillLPS(string str, int *lps){
    for(int i=0;i<str.length();i++){
        lps[i]=longPropPreSuff(str,i+1);
    }
}
 
