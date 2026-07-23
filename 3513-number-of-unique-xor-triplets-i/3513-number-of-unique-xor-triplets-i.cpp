class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {

        // I wil; never Find all possible triplets via O(n^3) because constraint is: 10^5...

        // int n = nums.size();

        // unordered_set<int>s;

        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         for(int k=0;k<n;k++)
        //         {
        //             s.insert(nums[i] ^ nums[j] ^ nums[k]);
        //     }
        // }

        // return s.size();

        // So here we analyzed a pattern that the nums.size() having very next 2^nums.size() answer--> 

        // Base Case -->

        int n = nums.size();

        if(n == 1 || n == 2)
        return n;
        
        int ans = 1;

        while(ans <= n)
        {
            ans*=2;
        }

        return ans;
        
    }
};