

int search(int* nums, int numsSize, int target){
    int r=numsSize-1;
    int l=0;
    while(r>=l){
        int mid=(r+l)/2;
        if(nums[mid]==target){
            return mid;
        }else if(nums[mid]>target){
            r=mid-1;
        }else{
            l=mid+1;
        }
        
    }
    return -1;
}

