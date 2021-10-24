class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size())
        {
            vector<int> temp = nums1;
            nums1 = nums2;
            nums2 = temp;
        }
        int lo = 0;
        int hi = nums1.size();
        int te = nums1.size()+nums2.size();
        
        while(lo<=hi)
        {
            
            int aleft = (lo+hi)/2;
            int bleft = (te+1)/2 - aleft;
            
            int alm1 = aleft==0 ? INT_MIN : nums1[aleft-1];
            int al = aleft==nums1.size() ? INT_MAX : nums1[aleft];
            int blm1 = bleft==0 ? INT_MIN : nums2[bleft-1];
            int bl = bleft==nums2.size() ? INT_MAX : nums2[bleft];
            if(alm1<=bl && al>=blm1)
            {
                 double median = 0;
                 if(te%2==0)
                 {
                     median = (max(alm1,blm1)+min(al,bl))/2.0;
                 }
                else
                {
                     median = max(alm1,blm1);   
                }
                
                return median;
            }
            else
            {
                if(alm1>bl)
                {
                    hi = aleft-1;
                }
                else
                {
                    lo = aleft+1;
                }
            }
        }
        return 0;
    }
};
