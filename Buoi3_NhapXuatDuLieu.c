#include <stdio.h>

int main(){
   // 1. Xuat du lieu ra man hinh => printf
   // int => %d 
   // long => %ld 
   // float => %f 
   // double => %lf 
   // char => %c,%s....
   // Vd: In 1 so nguyen co gia tri khoi tao la 5 
   int a = 5; // Khai bao 1 bien co gia tri la 5 
   printf("Gia tri so nguyen la %d",a);
   // BT: In 2 so nguyen co gia tri khoi tao tuy y ra man hinh 
    int n = 6;
    int t = 8;
    // printf("gia tri so nguyen %d\n", n);
    // printf("gia tri so nguyen %d", t);
    printf("a = %d , b = %d",n,t);
    // B1: In gia tri cua 3 so thuc ra man hinh 
    // voi gia tri khoi tao tuy y 
    // B2: Tinh tong cua 2 so nguyen voi gia tri tuy y 
    float sothuc1 = 1.2;
    float sothuc2 = 1.3;
    float sothuc3 = 2.3;
    printf("\ns1 = %f - s2 = %0.1f - s3 = %0.2f",sothuc1,sothuc2,sothuc3);
    // BT: Tinh tong, hieu, tich thuong cua 2 so nguyen 
    // B1: Khai bao 2 so nguyen 
    int soThuNhat = 5;
    int soThuHai = 6;
    int tong = soThuNhat + soThuHai;
    printf("Tong = %d",tong);
     int soThuNhat = 3;
    int soThuHai = 2;
    int tong = soThuNhat + soThuHai;
    printf("tong la = %d\n",tong);
    int hieu = soThuNhat - soThuHai;
    printf("hieu la = %d\n", hieu);
    int tich = soThuNhat * soThuHai;
    printf("tich la= %d\n",tich);
    // Co 2 cach ep kieu:
    // C1: Ep kieu tuong minh:(kieu du lieu)cong thuc
    // C2: Ep kieu ngam: 1.0*cong thuc 
    // float thuong = (float)soThuNhat / soThuHai;
    float thuong = 1.0*soThuNhat / soThuHai;
    printf("thuong la = %0.1f\n",thuong);
    // 4 loai toan tu :
    // Toan tu so hoc: +,-,*,/,%(lay du)
    // Toan tu so sanh: >,>=,<,<=,==(BANG)
    // Toan tu logic : &&(AND), ||(OR), !(NOT)
    // Toan tu gan : =, ++,--,+=,-=,*=,/=.....
    return 0;
}
