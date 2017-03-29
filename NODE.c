//This part of code I did not wrote. I found it in my research. I was havving trouble with my functions and 
//was getting random errors. Stack overflow had a solution for my issues and it was this.
#include<stdio.h>
#include<stdlib.h>

struct NODE{
  int key;
  struct NODE *leftChild;
  struct NODE *rightChild;
}

  int main(){
    struct NODE *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    order(root);
    return 0;
  }


struct NODE *node(int item){
  struct NODE *temp = (struct NODE *)malloc(sizeof(struct NODE));
  temp->key = item;
  temp->leftChild = temp->rightChild = NULL;
  return temp;
}


void order(struct NODE *root){
  if(root != NULL){
    order(root->leftChild);
    printf("%d \n", root->key);
    order(root->rightChild);
  }
}


struct NODE* insert(struct NODE* node, int key){
  if(NODE == NULL)
    return node(key);

  if(key < node->key)
    node->leftChild = insert(node->leftChild, key);
  else if(key > node->key)
    node->rightChild = insert(node->rightChild, key);

  return node;
}
