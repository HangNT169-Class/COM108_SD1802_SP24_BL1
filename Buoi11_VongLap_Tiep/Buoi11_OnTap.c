#include <stdio.h>

int main(){
    // 1. In cac so le tu 0 - n 
    // 2. Tinh tong cac so le tu 1 - n
    // Bai 1
    int so;
    printf("moi ban nhap: ");
    scanf("%d",&so);
    for(int i = 0; i < so+1; i++){
        if( i %2==1){
            printf("%d",i);
        }
        
    }
    // Bai 2
    int a;
    printf("nhap so: ");
    scanf("%d",&a);
    int tich = 1;
    for(int i = 1; i< a+1;i++){
        if(i%2==0){
           tich = tich * i;
        }
    }
    printf("Tich cua cac so chan la = \n%d",tich);
    return 0;
}
