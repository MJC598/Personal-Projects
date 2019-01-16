// PuzzleSolver.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <vector>
#include <queue>
#include <array>

class Node {
private:
	int id;
	int display[4][4];
	Node *parent;
	vector<Node *>children;

public:
	//getters
	int getId() { return id; }
	Node* getParent() { return parent; }
	vector<Node *> getChildren() { return children; }
	//setters
	void setId(int id) { this->id = id; }
	void setParent(Node *parent) { this->parent = parent; }
	void setChildren(vector<Node *> children) { this->children = children; }
};

// TODO: Reference additional headers your program requires here.
