class Solution {
public:
    bool isAnagram(string s, string t) {
        int m=s.size();
        int n=t.size();
        string s_new;
        string t_new;
        bool match =true;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(m==n){
            for(int i=0; i<m; i++){
                if(s[i]!=t[i]){
                    match=false;
                    break;
                } else{
                    continue;
                }
            }
        }
        else {
            return false;
        }
        return match;
    }
};
