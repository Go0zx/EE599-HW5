#include "solution.h"

void BST::push(int key){
  TreeNode *next;
  TreeNode *pre;
  int flag;
  next=root_;
  if(root_==nullptr){
    root_ = new TreeNode(key);
    return;
  }
  while(next!=nullptr){
    if(key < next->val){
      pre=next;
      next=next->left;
      flag=0;
    }
    else if(key > next->val){
      pre=next;
      next=next->right;
      flag=1;
    }
  } 
  if(flag==0) {pre->left=new TreeNode(key);}
  if(flag==1) {pre->right=new TreeNode(key);}
  
}

int BST::maxdepth_(TreeNode *node){
  if(node==nullptr){
    return 0;
  }
  else{
    int left = maxdepth_(node->left);
    int right = maxdepth_(node->right);
    if(right > left){
      return (++right);
    }
    else{
      return(++left);
    }
  }
}
int BST::maxdepth(){
  return maxdepth_(root_);
}

void BST::inorderre(TreeNode *node,std::vector<int> &vec){
  if(node!=nullptr){
    inorderre(node->left,vec);
    vec.push_back(node->val);
    inorderre(node->right,vec);
  }
}
std::vector<int> BST::inorder_re(){
  std::vector<int> v={};
  inorderre(root_,v);
  return v;
}
std::vector<int> BST::inorder_nonre(){
  std::stack<TreeNode *> st;
  TreeNode * node = root_;
  std::vector<int> v={};

  while(node!=nullptr || !st.empty()){
    while(node!=nullptr){
      st.push(node);
      node=node->left;
    }
    node=st.top();
    st.pop();
    v.push_back(node->val);
    node=node->right;
  }
  return v;

}