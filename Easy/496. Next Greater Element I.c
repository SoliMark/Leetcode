/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElement(int* findNums, int findNumsSize, int* nums, int numsSize, int* returnSize) {
    int *ret =malloc(sizeof(int)*findNumsSize);
    int i,j;
    *returnSize=findNumsSize;
    for(i=0;i<findNumsSize;++i){
        int c=0;
        ret[i]=-1;
        for(j=0;j<numsSize;++j){
            if(findNums[i]==nums[j])
                c=1;
            if(c&&nums[j]>findNums[i]){
                ret[i]=nums[j];
                break;             
            }
        }
    }
    return ret;
    
}