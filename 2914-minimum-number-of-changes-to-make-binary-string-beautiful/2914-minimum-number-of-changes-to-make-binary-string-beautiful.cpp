class Solution {
public:
    int minChanges(string s) {

        // Partition the given string -->

        int n = s.length();

        int ans = 0;

        // // For First Half Substring -->

        // int countZeros, countOnes;
        // countZeros = countOnes = 0;

        // for(int i = 0; i < n / 2; i++)
        // {
        //     if(s[i] == '0')
        //     countZeros++;

        //     else
        //     countOnes++;
        // };

        // ans += min(countZeros, countOnes);

        // // For Second Half Substring -->

        // countZeros = countOnes = 0;

        // for(int i = n / 2; i < n; i++)
        // {
        //     if(s[i] == '0')
        //     countZeros++;

        //     else
        //     countOnes++;
        // };

        // ans += min(countZeros, countOnes);

        // return ans;

        for(int i = 0; i < n; i+=2)
        if(s[i] != s[i + 1]) ans++; // 00, 11, 01, 10 --> If both same no change else one change required

        return ans;
        
    }
};