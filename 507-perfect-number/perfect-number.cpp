class Solution {
public:
    bool checkPerfectNumber(int num) {
        int count =0;
        if (num == 1) return false;
        for (int i =1;i <=(num/2)+1;++i){
            if (num%i==0){
                count = count + i;
            }
        }
        if (count == num){
            return true;
        }
        return false;
    }
};