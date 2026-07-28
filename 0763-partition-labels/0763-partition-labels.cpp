class Solution {
public:
    vector<int> partitionLabels(string s) {

        // LastIndex of will tell --> us the last time I seen the character

        vector<int>last_seen(26,0);
        vector<int>ans;

        for(int i=0;i<s.length();i++)
        {
            last_seen[s[i]-'a'] = i;
        }

        // I know the boundary of the slices cut

        int start = 0, max_idx = INT_MIN;

        for(int i=0;i<s.length();i++)
        {
            max_idx = max(max_idx, last_seen[s[i] - 'a']);

            if(i == max_idx)
            {
                ans.push_back(max_idx - start + 1);
                start = i + 1;
            }
        }

        return ans;
        
    }
};