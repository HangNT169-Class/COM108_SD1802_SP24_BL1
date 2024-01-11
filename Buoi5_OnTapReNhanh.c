/**1. Kiem tra so nguyen nhap tu ban phim la so chan hay le 
2. Nhập vào điểm toán lý hoá. Tính điểm trung bình. Nếu 
    Dtb >=9 & <=10 => XS 
    Dtb >= 8. & < 9:Giỏi 
    từ 6<=dtb<8: Khá 
    5<=dtb<6: TB 
    Còn lại yếu
3. Tính tổng, hiệu, tích thương của 2 số nguyên nhập từ bàn phím 
4. Tìm max của 3 số nguyên nhập từ bàn phím
5. Cửa hàng của bạn nhận gửi bán sản phẩm cho một công ty khác 
    và sau mỗi tháng bạn cần tính toán số tiền hoa hồng bạn nhận được. 
    Với mức hoa hồng theo doanh số bán hàng như sau: 
    5% nếu tổng doanh số nhỏ hơn hoặc bằng 100 triệu. 
    10% nếu tổng doanh số nhỏ hơn hoặc bằng 300 triệu. 
    nếu tổng doanh số là lớn hơn 300 triệu. 
    Dựa vào dữ liệu trên, bạn viết chương trình C để tính hoa hồng đại lý bạn sẽ nhận. 
*/
#include<stdio.h>
int main(){
    // Bai 2
    // int diemToan, diemLy, diemHoa;
    // printf("Nhap diem toan");
    // scanf("%d", &diemToan);
    // printf("Nhap diem ly");
    // scanf("%d", &diemLy);
    // printf("Nhap diem hoa");
    // scanf("%d", &diemHoa);
    // float dtb;
    // dtb = (diemToan + diemLy + diemHoa)*1.0 / 3;
    // if(dtb>=9 && dtb<=10){
    //     printf("Sinh vien xuat sac");
    // }else if(dtb>=8 && dtb<9){
    //     printf("Sinh vien Gioi");
    // }else if(dtb>=6 && dtb<8){
    //     printf("Sinh vien Kha");
    // }else if(dtb>=5 && dtb<6){
    //     printf("Sinh vien Trung Binh");
    // }else {
    //     printf("Sinh vien yeu");
    // }
    // Bai 3
    // int soMot, soHai;
    // printf("Nhap diem 1:");
    // scanf("%d", &soMot);
    // printf("Nhap diem 2:");
    // scanf("%d", &soHai);
    // int tong, hieu, tich;
    // float thuong;
    // tong = soMot + soHai;
    // hieu = soMot - soHai;
    // tich = soMot * soHai;
    // thuong = soMot *1.0 /  soHai;
    // printf("tong = %d",tong);
    // printf("hieu = %d",hieu);
    // printf("tich = %d",tich);
    // printf("thuong = %f",thuong);
    // Bai 5:
    // int doanhSo;
    // printf("NhapDoanhSo: ");
    // scanf("%d",&doanhSo);
    // if(doanhSo <= 100){
    //   float hoaHong = doanhSo * 0.05;
    //   printf("cua hang nhan = %f",hoaHong);
    // }else if(doanhSo <= 300 && doanhSo > 100){
    //   float hoaHong = doanhSo *0.1;
    //   printf("cua hang nhan = %f",hoaHong);
    // }else{
    //   float hoaHong = doanhSo *0.2;
    //   printf("cua hang nhan = %f",hoaHong);
    // }
    // B1: Nhap 3 so nguyen tu ban phim 
    int soMot; // 3
    int soHai; // -1
    int soBa; // 9 
    printf("Moi ban nhap:");
    scanf("%d",&soMot);
    printf("Moi ban nhap tiep:");
    scanf("%d",&soHai);
    printf("Moi ban nhap them mot lan nua:");
    scanf("%d",&soBa);
    // B2: Tim max 
    int max = soMot; // max = 3
    if(max < soBa){ // 3 < 9
        max = soBa; // max = 9
    }
    if(max < soHai){ // 9 < -1 
        max = soHai;
    }
    printf("Max = %d\n",max);
    return 0;
    
}
    

    