int* runningSum(int* nums, int ns, int* rs) {
    int * res= malloc(sizeof(int)*ns);
    *rs = ns;
    res[0]=nums[0];
    for(int i=1;i<ns;i++)
    {
        res[i]=res[i-1]+nums[i];
    }
    return res;
}