#pragma once
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct NamHoc
{
	int hocky, nam;
};
typedef struct NamHoc NAMHOC;

void NhapNamHoc(NAMHOC &);
void XuatNamHoc(NAMHOC);
void XuatNamHoc2(NAMHOC, FILE *&);