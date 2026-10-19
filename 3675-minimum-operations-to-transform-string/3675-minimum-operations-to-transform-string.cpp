class Solution {
public:
    int minOperations(string s) {

        int min_moves = 0;

        for(int i = 0; i < s.length(); i++)
        if(s[i] != 'a') min_moves = max(min_moves, 'z' - s[i] + 1);

        return min_moves;
        
    }
};