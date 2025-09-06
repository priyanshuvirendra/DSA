class Solution {
public:
    bool isPowerOfTwo(int n) {
        //while (n%2==0){
           // n=n/2;
            for (int i =0;i<=31;i++){
                if (pow(2,i)==n) return true;
            }
        //}

        return false;
    }
};