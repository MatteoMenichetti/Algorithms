#include "../lib/common.h"

int sort(int *array, int length) {
    int o = control(array, length), min;

    if(o!=EXIT_SUCCESS)return o;

    for (int i = 0; i < length - 2; i++) {
        min = i;
        for (int j = i + 1; j < length; j++) {
            if (array[j] < array[min])
                min = j;
        }
        if (min != i) {
            int t = array[min];
            array[min] = array[i];
            array[i] = t;
        }
    }
    return EXIT_SUCCESS;
}