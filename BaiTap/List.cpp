#include "List.h"
#include <fstream>
#include "BaiBaoKhoaHoc.h"

using namespace std;
List::List()
{
	ifstream fileInput("../text.txt");
	this->head = NULL;
	this->tail = NULL;
	if (fileInput.fail()) {
		cout << "mo file loi";
	}
	else {
		while (!fileInput.eof())
		{
			BaiBaoKhoaHoc temp;
			string maBaiBao;
			string tenBaiBao;
			string tenTapChi;
			string loaiTapChi;
			int soXuatBan;
			int namXuatBan;
			string nhaXuatBan;
			string tacGiaChinh;
			string dongTacGia;
			string line;
			getline(fileInput, line);
			maBaiBao = line.c_str();
			temp.setMaBaiBao(maBaiBao);
			getline(fileInput, line);
			tenBaiBao = line.c_str();
			temp.setTenBaiBao(tenBaiBao);
			getline(fileInput, line);
			tenTapChi = line.c_str();
			temp.setTenTapChi(tenTapChi);
			getline(fileInput, line);
			loaiTapChi = line.c_str();
			temp.setLoaiTapChi(loaiTapChi);
			getline(fileInput, line);
			soXuatBan = stoi(line.c_str());
			temp.setSoXuatBan(soXuatBan);
			getline(fileInput, line);
			namXuatBan = stoi(line.c_str());
			temp.setNamXuatBan(namXuatBan);
			getline(fileInput, line);
			nhaXuatBan = line.c_str();
			temp.setNhaXuatBan(nhaXuatBan);
			getline(fileInput, line);
			tacGiaChinh = line.c_str();
			temp.setTacGiaChinh(tacGiaChinh);
			getline(fileInput, line);
			dongTacGia = line.c_str();
			temp.setDongTacGia(dongTacGia);
			Node* P;
			P = new_node(temp);
			if (Isempty(*this)) {
				this->head = P;
				this->tail = P;
			}
			else {
				this->tail->next = P;
				P->prev = this->tail;
				this->tail = P;
			};
		}
	}
	fileInput.close();
}

int List::Isempty(List L) //kiem tra DS rong
{
	return (L.head == NULL);
}

//Node* List::operator[](int i)
//{
//	int count = 1;
//	Node* temp = this->head;
//	while (count != i)
//	{
//		temp = temp->next;
//		count++;
//	}
//	return temp;
//}

Node* List::new_node(BaiBaoKhoaHoc &b)
{
	Node *P = new Node();
	P->BaiBaoKhoaHoc = b;
	P->prev = NULL;
	P->next = NULL;
	return P;
}

void List::Show()
{
	Node* PH = this->head, * PT = this->tail;
	if (PH == NULL) cout << "Danh sach trong!";
	else {
		while (PH != NULL) {
			(*PH).BaiBaoKhoaHoc.show();
			PH = PH->next;
		};
	}
}

//int List::length()
//{
	//Node* temp = this->head;
	//if (head == NULL && tail == NULL) return 0;
	//int count = 1;
	//while (head->next != NULL)
	//{
	//	temp = temp->next;
	//	count++;
	//}
	//return count;
//}
//void List::add_head(BaiBaoKhoaHoc* baiBaoKhoaHoc)
//{
	//Node *newNode = new Node(baiBaoKhoaHoc);
	//if (head == NULL) {
	//	head = newNode;
	//	tail = newNode;
	//	this->length++;
	//	return;
	//}
	//head->prev = newNode;
	//newNode->next = head;
	//head = newNode;
	//this->length ++;
//}
//
//void List::add_tail(BaiBaoKhoaHoc* baiBaoKhoaHoc)
//{
	//Node* newNode = new Node(baiBaoKhoaHoc);
	//if (head == NULL) {
	//	head = newNode;
	//	tail = newNode;
	//	return;
	//}
	//tail->next = newNode;
	//newNode->prev = tail;
	//tail = newNode;
	//this->length++;
//}
//
//void List::add(int position)
//{
//	
	//	cout << "Nhap thong tin nhan vien can them vao: " << endl;
	//	BaiBaoKhoaHoc* A = new BaiBaoKhoaHoc();
	//	A->input();
	//	if (this->length==1)
	//	{
	//		cout << "Nhap 0 de chen ben trai, 1 de chen ben phai:  ";
	//		int k; cin >> k;
	//		if (k == 0)
	//			add_head(A);
	//		else
	//			add_tail(A);
	//	}
	//	else
	//	{
	//		Node* p = new Node(A);
	//		if (position == 1)
	//		{
	//			add_head(A);
	//			
	//		}
	//		if (position == this->length + 1)
	//		{
	//			add_tail(A);
	//			
	//		}
	//		else
	//		{
	//			Node* temp = this->head;
	//			while (position != 2)
	//			{
	//				temp = temp->next;
	//				position--;
	//			}
	//			Node* right = temp->next;
	//			p->next = right;
	//			p->prev = temp;
	//			temp->next = p;
	//			right->prev = p;
	//			this->length++;
	//	}
	//}

//}
//
//void List::remove(int position)
//{
	/*if (this->length == 0) return;

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
		}*/
	
//}
//
//void List::update(int position)
//{
	//int pos = position;
	//Node* temp = this->head;
	//while (position != 1)
	//{
	//	temp = temp->next;
	//	pos--;
	//}
	//temp->input_node();
//}
//
//void List::search(int left, int right, string tenBaiBao)
//{
	/*List& A = *this;
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
	if (right <= left) cout << "Khong tim thay!" << endl;*/
//}


List::~List()
{
}
