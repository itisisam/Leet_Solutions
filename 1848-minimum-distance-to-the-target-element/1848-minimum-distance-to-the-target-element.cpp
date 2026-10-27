class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {

        int n = nums.size();

        int src = start;

        queue<pair<int,int>>q;

        q.push({src, 0});

        vector<int>visit(n,false);

        visit[start] = true;

        while(q.size() > 0)
        {
            int size = q.size();

            for(int i = 0; i < size; i++)
            {
                auto[u, d] = q.front();

                q.pop();

                if(nums[u] == target)
                {
                    if(d < 0)
                    d = d * -1;

                    return d;
                }

                if(u < n - 1)
                {
                    int x = u + 1;

                    if(!visit[x])
                    {
                        visit[x] = true;
                        q.push({x, d + 1});
                    }
                }

                if(u > 0)
                {
                    int x = u - 1;

                    if(!visit[x])
                    {
                        visit[x] = true;
                        q.push({x, d - 1});
                    }
                }
            }
        }

        return 0; 
    }
};