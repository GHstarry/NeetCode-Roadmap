// Two Sum

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target){
        unordered_map<int, int> um;

        for(int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];
            if(um.count(complement)){
                return {um[complement], i};
            }
            um[nums[i]] = i;
        }

        return {};
    }
};

int main(){
    vector<int> nums1 = {2, 7, 11, 15};
    vector<int> nums2 = {3,2,4};
    vector<int> nums3 = {3, 3};

    int target1 = 9;
    int target2 = 6;
    int target3 = 6;

    class Solution sol;

    vector<int> solution1 = sol.twoSum(nums1, target1);
    vector<int> solution2 = sol.twoSum(nums2, target2);
    vector<int> solution3 = sol.twoSum(nums3, target3);

    cout << solution1.front() << " : " << solution1.back() << endl;
    cout << solution2.front() << " : " << solution2.back() << endl;
    cout << solution3.front() << " : " << solution3.back();
    
    return 0;
}