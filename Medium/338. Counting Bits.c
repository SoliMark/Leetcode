/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int num, int* returnSize) {
    int i;
    *returnSize=num+1;
    int *p=malloc(sizeof(int)*(num+1));
    for(i=0;i<=num;++i){
        int temp=i,count=0;
        while(temp){
            if(temp&1)
                count++;
            temp>>=1;
        }
        p[i]=count;
    }
    return p;
    
}