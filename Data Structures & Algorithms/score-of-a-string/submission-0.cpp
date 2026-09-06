class Solution {
public:
    int scoreOfString(string s) {
       int n=s.size();
       int value=0;
        
       for(int i=0; i<n-1; i++){
        char char_1=s[i];
        char char_2=s[i+1];
        int val_1=char_1;
        int val_2=char_2;
        int abs_value=abs(val_2-val_1);
        value=value+abs_value;
       }
       return value;
    }
};