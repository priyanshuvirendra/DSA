class Solution {
public:
    int majorityElement(vector<int>& a){
        int cnt=0, cand=0;
        for(int v:a){
            if(cnt==0) cand=v;
            cnt += v==cand?1:-1;
        }
        return cand;
    }
};
