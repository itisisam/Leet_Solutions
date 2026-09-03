class Solution {
public:
    bool uniformArray(vector<int>& nums1) {

        int n = nums1.size();

        int min = nums1[0];

        bool even = true;
        bool odd = true;

        for(int i=0;i<n;i++)
            {
                if(nums1[i] % 2 == 0)
                    odd = false;
                else
                    even = false;

                if(min > nums1[i])
                    min = nums1[i];
            }

        if(even || odd)
            return true;

        if(min % 2 != 0)
        return true;

        return false;
        
        
    }
};