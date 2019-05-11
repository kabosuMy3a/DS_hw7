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

	public :

			BinarySearchTree() ;
			~BinarySearchTree() ;
			
			bst_node * creatNewNode(int key, string data);
						
			bst_node * getNodeFromKey(int num) ;
				
			void insert(int key, string data);
		
			//void delete(int key); 		

			void inOrderPrint();
			void inOrderPrint(bst_node * leaf) ;

};


#endif 
