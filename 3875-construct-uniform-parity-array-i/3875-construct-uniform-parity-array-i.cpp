class Solution {
public:
    bool uniformArray(vector<int>& nums1) {

        vector<int>nums2(101,0);
        int n = nums1.size();

        for(int i = 0;i < nums1.size();i++)
            {
                nums2[nums1[i]]++;
            }

        int countEven = 0;
        int countOdd = 0;
        for(int i = 0;i < nums2.size();i++)
            {
                if(nums2[i] > 0 && nums2[i] % 2 == 0)
                {
                    countEven++;
                }
                else if(nums2[i] % 2 != 0)
                {
                    countOdd++;
                }
            }

        if(countOdd == n || countEven == n) return true;

        if(countOdd == countEven) return true;

        return false;
        
    }
};