class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        int m1, m2;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]==nums[j]){
                    m1=i, m2=j;
                    break;
                }
            }
        }
        int abs_value=abs(m1-m2);
        if(abs_value<=k){
            return true;
        }
        else{
            return false;
        }
    }
};