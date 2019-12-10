#include "List.h"
#include <fstream>
#include "BaiBaoKhoaHoc.h"
#include <iomanip>
using namespace std;

void gioiThieu () {
	string tabs = "\t\t\t\t\t\t\t\t\t";
	cout << "\n";
	cout << tabs << " _______________________________________________________________\n";
	cout << tabs << "|" << setw(45) << "    DE TAI :   QUAN LY BAI BAO KHOA HOC" << "                  |\n";
	cout << tabs << "|_______________________________________________________________|\n";
	cout << tabs << "|" << setw(40) << "GVHD : NGUYEN THI MINH HY" << "                       |\n";
	cout << tabs << "|_______________________________________________________________|\n";
	cout << tabs << "|" << setw(40) << "SVTH 1 : LE BA LUONG - 17T1 - 102170034 " << "                       |\n";
	cout << tabs << "|" << setw(40) << "SVTH 2 : NGUYEN THI HONG - 17T1 - 102160078" << "                    |\n";
	cout << tabs << "|" << setw(32) << "NHOM HP : 17N11B" << "                               |\n";
	cout << tabs << "|_______________________________________________________________|\n";
}

void menuMain() {
	string tabs = "\t\t\t\t\t\t\t\t\t      ";
	cout << "\n"
		 << tabs << " ____________________________________________________\n"
		 << tabs << "|          CHUC NANG CHINH CUA CHUONG TRINH          |\n"
		 << tabs << "|____________________________________________________|\n";
	cout << tabs << "| 1. |  Khoi Tao Danh Sach Va Import Du Lieu Tu File |\n";
	cout << tabs << "| 2. |  Hien Thi Du Lieu Cac Bai Bao                 |\n";
	cout << tabs << "| 3. |  Them Bai Bao Khoa Hoc (...)                  |\n";
	cout << tabs << "| 4. |  Sua Bai Bao Khoa Hoc                         |\n";
	cout << tabs << "| 5. |  Xoa Bai Bao Khoa Hoc (...)                   |\n";
	cout << tabs << "| 6. |  Tim Kiem Theo Ten Bai Bao                    |\n";
	cout << tabs << "| 7. |  Filter Bai Bao                               |\n";
	cout << tabs << "| 8. |  Sap Xep Danh Sach Bai Bao (...)              |\n";
	cout << tabs << "| 9. |  Export Du Lieu Ra File .TXT                  |\n";
	cout << tabs << "| 0. |  Thoat                                        |\n";
	cout << tabs << "|____|_______________________________________________|\n";
}

void menu35( string type="") {
	string tabs = "\t\t\t\t\t\t\t\t\t\t";
	cout << "\n" << tabs << "-----------------------------------\n"
		<< tabs << " ___________________________________________________\n"
		<< tabs << "| 1. |" << setw(5)<< type << " Vao Dau Danh Sach                       |\n"
		<< tabs << "| 2. |" << setw(5) << type << " Vao Vi Tri Nao Do                       |\n"
		<< tabs << "| 3. |" << setw(5) << type << " Vao Cuoi Danh Sach                      |\n"
		<< tabs << "| 0. |" <<" Ve Menu Chinh                                |\n"
     	<< tabs << "|____|______________________________________________|\n";


}

void menu4() {
	string tabs = "\t\t\t\t\t\t\t\t\t\t";
	cout << "\n" << tabs << "-----------------------------------\n"
		<< tabs << " ___________________________________________________\n"
		<< tabs << "| 1. |  Chinh Sua Ma Bai Bao                        |\n"
		<< tabs << "| 2. |  Chinh Sua Ten Bai bao                       |\n"
		<< tabs << "| 3. |  Chinh Sua Ten Tap Chi                       |\n"
		<< tabs << "| 4. |  Chinh Sua Loai Tap Chi                      |\n"
		<< tabs << "| 5. |  Chinh Sua So Xuat Ban                       |\n"
		<< tabs << "| 6. |  Chinh Sua Nam Xuat Ban                      |\n"
		<< tabs << "| 7. |  Chinh Sua Nha Xuat Ban                      |\n"
		<< tabs << "| 8. |  Chinh Sua Tac Gia Chinh                     |\n"
		<< tabs << "| 9. |  Chinh Sua Dong Tac Gia                      |\n"
		<< tabs << "|10. |  Chinh Sua Tat Ca Thong Tin                  |\n"
		<< tabs << "| 0. |  Ve Menu Chinh                               |\n"
		<< tabs << "|____|______________________________________________|\n";
}
void menu8() {
	string tabs = "\t\t\t\t\t\t\t\t\t\t";
	cout << "\n" <<tabs << "-----------------------------------\n"
		<< tabs << " ___________________________________________________\n"
		<< tabs << "| 1. |  Sap Xep Theo Theo Nam Xuat Ban              |\n"
	    << tabs << "| 2. |  Sap Xep Theo Theo Ten Bai Bao               |\n"
		<< tabs << "| 0. |  Ve Menu Chinh                               |\n"
		<< tabs << "|____|______________________________________________|\n";
}

void ketqua(string type=" ") {

	cout << " ______________________________________________________________________________________________________________________________________________________________________________________________________________" << endl;
	cout << "|                                                                                                                                                                                                              |" << endl;
	cout << "|                                                                           Ket qua " << setw(8) << type << "                                                                                                                   |" << endl;
	cout << "|______________________________________________________________________________________________________________________________________________________________________________________________________________|" << endl;
}

void noMatchResult(string str = "Khong tim thay ket qua phu hop!") {
	cout << "|                                                                          " << setw(31) << str << "                                                                                                     |" << endl;
	cout << "|______________________________________________________________________________________________________________________________________________________________________________________________________________|" << endl;
}

Node* List::new_node(BaiBaoKhoaHoc& b)
{
	Node* P = new Node();
	P->BaiBaoKhoaHoc = b;
	P->prev = NULL;
	P->next = NULL;
	return P;
}

void List::import() {
	ifstream fileInput("../text.txt");
	if (fileInput.fail()) {
		cout << "\t\t\t\t\t\t\t\t\t\tMO FILE LOI\n";
	}
	else {
		while (!fileInput.eof())
		{
			BaiBaoKhoaHoc temp;
			string line;
			getline(fileInput, line);
			temp.setMaBaiBao(line.c_str());
			getline(fileInput, line);
			temp.setTenBaiBao(line.c_str());
			getline(fileInput, line);
			temp.setTenTapChi(line.c_str());
			getline(fileInput, line);
			temp.setLoaiTapChi(line.c_str());
			getline(fileInput, line);
			if (line == "") {
				ketqua();
				noMatchResult("Danh sach trong!");
				break;
			}
			temp.setSoXuatBan(stoi(line.c_str()));
			getline(fileInput, line);
			temp.setNamXuatBan(stoi(line.c_str()));
			getline(fileInput, line);
			temp.setNhaXuatBan(line.c_str());
			getline(fileInput, line);
			temp.setTacGiaChinh(line.c_str());
			getline(fileInput, line);
			temp.setDongTacGia(line.c_str());
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
		cout << "\t\t\t\t\t\t\t\t\t\tMO FILE THANH CONG!\n";
	}
	fileInput.close();
}

int inputSelect(int start, int end) {
	int select;
	do {
		cout << "\t\t\t\t\t\t\t\t\t\t\t----------************----------\n"
			<<"\t\t\t\t\t\t\t\t\t\tMOI BAN CHON CHUC NANG :";
		cin >> select;
		if (select < start || select >end) cout << "\t\t\t\t\t\t\t\t\t\t----------*******----------\n"
			<<"\t\t\t\t\t\t\t\t\t\tLUA CHON KHONG DUNG!!\n";
	} while (select < start || select >end);
	return select;
}

void List::select(int num=1) {
	if (!num) gioiThieu();
	else cout << "\t\t\t\t\t\t\t\t\t\t-----------------*****----------------\n";
	menuMain();
	BaiBaoKhoaHoc b1;
	string Namxb = "Namxb", tenBB = "tenBB";
	switch (inputSelect(0, 9)) {
	case 1: {
		this->import();
		select();
		break;
	}
	case 2: {
		this->Show();
		select();
		break;
	}
	case 3: {
		menu35("Them");
		switch (inputSelect(0, 3)) {
		case 1:
			cin.ignore();
			this->insertFirst();
			cout << "\t\t\t\t\t\t\t\t\t\tDA CHEN VAO DAU DANH SACH!\n";
			select();
			break;
		case 2:
			cin.ignore();
			this->insertPosition();
			select();
			break;
		case 3:
			cin.ignore();
			b1.input();
			this->insertLast(b1);
			cout << "\t\t\t\t\t\t\t\t\t\tDA CHEN VAO CUOI DANH SACH!\n";
			select();
			break;
		case 0:
		default:
			select();
			break;
		}
		break;
	}
	case 4: {
		this->editPosition();
		cout << "\t\t\t\t\t\t\t\t\t\tDA CHINH SUA!\n";
		select();
		break;
	}
	case 5: {
		menu35("Xoa");
		switch (inputSelect(0, 3)) {
		case 1:
			this->removeFirst();
			cout << "\t\t\t\t\t\t\t\t\t\tDA XOA VI TRI DAU!\n";
			select();
			break;
		case 2:
			this->removePosition();
			select();
			break;
		case 3:
			this->removeLast();
			cout << "\t\t\t\t\t\t\t\t\t\tDA XOA VI TRI CUOI!\n";
			select();
			break;
		case 0: 
		default:
			select();
			break;
		}
		break;
	}
	case 6: {
		cin.ignore();
		this->search();
		select();
		break;
	}
	case 7: {
		cin.ignore();
		this->filter();
		select();
		break;
	}
	case 8: {
		menu8();
		switch (inputSelect(0,2))
		{
		case 1:
			this->sort(*this,Namxb);
			cout << "\t\t\t\t\t\t\t\t\t\tDA SAP XEP THEO NAM XUAT BAN!\n";
			select();
			break;
		case 2: 
			this->sort(*this,tenBB);
			cout << "\t\t\t\t\t\t\t\t\t\tDA SAP XEP THEO TEN TAC GIA!\n";
			select();
			break;
		case 0:
		default:
			select();
			break;
		}
		break;
	}
	case 9: {
		this->exportToFile();
		select();
		break;
	}
	case 0:
	default:
		return;
		break;
	}
}

List::List()
{
	this->head = NULL;
	this->tail = NULL;
}

int List::Isempty(List L) //kiem tra DS rong
{
	return (L.head == NULL);
}


void List::Show()
{
	cout << " ______________________________________________________________________________________________________________________________________________________________________________________________________________" << endl;
	cout << "|                                                                                                                                                                                                              |" << endl;
	cout << "|                                              CHAO MUNG CAC BAN DEN VOI TRANG QUAN LY BAI BAO KHOA HOC TRUONG DH BACH KHOA - DH DA NANG                                                                       |" << endl;
	cout << "|______________________________________________________________________________________________________________________________________________________________________________________________________________|" << endl;
	cout << "|  STT|  Ma Bai Bao  |      Ten Bai Bao                |        Ten Tap Chi        | Loai Tap Chi |So XB |Nam XB|   Nha Xuat Ban   |              Tac Gia Chinh          |             Dong Tac Gia            |" << endl;
	cout << "|_____|______________|_________________________________|___________________________|______________|______|______|__________________|_____________________________________|_____________________________________|" << endl;
	Node* PH = this->head;
	int i = 1;
	if (PH == NULL) noMatchResult("Danh sach trong!");
	else {
		while (PH != NULL) {
			(*PH).BaiBaoKhoaHoc.show(i);
			PH = PH->next;
			i++;
		};
	}
}


void List::insertPosition()
{
	int pos, L = (*this).length();
	do {
		cout << "Nhap vi tri can chen (1->" << L + 1 << ") : ";
		cin >> pos;
		if (pos < 1 || pos > L + 1) cout << "Vi tri chen khong hop le!!!" << endl;
	} while (pos < 1 || pos > L + 1);
	Node* PH = this->head, * PT, * P;
	int i = 1;
	BaiBaoKhoaHoc b;
	P = new_node(b);
	cin.ignore();
	if (pos == 1) (*this).insertFirst();
	else
		if (pos == L + 1) {
			BaiBaoKhoaHoc b;
			b.input();
			(*this).insertLast(b);
		}
		else {
			(*P).BaiBaoKhoaHoc.input();
			while (PH != NULL && i != pos - 1)
			{
				i++;
				PH = PH->next;
			}
			PT = PH->next;
			P->next = PT;
			P->prev = PH;
			PH->next = P;
			PT->prev = P;
			cout << "\t\t\t\t\t\t\t\t\t\tDA CHEN VAO VI TRI "<<pos<<"!\n";
		};
}

void List::insertLast(BaiBaoKhoaHoc b )
{
	Node* P;
	P = new_node(b);
	if (Isempty(*this)) //Neu danh sach rong
	{
		this->head = P;
		this->tail = P;
	}
	else
	{
		this->tail->next = P; 
		P->prev = this->tail;
		this->tail = P; 
	}
}

void List::insertFirst()
{
	BaiBaoKhoaHoc b;
	b.input();
	Node* P;
	P = new_node(b);
	if (Isempty(*this))
	{
		this->head = P;
		this->tail = P;
	}
	else
	{
		P->next = this->head;
		this->head->prev = P; 
		this->head= P;
	}
}

void List::removePosition()
{
	int pos,i=1, L = (*this).length();
	do {
		cout << "Nhap vi tri can xoa (1->"<<L<< ") : ";
		cin >> pos;
		if (pos < 1 || pos > L) cout << "Vi can xoa khong hop le!!!" << endl;
	} while (pos < 1 || pos > L);
	Node *PH = this->head, * PT;
	if (pos == 1) (*this).removeFirst();
	else
		if (pos == L) (*this).removeLast();
		else {
			while (PH != NULL && i != pos - 1) //duyet den vi tri k-1
			{
				i++;
				PH = PH->next;
			}
			PT = PH->next->next; //xac dinh vi tri k+1
			PH->next = PT;
			PT->prev = PH;
		}
	cout << "\t\t\t\t\t\t\t\t\t\tDA XOA VI TRI "<<pos<<" !\n";
}

void List::removeFirst()
{
	if (!Isempty(*(this)))
	{
		this->head = this->head->next;
	}
}

void List::removeLast()
{
	if (!Isempty(*(this)))
	{
		this->tail = this->tail->prev;
		this->tail->next = NULL;
	}
}

void List::editPosition()
{
	int pos, i = 1, L = (*this).length();
	do {
		cout << "\tNhap Vi Tri Can Chinh Sua (1->" << L << ") : ";
		cin >> pos;
		if (pos < 1 || pos > L) cout << "\tVi Tri Can Chinh Sua Khong Hop Le!!!" << endl;
	} while (pos < 1 || pos > L);
	Node* PH = this->head;
	while (PH != NULL && i != pos)
	{
		i++;
		PH = PH->next;
	}
	ketqua();
	(*PH).BaiBaoKhoaHoc.show(i);
	menu4();
	switch (inputSelect(0, 10)) {
	case 1:
		cin.ignore();
		PH->BaiBaoKhoaHoc.inputMaBaiBao();
		break;
	case 2:
		cin.ignore();
		PH->BaiBaoKhoaHoc.inputTenBaiBao();
		break;
	case 3:
		cin.ignore();
		PH->BaiBaoKhoaHoc.inputTenTapChi();
		break;
	case 4:
		cin.ignore();
		PH->BaiBaoKhoaHoc.inputLoaiTapChi();
		break;
	case 5:
		PH->BaiBaoKhoaHoc.inputSoXuatBan();
		break;
	case 6:
		PH->BaiBaoKhoaHoc.inputNamXuatBan();
		break;
	case 7:
		cin.ignore();
		PH->BaiBaoKhoaHoc.inputNhaXuatBan();
		break;
	case 8:
		cin.ignore();
		PH->BaiBaoKhoaHoc.inputTacGiaChinh();
		break;
	case 9:
		cin.ignore();
		PH->BaiBaoKhoaHoc.inputDongtacGia();
		break;
	case 10:
		cin.ignore();
		PH->BaiBaoKhoaHoc.input();
		break;
	case 0:
	default:
		select();
		break;
	}
}

void List::search()
{
	string tenBB;
	int i = 1;
	bool hasResult = false;
	cout << "Nhap ten bai bao can tim kiem: ";
	getline(cin, tenBB);
	Node* PH = this->head;
	ketqua("tim kiem");
	while (PH != NULL)
	{
		if (tenBB == PH->BaiBaoKhoaHoc.getTenBaiBao()) {
			PH->BaiBaoKhoaHoc.show(i);
			hasResult = true;
		}
		i++;
		PH = PH->next;
	}
	if (!hasResult) noMatchResult();
}

void List::filter()
{
	int i=1;
	string namxb, tenTacGia, tenTapChi, loaiTapchi;
	cout << "Nhap cac gia tri de loc (de trong neu khong can thiet) :" << endl;
	cout << "Nhap Nam xuat ban: ";
	getline(cin, namxb);
	cout << "Nhap ten tac gia: ";
	getline(cin, tenTacGia);
	cout << "Nhap ten tap chi: ";
	getline(cin, tenTapChi);
	cout << "Nhap loai tap chi: ";
	getline(cin, loaiTapchi);
	Node* PH = this->head;
	bool hasResult = false;
	ketqua("filter");
	while (PH != NULL)
	{
		bool hasNamxb = true, hasTenTacGia = true, hastenTapChi = true, hasLoaiTapChi = true;
		if (namxb != "") {
			if (namxb != to_string(PH->BaiBaoKhoaHoc.getNamXuatBan()) ) hasLoaiTapChi = false;
		}
		if (tenTacGia != "") {
			if (PH->BaiBaoKhoaHoc.getTacGiaChinh().find(tenTacGia) ==-1 &&
				PH->BaiBaoKhoaHoc.getDongTacGia().find(tenTacGia) == -1 
				) hasTenTacGia = false;
		}
		if (tenTapChi != "") {
			if (tenTapChi.compare(PH->BaiBaoKhoaHoc.getTenTapChi()) !=0) hastenTapChi = false;
		}
		if (loaiTapchi != "") {
			if (loaiTapchi.compare(PH->BaiBaoKhoaHoc.getLoaiTapChi()) !=0 ) hasLoaiTapChi = false;
		}
		if (hasNamxb && hasTenTacGia && hastenTapChi && hasLoaiTapChi) {
			PH->BaiBaoKhoaHoc.show(i);
			hasResult = true;
		}
		i++;
		PH = PH->next;
	}
	if (!hasResult) noMatchResult();
}

void List::exportToFile()
{
	fstream fileOutput("../text.txt");
	if (fileOutput.fail()) {
		cout << "Mo file loi";
		return;
	}
	else {
		int i = 1;
		Node* PH = this->head;
		if (PH == NULL) {
			cout << "Danh sach trong!" << endl;
			fileOutput.close();
		}
		else {
			while (PH != NULL) {
				fileOutput << PH->BaiBaoKhoaHoc.getMaBaiBao() << endl;
				fileOutput << PH->BaiBaoKhoaHoc.getTenBaiBao() << endl;
				fileOutput << PH->BaiBaoKhoaHoc.getTenTapChi() << endl;
				fileOutput << PH->BaiBaoKhoaHoc.getLoaiTapChi() << endl;
				fileOutput << PH->BaiBaoKhoaHoc.getSoXuatBan() << endl;
				fileOutput << PH->BaiBaoKhoaHoc.getNamXuatBan() << endl;
				fileOutput << PH->BaiBaoKhoaHoc.getNhaXuatBan() << endl;
				fileOutput << PH->BaiBaoKhoaHoc.getTacGiaChinh() << endl;
				fileOutput << PH->BaiBaoKhoaHoc.getDongTacGia();
				if (i < (*this).length()) fileOutput << endl;
				i++;
				PH = PH->next;
			};
			cout << "Ghi file thanh cong!" << endl;
		}
	}
	fileOutput.close();
}

void List::sort(List L,  string type)
{
	Node* P , * X;
	if (Isempty(*this)) {
		return;
	};
	List L1, L2;
	L1.head = NULL; L1.tail = NULL;
	L2.head = NULL; L2.tail = NULL;
	X = (*this).head; (*this).head = X->next; //tach Node head ra rieng biet roi gan cho Node chot X
	while ((*this).head != NULL) {
		P = (*this).head; (*this).head = P->next; P->next = NULL; //P la nut duyet, tach Node thu 2 (sau Node chot x)

		if (type == "Namxb") {
			if (P->BaiBaoKhoaHoc.getNamXuatBan() <= X->BaiBaoKhoaHoc.getNamXuatBan()) {
				L1.insertLast(P->BaiBaoKhoaHoc);
			}
			else
				L2.insertLast(P->BaiBaoKhoaHoc);
		}
		else if (type == "tenBB") {
			if (P->BaiBaoKhoaHoc.getTenBaiBao() <= X->BaiBaoKhoaHoc.getTenBaiBao() ) {
				L1.insertLast(P->BaiBaoKhoaHoc);
			}
			else
				L2.insertLast(P->BaiBaoKhoaHoc);
		}
	}
	L1.sort(L1, type);
	L1.sort(L2, type);
	if (L1.head != NULL){
		(*this).head = L1.head;
		L1.tail->next = X;
		X->prev = L1.tail;
	}
	else {
		(*this).head = X;
		X->prev = NULL;
	}
	X->next = L2.head;
	if (L2.head != NULL) {
		L2.head->prev = X;
		(*this).tail = L2.tail;
	}
	else
		(*this).tail = X;
}

int List::length()
{
	Node* temp = this->head;
	if (this->head == NULL && this->tail == NULL) return 0;
	int count = 1;
	while (temp != NULL)
	{
		if (temp == this->tail) break;
		temp = temp->next;
		count++;
	}
	return count;
}

List::~List()
{
}
