#include<stdio.h>
int main(){
    // Nhap 1 so nguyen tu ban phim 
    // int soMot;
    // printf("Moi ban nhap:");
    // scanf("%d",&soMot);
    // Nhap vao 1 so nguyen 
    // va kiem tra so vua nhap nhu the nao voi 5 
    // Re nhanh 
    // 1.if else 
    // Cu phap:
    // if(dieu kien){
    //   // code 
    // }else if(dieu kien){
    //     // code
    // }
    // ... Co the co nhieu else if 
    // else{
    //     // Code 
    // }
    // CHU Y:
    // LUON LUON CHI CO 1 IF VA 1 ELSE 
    // SO LUONG ELSE IF CO THE CO NHIEU 
    // VD:
    // Nhap vao 1 so nguyen. 
    // Kiem tra so day lon hon 5 hay bang 5 hay nho hon 5
    // printf("moi nhap so:");
    // int number;
    // scanf("%d",&number);
    // if(number > 5){
    //     printf("Day la so lon hon 5");
    // }else if(number == 5){
    //     printf("Day la so bang 5");
    // }else{
    //     printf("Day la so nho hon 5");
    // }
    // // Nhap vao 1 so nguyen. 
    // // Kiem tra day la so chan hay le 
    // int number;
    // printf("Moi ban nhap:");
    // scanf("%d",&number);
    // if(number % 2 == 0){
    //     printf("Day la so chan");
    // }else{
    //     printf("Day la so le");
    // }
    // 1. Kiểm tra số nhập từ bàn phím là nguyên dương hay không 
    int number;
    printf("Moi ban nhap:");
    scanf("%d",&number);
    if(number > 0){
        printf("Nguyen duong");
    }else if(number < 0){
        printf("Nguyen am");
    }else{
        printf("Bang 0");
    }
    return 0;
}