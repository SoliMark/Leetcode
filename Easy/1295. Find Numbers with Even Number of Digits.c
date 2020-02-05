

int findNumbers(int* nums, int numsSize){
    int ret =0;
    for(int i=0;i<numsSize;++i){
        if(calcdigit(nums[i])%2==0)ret++;
    }
    return ret ;
}
int calcdigit(int num){
    
    int digit=0;
    while(num){
        digit++;
        num=num/10;
    }
    return digit;
    
}

