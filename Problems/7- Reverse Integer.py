#include<bits/stdc++.h> 
class Solution {
public:
    int reverse(int x) 
    {
        long sum = 0;
        while(x)
        {
            sum=(sum*10)+(x%10);
            x/=10;
        }
        if (sum < INT_MIN || sum > 
            INT_MAX) 
        {
            return 0;
        } 
        else 
            return (int)sum;
    }
};