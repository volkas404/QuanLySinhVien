#include "SinhVien.h"

#include "MonHoc.cpp"

#include "Ngay.cpp"

#include "PhongHoc.cpp"

void NhapSinhVien(SINHVIEN & sv) {
  rewind(stdin);
  printf("\nNhap ho ten sv:");
  gets(sv.HoTenSV);
  Nhap(sv.n);
  rewind(stdin);
  printf("\nNhap khoa:");
  gets(sv.Khoa);
  NhapPhong(sv.p);

  printf("\n===== Nhap thong tin mon hoc ===== ");
  NhapMonHoc(sv.ListMonHoc);
}

float TinhDiemTB2(SINHVIEN sv) {
  return sv.ListMonHoc.diemBT * 0.1 + sv.ListMonHoc.diemGk * 0.1 + sv.ListMonHoc.diemDA * 0.1 + sv.ListMonHoc.diemTH * 0.2 + sv.ListMonHoc.diemCK * 0.5;
}

void XuatSinhVien(SINHVIEN sv) {
  printf("\nHo ten:%s", sv.HoTenSV);
  printf("\nNgay sinh:");
  Xuat(sv.n);
  printf("\nKhoa:%s", sv.Khoa);
  XuatPhong(sv.p);
  XuatMonHoc(sv.ListMonHoc);
  printf("\nDiem TB:%f", TinhDiemTB2(sv));
}

void XuatSinhVien2(SINHVIEN sv, FILE * & fileout) {
  fprintf(fileout, "\nHo ten:%s", sv.HoTenSV);
  fprintf(fileout, "\nNgay sinh:");
  Xuat2(sv.n, fileout);
  fprintf(fileout, "\nKhoa:%s", sv.Khoa);
  XuatPhong2(sv.p, fileout);
  XuatMonHoc2(sv.ListMonHoc, fileout);
  fprintf(fileout, "\nDiem TB:%f", TinhDiemTB2(sv));
}