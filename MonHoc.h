#pragma once
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct MonHoc
{
	int Masomonhoc, sotinchi;
	char Tenmonhoc[30];
	float diemBT, diemDA, diemGk, diemTH, diemCK, diemTB;
};
typedef struct MonHoc MONHOC;

void NhapMonHoc(MONHOC &);
void XuatMonHoc(MONHOC);
void XuatMonHoc2(MONHOC, FILE *&fileout);


