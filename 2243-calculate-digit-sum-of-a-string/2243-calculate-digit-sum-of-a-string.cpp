class Solution {
public:
    string digitSum(string s, int k) {

        while (s.length() > k) {

            string ans = "";

            for(int i = 0; i < s.length();)
            {
                string a = s.substr(i, k);
                i += k;

                // Now process this a -->

                int sum = 0;

                for (char c : a) 
                sum += c - '0';

                ans += to_string(sum);    
            }

        s = ans;
        
        }

        return s;
        
    }
};