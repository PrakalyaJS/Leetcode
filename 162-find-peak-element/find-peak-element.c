/*int findPeakElement(int* nums, int n) {
    int i=0;
    for(i=0;i<n-1;i++)
    {
        if(nums[i]>nums[i+1])
        {
            return i;
        }
    }
    return i;
}*/

int findPeakElement(int* nums, int n) {
    int left =0,right=n-1;
    while(left<right)
    {
        int mid = (left+right)/2;
        if(nums[mid]>nums[mid+1])
        {
            right=mid;
        }
        else
        {
            left= mid +1;
        }
    }
    return left;
}