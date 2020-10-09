class Solution {
public:
    double average(vector<int>& salary) {
        int mx = INT_MIN;
        int mn = INT_MAX;
        int n = salary.size();
        int res = 0;
        for(int i=0;i<n;i++){
            res+=salary[i];
            if(salary[i]>mx)
                mx = salary[i];
            if(salary[i]<mn)
                mn = salary[i];
        }
        return (double)(res-mn-mx)/(n-2);
    }
};