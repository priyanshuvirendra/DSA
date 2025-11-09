class Solution {
public:
    int maxProfit(vector<int>& p){
        int minp=INT_MAX, res=0;
        for(int x:p){ minp=min(minp,x); res=max(res, x-minp); }
        return res;
    }
};
