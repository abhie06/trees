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
  if(root==NULL){
    root = newNode;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
  }
  else{
    if(newNode->val>val){
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
int main(){
  struct node *root = NULL;
  root = insert(root, 5);
  root = insert(root, 4);
  root = insert(root, 11);
  inorder(root);
}