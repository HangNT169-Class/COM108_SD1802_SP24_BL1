// 1. Tính tổng, hiệu, tích thương của 2 số nguyen có giá trị tuỳ ý 
// 2. Tính TBC điểm toán, lý , của sinh viên với điểm toán, lý, hoá 
// là số nguyên và có giá trị tuỳ ý 
// 3. Tính chu vi, diện tích của hình chữ nhật với 2 cạnh của hcn 
// là số nguyên và có giá trị tuỳ ý 
#include<stdio.h>
int main(){
    // Bai 2
    int toan=9;
    int ly=7;
    int hoa=10;
    double trungBinh=(double)(toan+ly+hoa)/3;
    printf("(%d+%d+%d)/3=%lf",toan,ly,hoa,trungBinh);
    // Bai 1
    int chieuDai =5;
    int chieuRong =4;
    int chuVi =(chieuDai+chieuRong)*2;
    int dienTich =chieuDai*chieuRong;
    printf("chuVihcn =%d\n",chuVi);
    printf("dienTichhcn =%d",dienTich);
    return 0;
}