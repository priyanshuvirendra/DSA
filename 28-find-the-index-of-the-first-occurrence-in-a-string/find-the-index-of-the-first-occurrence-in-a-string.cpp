class Solution {
public:
    int strStr(string hay, string needle){
        if(needle.empty()) return 0;
        for(int i=0;i+needle.size()<=hay.size();++i)
            if(hay.substr(i,needle.size())==needle) return i;
        return -1;
    }
};