#include <stdio.h>

int main()
{
    // number%2 == 0
    // Nhap vao 1 so nguyen => Kiem tra day la thang nao trong nam 
    // 1 => Thang mot
    // 5 => Thang nam 
    // 15 =>  Khong ton tai thang trong nam 
    int soNguyen;
    printf("Nhap so thang:");
    scanf("%d", &soNguyen);
    if(soNguyen == 1){
        printf("Thang nay la thang mot");
    }else if(soNguyen == 2){
        printf("Thang nay la thang hai");
    }else if(soNguyen == 3){
        printf("Thang nay la thang ba");
    }else if(soNguyen == 4){
        printf("Thang nay la thang bon");
    }else if(soNguyen == 5){
        printf("Thang nay la thang nam ");
    }else if(soNguyen == 6){
        printf("Thang nay la thang sau");
    }else if(soNguyen == 7){
        printf("Thang nay la thang bay");
    }else if(soNguyen == 8){
        printf("Thang nay la thang tam");
    }else if(soNguyen == 9){
        printf("Thang nay la thang chin");
    }else if(soNguyen == 10){
        printf("Thang nay la thang muoi");
    }else if(soNguyen == 11){
        printf("Thang nay la thang muoi mot");
    }else if(soNguyen == 12){
        printf("Thang nay la thang muoi hai");
    }else{
        printf("Thang nay khong ton tai");
    }
    return 0;
}
