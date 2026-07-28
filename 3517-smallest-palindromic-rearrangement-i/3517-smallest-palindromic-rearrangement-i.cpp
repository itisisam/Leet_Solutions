class Solution {
public:
    string smallestPalindrome(string s) {

        // A straight forward approach is-->
        // Construct half palindromice string via s (sorted) then half of the s(in reverse manner)

        // Construct half lenght string -->

        // But Carefully I need to keep the length even - odd in my mind -->

        string a = "";
        int n = s.length();

        int len = n / 2;

        if(n < 3)
        return s;

        if(n % 2 == 0)
        {
            // For even length string -->
            a = s.substr(0, len);

            sort(a.begin(), a.end());

            string b = a;
            reverse(b.begin(), b.end());

            return a + b;
        }

        else
        {
            // For Odd length string -->
            a = s.substr(0, len);

            // Middle character never leaves us -->
            
            char mid = s[len];

            sort(a.begin(), a.end());

            string b = a;
            reverse(b.begin(), b.end());

            return a + mid + b;
        }

    }
};