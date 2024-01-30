// 1. Nhap 1 mang so nguyen tu ban phim 
// vs size nhap tu ban phim
// In cac so nguyen trong mang ra man hinh
#include <stdio.h>

int main(){
    // B1: Nhap size cua mang 
    int size;
    printf("Moi nhap nhap size:");
    scanf("%d",&size);
    // B2: Khai bao mang va nhap mang 
    int arr[100]; // DEFAULT DIEN 100/50: KHAI BAO MANG 
    printf("Vui long nhap cac phan tu trong mang \n");
    for(int i = 0; i < size ;i++){
        scanf("%d",&arr[i]);
    }
    // B3: In cac phan tu trong mang 
    printf("gia tri cua cac phan tu trong mang:\n");
    for(int i = 0;i < size ;i++){
        printf("%d\n",arr[i]);
    }
    

    return 0;
}
