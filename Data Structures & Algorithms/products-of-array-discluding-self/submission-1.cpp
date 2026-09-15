class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int multiple=1;
        vector<int> output(n);
        if(n>1){

        
             
                for(int j=0; j<n; j++){
                   output[j] = multiple;

                    multiple = multiple * nums[j];
                }
                multiple = 1;
                for(int k=n-1; k>=0; k--){
                    output[k] = output[k] * multiple;

                    multiple = multiple * nums[k];
                }
           
            return output;
        }
        else{
            return nums;
        }
    }
};
