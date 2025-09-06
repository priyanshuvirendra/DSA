class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Step 1: Sort array
        for (int i = nums.size() - 1; i >= 2; i--) {
            int a = nums[i-2], b = nums[i-1], c = nums[i];
            if (a + b > c) { // Step 2: Check triangle rule
                return a + b + c;
            }
        }
        return 0; // No valid triangle
    }
};
