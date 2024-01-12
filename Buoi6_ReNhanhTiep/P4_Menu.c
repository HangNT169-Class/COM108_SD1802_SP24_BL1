// Tao 1 menu gom cac chuc nang sau:
// 1. Tinh tong 2 so nguyen nhap tu ban phim.
// 2. Tinh tuoi cua ban than khi nhap vao nam sinh
// 3. Thoat
#include <stdio.h>

int main(){
    // Neu than thien hon (Nen in ra cai menu)
    // B1: Nhap chuc nang muon chon 
    int chucNang;
    printf("Moi chon chuc nang:");
    scanf("%d",&chucNang);
    // B2: Tao menu => dung switch case 
    switch(chucNang){
        case 1:{
            printf("Chuc nang 1");
            
            break;
        }
        case 2:{
            printf("Chuc nang 2");
            int namSinh;
            printf("nam sinh");
            scanf("%d",&namSinh);
            int tuoi = 2024-namSinh;
            printf("tuoi = %d",tuoi);
            break;
        }
        case 3:{
            printf("Chuc nang 3");
            break;
        }
        default:{
            printf("Chuc nang k ton tai");
            break;
        }
    }
    
    return 0;
}
