class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int prof;
        vector <int> profit;
        if(n>1){
            for(int i=0; i<n; i++){
                for(int j=i+1; j<n; j++){
                    if(prices[i]<prices[j]){
                        prof=prices[j]-prices[i];
                        profit.push_back(prof);

                    }
                    else{
                        prof=0;
                        profit.push_back(prof);
                    }
                }
            }
        sort(profit.begin(),profit.end(), greater<int>());
        return profit[0];
        }
        else{
            return 0;
        }
         
    }
};
