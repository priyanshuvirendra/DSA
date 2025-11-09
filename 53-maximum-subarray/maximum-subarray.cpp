class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int best = INT_MIN, cur = 0;
        for(int x: a) { cur = max(x, cur + x); best = max(best, cur); }
        return best;
    }
};
