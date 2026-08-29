class Solution {
public:
    int minSwaps(string s) {

        int imBalance = 0, swapCount = 0;

        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '[')
            imBalance++;

            else if(imBalance != 0 && s[i] == ']')
            imBalance--;

            else
            imBalance++, swapCount++;
        }

        return swapCount;
        
    }
};