class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {

        vector<vector<int>>ans;

        // Sort the nums for clean merging the missing ones -->
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int i = 0;
        int curr = lower;
        
        while(curr <= upper)
            {
                // Skip if elements are lesser than target
                
                 while(i < n && nums[i] < curr)
                     i++;

                // Skip if elemnt already present
                
                if(i < n && nums[i] == curr)
                    curr++;

                // finding range for that missing one
                    
                else
                {
                    int start = curr;

                    while(curr <= upper && (i >= n || nums[i] > curr))
                        curr++;

                    int end = curr - 1;
                    ans.push_back({start, end});
                }
            }

        return ans;
        
    }
};