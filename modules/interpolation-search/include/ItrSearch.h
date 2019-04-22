// Copyright 2019 Perov Dima

#ifndef MODULES_INTERPOLATION_SEARCH_INCLUDE_ITRSEARCH_H_
#define MODULES_INTERPOLATION_SEARCH_INCLUDE_ITRSEARCH_H_

#include<string>

class ItrSearch {
 protected:
    unsigned* ptrData;
    unsigned sizeData;
    int findIndex;

 public:
    ItrSearch(unsigned* myPtrSortedData, unsigned  mySizeData);
    ItrSearch();
    ~ItrSearch();
    int GetFindIndex();
    unsigned GetSizeData();
    unsigned* GetPtrData();
    void SetSortedData(unsigned* myPtrData, unsigned mySizeData);
    int Search(unsigned toFind, unsigned myLeft = 0, unsigned myRight = 0);
};

#endif  // MODULES_INTERPOLATION_SEARCH_INCLUDE_ITRSEARCH_H_"
