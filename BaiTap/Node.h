#pragma once
#include "BaiBaoKhoaHoc.h"
using namespace std;
class Node
{
public:
	Node* next;
	Node* prev;
	BaiBaoKhoaHoc *baiBaoKhoaHoc;
public:

	Node(BaiBaoKhoaHoc *baiBaoKhoaHoc= NULL, Node*next=NULL, Node*prev= NULL);
	void input_node();
	~Node();
};

