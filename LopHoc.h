#pragma once
#include"SinhVien.h"
#include<fstream>
#include"NamHoc.h"
#include<stdlib.h>

struct LopHoc
{
	char MaSoLop[30];
	int thgianbatdau, thgianketthuc;
	SINHVIEN *arr;
	int n;
	NAMHOC nam;
};
typedef struct LopHoc LOPHOC;

void NhapLopHoc(LOPHOC &);
void XuatLopHoc(LOPHOC);
void XuatLopHoc2(LOPHOC);
void HoanVi(SINHVIEN &, SINHVIEN &);
void SapXepTheoTen(LOPHOC &, char);
void SapXepTheoDiemTB(LOPHOC &, char);
SINHVIEN* TimKiemTheoMaSo(LOPHOC, char*);
SINHVIEN* TimKiemTheoTen(LOPHOC, char*);
SINHVIEN* TimKiemTheoDiemTBLonNhat(LOPHOC);
SINHVIEN* TimKiemTheoDiemTBNhoNhat(LOPHOC);
