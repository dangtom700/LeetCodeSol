/*
1. Two Sum
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Status: DONE
*/

#include <iostream>
#include <vector>
#include <algorithm>

int find_index(const std::vector<int> numbers, const int target) {
    auto it = std::find(numbers.begin(), numbers.end(), target);
    if (it != numbers.end()) return std::distance(numbers.begin(), it);
    return -1;
}
int main(){
    const std::vector<int> nums = {2,7,11,15};
    std::vector<int> answer;
    const int target = 9;
    for(int i = 0; i< nums.size(); i++){
        int other_num = target - nums[i];
        int index_other_number = find_index(nums, other_num);
        if (index_other_number != -1){
            answer.push_back(i);
            answer.push_back(index_other_number);
            break;
        }
    }
    for(int i : answer) std::cout << i << std::endl;

    return 0;
}