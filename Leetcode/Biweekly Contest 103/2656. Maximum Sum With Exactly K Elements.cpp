
class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ele = nums.back();
        int sum = 0;
        for(int i=1;i<=k;i++){
            sum += ele;
            ele++;
        }
        return sum;
    }
};