class Solution {
public:
    int dig_mul(int nums)
    {
        int prod = 1;
        while(nums)
        {
            prod*=nums%10;
            nums/=10;
        }
        return prod;
    }

    int smallestNumber(int n, int t) {

        while(n <= 100)
        {
            int a = dig_mul(n);

            if(a % t == 0)
            return n;

            n++;
        }

        return -1;

        
    }
};