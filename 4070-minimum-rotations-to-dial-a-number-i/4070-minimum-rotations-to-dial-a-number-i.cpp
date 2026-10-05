class Solution {
public:
    int minRotations(string s) {

        int prev = 0;
        int ans = 0;
        
        for(int i = 0; i < s.length(); i++)
        {
            int a = s[i] - '0';

            int clock = abs(a - prev);

            ans+= min(clock, 10 - clock);
            prev = a;
        }

        return ans;
        
    }
};