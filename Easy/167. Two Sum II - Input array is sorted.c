int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    
    int *ret =malloc(sizeof(int)*(*returnSize=2));
    int l=0;
    int r=numbersSize-1;
    
    while(r>=l){
        int mid =(r+l)/2;
        if((numbers[r]+numbers[l])==target){
            ret[0]=l+1;
            ret[1]=r+1;
            break;
        }else if(numbers[mid]>target){
            r=mid;
        }else if((numbers[r]+numbers[l])<target){
            l++;
        }else{
            r--;
        }
            
    }
    return ret;
}