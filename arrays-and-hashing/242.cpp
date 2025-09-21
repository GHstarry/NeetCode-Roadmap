// Valid Anagram
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count;

        for(char c : s) count[c]++;
        for(char c : t) count[c]--;

        for(auto const& p : count){
            if(p.second != 0) return false;
        }

        return true;
        
    }
};

int main(){
    string uno = "kitty";
    string dos = "tytik";

    Solution sol;

    cout << boolalpha << sol.isAnagram(uno, dos);

    return 0;
}