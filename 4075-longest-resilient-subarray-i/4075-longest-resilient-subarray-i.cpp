class Solution {
public:
 
    // int sumOfSubArrays(vector<int>&arr)
    // {
    //     int sum  = 0;

    //     for(int i=0;i<arr.size();i++)
    //     sum+=arr[i];

    //     return sum;
    // };


    int resilientSubarray(vector<int>& nums, int k) {

        // Bruteforcing -->
        // int count = 0;
        // int max_len = 0;

        // O(N^3)

        // for(int i=0;i<nums.size();i++)
        // {
        //     vector<int>temp;

        //     for(int j=i;j<nums.size();j++)
        //     {
        //     temp.push_back(nums[j]);

        //     if (temp.size() == 1) 
        //     {
        //         max_len = max(max_len, 1);
        //         continue;
        //     }

        //     int sum = sumOfSubArrays(temp);
        //     bool flag = true;

        //     for(int m=0;m<temp.size();m++)
        //     {
        //         int rem_first = (sum - temp[m]) % k;
                
        //         if(rem_first != 0)
        //         {
        //             flag = false;
        //             break;
        //         }
        //     }

        //     if(flag == true)
        //     max_len = max(max_len, (int)temp.size());
        //     }
        // }
        // return max_len;

        // O(N^2)

        int max_len = 1;

        for(int i=0;i<nums.size();i++)
        {
            int target_rem = (nums[i] % k + k) % k;

            for(int j=i+1;j<nums.size();j++)
            {
                int cur_rem = (nums[j] % k + k) % k;

                if (cur_rem != target_rem)
                break;

                int len = j - i + 1;

                if ((1LL * (len - 1) * target_rem) % k == 0) 
                max_len = max(max_len, len);

            }
        }
        return max_len;
    }
};