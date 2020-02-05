int* decompressRLElist(int* nums, int numsSize, int* returnSize){
    int size=0,index=0;
    int *ret;
    
    for(int i=0;i<numsSize;i+=2){
        size+=nums[i];        
    }
    ret =(int *)malloc(sizeof(int )*size);
    *returnSize=size;
    for(int i=0;i<numsSize;i+=2){
        int count =nums[i];
        while(count--){
            ret[index++]=nums[i+1];
        }
    }
    
    return ret ;

}
