

int missingNumber(int* nums, int numsSize){

    
  int i, total;
  total = numsSize*(numsSize+1) / 2;
  for (i = 0; i < numsSize; i++)
    total -= nums[i];
  return total;

    
    
    
    
    
}