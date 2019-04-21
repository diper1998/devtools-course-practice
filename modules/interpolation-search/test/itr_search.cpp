// Copyright 2019 Perov Dima

#include <gtest/gtest.h>

#include "include/ItrSearch.h"

class ItrSearchTest : public ::testing::Test {};

TEST_F(ItrSearchTest, Can_Searc) {
    // Arrange
    unsigned myData[] = {4, 5, 6, 33, 200};
    unsigned mySize = 5;

    // Act
    ItrSearch mySearch(myData, mySize);

    // Assert
    EXPECT_EQ(-1, mySearch.Search(2));
    
}


