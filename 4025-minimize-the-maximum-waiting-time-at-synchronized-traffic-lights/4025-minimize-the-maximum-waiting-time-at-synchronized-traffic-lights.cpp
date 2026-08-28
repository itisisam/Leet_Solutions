class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {

        // Cake Walk --> Just take the maxGreen Signal time which is optimally suitable
        // Take out the r for every Arrival time and compare against max_green if greater than
        // so update it if not so waitTime is initilized to 0 always -->

        int n = arrivalTime.size();

        int max_green = INT_MIN;
        
        for(int i=0;i<lights.size();i++)
            max_green = max(max_green, lights[i]);

        int max_Penality = 0;

        for(int i=0;i<n;i++)
            {
                int waitTime = 0;
                int r = arrivalTime[i] % period;

                if(r >= max_green)
                    waitTime = period - r;

                max_Penality = max(max_Penality, waitTime);
            }

        return max_Penality;
   
    }
};