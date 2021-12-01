#pragma once
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Ngay
{
	int ngay, thang, nam;
};
typedef struct Ngay NGAY;
void Nhap(NGAY &);
void Xuat(NGAY);
void Xuat2(NGAY, FILE *&);
