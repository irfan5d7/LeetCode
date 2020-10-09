class Solution {
public:
    void swap(int *a,int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    vector<int> sortArrayByParity(vector<int>& A) {
        int  n = A.size();
        int i = 0,j = n-1;
        while (i<j){
            while(i<j && (A[i]&1) == 0) i++;
            while((A[j]&1) && i<j) j--;
            if(i<j)
                swap(&A[i],&A[j]);
            i++;
            j--;
        }
        return A;
        
    }
};


------------------------------------------------------------------------------------------------------------------



class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int  n = A.size();
        vector<int> res(n,0);
        int i = 0,j = n-1;
        for(int a:A){
            if(a&1)
                res[j--] = a;
            else
                res[i++] = a;
        }
        return res;
        
    }
};