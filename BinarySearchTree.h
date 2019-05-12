#ifndef __BINARYSEARCHTREE__H__
#define __BINARYSEARCHTREE__H__ 

#include "default.h"

typedef struct t_bst_node {

	int key;
	string data;

	t_bst_node * left_child ;
	t_bst_node * right_child ;
	//t_bst_node * parent ;

} bst_node ; 


class BinarySearchTree {


	private :
			bst_node * root ;
			void destroyBST(bst_node * node);		
			
			bst_node * getNodeFromKey(bst_node * node, int num) ;
			bst_node * findParent(int num) ;
			bst_node * findParent2(int num) ;

			void replaceNode(bst_node * beforeNode, bst_node * afterNode);
			void copyValue(bst_node * copiedNode, bst_node * copyFromNode);


	public :

			BinarySearchTree() ;
			~BinarySearchTree() ;
			
			bst_node * creatNewNode(int key, string data);
						
			bst_node * getNodeFromKey(int num) ;
				
			void insert(int key, string data);
		
			void deletion(int key); 		

			void inOrderPrint();
			void inOrderPrint(bst_node * leaf) ;
			bst_node * getMinFromRightChild(bst_node * leaf);
};


#endif 
