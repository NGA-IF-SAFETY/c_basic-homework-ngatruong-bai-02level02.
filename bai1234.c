#include<stdio.h>

#include<math.h>

void main(){

int chon;

printf("Nhap 1 de tinh cv,dt hinh tam giac\nNhap 2 de tinh cv,dt hinh vuong\nNhap 3 de tinh cv,dt hinh chu nhat\nNhap 4 de tinh cv,dt hinh tron");

printf("Moi ban chon:\n");

scanf("%d",&chon);

switch(chon){

case 1:

{

    float a,b,c,c,h,cv,s

    printf("Nhap lan luot 3 canh cua tam giac:\n");

    scanf("%d%d%d",&a,&b,&c);
    printf("nhap chieu cao cua tam giac:\n")

    cv=a+b+c;


    printf("chu vi cua tam giac la:%0.2f",cv);
    
    s=(h*a)/2;
printf("dien tich cua tam giac la:%0.2f",s);
    break;

    }

case 2:

    {

    float d,chuVi,dienTich;

    printf("Nhap canh cua hinh vuong: \n");

    scanf("%f",&d);

    chuVi=4*d;

    dienTich=d*d;

    printf("Chu vi: %0.2f\nDien tich: %0.2f",chuVi,dienTich);

    break;

    }

case 3:

    {

    int chieuDai,chieuRong;

    printf("Nhap chieu dai va chieu rong:\n");

    scanf("%d%d",&chieuDai,&chieuRong);

    printf("Chu vi:%d\nDien tich:%d",(chieuDai+chieuRong)*2,chieuDai*chieuRong);

    break;

    }

case 4:

    {

    float r,chuVi,dienTich;

    printf("Nhap ban kinh duong tron: \n");

    scanf("%f",&r);

    chuVi=2*3,14*r;

    dienTich=3,14*r*r;

    printf("Chu vi: %.2f\nDien tich: %0.2f",chuVi,dienTich);

    break;

    }

default:

    printf("Ban nhap sai roi");

}

}
