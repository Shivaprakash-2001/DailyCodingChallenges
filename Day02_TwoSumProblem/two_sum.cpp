#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // Function to return indices of two numbers such that they add up to target
    vector<int> twoSum(vector<int>& nums, int target) {
        // Brute-force approach: check every pair
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] == target - nums[i]) {
                    return {i, j}; // Return indices when a match is found
                }
            }
        }
        return {}; // Return empty if no match found
    }
};

int main() {
    // Example test case
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    Solution solution;
    vector<int> result = solution.twoSum(nums, target);

    // Displaying result
    if (!result.empty()) {
        cout << "Indices found: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No two sum solution found." << endl;
    }

    return 0;
}