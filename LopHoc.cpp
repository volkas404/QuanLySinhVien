#include "LopHoc.h"
#include "NamHoc.cpp"
#include "SinhVien.cpp"
void NhapLopHoc(LOPHOC &lh)
{
	printf( "\nNhap so luong sinh vien:");
	scanf("%d", &lh.n);

	NhapNamHoc(lh.nam);

	lh.arr = new SINHVIEN[lh.n];
	for (int i = 0; i < lh.n; i++)
	{
		printf( "\n========== Nhap du lieu sinh vien thu %d ==========",i+1);
		int check;
		do {
			check = 0;
			rewind(stdin);
			printf( "\nNhap ma so:");
			gets(lh.arr[i].MaSosv);

			for (int j = i - 1; j >= 0; j--)
			{
				if (strcmp(lh.arr[i].MaSosv, lh.arr[j].MaSosv) == 0)
				{
					check = 1;
					break;
				}
			}
			if (check == 1)
			{
				printf( "\nMa so da bi trung!!!");
			}
		} while (check == 1);
		NhapSinhVien(lh.arr[i]);
	}
	printf("\n\nda ghi vao file OUTPUT.TXT");
}

void XuatLopHoc(LOPHOC lh)
{
	XuatNamHoc(lh.nam);
	for (int i = 0; i < lh.n; i++)
	{
		printf( "\n ========== Sinh vien thu %d ==========",i+1);
		printf("\nMa so :%s", lh.arr[i].MaSosv);
		XuatSinhVien(lh.arr[i]);
	}
}

void XuatLopHoc2(LOPHOC lh)
{
	FILE *fileout;
	fileout = fopen("OUTPUT.txt", "w");
	XuatNamHoc2(lh.nam, fileout);
	for (int i = 0; i < lh.n; i++)
	{
		fprintf(fileout,"\n========== Sinh Viên thu %d ==========", i + 1);
		fprintf(fileout,"\nMa so:%s", lh.arr[i].MaSosv);
		XuatSinhVien2(lh.arr[i], fileout);
	}
	fclose(fileout);
}

void Hoanvi(SINHVIEN &a, SINHVIEN &b)
{
	SINHVIEN t = a;
	a = b;
	b = t;
}

void SapXepTheoTen(LOPHOC &lh, char phanloai)
{
	for (int i = 0; i < lh.n - 1; i++)
	{
		for (int j = i + 1; j < lh.n; j++)
		{
			if (phanloai == 't')
			{
				if (strcmp(lh.arr[i].HoTenSV, lh.arr[j].HoTenSV) == 1)
				{
					Hoanvi(lh.arr[i], lh.arr[j]);
				}
			}
			else if (phanloai == 'g')
			{
				if (strcmp(lh.arr[i].HoTenSV, lh.arr[j].HoTenSV) == -1)
				{
					Hoanvi(lh.arr[i], lh.arr[j]);
				}
			}
		}
	}
}

void SapXepTheoDiemTB(LOPHOC &lh, char phanloai)
{
	for (int i = 0; i < lh.n - 1; i++)
	{
		for (int j = i + 1; j < lh.n; j++)
		{
			if (phanloai == 't')
			{
				if (TinhDiemTB2(lh.arr[i]) > TinhDiemTB2(lh.arr[j]))
				{
					Hoanvi((lh.arr[i]), (lh.arr[j]));
				}
			}
			else if (phanloai == 'g')
			{
				if (TinhDiemTB2(lh.arr[i]) < TinhDiemTB2(lh.arr[j]))
				{
					Hoanvi((lh.arr[i]), (lh.arr[j]));
				}
			}
		}
	}
}


SINHVIEN* TimKiemTheoMaSo(LOPHOC lh, char* Matimkiem)
{
	for (int i = 0; i < lh.n; i++)
	{
		if (strcmp(lh.arr[i].MaSosv, Matimkiem) == 0)
		{
			return &lh.arr[i];
		}
	}
	return NULL;
}

SINHVIEN* TimKiemTheoTen(LOPHOC lh, char* Tentimkiem)
{
	for (int i = 0; i < lh.n; i++)
	{
		if (strcmp(lh.arr[i].HoTenSV, Tentimkiem) == 0)
		{
			return &lh.arr[i];
		}
	}
	return NULL;
}

SINHVIEN* TimKiemTheoDiemTBLonNhat(LOPHOC lh)
{
	float dtbmax = TinhDiemTB2(lh.arr[0]);
	int index = 1;
	for (int i = 0; i < lh.n; i++)
	{
		if (TinhDiemTB2(lh.arr[i]) > dtbmax)
		{
			dtbmax = TinhDiemTB2(lh.arr[i]);
			index = i;
		}
	}
	return &lh.arr[index];
}

SINHVIEN* TimKiemTheoDiemTBNhoNhat(LOPHOC lh)
{
	float dtbmin = TinhDiemTB2(lh.arr[0]);
	int index = 1;
	for (int i = 0; i < lh.n; i++)
	{
		if (TinhDiemTB2(lh.arr[i]) < dtbmin)
		{
			dtbmin = TinhDiemTB2(lh.arr[i]);
			index = i;
		}
	}
	return &lh.arr[index];
}


