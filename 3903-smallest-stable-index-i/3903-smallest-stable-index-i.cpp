class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        int n = nums.size();
        int ans = -1;

        for(int i=0;i<n;i++)
            {
                int max_ele = INT_MIN;
                int min_ele = INT_MAX;
                
                // traversing for maximum element from index 0 -->
                for(int j=0;j<=i;j++)
                    {
                        max_ele = max(max_ele, nums[j]);
                    }
                
                // traversing for minimum element from index i-->
                for(int k=i;k<n;k++)
                    {
                        min_ele = min(min_ele, nums[k]);
                    }
                
                if((max_ele - min_ele) <= k)
                return i;
                
            }
        return -1;
        
    }
};