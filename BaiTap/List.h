#pragma once
#include "Node.h"


class List
{
private:
	Node *head;
	Node *tail;
public:
	List();
	void select(int);
	void import();
	int Isempty(List L);
	Node *new_node(BaiBaoKhoaHoc &);
	void Show();
	void insertPosition();
	void insertLast(BaiBaoKhoaHoc );
	void insertFirst();
	void removePosition();
	void removeFirst();
	void removeLast();
	void editPosition();
	void search();
	void filter();
	void exportToFile();
	void sort(List , string );
	int length();
	~List();
};


