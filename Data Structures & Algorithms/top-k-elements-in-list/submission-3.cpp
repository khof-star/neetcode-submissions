class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        int n = nums.size();

        unordered_map<int, int> frequency;


        // STEP 1:
        // Count frequency of every number

        for(int i = 0; i < n; i++)
        {
            if(frequency.find(nums[i]) == frequency.end())
            {
                frequency[nums[i]] = 1;
            }
            else
            {
                frequency[nums[i]] = frequency[nums[i]] + 1;
            }
        }


        // STEP 2:
        // bucket[f] will contain numbers
        // whose frequency is f

        vector<vector<int>> bucket(n + 1);


        unordered_map<int, int>::iterator it;

        for(it = frequency.begin(); it != frequency.end(); it++)
        {
            int number = it->first;

            int count = it->second;

            bucket[count].push_back(number);
        }


        // STEP 3:
        // Start from highest possible frequency
        // and collect k numbers

        vector<int> output;


        for(int count = n; count >= 1; count--)
        {
            for(int j = 0; j < bucket[count].size(); j++)
            {
                output.push_back(bucket[count][j]);

                if(output.size() == k)
                {
                    return output;
                }
            }
        }


        return output;
    }
};