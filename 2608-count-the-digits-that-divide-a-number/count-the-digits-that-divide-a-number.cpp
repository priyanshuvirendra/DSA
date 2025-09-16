class Solution {
public:
    int countDigits(int num) {
        int count1 =0;
        int temp = num;
        while (num !=0){
        int x = num % 10;
        
        if (temp %x ==0){
            count1 = count1 + 1 ;

        }
        num= num /10;
        }

        return count1 ;
    }
};