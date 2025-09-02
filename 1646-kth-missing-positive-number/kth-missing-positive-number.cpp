class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int start =0;
        int end = arr.size()-1;
        int ans = arr.size();
        while(start <=end){
            int mid = start + (end - start)/2;
            int result = arr[mid]-mid-1;
            if (result >= k){
                ans  = mid;
                end = mid-1;
            }
            
            else start = mid +1;
        }
        return ans+k;
    }
};