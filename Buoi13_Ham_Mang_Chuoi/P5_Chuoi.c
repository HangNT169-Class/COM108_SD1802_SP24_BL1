#include<stdio.h>
int main(){
    // a,Hang, Nguyen Thuy Hang 
    // char => %c 
    // char name[100]; // XAU KY TU => MANG CHUOI GOM NHIEU KI TU 
    // printf("Vui long nhap ten:");
    // // scanf("%s",name);
    // // XAU KY TU => %S VA KHONG CO & KHI SCANF 
    // gets(name); // DOC DUOC CA KHOANG TRANG 
    // printf("Ten la: %s",name);
    // B1: Nhap ten, dia chi, nganh hoc cua ban than va in ra man hinh 
    // B2: Nhap diem toan, ly, hoa , ky hoc cua ban than va in ra man hinh
    // B3: Nhap ten, tuoi, dia chi, ky hoc, nganh hoc cua ban than 
    // va in ra man hinh
    char ten[100];
    char diaChi[100];
    char nganhHoc[100];
    printf("Nhap ten:");
    gets(ten);
    printf("Nhap dia chi:\n");
    gets(diaChi);
    printf("Nhap nganh hoc:\n");
    gets(nganhHoc);
    printf("ten = %s",ten);
    printf("dia chi = %s",diaChi);
    printf("nganh hoc = %s",nganhHoc);
    int toan;
    printf("diemToan");
    scanf("%d",&toan);
    int ly;
    printf("diemLy");
    scanf("%d",&ly);
    int hoa;
    printf("diemHoa");
    scanf("%d",&hoa);
    printf("Diemhoa=%d",toan);
    printf("Diemly=%d",ly);
    printf("Diemhoa=%d",hoa);
    return 0;
}
