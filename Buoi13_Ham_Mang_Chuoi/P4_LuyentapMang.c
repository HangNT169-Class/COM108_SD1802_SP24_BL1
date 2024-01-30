// Tao 1 menu. Menu lap lai toi khi chon chuc nang thoat thi dung 
// 1. Nhap vao 1 mang so nguyen. In cac phan tu
// 2. Nhap vao 1 mang so thuc. In cac phan tu 
// 3. Nhap vao 1 mang so nguyen. Tinh tong cac phan tu 
// 4. Nhap vao 1 mang so nguyen. Tinh tich cac phan tu o vi tri le 
// 5. Nhap vao 1 mang so nguyen. Tinh tong cac phan tu chan 
// 6. Nhap vao 1 mang so nguyen. Tinh tich cac phan tu le o vi tri chan 
// 7. Nhap vao 1 mang so nguyen. Liet ke cac phan tu chia het cho 2 va o vi tri chan 
// 8. Thoat 
#include<stdio.h>
int main(){
    int luaChon;
    do{
        printf("\nnhap menu: ");
        scanf("%d",&luaChon);
        switch(luaChon){
            case 1:{
                printf("chuc nang 1\n");
                int size;
                printf("vui long nhap:\n");
                scanf("%d",&size);
                int arr[100];
                printf("vui long nhap phan tu:\n");
                for(int i = 0;i < size;i=i+1){
                    scanf("%d",&arr[i]);
                }
                printf("gia tri cua bien:");
                for(int i = 0;i < size;i=i+1){
                    printf("%d\n",arr[i]);
                }
                break;
            }
            case 2:{
                printf("chuc nang 2\n");
                int size;
                printf("Moi ban nhap size: ");
                scanf("%d", &size);
                
                float arr[100];
                printf("Moi ban cac phan tu: \n");
                for(int i = 0; i < size; i++){
                    scanf("%f", &arr[i]);
                }
                printf("Gia tri cua phan tu la: \n");
                for(int i = 0; i < size; i++){
                    printf("%f", arr[i]);
                }
                break;
            }
            case 3:{
                printf("chuc nang 3\n");
                int size;
                printf("\nNhap so vao: ");
                scanf("%d",&size);
                int an[100];
                printf("\nNhap cac phan tu trong mang");
                for(int z = 0; z < size ; z ++){
                    scanf("%d",&an[z]);
                }
                int tong = 0;
                int tich = 1;
                for(int z = 0; z < size; z++){
                    tong = tong + an[z];
                }
                // tich o vi tri le 
                for(int i = 0 ;i < size ;i++){
                    if(i % 2 !=0){ // VI TRI 
                        tich *= an[i];
                    }
                }
                // Tinh tong cac phan tu chan 
                for(int i = 0 ;i < size ;i++){
                   if(an[i] % 2 == 0){ // GIA TRI 
                       tong+=an[i];
                   }
                }
                printf("\nTong = %d",tong);
                break;
            }
            case 4:{
                printf("chuc nang 4\n");
                break;
            }
            case 5:{
                printf("chuc nang 5\n");
                break;
            }
            case 6:{
                printf("chuc nang 6\n");
                break;
            }
            case 7:{
                printf("chuc nang 7\n");
                break;
            }
            case 8:{
                printf("chuc nang 8");
                printf("\nthoat");
                break;
            }
            default:{
                printf("chuc nang ko ton tai");
                break;
            }
        }
    }while(luaChon != 8);
    return 0;
}