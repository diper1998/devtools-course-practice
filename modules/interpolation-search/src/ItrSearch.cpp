// Copyright 2019 Perov Dima

#include "include/ItrSearch.h"

ItrSearch::ItrSearch(unsigned* myPtrData, unsigned mySizeData) {
    ptrData  = myPtrData;
    sizeData = mySizeData;
}

ItrSearch::ItrSearch() {
    ptrData = NULL;
    sizeData  = 0;
}

ItrSearch::~ItrSearch() {
    ptrData = NULL;
}

int ItrSearch::GetFindIndex() {
    return findIndex;
}

unsigned ItrSearch::GetSizeData() {
    return sizeData;
}

unsigned* ItrSearch::GetPtrData() {
    return ptrData;
}

void ItrSearch::SetSortedData(unsigned* myPtrData, unsigned mySizeData) {
    ptrData  = myPtrData;
    sizeData = mySizeData;
}

int ItrSearch::Search(unsigned toFind, unsigned myLeft, unsigned myRight) {
    unsigned left = myLeft;

    if (myRight == 0)
        myRight = sizeData - 1;

    unsigned right = myRight;

    while (ptrData[left] < toFind && ptrData[right] > toFind) {
        unsigned mid = left + ((toFind - ptrData[left]) *
        (right - left)) / (ptrData[right] - ptrData[left]);

        if (ptrData[mid] < toFind) {
            left = mid + 1;
        } else if (ptrData[mid] > toFind) {
            right = mid - 1;
        } else {
            findIndex = mid;
            return findIndex;
        }
    }

    if (ptrData[left] == toFind) {
        findIndex = left;
        return findIndex;
    }
    if (ptrData[right] == toFind) {
        findIndex = right;
        return findIndex;
    }

    findIndex = -1;
    return findIndex;  // Not found
}
