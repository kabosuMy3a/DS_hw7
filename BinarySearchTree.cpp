#include "BinarySearchTree.h" 


BinarySearchTree::BinarySearchTree(){

	root = new bst_node() ;
	root = 0x0 ; 
	/* in BinarySearchTree::insert() 
	 * if (root==0x0) //new node will be root
	 * but it's not necessary 
	*/
}	


BinarySearchTree::~BinarySearchTree(){

	if (root != 0x0) destroyBST(root) ;
	

}


void BinarySearchTree::destroyBST(bst_node * node){


	if (node!=0x0) {

		destroyBST(node->left_child) ;
		destroyBST(node->right_child) ;
		
		delete node ;

	}
}


bst_node * BinarySearchTree::creatNewNode(int key, string data){


	bst_node * leaf = new bst_node() ;

	leaf->key = key;
	leaf->data = data;
	
	leaf->left_child = 0x0 ;
	leaf->right_child = 0x0 ;

	return leaf ;
}


void BinarySearchTree::inOrderPrint(){

	inOrderPrint(root) ; 

}

void BinarySearchTree::inOrderPrint(bst_node * leaf){
	
	if(leaf!=0x0){

		inOrderPrint(leaf->left_child);
		cout << "(" << leaf->key << ", " << leaf->data << ")" <<endl;
		inOrderPrint(leaf->right_child);
		
	}
}

bst_node * BinarySearchTree::getNodeFromKey(int num){

	return getNodeFromKey(root, num) ;

}

bst_node * BinarySearchTree::getNodeFromKey(bst_node * node, int num){

	if(node!=0x0){
	
		if (node->key == num) return node ;

		else if (node->key > num) return getNodeFromKey(node->left_child, num) ;
		
		else return getNodeFromKey(node->right_child, num) ;

	}
	
	else return 0x0 ;

}

bst_node * BinarySearchTree::findParent(int num){

	bst_node * parent = root ;

	while (parent!=0x0){

		if (parent->key == num){
			return 0x0 ;
		}	
	
		else if (parent->key > num ){

			if(parent->left_child) parent = parent->left_child ;
			else return parent ;

		}

		else{
		
			if(parent->right_child) parent= parent->right_child ; 
			else return parent ; 
		}

	}

	return 0x0 ;

}

void BinarySearchTree::insert(int key, string data){


	bst_node * branch = findParent(key) ;
	bst_node * leaf = creatNewNode(key,data) ;
	
	if(branch){

		if (branch->key > leaf->key) branch->left_child = leaf ;
		else branch->right_child = leaf ;

	}

	else if(root == 0x0 ) root = leaf ; //first leaf will be root.

	else cout << "<duplicate_val> is already in the tree" << endl ;
		
			
}

void BinarySearchTree::deletion(int key){

	bst_node * yellowLeaf = getNodeFromKey(key) ;
	bst_node * branch = findParent(key) ;


	if (yellowLeaf==0x0){

		cout << "<nonexistent value> is not in the tree" << endl ;
		return ;
	}





}


void BinarySearchTree::replaceNode(bst_node * beforeNode, bst_node * afterNode){

	

	bst_node * branch = findParent(beforeNode->key) ; 

	if (branch == 0x0){

		root = afterNode ;

	}

	else{

		bool isRightChild ;
		int mp = (beforeNode->key - branch->key);
		if (mp > 0) isRightChild = true ;
		else isRightChild = false ;

		if (isRightChild == true){

			delete parent->right_child ;//==beforeNode
			parent->right_child = afterNode ;

		}

		else{

			delete parent->left_child ;//==beforNode
			parent->left_child = afterNode; 

		}

	}

}

void 
