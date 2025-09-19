#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canShip(const vector<int>& weights, int D, long long cap) {
        int days = 1;
        long long curr = 0;
        for (int w : weights) {
            if (curr + w <= cap) {
                curr += w;
            } else {
                days++;
                curr = w;
                if (days > D) return false;
            }
        }
        return true;
    }
    
    int shipWithinDays(vector<int>& weights, int D) {
        long long low = 0, high = 0;
        for (int w : weights) {
            low = max(low, (long long)w);
            high += w;
        }
        while (low < high) {
            long long mid = low + (high - low) / 2;
            if (canShip(weights, D, mid)) high = mid;
            else low = mid + 1;
        }
        return (int)low;
    }
};
