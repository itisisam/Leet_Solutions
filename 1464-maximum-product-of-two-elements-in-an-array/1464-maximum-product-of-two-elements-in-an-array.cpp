class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        // Bruteforce --> O(NlogN)
        // sort(nums.begin(),nums.end(),greater<int>());

        // return ((nums[0]-1)*(nums[1]-1));

        // Optimized--> O(N)

        // first maximum-->

        int first=INT_MIN;
        int second=INT_MIN;
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            if(nums[i]>first){
            second=first;
            first=nums[i];
            }

            else if(nums[i]>second)
            second=nums[i];

        }
        return (first-1)*(second-1);
        
    }
};