class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        vector<int> match;
        int count =0;
        for(int i=0; i<n; i++){
            if(nums[i]==1){
                count=count+1;
            }
            else {
                match.push_back(count);
                count=0;
            }
            match.push_back(count);
        }
        sort(match.begin(), match.end(), greater<int>());
        int r=match[0];
        return r;
    }
};