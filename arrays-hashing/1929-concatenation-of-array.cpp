// Pattern: Added elements in ans using 2 loops. Traversing through nums twice and for each traverse adding that element to ans
// Key Insight: I noticed that the number of writes would always be 2n because the array is concatenated with itself and so if it has n elements then n elements will be added to it and hence n + n gets to 2n
// Mistake: A) I rewrote the whole nums again which leetcode already done and didnt return the ans vector
// LC 1929 Concatenation of Array | 2026-10-13 | accepted, 1st submit

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector <int> ans;
        for (auto num: nums){
            ans.push_back(num);
        }
        for (auto& num: nums){
            ans.push_back(num);
        }
        return ans;
    }
};
