class Solution {
public:
    int findGCD(vector<int>& nums) {
        
        int n = nums.size();

        int min_ele = 1000;

        int max_ele = 0;

        for(int i=0;i<n;i++)
        {
            min_ele = min(min_ele, nums[i]);
            
            max_ele = max(max_ele, nums[i]);
        }

        return gcd(min_ele, max_ele);

        
    }
};