#include "../include/binary_search.h"

int binarySearch(const std::vector<int>& arr, int target, int* stepCount) {
    int left = 0, right = static_cast<int>(arr.size()) - 1;
    while (left <= right) {
        if (stepCount) (*stepCount)++; // Increment counter
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

