class Solution {
public:
    int subtractProductAndSum(int n) {
        int digit, sum =0,product=1,result;
       
       
        while (n >0){
            digit = (n %10);
            n= n/10;
            sum = sum + digit;
            product = product * digit;

        }

        return result = product - sum ;
    }
};