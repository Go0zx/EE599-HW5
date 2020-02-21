#include "src/lib/solution.h"
#include <iostream>
#include <map>
#include <vector>

int main() {
  // Print Hellow world!
  std::vector<int>vec1={8,3,2,5,4,7,10,14,12};
  BST b(vec1);
  // b.erase(8);
  // std::cout<<b.find(18)<<std::endl;
  // std::cout<<b.root_<<std::endl;
  std::cout<<b.maxdepth()<<std::endl;
  std::vector<int>vv=b.inorder_re();
  for(const auto &n: vv){
    std::cout<<n<<' ';
  }
  std::cout<<std::endl;
  std::vector<int>vv2=b.inorder_nonre();
  for(const auto &n: vv2){
    std::cout<<n<<' ';
  }
  std::cout<<std::endl;
  std::vector<int>vec2={3,2,20,27,15};
  BST c(vec2);
  std::vector<int>v=c.inorder_re();
  std::vector<int>v2=c.inorder_nonre();
  
  for(const auto &n: v){
    std::cout<<n<<' ';
  }
  std::cout<<std::endl;
  for(const auto &n: v2){
    std::cout<<n<<' ';
  }
  // std::cout<<b.root_->val<<std::endl;
  // std::cout<<b.root_->left->val<<std::endl;
  // std::cout<<b.root_->left->right->val<<std::endl;
  // std::cout<<b.root_->left->right->left->val<<std::endl;
  // std::cout<<b.root_->right->right->left->val<<std::endl;
  // std::cout<<b.root_->right->right->right->val<<std::endl;
  // for(auto n: vec){
  //   std::cout<<n<<' ';
  // }
  return EXIT_SUCCESS;
}