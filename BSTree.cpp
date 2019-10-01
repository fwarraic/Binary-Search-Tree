/*
 * BSTree.cpp
 *
 *  Created on: Mar 5, 2010
 *      Author: mori
 */

#include "BSTree.h"


BSTree::BSTree() {
	root = NULL;
}

BSTree::BSTree(const BSTree & rbt){
	//root = NULL;
}



BSTree::~BSTree() {
}


bool BSTree::insert(string x, char y, int z) {

	/* If the tree is empty, return a new node */
    //if (node == NULL) return newNode(key); 
  
    /* Otherwise, recur down the tree */
    //if (key < node->key) 
    //    node->left  = insert(node->left, key); 
    //else if (key > node->key) 
    //    node->right = insert(node->right, key);    
  
    /* return the (unchanged) node pointer */
    //return node; 

	return false;
}


bool BSTree::remove(string x, char y) {
	return false;
}


bool BSTree::search(string x, char y) {
	return false;
}


vector<Customer> BSTree::rangeSearch(string x, char y, string z, char a) {
}





void BSTree::inOrderPrint() {

	//Node *root;

	if (root != NULL) 
    { 
        //inOrderPrint(root->left); 
        //printf("%d \n", root->data); //may give seg fault
        //inOrderPrint(root->right); 
    }

}




