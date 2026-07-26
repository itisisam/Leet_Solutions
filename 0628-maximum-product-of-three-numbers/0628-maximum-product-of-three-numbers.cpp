class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        int n = nums.size();

        // Finding Three Maximum Numbers -->

        // Failed on --> [-100, -98, -1, 2, 3, 4]

        int first_max = INT_MIN;
        int second_max = INT_MIN;
        int third_max = INT_MIN;

        for(int i=0;i<n;i++)
        {
            if (nums[i] > first_max) 
            {
                third_max = second_max;
                second_max = first_max;
                first_max = nums[i];
            } 

            else if (nums[i] > second_max) 
            {
                third_max = second_max;
                second_max = nums[i];
            } 

            else if (nums[i] > third_max) 
            {
                third_max = nums[i];
            }

        }

        // Now we need to find the negative minimum numbers to maximize product , e.g., -100 < -1

        int first_min = INT_MAX;
        int second_min = INT_MAX;

        for(int i=0;i<n;i++)
        {
            if (nums[i] < first_min) 
            {
                second_min = first_min;
                first_min = nums[i];
            } 

            else if (nums[i] < second_min) 
            {
                second_min = nums[i];
            } 
        }

        return max(first_max * second_max * third_max, first_min * second_min * first_max);

    }
};