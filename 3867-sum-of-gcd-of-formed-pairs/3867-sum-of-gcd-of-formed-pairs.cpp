class Solution {
public:

    int GCD(int a, int b)
    {
        if(b == 0)
            return a;

        return GCD(b, a%b);
    }
    
    long long gcdSum(vector<int>& nums) {

        int n = nums.size();
        
        vector<int>prefixGcd;

        int maxi = 0;

        // for(int i=0;i<n;i++)
        //     {
        //         maxi = max(maxi,nums[i]);

        //         // taking GCD
        //         int ans = GCD(nums[i], maxi);
                
        //         prefixGcd.push_back(ans);
        //     }

        vector<int>maxEle;
        
        for(int i=0;i<n;i++)
            {
                maxi = max(maxi,nums[i]);
                maxEle.push_back(maxi);
            }

        // taking GCD

        for(int i=0;i<n;i++)
            {
                prefixGcd.push_back(GCD(nums[i],maxEle[i]));
            }

        sort(prefixGcd.begin(), prefixGcd.end());

        // taking pairs

        int k = prefixGcd.size();

        int start = 0, end = k - 1;

        long long sum = 0;

        while(start < end)
            {
                int ans = GCD(prefixGcd[start], prefixGcd[end]);

                sum+=ans;

                start++;
                end--;
            }

        return sum;
        
    }
};