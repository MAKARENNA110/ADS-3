// Copyright 2021 NNTU-CS

int cbinsearch(int* arr, int size, int value) {
    int l = 0, r = size - 1;
    int center;
    int index = -1;
    while ((l <= r)) {
        center = (l + r) / 2;
        if (arr[center] == value) {
            index = center;
        } else if (arr[center] > value) {
            r = center - 1;
        } else {
            l = center + 1;
        }
    }
    int count = 0;
    while (arr[index] == value) {
        count++;
        index--;
    }
    return count;
}
