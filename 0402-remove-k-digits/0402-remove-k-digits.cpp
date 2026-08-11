class Solution {
public:
    string removeKdigits(string num, int k) {

        // this problem was kind of --> Removing Next Greater Element Till K !!

        int n = num.length();

        stack<int>st;
        int count = 0;
        int i;

        for(i=0;i<n;i++)
        {
            while(!st.empty() && num[st.top()] > num[i] && count < k)
            {
                st.pop();
                count++;
            }

            if(count == k)
            break;

            st.push(i);
        }

        // if still k removals are remaining

        while(count < k && !st.empty())
        {
            st.pop();
            count++;
        }

        // Take out it -->
        string ans = "";

        while(!st.empty())
        {
            ans+=num[st.top()];
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        int j = i;

        while(j < n)
        {
            ans+=num[j];
            j++;
        }

        // Removing Leading Zeros -->
        int pos = 0;

        while(pos < ans.length() && ans[pos] == '0')
        pos++;

        ans = ans.substr(pos);

        if(ans.empty())
        ans = "0";

        return ans;
        
    }
};