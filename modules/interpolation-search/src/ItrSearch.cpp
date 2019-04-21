#include "ItrSearch.h"

ItrSearch::ItrSearch(unsigned* myPtrData, unsigned mySizeData){
    ptrSortedData  = myPtrData;
    sizeData = mySizeData;
}

ItrSearch::ItrSearch(){
    ptrSortedData = NULL;
    sizeData  = 0;
}

ItrSearch::~ItrSearch(){
    ptrSortedData = NULL;
}

long int ItrSearch::GetFindIndex(){
    return findIndex;
}

void ItrSearch::SetSortedData(unsigned* myPtrData, unsigned mySizeData){
    ptrSortedData  = myPtrData;
    sizeData = mySizeData;
}

long int ItrSearch::Search(unsigned toFind){
     
    unsigned mid;
    unsigned left = 0;
    unsigned right = sizeData - 1;

    while (ptrSortedData[left] < toFind && ptrSortedData[right] > toFind) {
        mid = left + ((toFind - ptrSortedData[left]) * (right - left)) / (ptrSortedData[right] - ptrSortedData[left]);

        if (ptrSortedData[mid] < toFind)
            left = mid + 1;
        else if (ptrSortedData[mid] > toFind)
            right = mid - 1;
        else {
            findIndex = mid;
            return findIndex;
        }
    }

    if (ptrSortedData[left] == toFind){
        findIndex = left;
        return findIndex;
    }
    if (ptrSortedData[right] == toFind){
        findIndex = right;
        return findIndex;
    }

    findIndex = -1;
    return findIndex; // Not found
}

long int ItrSearch::Search(unsigned toFind, unsigned myLeft, unsigned myRight){
     
    unsigned mid;
    unsigned left = myLeft;
    unsigned right = myRight;

    while (ptrSortedData[left] < toFind && ptrSortedData[right] > toFind) {
        mid = left + ((toFind - ptrSortedData[left]) * (right - left)) / (ptrSortedData[right] - ptrSortedData[left]);

        if (ptrSortedData[mid] < toFind)
            left = mid + 1;
        else if (ptrSortedData[mid] > toFind)
            right = mid - 1;
        else {
            findIndex = mid;
            return findIndex;
        }
    }

    if (ptrSortedData[left] == toFind){
        findIndex = left;
        return findIndex;
    }
    if (ptrSortedData[right] == toFind){
        findIndex = right;
        return findIndex;
    }

    findIndex = -1;
    return findIndex; // Not found
}