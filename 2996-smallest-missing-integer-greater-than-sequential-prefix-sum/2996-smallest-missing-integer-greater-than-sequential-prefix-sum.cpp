class Solution {
public:
    int missingInteger(vector<int>& nums) {

        unordered_set<int>s;

        for(int i=0;i<nums.size();i++)
        s.insert(nums[i]);

        int sum = nums[0];
        int i = 1;
        
        while(i < nums.size() && nums[i - 1] + 1 == nums[i])
        {
            sum+=nums[i];
            i++;
        }

        while(s.count(sum))
        {
            sum++;
        }

        return sum;
        
    }
};