/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    *returnSize=1;
    int size=nums1Size>nums2Size?nums1Size:nums2Size;
    int * ret = malloc(sizeof(int)*size);
    
    for(int i=0;i<nums1Size;++i){
        for(int j=0;j<nums2Size;++j){
            if(nums1[i]==nums2[j]){
                int check=0;
                for(int k=0;k<*returnSize-1;++k){
                    if(nums1[i]==ret[k]){
                        check=1;
                        break;
                    }
                }
                if(!check){
                    ret[ *returnSize-1 ]=nums1[i];
                    *returnSize+=1;
                }
                break;
            }
        }
    }
    *returnSize=*returnSize-1;
    return ret;
    
}