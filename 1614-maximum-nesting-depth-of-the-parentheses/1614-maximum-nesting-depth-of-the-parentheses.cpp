class Solution {
public:
    int maxDepth(string s) {

        int ans = 0;
        int bracketOpen = 0;

        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '(')
            bracketOpen++;

            else
            {
                if(s[i] == ')')
                {
                    ans = max(ans, bracketOpen);
                    bracketOpen--;
                }
            }
        };

        return ans;
        
    }
};