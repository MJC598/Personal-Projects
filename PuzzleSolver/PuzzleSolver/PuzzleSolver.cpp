// PuzzleSolver.cpp : Defines the entry point for the application.
//

#include "PuzzleSolver.h"

using namespace std;

int main(){
	int testCase1[4][4] = { {1,2,7,3},
							{5,6,11,4},
							{9,10,15,8},
							{13,14,12,0} };

	int testCase2[4][4] = { {5,1,7,3},
							{9,2,11,4},
							{13,6,15,8},
							{0,10,14,12} };

	int solution[4][4] = { {1,2,3,4},
						   {5,6,7,8},
						   {9,10,11,12},
						   {13,14,15,0} };

	Node test1 = new Node();
	test1->id = 1;
	test1->parent = NULL;
	test1->display = testCase1;
	test1->children = NULL;
	Node solution = astar(test1, solution);

	return 0;
}

//must free Node here to return new Node so there isn't memory leaks
Node astar(Node test1, int solution[4][4]){
	if(test1 == NULL || solution == NULL){
		return NULL;
	}
	Node answer = new Node();
}


