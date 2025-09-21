// Contains Duplicates
#include <iostream>
#include <unordered_set>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> us;

        for(int i = 0; i < nums.size(); i++){
            if(us.count(nums[i])){
                return true;
            }
            us.insert(nums[i]);
        }

        return false;
    }
};

int main(){
    Solution sol;

    // Test case 1: Array with duplicates
    vector<int> nums1 = {1, 2, 3, 1};
    cout << "Test 1 - [1,2,3,1]: " << (sol.containsDuplicate(nums1) ? "true" : "false") << endl;

    // Test case 2: Array without duplicates
    vector<int> nums2 = {1, 2, 3, 4};
    cout << "Test 2 - [1,2,3,4]: " << (sol.containsDuplicate(nums2) ? "true" : "false") << endl;

    // Test case 3: Empty array
    vector<int> nums3 = {};
    cout << "Test 3 - []: " << (sol.containsDuplicate(nums3) ? "true" : "false") << endl;

    return 0;
}