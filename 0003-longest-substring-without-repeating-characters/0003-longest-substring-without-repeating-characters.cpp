class Solution {
public:

    int lengthOfLongestSubstring(string s) {

        int first=0, second=0;
        int count_length=0;

        vector<bool>count(256,0);

        while(second<s.length())
        {
            while(count[s[second]])
            {
                count[s[first]]=0;
                first++;
            }
            count[s[second]]=1;
            count_length=max(count_length,second-first+1);
            second++;
        }

        return count_length;

        
    }
};