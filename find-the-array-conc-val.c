long long concatenate(int x, int y);

long long findTheArrayConcVal(int* nums, int numsSize){
    if (numsSize==0) {
        return 0;
    }
    
    if (numsSize==1) {
        return nums[0];
    }
    
    int first= *nums;
    int last = nums[numsSize-1];
    
    long long concated = concatenate(first, last);
    
    return concated + findTheArrayConcVal(nums + 1, numsSize - 2);
}

long long concatenate(int x, int y) {
    int pow = 10;
    while(y >= pow)
        pow *= 10;
    return x * pow + y;        
}
