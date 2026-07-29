class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1, vector<vector<int>>& series2) {

        // An easy - peasy -->

        int n1 = series1.size(), n2 = series2.size();

        int i = n1 - 1, j = n2 - 1;

        vector<vector<int>> ans;

        int val1 = 0, val2 = 0;

        while (i >= 0 || j >= 0) {
            
            int t;
            
            if (i < 0)
                t = series2[j][0];
            else if (j < 0)
                t = series1[i][0];
            else
                t = max(series1[i][0], series2[j][0]);
            
            if (i >= 0 && series1[i][0] == t) 
            {
                val1 = series1[i][1];
                i--;
            }

            if (j >= 0 && series2[j][0] == t) 
            {
                val2 = series2[j][1];
                j--;
            }

            ans.push_back({t, (int)(val1 + val2)});
        }

        reverse(ans.begin(), ans.end());

        return ans;
        
    }
};