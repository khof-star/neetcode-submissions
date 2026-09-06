class Solution {
public:
    bool isSubsequence(string s, string t) {
     int n =s.size();
     int m=t.size();
     int start=0;
     string match="";
     for(int i=0; i<n; i++){
        for(int j=start; j<m; j++){
            if(s[i]==t[j]){
                 match +=s[i];
                start=j +1;
                break;
                 
            }
        }
     }
       int k=match.size();
       if(k==n){
        return true;
       }else{
        return false;
       }
    }
};