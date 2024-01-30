// Tao 1 menu. Menu lap lai toi khi chon 3 thi dung 
// 1. Tinh tong cua 2 so nguyen nhap tu ban phim
// 2. Tinh tich cua cac so nguyen le hoac chia het cho 3 tu 1 - n 
// 3. Thoat

// Co 2 loai ham 
// 1. Ham khong co kieu du lieu tra ve: VOID 
// 2. Ham co kieu du lieu tra ve (RETURN )
// Cu phap 
// kieu du lieu ten ham (tham so truyen vao){
//    CODE => LAM GI THI LAM
// }
#include<stdio.h>
// BAT BUOC TAT CA CAC HAM PHAI VIET TREN INT MAIN 
void tinhTong2222(int soThuNhat, int soThuHai){
    int tong = soThuNhat + soThuHai;
    printf("Tong = %d\n",tong);
}
int tinhTong(int a,int b){
    int tong =  a +b;
    return tong;
}
// void a(){
    
// }
void tichHaiSo(int so){
    int tich=1;
    for(int i = 1;i<so+1;i++){
        tich=tich*i;
    }
    printf("tich = %d",tich);
}
int main(){
    int luaChon;
    do{
        // Code 
        printf("\nmoi ban chon menu: ");
        scanf("%d",&luaChon);
        switch(luaChon){
            case 1:{
                printf("chuc nang 1");
                int a;
                int b;
                printf("\nmoi ban nhap so thu nhat: ");
                scanf("%d",&a);
                printf("\nmoi ban nhap so thu hai: ");
                scanf("%d",&b);
                tinhTong2222(a,b); // GOI HAM KHONG CO KIEU DU LIEU TRA 
                // GOI HAM CO KIEU DU LIEU TRA VE 
                int sum = tinhTong(a,b);
                printf("Sum = %d\n",sum);
                // int tong = a + b;
                // printf("Tong = %d",tong);
                break;
            }
            case 2:{
                printf("chuc nang 2\n");
                int nguyen;
                printf("Moi nhap so nguyen");
                scanf("%d",&nguyen);
                tichHaiSo(nguyen);
                // int tich=1;
                // for(int i=1; i<nguyen+1; i++){
                //     if(i %2 != 0 || i %3==0 ){
                //         tich=tich*i;
                //     }   
                // }
                // printf("Tich=%d\n",tich);
                break;
            }
            case 3:{
                printf("chuc nang 3");
                break;
            }
            default:{
                printf("Chuc nang khong ton tai\n");
                break;
            }
        }
    }while(luaChon != 3);
    return 0;
}
