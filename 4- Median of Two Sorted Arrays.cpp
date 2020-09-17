
class Solution {
public:
   double median_helper(vector<int>& nums1, vector<int>& nums2,int x, int y)
    {
        

        int start = 0;
        int last = x;
        int maxX,maxY,minX,minY,partisionx,partisiony;
        while(start<=last)
        {
        partisionx =(start+last)/2;
        partisiony = ((x+y+1)/2)-partisionx;
    
        maxX=(partisionx==0) ? INT_MIN : nums1[partisionx-1];
        maxY=(partisiony==0) ? INT_MIN : nums2[partisiony-1];
        minX=(partisionx==x) ? INT_MAX : nums1[partisionx];
        minY=(partisiony==y) ? INT_MAX : nums2[partisiony];
            if(maxX<=minY && maxY<=minX)
            {
                if ((x+y)%2==0)
                    return ((max(maxX,maxY)+min(minY,minX))/2.0);
                else
                    return (max(maxX,maxY));
                    
            }
            else if(maxX > minY)
            {
                last=partisionx-1;
            }
            else
            {
                start = partisionx+1;
            }
            
        }
        return (double)0;
    }
public:
 double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //  int x = nums1.size();
        // int y = nums2.size();
        int mid,x,y;
        if(nums1.empty() || nums2.empty())
        {
            if(nums1.empty())
            {
                 y = nums2.size();
                if(y%2 != 0)
                {
                    return (double)nums2[y/2];
                }
                else
                {
                    mid = y/2;
                    return (nums2[mid]+nums2[mid-1])/2.0;
                }
            }
            else
            {
                 x = nums1.size();
                if(x%2 != 0)
                {
                    
                       return (double)nums1[x/2] ;
                 }
                else
                {
                    mid = x/2;
                    return (nums1[mid]+nums1[mid-1])/2.0 ;
                }
            }
        }
         x = nums1.size();
         y = nums2.size();
        if (x>y)
            return median_helper(nums2,nums1,y,x);
        return median_helper(nums1,nums2,x,y);
    }
};