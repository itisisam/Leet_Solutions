class Solution {
public:
    int countGoodRotations(vector<int>& nums) {

        int n = nums.size();

        long long total = 0;
        long long first = 0;
        
        for(int i=0;i<n;i++)
        total+=nums[i];

        for(int i=0;i<n/2;i++)
        first+=nums[i];

        nums.resize(n * 2);
        int j = 0;
        
        for(int i=n;i<n*2;i++,j++)
        nums[i] = nums[j];

        int m = nums.size();
        int count = 0;

        j = 0;
        int i = n/2;
        for(int step=0;step<n;step++, j++, i++)
        {
            if(first > total - first)
            count++;

            first-=nums[j];
            first+=nums[i];
        }

        return count;
     
    }
};