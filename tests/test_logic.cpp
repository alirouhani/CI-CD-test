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
