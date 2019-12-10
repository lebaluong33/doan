#include "BaiBaoKhoaHoc.h"
#include <iomanip>

void validateStr(string type, string &content ) {
	do {
		cout << "\tNhap "<<type<<" :";
		getline(cin, content);
	} while (content == "");
}
void validateInt(string type, int& content) {
	do {
		cout << "\tNhap " << type << " :";
		cin >> content;
	} while (!content);
}
BaiBaoKhoaHoc::BaiBaoKhoaHoc()
{
	this->maBaiBao = "BaiBao01";
	this->tenBaiBao = "Bien Dong";
	this->tenTapChi = "Viet Nam";
	this->loaiTapChi = "Van xuoi";
	this->soXuatBan = 56;
	this->namXuatBan = 2029;
	this->nhaXuatBan = "Kim Dong";
	this->tacGiaChinh = "Luong,Khanh";
	this->dongTacGia = "Luong,Khanh";
}

BaiBaoKhoaHoc::BaiBaoKhoaHoc(
	string maBaiBao, 
	string tenBaiBao, 
	string tenTapChi,
	string loaiTapChi,
	int soXuatBan, 
	int namXuatBan,
	string nhaXuatBan,
	string tacGiaChinh,
	string dongTacGia) {
	this->maBaiBao = maBaiBao;
	this->tenBaiBao = tenBaiBao;
	this->tenTapChi = tenTapChi;
	this->loaiTapChi = loaiTapChi;
	this->soXuatBan = soXuatBan;
	this->namXuatBan = namXuatBan;
	this->nhaXuatBan = nhaXuatBan;
	this->tacGiaChinh = tacGiaChinh;
	this->dongTacGia = dongTacGia;
}

BaiBaoKhoaHoc::BaiBaoKhoaHoc(BaiBaoKhoaHoc& b)
{
	this->maBaiBao = b.maBaiBao;
	this->tenBaiBao = b.tenBaiBao;
	this->tenTapChi = b.tenTapChi;
	this->loaiTapChi = b.loaiTapChi;
	this->soXuatBan = b.soXuatBan;
	this->namXuatBan = b.namXuatBan;
	this->nhaXuatBan = b.nhaXuatBan;
	this->tacGiaChinh = b.tacGiaChinh;
	this->dongTacGia = b.dongTacGia;
}

void BaiBaoKhoaHoc::input()
{
	this->inputMaBaiBao();
	this->inputTenBaiBao();
	this->inputTenTapChi();
	this->inputLoaiTapChi();
	this->inputSoXuatBan();
	this->inputNamXuatBan();
	cin.ignore();
	this->inputNhaXuatBan();
	this->inputTacGiaChinh();
	this->inputDongtacGia();
	/*do{
	cout << "\tNhap ma bai bao:";
	getline(cin,this->maBaiBao);
	} while (this->maBaiBao == "");
	do {
		cout << "\tNhap ten bai bao:";
		getline(cin, this->tenBaiBao);
	} while (this->tenBaiBao == "");
	do {
		cout << "\tNhap ten tap chi:";
		getline(cin,this->tenTapChi);
	} while (this->tenTapChi == "");
	int num=0;
	do {
		cout << "\tNhap loai tap chi (number 1->5):1.SCI, 2.SCIE, 3.ISI, 4.SCOPUS, 5. Tap Chi Khac :";
		cin >> num;
	} while (num <1 || num >5 );
	switch (num) {
	case 1: 
		this->loaiTapChi = "SCI";
		break;
	case 2:
		this->loaiTapChi = "SCIE";
		break;
	case 3:
		this->loaiTapChi = "ISI";
		break;
	case 4:
		this->loaiTapChi = "SCOPUS";
		break;
	default:
		this->loaiTapChi = "Tap Chi Khac";
		break;
	}
	do {
		cout << "\tNhap so xuat ban:";
		cin >> this->soXuatBan;
	} while (!this->soXuatBan);
	do {
		cout << "\tNhap nam xuat ban:";
		cin >> this->namXuatBan;
	} while (!this->namXuatBan);
	cin.ignore();
	do {
		cout << "\tNhap nha xuat ban:";
		getline(cin, this->nhaXuatBan);
	} while (this->nhaXuatBan == "");
	do {
		cout << "\tNhap tac gia chinh:";
		getline(cin, this->tacGiaChinh);
	} while (this->tacGiaChinh == "");
	cout << "\tNhap dong tac gia:";
	getline(cin, this->dongTacGia);
	if (this->dongTacGia == ""); this->dongTacGia == " ";*/
}

void BaiBaoKhoaHoc::inputMaBaiBao()
{
	validateStr("Ma Bai Bao", this->maBaiBao);
}

void BaiBaoKhoaHoc::inputTenBaiBao()
{
	validateStr("Ten Bai Bao", this->tenBaiBao);
}

void BaiBaoKhoaHoc::inputTenTapChi()
{
	validateStr("Ten Tap Chi", this->tenTapChi);
}

void BaiBaoKhoaHoc::inputLoaiTapChi()
{
	int num = 0;
	do {
		cout << "\tNhap loai tap chi (number 1->5):1.SCI, 2.SCIE, 3.ISI, 4.SCOPUS, 5. Tap Chi Khac :";
		cin >> num;
	} while (num < 1 || num >5);
	switch (num) {
	case 1:
		this->loaiTapChi = "SCI";
		break;
	case 2:
		this->loaiTapChi = "SCIE";
		break;
	case 3:
		this->loaiTapChi = "ISI";
		break;
	case 4:
		this->loaiTapChi = "SCOPUS";
		break;
	default:
		this->loaiTapChi = "Tap Chi Khac";
		break;
	}
}

void BaiBaoKhoaHoc::inputSoXuatBan()
{
	validateInt("So Xuat Ban", this->soXuatBan);
}

void BaiBaoKhoaHoc::inputNamXuatBan()
{
	validateInt("Nam Xuat Ban", this->namXuatBan);
}

void BaiBaoKhoaHoc::inputNhaXuatBan()
{
	validateStr("Nha Xuat Ban", this->nhaXuatBan);
}

void BaiBaoKhoaHoc::inputTacGiaChinh()
{
	validateStr("Tac Gia Chinh", this->tacGiaChinh);
}

void BaiBaoKhoaHoc::inputDongtacGia()
{
	cout << "\tNhap Dong Tac Gia:";
	getline(cin, this->dongTacGia);
	if (this->dongTacGia == ""); this->dongTacGia == " ";
}

string BaiBaoKhoaHoc::getMaBaiBao()
{
	return this->maBaiBao;
}

void BaiBaoKhoaHoc::setMaBaiBao(string maBaiBao)
{
	this->maBaiBao = maBaiBao;
}

string BaiBaoKhoaHoc::getTenBaiBao()
{
	return this->tenBaiBao;
}

void BaiBaoKhoaHoc::setTenBaiBao(string tenBaiBao)
{
	this->tenBaiBao = tenBaiBao;
}

string BaiBaoKhoaHoc::getTenTapChi()
{
	return this->tenTapChi;
}

void BaiBaoKhoaHoc::setTenTapChi(string tenTapChi)
{
	this->tenTapChi = tenTapChi;
}

string BaiBaoKhoaHoc::getLoaiTapChi()
{
	return this->loaiTapChi;
}

void BaiBaoKhoaHoc::setLoaiTapChi(string loaiTapChi)
{
	this->loaiTapChi = loaiTapChi;
}

int BaiBaoKhoaHoc::getSoXuatBan()
{
	return this->soXuatBan;
}

void BaiBaoKhoaHoc::setSoXuatBan(int soXuatBan)
{
	this->soXuatBan = soXuatBan;
}

int BaiBaoKhoaHoc::getNamXuatBan()
{
	return this->namXuatBan;
}

void BaiBaoKhoaHoc::setNamXuatBan(int namXuatBan)
{
	this->namXuatBan = namXuatBan;
}

string BaiBaoKhoaHoc::getNhaXuatBan()
{
	return this->nhaXuatBan;
}

void BaiBaoKhoaHoc::setNhaXuatBan(string nhaXuatBan)
{
	this->nhaXuatBan = nhaXuatBan;
}

string BaiBaoKhoaHoc::getTacGiaChinh()
{
	return this->tacGiaChinh;
}

void BaiBaoKhoaHoc::setTacGiaChinh(string tacGiaChinh)
{
	this->tacGiaChinh = tacGiaChinh;
}

string BaiBaoKhoaHoc::getDongTacGia()
{
	return this->dongTacGia;
}

void BaiBaoKhoaHoc::setDongTacGia(string dongTacGia)
{
	this->dongTacGia = dongTacGia;
}

void BaiBaoKhoaHoc::show(int pos)
{
	cout <<"|" << setw(5) << pos << "|"<< setw(14) << this->maBaiBao << "|" << setw(33) << this->tenBaiBao << "|"
		<< setw(27) << this->tenTapChi << "|" << setw(14)<< this->loaiTapChi << "|"
		<< setw(6) << this->soXuatBan << "|" << setw(6) << this->namXuatBan << "|" 
		<< setw(18) << this->nhaXuatBan << "|" << setw(37) << this->tacGiaChinh << "|"
		<< setw(37) << this->dongTacGia << "|\n";
	cout << "|"<<"_____"<<"|"<< setw(12) << "______________" << "|" << setw(33)
		<< "_________________________________" << "|"
		<< setw(27) << "___________________________" << "|" << setw(14) << "______________"<< "|"
		<< setw(6) << "______" << "|" << setw(6) << "______" << "|"
		<< setw(18) << "__________________" << "|" << setw(37) << "_____________________________________" << "|"
		<< setw(37) << "_____________________________________" << "|\n";
}


BaiBaoKhoaHoc::~BaiBaoKhoaHoc()
{
}
