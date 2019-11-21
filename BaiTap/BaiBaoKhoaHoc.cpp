#include "BaiBaoKhoaHoc.h"


BaiBaoKhoaHoc::BaiBaoKhoaHoc()
{
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

void BaiBaoKhoaHoc::show()
{
	cout <<this->maBaiBao << endl;
	cout << this->tenBaiBao << endl;
	cout << this->tenTapChi << endl;
	cout << this->loaiTapChi << endl;
	cout << this->soXuatBan << endl;
	cout << this->namXuatBan << endl;
	cout << this->nhaXuatBan << endl;
	cout << this->tacGiaChinh << endl;
	cout << this->dongTacGia << endl;
	
	
}


BaiBaoKhoaHoc::~BaiBaoKhoaHoc()
{
}
