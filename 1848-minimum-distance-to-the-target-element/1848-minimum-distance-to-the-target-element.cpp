class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {

        int ans = INT_MAX;
        int n = nums.size();
        
        int value = target;

        for(int i=0;i<n;i++)
        {
            if(nums[i] == value)
            {
                int res = abs(i - start);

                ans = min(ans, res);
            }
        }

        return ans;
        
    }
};