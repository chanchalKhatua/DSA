//https://practice.geeksforgeeks.org/batch/cip-1/track/P100-Strings/video/MTYxMA%3D%3D
// Pattern Must be containe unique charecter with this solution
void patSearchinng(string &txt,string &pat){
    int m=pat.length();
    int n=txt.length();
    for(int i=0;i<=(n-m);  ){
        int j;
        for(j=0;j<m;j++)
        if(pat[j]!=txt[i+j])
        break;
        
        if(j==m)
        cout<<i<<" ";
        if(j==0){
        i++;}
        else{
        i=(i+j);}
    }
}
