// Top K Frequent Elements

#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution{
public:
    vector<int> topKFrequent(vector<int>& nums, int k){
        unordered_map<int, int> um;

        for(int& num : nums){
            um[num]++;
        }

        priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int, int>>> minHeap;

        for(auto& pair : um){
            int num = pair.first;
            int count = pair.second;
            minHeap.push({count, num});
            if(minHeap.size() > k){
                minHeap.pop();
            }
        }
       
        vector<int> result;

        while(!minHeap.empty()){
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }

        return result;
    }
};

int main(){
    vector<int> nums = {1,1,1,2,2,3};
    int k = 1;

    Solution sol;

    vector<int> welp = sol.topKFrequent(nums, k);

    for(const auto& n : welp){
        cout << n << " ";
    }
    
    return 0;
}