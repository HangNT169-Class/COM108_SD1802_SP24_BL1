#include<stdio.h> // khai bao thu vien 
int main(){
    // Code se duoc dat o giua 
    // Ket thuc moi dong lenh la dau cham phay 
    // De in ra man hinh => printf
    // \n: Dung de xuong dong
    // \t: Lui vao 1 tab 
    printf("Xin chao toi ten la aaaa");
    printf("\n\tabcjhshdfghdghf ");
    printf("\n\tabcjhshdfghdghf ");  
    printf("\n\tabcjhshdfghdghf ");  
    // In thong tin ca nhan cua ban than ra man hinh
    // gom : ten, tuoi, truong hoc, nganh hoc, dia chi 
    printf("Ten sang");
    printf("\ntuoi 16");
    printf("\ntruong FPT");
    printf("\nnganh hoc cong nghe thong tin");
    printf("\ndia chi lang tam my");
    
    // Kieu du lieu 
    // so nguyen : 1,2.... => int / long 
    // so thuc: 1,2;-2,2..... => float/double 
    // chuoi : char 
    // dung sai => bool (true/false)
    // Cach khai bao bien 
    // kieu du lieu ten bien;
    // VD: Khai bao 1 bien so nguyen 
    int number;
    // Khai bao 1 bien so nguyen co gia tri khoi tao la 10 
    int a = 10; 
    // Khoi tao 1 so thuc co gia tri la 7.2 
    // Khoi tao 1 so nguyen co gia tri la 8 
    // Khoi tao 1 so thuc co gia tri 9.9 
    float b = 7.2;
    int c = 8; 
    float d = 9.9; 
    // Co 2 quy tac dat ten:
    // camelcase (Lac da): numberFirst 
    // snakecase (ran): number_first
    // Luyen tap:
    // 1. In thong tin cua nyc ra man hinh: ten, tuoi, dia chi 
    // 2. Khai bao 1 so thuc co gia tri ban dau la 8.8 
    return 0;
}
