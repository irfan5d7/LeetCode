class Solution {

public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n==0)
            return "";
        bool table[n][n] = {0};
        int max_length = 1;
        int i,j,k,start=0;
        for(i=0;i<n;i++)
            table[i][i]=1;
        for(i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                table[i][i+1] = 1;
                max_length = 2;
                 start = i; 
            }
        }
        for(k=3;k<=n;k++)
        {
            for(i=0;i<n-k+1;i++)
            {
                j = i+k-1;
                if(s[i] == s[j] && table[i+1][j-1])
                {
                    table[i][j] = 1;
                    if(k > max_length )
                    {
                        max_length = k;
                        start = i;
                    }
                }
            }
        }
        return s.substr(start,max_length);
        
    }
};