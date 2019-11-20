#include "List.h"

List::List()
{
}

List::List(Node* head, Node*tail)
{
	this->head = head;
	this->tail = tail;
}

Node* List::operator[](int i)
{
	int count = 1;
	Node* temp = this->head;
	while (count != i)
	{
		temp = temp->next;
		count++;
	}
	return temp;
}

int List::length()
{
	Node* temp = this->head;
	if (head == NULL && tail == NULL) return 0;
	int count = 1;
	while (head->next != NULL)
	{
		temp = temp->next;
		count++;
	}
	return count;
}
void List::add_head(BaiBaoKhoaHoc* baiBaoKhoaHoc)
{
	Node *newNode = new Node(baiBaoKhoaHoc);
	if (head == NULL) {
		head = newNode;
		tail = newNode;
		return;
	}
	head->prev = newNode;
	newNode->next = head;
	head = newNode;
	this->length++;
}

void List::add_tail(BaiBaoKhoaHoc* baiBaoKhoaHoc)
{
	Node* newNode = new Node(baiBaoKhoaHoc);
	if (head == NULL) {
		head = newNode;
		tail = newNode;
		return;
	}
	tail->next = newNode;
	newNode->prev = tail;
	tail = newNode;
	this->length++;
}

void List::add(int position)
{
	
		cout << "Nhap thong tin nhan vien can them vao: " << endl;
		BaiBaoKhoaHoc* A = new BaiBaoKhoaHoc();
		A->input();
		if (this->length==1)
		{
			cout << "Nhap 0 de chen ben trai, 1 de chen ben phai:  ";
			int k; cin >> k;
			if (k == 0)
				add_head(A);
			else
				add_tail(A);
		}
		else
		{
			Node* p = new Node(A);
			if (position == 1)
			{
				add_head(A);
				
			}
			if (position == this->length + 1)
			{
				add_tail(A);
				
			}
			else
			{
				Node* temp = this->head;
				while (position != 2)
				{
					temp = temp->next;
					position--;
				}
				Node* right = temp->next;
				p->next = right;
				p->prev = temp;
				temp->next = p;
				right->prev = p;
				this->length++;
		}
	}

}

void List::remove(int position)
{
	if (this->length == 0) return;

	if (this->length == 1)
		{
			Node* temp = this->head;
			this->head = NULL;
			this->tail = NULL;
			delete temp;
			this->length--;
			return;
		}
	else
		{
			if (position == 1)
			{
				Node* temp = this->head;
				this->head = this->head->next;
				delete temp;
				this->length--;
				return;
			}
			if (position == this->length)
			{
				Node* temp = this->tail;
				this->tail = this->tail->prev;
				this->tail->next = NULL;
				delete temp;
				this->length--;
				return;
			}
		}
	
}

void List::update(int position)
{
	int pos = position;
	Node* temp = this->head;
	while (position != 1)
	{
		temp = temp->next;
		pos--;
	}
	temp->input_node();
}

void List::search(int left, int right, string tenBaiBao)
{
	List& A = *this;
	int key;
	if (left == right)
	{
		if (A[left]->baiBaoKhoaHoc->getTenBaiBao==tenBaiBao)
		{
			A[left]->baiBaoKhoaHoc->output();
			return;
		}

	}
	if (right > left)
	{
		key = (right + left) / 2;
		if (A[key]->baiBaoKhoaHoc->getTenBaiBao == tenBaiBao) A[key]->baiBaoKhoaHoc->output();
		if (A[key]->baiBaoKhoaHoc->getTenBaiBao > tenBaiBao) search( left, key - 1, tenBaiBao);
		else search(key + 1, right, tenBaiBao);
	}
	if (right <= left) cout << "Khong tim thay!" << endl;
}


List::~List()
{
}
