#include <gtest/gtest.h>

extern "C" {
#include "../lib/quickSort.h"
}

TEST(QuickSort, sort) {
    int array[4] = {1, 2, 3, 0};
    sort(array, 4);
    for (int i = 0; i < 4; i++)
        EXPECT_EQ(array[i], i);
}

TEST(QuickSort, sort1) {
    int array[4] = {0, 1, 2, 3};
    sort(array, 4);
    for (int i = 0; i < 4; i++)
        EXPECT_EQ(array[i], i);
}

TEST(QuickSort, sort2) {
    int array[4] = {3, 2, 1, 0};
    sort(array, 4);
    for (int i = 0; i < 4; i++)
        EXPECT_EQ(array[i], i);
}

TEST(QuickSort, sort3) {
    int array[4] = {3, 2, 1, 2}, arraySorted[4] = {1, 2, 2, 3};
    sort(array, 4);
    for (int i = 0; i < 4; i++)
        EXPECT_EQ(array[i], arraySorted[i]);
}

TEST(QuickSort, sort4) {
    int array[4] = {-1, 1, 0, 2}, arraySorted[4] = {-1, 0, 1, 2};
    sort(array, 4);
    for (int i = 0; i < 4; i++)
        EXPECT_EQ(array[i], arraySorted[i]);
}

TEST(QuickSort, partition) {
    int array[4] = {3, 2, 1, 0}, mid_array[4] = {0, 3, 2, 1};
    int i = partition(array, 0, 3);
    ASSERT_EQ(i, 0);
    for (int j = 0; j < 4; j++)
        ASSERT_EQ(array[i], mid_array[i]);
}

TEST(QuickSort, swap) {
    int array[3] = {2, 1, 0};
    swap(array, 0, 2);
    for (int i = 0; i < 3; i++)
        ASSERT_EQ(array[i], i);
}