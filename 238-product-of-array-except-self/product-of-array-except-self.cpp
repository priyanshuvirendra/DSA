class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        int n=a.size();
        vector<int> res(n,1);
        int pref=1;
        for(int i=0;i<n;i++){ res[i]=pref; pref*=a[i]; }
        int suf=1;
        for(int i=n-1;i>=0;i--){ res[i]*=suf; suf*=a[i]; }
        return res;
    }
};
