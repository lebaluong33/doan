#pragma once
#include "Node.h"


class List
{
private:
	Node *head;
	Node *tail;
public:
	List();
	int Isempty(List L);
	//Node* operator[](int i);
	Node *new_node(BaiBaoKhoaHoc &);
	void Show();
	/*int length();
	void add_head(BaiBaoKhoaHoc*);
	void add_tail(BaiBaoKhoaHoc*);
	void add( int vitri);
	void remove(int position);
	void update(int position);
	void search( int left, int right, string tenBaiBao);
	
	template <typename data_type> void sort(data_type key_name);
	friend istream& operator >> (istream&, List&);
	friend ostream& operator << (ostream&, List&);*/
	~List();
};


