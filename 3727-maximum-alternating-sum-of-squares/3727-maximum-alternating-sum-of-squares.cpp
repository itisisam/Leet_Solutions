class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {

        int n = nums.size();

        // Even Index have: positive while odd have: negative !!

        long long pos_score = 0;

        long long neg_score = 0;

        for(int i=0;i<n;i++)
        {
            nums[i] = nums[i] * nums[i];
        }
        
        sort(nums.begin(), nums.end());

        for(int i=0;i<n/2;i++)
        {
            pos_score = pos_score + nums[i];
        }

        for(int i=n/2;i<n;i++)
        {
            neg_score = neg_score + nums[i];
        }

        return neg_score - pos_score;
        
    }
};