#include"LopHoc.cpp"

void Menu() {
  LOPHOC lh;
  int luachon;
  do {
    printf("\n =============== Menu ===============");
    printf("\n1.Nhap du lieu sinh vien");
    printf("\n2.Xem ds duoc sap xep theo hoten or sap xep theo diem trung binh");
    printf("\n3.Tim kiem sv theo ten hoac ma so");
    printf("\n4.Tim kiem sv diem tb lon nhat or nho nhat");
    printf("\n5.");
    printf("\n Nhap 0 de Thoat !!!");

    printf("\nNhap lua chon:");
    scanf("%d", & luachon);

    if (luachon == 1) {
      NhapLopHoc(lh);
      XuatLopHoc2(lh);
    } else if (luachon == 2) {
      int luachon2;
      do {
        printf("\n=================================================================");
        printf("\n1.Sap xep theo ten");
        printf("\n2.Sap xep theo Diem trung binh");
        printf("\n3. Nhan 0 de thoat !!!");

        printf("\nNhap lua chon 2:");
        scanf("%d", & luachon2);

        if (luachon2 == 1) {
          int luachon3;
          do {
            printf("\n++++++++++++++++++++++++++++++++++++");
            printf("\n1.Sap tang");
            printf("\n2.Sap giam");
            printf("\n3. Nhan 0 de thoat !!!");

            printf("\nNhap lua chon:");
            scanf("%d", & luachon3);

            if (luachon3 == 1) {
              SapXepTheoTen(lh, 't');
              XuatLopHoc(lh);
            } else if (luachon3 == 2) {
              SapXepTheoTen(lh, 'g');
              XuatLopHoc(lh);
            }
          }
          while (luachon3 != 0);
        } else if (luachon2 == 2) {
          int luachon3;
          do {
            printf("\n++++++++++++++++++++++++++++++++++++");
            printf("\n1.Sap tang");
            printf("\n2.Sap giam");
            printf("\n3. Nhan 0 de thoat !!!");

            printf("\nNhap lua chon:");
            scanf("%d", & luachon3);

            if (luachon3 == 1) {
              SapXepTheoDiemTB(lh, 't');
              XuatLopHoc(lh);
            } else if (luachon3 == 2) {
              SapXepTheoDiemTB(lh, 'g');
              XuatLopHoc(lh);
            }
          }
          while (luachon3 != 0);
        }
      }
      while (luachon2 != 0);
    } else if (luachon == 3) {
      int luachon2;
      do {
        printf("\n=================================================================");
        printf("\n1.Tim kiem theo ten");
        printf("\n2.Tim kiem theo ma so");
        printf("\n3. Nhan 0 de thoat !!!");

        printf("\nNhap lua chon 2:");
        scanf("%d", & luachon2);

        if (luachon2 == 1) {
          char MaTimKiem[30];
          rewind(stdin);
          printf("\nNhap vao Ten can tim kiem la: ");
          gets(MaTimKiem);

          SINHVIEN * sv = TimKiemTheoTen(lh, MaTimKiem);

          if (sv == NULL) {
            printf("\nKhong tim thay Ten sinh vien!!!");
          } else {
            printf("\n---------------------------------------------");
            printf("\nTim thay thong tin sinh vien la\n");
            printf("\nMa so:%s", sv -> MaSosv);
            XuatSinhVien( * sv);
          }
        } else if (luachon2 == 2) {
          char MaTimKiem2[30];
          rewind(stdin);
          printf("\nNhap vao ma so can tim kiem la: ");
          gets(MaTimKiem2);

          SINHVIEN * sv = TimKiemTheoMaSo(lh, MaTimKiem2);

          if (sv == NULL) {
            printf("\nKhong tim thay Ma so sinh vien!!!");
          } else {
            printf("\n---------------------------------------------");
            printf("\nTim thay thong tin sinh vien la\n");
            printf("\nMa so:%s", sv -> MaSosv);
            XuatSinhVien( * sv);
          }
        }
      }
      while (luachon2 != 0);
    } else if (luachon == 4) {
      int luachon2;
      do {
        printf("\n=================================================================");
        printf("\n1.Tim kiem theo DTB lon nhat");
        printf("\n2.Tim kiem theo DTB nho nhat");
        printf("\n3. Nhan 0 de thoat !!!");

        printf("\nNhap lua chon 2:");
        scanf("%d", & luachon2);

        if (luachon2 == 1) {
          SINHVIEN * sv = TimKiemTheoDiemTBLonNhat(lh);
          if (sv == NULL) {
            printf("\nKhong tim thay Ten sinh vien!!!");
          } else {
            printf("\n---------------------------------------------");
            printf("\nTim thay thong tin sinh vien la\n");
            printf("\nMa so:%s", sv -> MaSosv);
            XuatSinhVien( * sv);
          }
        } else if (luachon2 == 2) {
          SINHVIEN * sv = TimKiemTheoDiemTBNhoNhat(lh);

          if (sv == NULL) {
            printf("\nKhong tim thay Ma so sinh vien!!!");
          } else {
            printf("\n---------------------------------------------");
            printf("\nTim thay thong tin sinh vien la\n");
            printf("\nMa so:%s", sv -> MaSosv);
            XuatSinhVien( * sv);
          }
        }
      }
      while (luachon2 != 0);
    } else if (luachon == 5) {

    }
  }
  while (luachon != 0);
}

int main() {
  Menu();

}