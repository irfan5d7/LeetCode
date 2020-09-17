class Solution {
public:
    void helper(int open,int close,string s, vector<string> &res)
    {
        if(open == 0 && close == 0)
        {
            res.push_back(s);
            cout<<s<<endl;
            return;
        }
        else{
            if(open > 0)
            {
                helper(open-1,close,s+"(",res);
            }
            if(open < close)
            {
                helper(open,close-1,s+")",res);
            }
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res ;
        helper(n,n,"",res);
        return res;
        
    }
};