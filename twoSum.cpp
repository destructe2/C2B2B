//
// Created by Fadi on 2/2/2026.
//
#include <vector>
#include "twoSum.h"
using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
    int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
}