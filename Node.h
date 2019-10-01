/*
 * Node.h
 *
 *  Created on: Mar 5, 2010
 *      Author: mori
 */

#ifndef NODE_H_
#define NODE_H_

#include "Customer.h"

class Node {
public:
	Customer customer;
    Node *left; 
    Node *right;
    Node *parent;

    

    // Function to create a new Node in heap
	Node* GetNewNode(Customer &c);
    
    



};

#endif /* NODE_H_ */
