class Solution {
public:

    vector<int> countBits(int n) {

        vector<int>ans(n+1,0);

        for(int i=0;i<=n;i++)
        {
            int num = i;
            int countOnes = 0;

            while(num)
            {
                int rem = num % 2;

                if(rem == 1)
                countOnes++;

                num/=2;
            }

            if(countOnes)
            ans[i] = countOnes;

        }

        return ans;
    }
};