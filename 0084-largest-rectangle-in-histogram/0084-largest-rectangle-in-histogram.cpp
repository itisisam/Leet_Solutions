class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        int n = heights.size();
        
        stack<int>st;

        // Next Smallest Left

        vector<int>nextSmallLeft(n);
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && heights[st.top()] > heights[i])
            {
                nextSmallLeft[st.top()] = i;
                st.pop();
            }
            st.push(i);
        };

        // Might Stack contains some element-->
        while(!st.empty())
        {
            nextSmallLeft[st.top()] = -1;
            st.pop();
        }

        // Next Smallest Right

        vector<int>nextSmallRight(n);
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && heights[st.top()] > heights[i])
            {
                nextSmallRight[st.top()] = i;
                st.pop();
            }
            st.push(i);
        };

        // Might Stack contains some element-->
        while(!st.empty())
        {
            nextSmallRight[st.top()] = n;
            st.pop();
        }

        // Calculate Area -->

        int ans = 0;

        for(int i=0;i<n;i++)
        {
            ans = max(ans, heights[i] * (nextSmallRight[i] - nextSmallLeft[i] - 1));
        }

        return ans;
        
    }
};