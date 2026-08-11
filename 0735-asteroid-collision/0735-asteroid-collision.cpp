class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        // Proper Stack Based Question -->

        int n = asteroids.size();

        vector<int>ans;

        stack<int>st;

        for(int x: asteroids)
        {
            bool destroy = false;

            // If stack top is +ve and coming one is negative so need to colliod -->

            while(!st.empty() && st.top() > 0 && x < 0)
            {
                if(abs(x) > st.top())
                {
                    st.pop();
                    continue;
                }

                // If both have equal size -->
                else if(st.top() == abs(x))
                {
                    destroy = true;
                    st.pop();
                    break;
                }

                // If stack top is +ve bigger than -ve -->
                else
                {
                    destroy = true;
                    break;
                }
            }

            if(!destroy)
            st.push(x);
        }

        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
        
    }
};