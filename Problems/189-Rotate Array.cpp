class Solution {
public:
    void rev(vector<int>& nums,int start,int end){
        int i = start, j = end-1,temp;
        while(i < j){
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n ==0) return;
        k = k%n;
        if (k ==0) return;
        rev(nums,0,n);
        rev(nums,0,k);
        rev(nums,k,n);
    }
};  