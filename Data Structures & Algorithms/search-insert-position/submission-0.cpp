class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int j;
        for(int i=0; i<n; i++)
        {
            if(nums[i]==target){
                j=i;
                break;
            
            }else if(nums[i]>target){
                j=i;
                break;
            }else{
                j=i+1;
                
            }
        }
        return j;
    }
};