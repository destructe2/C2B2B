#include <iostream>
#include <vector>

#include "variableSwap.h"
#include "generateRandomNumber.h"
#include "twoSum.h"

int main() {
    std::cout << "variables swapped: ";
    variableSwap();

    std::cout << "number generated 0-9: ";
    std::cout << generateRandomNumber() << std::endl;

    vector<int> nums = {2, 7, 11, 15};
    int target = 18;
    vector<int> result = twoSum(nums, target);
    cout << "Indices: ";
    for (int index :result) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}
