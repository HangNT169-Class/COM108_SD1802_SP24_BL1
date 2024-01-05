#include<stdio.h>
int main(){
    // Nhap va xuat du lieu 
    // 1. Xuat du lieu => In ra man hinh => printf
    // int => %d 
    // long => %ld 
    // float => %f 
    // double => %lf 
    // char => %c,...
    // In 1 so nguyen co gia tri khoi tao la 5 
    int a = 5; // khai bao bien co gia tri la 5 
    // in ra => printf 
    printf("Number = %d",a);
    // In 2 so nguyen co gia tri khoi tao tuy y 
    int numberFive=11;
    int numberTwo=12;
    // printf("\nnumberFour=%d",numberFive);
    // printf("\nnumberOk=%d",numberTwo);
    printf("\nSo thu 1 = %d - So thu 2 = %d",numberFive,numberTwo);
    // B1: In 3 so thuc co gia tri khoi tao tuy y.
    // B2: Tinh tong cua 2 so nguyen co gia tri khoi tao tuy y 
     // float v1=5.5;
    // float v2=8.9;
    // float v3=4.5;
    // printf("so thuc 1 la:%f - so thuc 2 la:%f - so thuc 3 la:%f",v1,v2,v3);
    // B1: Tao 2 so nguyen 
    // int a = 7;
    // int b = 8;
    // int sum = a+b;
    // printf("Sum = %d",sum);
    int soMot = 3;
    int soHai = 4;
    int sum = soMot + soHai;
    printf("tonghaiso = %d\n", sum);
    int hieu = soMot - soHai;
    printf("hieuhaiso = %d\n", hieu);
    int tich = soMot * soHai;
    printf("tichhaiso = %d\n", tich);
    // Ep kieu (so nguyen => so thuc )
    // Co 2 cach ep kieu:
    // C1: Ep kieu tuong minh :(kieu du lieu)cong thuc 
    // C2: Ep kieu ngam : Nhan vs 1.0
    // float thuong = (float)soMot / soHai; // Cach ep kieu tuong minh 
    float thuong = 1.0 * soMot /soHai; // Ep kieu ngam
    printf("thuonghaiso = %f\n", thuong);
    // Co 4 loai toan tu :
    // Toan tu so hoc : +,-,*,/,%(Lay so du)
    // Toan tu so sanh : >,<,>=,<=, == (LA DAU BANG TRONG TOAN)
    // Toan tu logic: && (AND), ||(OR), !(NOT)
    // Toan tu gan: =,+=,-=,*=,/=,++,--....
    return 0;
}