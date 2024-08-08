#include<stdio.h>
#include<stdlib.h>
struct node {
int val;
struct node *left;
struct node *right;
};
struct node *insert(struct node *root, int val){
  struct node *newNode;
  newNode = (struct node *)malloc(sizeof(struct node));
  newNode->val = val;
  newNode->left = NULL;
  newNode->right = NULL;
  if(root==NULL){
    return newNode;
  }
  else{
    if(root->val>val){
      root->left = insert(root->left, val);
    }
    else{
      root->right = insert(root->right, val);
    }
  }
  return root;
}
void inorder(struct node *root){
  if(root!=NULL){
    inorder(root->left);
    printf("%d-->", root->val);
    inorder(root->right);
  }
}
// struct node *smallestNode(struct node *root){
//   if(root== NULL || root->left==NULL){
//     return root;
//   }
//   else{
//     return smallestNode(root->left);
//   }
// }
// struct node *kthsmallestElements(struct node *root){
//   int count;
//   count = 0;
//   struct node *ptr;
//   if(root==NULL){
//     return NULL;
//   }
//   else{
//     ptr = root;
//     while(ptr->left!=NULL){
//       ptr = ptr->left;
//     }
//   }
//   return root;
// }

struct node *smallest(struct node *root){
  struct node *ptr;
  if(root==NULL){
    return NULL;
  }
  else{
    ptr = root;
    while(ptr->left!=NULL){
      ptr = ptr->left;
    }
  }
  
}
int main(){
  struct node *root = NULL;
  struct node *root1 = NULL;
  root = insert(root, 5);
  root = insert(root, 4);
  root = insert(root, 11);
  root = insert(root, 1);
  inorder(root);
  printf("\n%d-->\n", smallest(root)->val);
}