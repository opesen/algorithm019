#include <vector>
#include <map>

class Solution {
public:
    std::vector<int> twoSum1(std::vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }

    std::vector<int> twoSum2(std::vector<int>& nums, int target) {
        std::map<int, int> hash;
        for (int i = 0; i < nums.size(); ++i) {
            auto it = hash.find(target - nums[i]);
            if (it != hash.end()) {
                return {it->second, i};
            }
            hash[nums[i]] = i;
        }
        return {};
    }

    std::vector<int> twoSum2(std::vector<int>& nums, int target) {
        unordered_map<int,int> umap;        
        for(int i = 0; i < nums.size(); i++)
        {
            if(umap.find(target-nums[i]) != umap.end())
                return {umap[target-nums[i]], i};        
            umap[nums[i]] = i;
        }
        return {};
    }
};
