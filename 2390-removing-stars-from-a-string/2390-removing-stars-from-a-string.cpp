class Solution {
public:
    string removeStars(string s) {

        // Cake Walk -->

        stack<char>st;

        for(int i=0;i<s.length();i++)
        {
            if(s[i] != '*')
            st.push(s[i]);

            else
            st.pop();
        }

        s = "";

        while(!st.empty())
        {
            s.push_back(st.top());
            st.pop();
        }

        reverse(s.begin(), s.end());

        return s;
        
    }
};