class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        // It was the same variant of Previous one but it couldn't solve via O(n^2) -->

        // we have to make a better approach --> O(N)

        // We can use prefix maximum and suffix minimum -->

        int n = nums.size();

        int max_ele = nums[0];

        int min_ele = nums[n - 1];
        

        vector<int>prefix_maximum(n);

        vector<int>suffix_minimum(n);

        prefix_maximum[0] = nums[0];

        for(int i=1;i<n;i++)
            {
                max_ele = max(max_ele, nums[i]);
                prefix_maximum[i] = max_ele;
            }

        suffix_minimum[n - 1] = nums[n - 1];

        for(int i=n-2;i>=0;i--)
            {
                min_ele = min(min_ele, nums[i]);
                suffix_minimum[i] = min_ele;
            }

        // Now substract each of them and find is <=k ?

        for(int i=0;i<n;i++)
            {
                if(prefix_maximum[i] - suffix_minimum[i] <= k)
                    return i;
            }
        
        return -1;

        
        
    }
};