#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(inorder, Returninorder1) {
  std::vector<int>vec={8,3,2,5,4,7,10,14,12};
  BST b(vec);
  std::vector<int>v1=b.inorder_re();
  std::vector<int>v2=b.inorder_nonre();
  std::vector<int>expected={2,3,4,5,7,8,10,12,14};
  EXPECT_EQ(v1, expected);
  EXPECT_EQ(v2, expected);

}


TEST(inorder, Returninorder2) {
  std::vector<int>vec={3,2,20,27,15};
  BST b(vec);
  std::vector<int>v1=b.inorder_re();
  std::vector<int>v2=b.inorder_nonre();
  std::vector<int>expected={2,3,15,20,27};
  EXPECT_EQ(v1, expected);
  EXPECT_EQ(v2, expected);

}

