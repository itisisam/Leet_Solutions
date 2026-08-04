class Solution {
public:
    string removeDuplicates(string s) {

        stack<int>st;

        for(int i=0;i<s.length();i++)
        {
            if(st.empty())
            st.push(s[i]);

            else if(st.top() == s[i])
            st.pop();

            else
            st.push(s[i]);
        }
        
        s.clear();

        while(!st.empty())
        {
            s.push_back(st.top());
            st.pop();
        }

        reverse(s.begin(), s.end());
        return s;
        
    }
};