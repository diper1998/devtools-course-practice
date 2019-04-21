#ifndef MODULES_ITRSEARCH_INCLUDE_ITRSEARCH_H_
#define MODULES_ITRSEARCH_INCLUDE_ITRSEARCH_H_

#include<string>

class ItrSearch {
    
    protected:

    unsigned* ptrSortedData;
    size_t sizeData;
    long int findIndex;
        
    public:
    
    ItrSearch(unsigned* myPtrData, unsigned  mySizeData);
    ItrSearch();
    ~ItrSearch();
    long int GetFindIndex();
    void SetSortedData(unsigned* myPtrData, unsigned mySizeData);
    long int Search(unsigned toFind);
    long int Search(unsigned toFind, unsigned myLeft, unsigned myRight);

};

#endif 