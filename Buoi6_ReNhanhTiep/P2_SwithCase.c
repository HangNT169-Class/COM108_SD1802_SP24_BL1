#include <stdio.h>

int main()
{
    // switch ... case => Dung de re nhanh 
    // Nhung cac dieu kien trong switch case chi co the la 1 gia tri cu the 
    // Cu phap:
    // switch(ten bien){
    //     case gia tri:{
    //         // Code 
    //         break; // Dung switch => Thoat khoi switch 
    //     }
    //     // Co the co rat nhieu case 
    //     default:{ // Cac truong hop con lai (CHINH LA ELSE)
    //         // code 
    //         break;
    //     }
    // }
    // Chu y:
    // Ket thuc switch LUON LUON LA DEFAULT 
    // ket thuc moi case LUON LUON LA BREAK 
    // VD: Nhap vao 1 so. Kiem tra so day la thang nao trong nam 
    // => chuyen sang Switch case 
    // B1: Nhap 1 so nguyen tu ban phim 
    int soNguyen;
    printf("Nhap so thang:");
    scanf("%d", &soNguyen);
    // B2: Kiem tra thang 
    switch(soNguyen){
        case 1:{
            printf("Thang mot");
            // Long la if...
            break;
        }
        case 2:{
            printf("Thang hai");
            break;
        }
        // Co 12 case 
        default:{ // Cac truong hop con lai 
            printf("Thang khong ton tai");
            break;
        }
    }
    // Nhap vao 1 so nguyen.
    // Kiem tra thang nay thuoc quy nao trong nam 
    
    return 0;
}
