#include "default.h"
#include "BinarySearchTree.h"
#include <list>

int main(int argc, char* argv[]){


	string fileName ;
	getline(cin,fileName);
	ifstream infile(fileName.c_str());
	if(!infile){
		cout << "input correct file name again" <<endl;
		getline(cin,fileName);
	}
	if(!infile) return -1;	
	//fileIO


	BinarySearchTree * BST = new BinarySearchTree() ;
	//using BinarySearchTree
	
	string inputString;
	//string from file

	while(getline(infile,inputString)){
		
		string opt;
		int key;
		string data;

		int len = strlen(inputString.c_str()) ;
		char * inputChar = new char[len];
		strcpy(inputChar,inputString.c_str()) ;
		char * p ;
		
		p = strtok(inputChar," ");
		opt = p ;

		if(opt == "a"){
			
			p = strtok(0x0," ");	
			key = stoi(p) ;
			//need exception handling

			p = strtok(0x0," ");
			data = p ;

			BST->insert(key,data);

		}

		else if(opt == "d"){
		
			p = strtok(0x0," ");
			key = stoi(p) ;

			cout << "sungnyu daiski" << endl;

		}

		else if(opt == "p"){

			BST->inOrderPrint();

		}
		
		else if(opt == "q"){
			
			cout << "quit" << endl;
			break ;
		}

		else cout << "wrong type example" << endl;

		delete [] inputChar;

	}
	//all needed implements are done when getline. 

	
	delete BST;
	
	return 0;


}
