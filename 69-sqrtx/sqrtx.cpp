class Solution {
public:
    int mySqrt(int x) {
        long checkNumber = 1;
        while(true)
        {
            if(x < checkNumber * checkNumber)
            {
                return checkNumber-1;
            }
            else
            {
                checkNumber++;
            }
        }
    }
};