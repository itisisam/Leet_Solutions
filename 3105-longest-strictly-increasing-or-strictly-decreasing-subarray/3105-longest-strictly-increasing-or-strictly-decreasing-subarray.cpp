class Solution {
public:

    // Pure --> Bruteforcing it !!
    
    bool isIncreasing(vector<int>arr)
    {
        for(int i = 0; i < arr.size() - 1; i++)
        {
            if(arr[i] < arr[i+1])
            continue;

            else
            return false;
        };

        return true;
    };

    bool isDecreasing(vector<int>arr)
    {
        for(int i = 0; i < arr.size() - 1; i++)
        {
            if(arr[i] > arr[i+1])
            continue;

            else
            return false;
        };

        return true;
    };

    int longestMonotonicSubarray(vector<int>& nums) {

        int n = nums.size();

        int ans = INT_MIN;

        for(int i = 0; i < n; i++)
        {
            for(int j = i; j < n; j++)
            {
                vector<int>arr;

                for(int k = i; k <= j; k++)
                {
                    arr.push_back(nums[k]);

                    int m = arr.size();

                    if(isIncreasing(arr))
                    ans = max(ans, m);

                    if(isDecreasing(arr))
                    ans = max(ans, m);
                }
            }
        };

        return ans;
        
    }
};