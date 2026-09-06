class Solution {
public:
    int appendCharacters(string s, string t) {
        int n=s.size();
        int m=t.size();
        string match="";
        int i=0;
        int j=0;
        while(i<n && j<m){
            if(s[i]==t[j]){
                match =match + t[j];
                j++;
            }
            i++;
        }
        int k=match.size();
        return m-k;
    }
};