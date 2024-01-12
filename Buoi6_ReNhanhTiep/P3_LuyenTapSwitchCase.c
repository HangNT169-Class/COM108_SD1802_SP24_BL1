#include<stdio.h>
int main(){
    
    int soNguyen;
    printf("Nhap so");
    scanf("%d", &soNguyen);
    switch(soNguyen){
        case 1: case 2: case 3:{
            printf("Quy 1");
            break;
        }
        case 4: case 5: case 6:{
            printf("quy 2");
            break;
        } 
        case 7: case 8: case 9:{
            printf("Quy 3");
            break;
        }
        case 10: case 11: case 12:{
            printf("quy 4");
            break;
        }
        default:{
            printf("ko co quy");
            break;
        }
    }
    
    
    
    return 0;
}