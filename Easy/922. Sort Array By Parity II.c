/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParityII(int* A, int ASize, int* returnSize) {
    int i,odd =1,even=0;
    *returnSize=ASize;
    int *ret= (int *)malloc(sizeof(int)*ASize);
    for(i=0;i<*returnSize;++i){
        if(A[i]%2==0){
            ret[even]=A[i];
            even+=2;  
        }else{
            ret[odd]=A[i];
            odd+=2;
        }
    }
    return ret;
}