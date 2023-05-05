class Solution {
public:
    
    typedef long long ll;
    
    long long countOperationsToEmptyArray(vector<int>& nums) {
        int nn = nums.size();
        ll n = (ll)nn;
        vector<pair<int,int>>vec;
        for(int i=0;i<n;i++){
            vec.push_back({nums[i],i});
        }
        sort(vec.begin(),vec.end());
        ll sum = n;
        ll cnt = 1LL;
        for(int i=1;i<nn;i++){
            if(vec[i].second > vec[i-1].second){
                cnt++;
                continue;
            }
            else{
                sum += (ll)(n-cnt);
                cnt++;
                continue;
            }
        }
        return sum;
    }
};