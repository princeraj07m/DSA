int maxSubArray (int arr[],int size){
    int curSum = 0,maxSum = INT_MIN;

    for (int i : nums){
        curSum += i;
        maxSum = max(curSum, maxSum);
        if(curSum <0){
            curSum = 0;
        }
    }

}