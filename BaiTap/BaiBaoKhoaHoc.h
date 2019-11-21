#pragma once
#include <string>
#include<iostream>
using namespace std;
class BaiBaoKhoaHoc
{
private:
	string maBaiBao;
	string tenBaiBao;
	string tenTapChi;
	string loaiTapChi;
	int soXuatBan;
	int namXuatBan;
	string nhaXuatBan;
	string tacGiaChinh;
	string dongTacGia;

public:
	BaiBaoKhoaHoc();
	BaiBaoKhoaHoc(string, string, string, string, int, int, string, string , string);
	BaiBaoKhoaHoc(BaiBaoKhoaHoc &b);
	BaiBaoKhoaHoc input();
	void output();
	string getMaBaiBao();
	void setMaBaiBao(string maBaiBao);
	string getTenBaiBao();
	void setTenBaiBao(string tenBaiBao);
	string getTenTapChi();
	void setTenTapChi(string tenTapChi);
	string getLoaiTapChi();
	void setLoaiTapChi(string loaiTapChi);
	int getSoXuatBan();
	void setSoXuatBan(int soXuatBan);
	int getNamXuatBan();
	void setNamXuatBan(int namXuatBan);
	string getNhaXuatBan();
	void setNhaXuatBan(string nhaXuatBan);
	string getTacGiaChinh();
	void setTacGiaChinh(string tacGiaChinh);
	string getDongTacGia();
	void setDongTacGia(string dongTacGia);
	void show();

	~BaiBaoKhoaHoc();
};

