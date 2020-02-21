#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <map>
#include <string>
#include <vector>
#include <iostream>
#include <queue>
#include <stack>

struct TreeNode{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class BST { 
public:
BST(){};
  BST(std::vector<int> initial_values){
    root_=nullptr;
    for(const auto &n: initial_values){
      push(n);
    }
  };
  void insert(TreeNode *root, int v);
  void push(int key); 
  int maxdepth_(TreeNode *node);
  int maxdepth();
  void inorderre(TreeNode *node, std::vector<int> &vec);
  std::vector<int> inorder_re();
  std::vector<int> inorder_nonre();

  // private:
  TreeNode *root_; 
};

#endif