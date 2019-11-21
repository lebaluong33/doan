#pragma once
#include "BaiBaoKhoaHoc.h"
using namespace std;
class Node
{
public:
	Node* next;
	Node* prev;
	BaiBaoKhoaHoc BaiBaoKhoaHoc;
public:

	Node();
	~Node();
};

