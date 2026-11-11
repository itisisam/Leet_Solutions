class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {

        long long c1 = min(costBoth, cost1 + cost2);

        long long n1 = min(need1, need2);

        long long total_cost = c1 * n1;

        if (need1 > need2) 
        {
            long long rem = need1 - need2;
            total_cost += rem * min(cost1, costBoth);
        }       
        
        else if(need2 > need1) 
        {
            long long rem = need2 - need1;
            total_cost += rem * min(cost2, costBoth);
        }  

        return total_cost; 
    }
};