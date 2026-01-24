class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
    vector<int> minCnt(26, INT_MAX);
    for(auto &w:words){
        vector<int> cnt(26,0);
        for(char c:w) cnt[c-'a']++;
        for(int i=0;i<26;i++)
            minCnt[i]=min(minCnt[i],cnt[i]);
    }
    vector<string> res;
    for(int i=0;i<26;i++)
        while(minCnt[i]--)
            res.push_back(string(1,'a'+i));
    return res;
}

};