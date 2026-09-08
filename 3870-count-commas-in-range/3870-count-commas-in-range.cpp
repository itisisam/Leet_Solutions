class Solution {
public:
    int countCommas(int n) {

        if(n <= 999)
            return 0;

        int comma = 0;

        if(1000 <= n <= 9999)
        {
        for(int i=1000;i<=n;i++)
            {
                comma++;
            }
            return comma;
        }

        if(1000 <= n <= 99999)
        {
            comma = 0;
        for(int i=1000;i<=n;i++)
            {
                comma++;
            }
            return comma;
        }

        if(n == 100000)
            return 1;
        

        return 0;
        
    }
};