class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        int n=nums.size();
        vector<int> sorted=nums;
        sort(sorted.begin(), sorted.end());
        sorted.erase(unique(sorted.begin(), sorted.end()), sorted.end());
        auto idx=[&](int x){ return int(lower_bound(sorted.begin(), sorted.end(), x) - sorted.begin()) + 1; }; // 1-based
        int m = sorted.size();
        vector<int> bit(m+1,0);
        auto add=[&](int i){ for(; i<=m; i+=i&-i) bit[i]++; };
        auto sum=[&](int i){ int s=0; for(; i>0; i-=i&-i) s+=bit[i]; return s; };
        vector<int> res(n);
        for(int i=n-1;i>=0;--i){
            int id=idx(nums[i]);
            res[i] = sum(id-1);
            add(id);
        }
        return res;
    }
};
