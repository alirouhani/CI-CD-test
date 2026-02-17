#include <gtest/gtest.h>
#include "binary_search.h"

TEST(BinarySearchTest, FindsElement) {
    std::vector<int> data = {1, 2, 3, 4, 5};
    EXPECT_EQ(binarySearch(data, 3), 2);
}

TEST(BinarySearchTest, HandlesMissingElement) {
    std::vector<int> data = {1, 2, 3, 4, 5};
    EXPECT_EQ(binarySearch(data, 10), -1);
}

TEST(BinarySearchTest, IsLogarithmicComplexity) {
    std::vector<int> data(1024); // 2^10 elements
    for(int i=0; i<1024; ++i) data[i] = i;

    int steps = 0;
    binarySearch(data, 1, &steps);

    // log2(1024) is 10. We allow 11 for rounding/off-by-one.
    // If you divide by 3, this will be much higher and FAIL.
    EXPECT_LE(steps, 11); 
}
