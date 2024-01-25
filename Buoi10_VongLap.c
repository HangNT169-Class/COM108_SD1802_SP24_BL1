#include<stdio.h>
int main(){
    // printf("1");
    // printf("\n2");
    // printf("\n3");
    // printf("\n4");
    // printf("\n5");
    // printf("\n6");
    // printf("\n7");
    // printf("\n8");
    // printf("\n9");
    // printf("\n10");
    // Vong lap : DUNG DE LAP DI LAP LAI 1 VIEC GI DAY 
    // CO 3 LOAI VONG LAP: FOR, WHILE, DO...WHILE 
    // 1. for 
    // Cu phap:
    // for(gia tri khoi tao;dieu kien;buoc nhay){
    //     // code => LUI VAO 1 TAB 
    // }
    // VD: In cac so tu 1-10 
    // for(int i = 1; i < 11; i++){
    //     printf("%d\n",i);
    // }
    // i++: Tang len 1 don vi 
    // 1. In cac so tu 1- 50 
    // 2. In cac so tu 0 - 20 
    // 3. In cac so chan tu 0 - 50 
    // 4. In cac so le tu 0 - 50 
    // printf("Bai 1\n");
    // int i = 1; // Bien toan cuc 
    // for(; i<51; i++){
    //   printf("%d\n",i);
    // } 
    // printf("Luc sau:%d\n",i);
    // printf("Bai 2\n");
    // for(int i = 0; i < 21; i++){ // i o day la bien CUC BO 
    //     printf("%d\n",i);
    // }
    // Co 2 loai bien:
    // 1. Bien toan cuc: Co gia tri o khap moi noi 
    // 2. Bien cuc bo: Chi co gia tri trong khoi lenh no duoc khai bao
     // C1
    for(int i = 0; i < 51; i++){ // DUYET CAC SO TU DAU TOI CUOI 
        if(i % 2 == 0){ // KIEM TRA NEU LA CHAN => PRINTF
            printf("%d\n", i);
        }
    }
    // Cach viet buoc nhay 
    // Tang len/ Giam di 1 don vi: 
        // C1: i++; i--;
        // C2: i=i+1; i= i-1;
        // C3: i+=1;i-=1;
    // Tang len/Giam di x don vi 
        // C1: i=i+x; i=i-x;
        // C2: i+=x;i-=x;
    // C2
    for(int i = 0; i < 51; i+=2){
        printf("%d\n", i);
    }
    // Bai 4: 
    // C1: 
     for(int i = 0;i < 51;i++){
        if(i % 2 != 0){
            printf("%d\n",i);
        }
    }
    // C2: 
    for(int i = 1; i < 51; i=i+2){
        printf("%d\n",i);
    }
    // 1. In cac so chia het cho 5 tu 0 - 20 
    // 2. In cac so chia het cho 3 va 5 tu 1 - 50 
    // 3. Nhap so nguyen n. In cac so tu 0-n 
    // 4. Nhap vao so nguyen n. In cac so chan tu 0 - n 
    // 5. Nhap vao so nguyen n . Tinh tong cac so tu 0 - n 
    // 6. Nhap vao so nguyen n. Tinh tich cac so tu 1 - n
    // printf("Bai 1:");
    // for(int number=0;number<20;number++){
    //   if(number %5 == 0){
    //       printf("\n%d",number);
    //   }
    // }
    // printf("\nBai 2:");
    // for(int number=0;number<20;number++){
    //   if(number %5 == 0 && number % 3 == 0){
    //       printf("\n%d",number);
    //   }
    // }
    // printf("\nBai 3:");
    // int soNguyen;
    // printf("nhap so:");
    // scanf("%d",&soNguyen);
    // for(int i = 0; i < soNguyen + 1; i=i+1){
    //   printf("%d\n",i);
    // }
    // // Bai 4
    // int a;
    // printf("nhap so: ");
    // scanf("%d",&a);
    // for(int i=0;i<a;i++){
    //     if(i%2==0){
    //         printf("%d\n",i);
    //     }
    // }
    // Bai 5: 
    // int n;
    // printf("nhap so: ");
    // scanf("%d",&n);
    // int tong = 0; // KHOI TAO 1 BIEN TONG CO GIA TRI LA 0 
    // for(int i = 0; i < n+1 ;i++){
    //     tong = tong + i; // TONG CUA VONG LAP TRUOC + BIEN I 
    //     // C2: tong+=i;
    // }
    // printf("Tong = %d\n",tong);
    // printf("Bai 6")
    // int so;
    // printf("Nhap so:");
    // scanf("%d",&so);
    // int tich =1;
    // for(int i=1;i<so +1; i++){
    //   tich = tich *i;
    // }
    // printf("%d",tich);
    // int i;
    // printf("Moi ban nhap so nguyen:");
    // scanf("%d",&i);
    // int tich = 1;
    // for(int e = 1; e < i + 1; e++){
    //     if(e % 2 == 1){
    //         tich = tich * e;
    //     }
    // }
    // printf("Tich = %d",tich);
    return 0;
}