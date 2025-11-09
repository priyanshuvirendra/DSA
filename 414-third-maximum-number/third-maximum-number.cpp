class Solution {
public:
    int thirdMax(vector<int>& a) {
        long a1=LONG_MIN,a2=LONG_MIN,a3=LONG_MIN;
        for(long x: a){
            if(x==a1||x==a2||x==a3) continue;
            if(x>a1){ a3=a2; a2=a1; a1=x; }
            else if(x>a2){ a3=a2; a2=x; }
            else if(x>a3) a3=x;
        }
        return a3==LONG_MIN? (int)a1 : (int)a3;
    }
};
