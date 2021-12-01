#pragma once
#include"MonHoc.h"
#include"Ngay.h"
#include"PhongHoc.h"
struct SinhVien
{
	char MaSosv[30], HoTenSV[30], Khoa[30];
	NGAY n;
	MONHOC ListMonHoc;
	PHONGHOC p;
};
typedef struct SinhVien SINHVIEN;

void NhapSinhVien(SINHVIEN &);
void XuatSinhVien(SINHVIEN);
void XuatSinhVien2(SINHVIEN, FILE *&);
float TinhDiemTB2(SINHVIEN);
