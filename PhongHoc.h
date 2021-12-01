#pragma once
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct PhongHoc
{
	char MaSoPhong[30];
	int id;
};
typedef struct PhongHoc PHONGHOC;

void NhapPhong(PHONGHOC &);
void XuatPhong(PHONGHOC);
void XuatPhong2(PHONGHOC, FILE *&);


