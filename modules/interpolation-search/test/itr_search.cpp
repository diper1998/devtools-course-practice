// Copyright 2019 Perov Dima

#include <gtest/gtest.h>

#include "include/ItrSearch.h"

class ItrSearchTest : public ::testing::Test {};

TEST_F(ItrSearchTest, Check_Size) {
    // Arrange
    unsigned myData[] = {4, 5, 6, 33, 200};
    unsigned mySize = 5;

    // Act
    ItrSearch mySearch(myData, mySize);

    // Assert
    EXPECT_EQ(mySize, mySearch.GetSizeData()); 
}

TEST_F(ItrSearchTest, Check_Ptr) {
    // Arrange
    unsigned myData[] = {4, 5, 6, 33, 200};
    unsigned mySize = 5;

    // Act
    ItrSearch mySearch(myData, mySize);

    // Assert
    EXPECT_EQ(myData, mySearch.GetPtrData());
}

TEST_F(ItrSearchTest, Can_Set) {
    // Arrange
    unsigned myData[] = {4, 5, 6, 33, 200};
    unsigned mySize = 5;
    ItrSearch mySearch;
    
    // Act
    mySearch.SetSortedData(myData, mySize);

    // Assert
    EXPECT_EQ(myData, mySearch.GetPtrData());
}

TEST_F(ItrSearchTest, Can_Find) {
    // Arrange
    unsigned myData[] = {4, 5, 6, 33, 200};
    unsigned mySize = 5;
    unsigned findIndex = 0;
    ItrSearch mySearch(myData, mySize);

    // Act
    findIndex = mySearch.Search(6);

    // Assert
    EXPECT_EQ(2, findIndex);
}

TEST_F(ItrSearchTest, Can_Undefined) {
    // Arrange
    unsigned myData[] = {4, 5, 6, 33, 99, 200, 248, 2888, 9992};
    unsigned mySize = 9;
    unsigned findIndex = 0;
    ItrSearch mySearch(myData, mySize);

    // Act
    findIndex = mySearch.Search(69);

    // Assert
    EXPECT_EQ(-1, findIndex);
}

TEST_F(ItrSearchTest, Can_Find_With_Param) {
    // Arrange
    unsigned myData[] = {4, 5, 6, 6, 6, 33, 99, 200, 248, 2888, 9992};
    unsigned mySize = 9;
    unsigned findIndex = 0;
    ItrSearch mySearch(myData, mySize);

    // Act
    findIndex = mySearch.Search(6, 4, 10);

    // Assert
    EXPECT_EQ(4, findIndex);
}

TEST_F(ItrSearchTest, Can_Undefind_With_Param) {
    // Arrange
    unsigned myData[] = {4, 5, 6, 6, 6, 33, 99, 200, 248, 2888, 9992};
    unsigned mySize = 9;
    unsigned findIndex = 0;
    ItrSearch mySearch(myData, mySize);

    // Act
    findIndex = mySearch.Search(6, 5, 10);

    // Assert
    EXPECT_EQ(-1, findIndex);
}
