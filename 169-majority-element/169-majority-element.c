int majorityElement(int* nums, int numsSize){
    
    int major=0,c=1,i;
    int n=numsSize;
    for(i=1;i<n;i++)
    {
       if (nums[major]==nums[i]){
            c++;
          }
        else
            c--;
        if (c==0)
        {
            major=i;
            c=1;
        }
    }
    return nums[major];
}