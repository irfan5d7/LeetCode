class Solution {
public:
    bool isPalindrome(int x) {
        int flag = 1;
        if(x<0)
        {
            return false;
        }
        else
        {
            if(x<=9 && x>=0)
                return true;
        }
        long sum = 0;
        int n = x;
        while(n!=0)
        {
            sum = (sum*10) + (n%10);
            n/=10;
        }
        if (sum == x )
            return true;
        return false;
    }
};