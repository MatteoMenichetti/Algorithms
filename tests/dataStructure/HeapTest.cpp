#include <gtest/gtest.h>
extern "C"{
#include "../../lib/heap.h"
}

TEST(HeapTest, constructNminoreq3){
    ASSERT_EQ((long)construct(2),NULL);
}

TEST(HeapTest, insert) {
    heap *heap = construct(4);

    insert(heap, 2);

    ASSERT_EQ(heap->array[1], 2);

    free(heap);
}

//36 100 17 19

TEST(HeapTest, insert1){
    heap * heap = construct(3);
    int array[] = { 19, 36, 17, 100},sortedArray[] = {100, 36, 17, 19};

    for(int i : array)
        insert(heap, i);

    for (int i = 0; i<4; i++)
        ASSERT_EQ(heap->array[i], sortedArray[i]);
}

TEST(HeapTest, remove){
    heap * heap = construct(4);
    int array[] = { 100, 19, 36, 17}, sortedArray[] = {36, 19, 17};
    for(int i:array) insert(heap, i);

    remove(heap);

    for(int i = 0; i<3; i++)
        ASSERT_EQ(sortedArray[i], heap->array[i]);

}