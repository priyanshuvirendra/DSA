class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int, vector<int>> mp;
        vector<vector<int>> result;

        for (int i = 0; i < groupSizes.size(); i++) {
            int size = groupSizes[i];
            mp[size].push_back(i);

            // If the group is full, move it to result
            if (mp[size].size() == size) {
                result.push_back(mp[size]);
                mp[size].clear(); // reset for next group
            }
        }

        return result;
    }
};
