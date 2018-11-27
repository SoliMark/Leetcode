/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int i;
    
    int *ret = malloc((*returnSize = 0) * sizeof(int));
    for(i=left;i<=right;++i){       
        int digit=i;
        int c=1;
        while(digit){   
            if((digit%10==0)||(i%(digit%10)!=0)){
                    c=0;
                }
                digit/=10;
        }
        if(c){
            ret = realloc(ret, ++*returnSize * sizeof(int));
			ret[*returnSize - 1] = i;
                
        }                   
    }
    return ret ;
    
}