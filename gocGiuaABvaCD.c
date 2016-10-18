#include <stdio.h>
#include <math.h>
void main ()
{
    float a1,a2,a3,a4,b1,b2,b3,b4,d1,d2,d3,d4;
    int cosGoc;
    printf("nhap toa do diem A \n");
    scanf("%f%f",&a1,&b1);
    printf("nhap toa do diem B  \n");
    scanf("%f%f",&a2,&b2);
    printf("nhap toa do diem C  \n");
    scanf("%f%f",&a3,&b3);
    printf("nhap toa do diem D  \n");
    scanf("%f%f",&a4,&b4);
    d1=a2-a1;
    d2=b2-b1;
    d3=a4-a3;
    d4=b4-b3;
    cosGoc=(d1*d3+d2*d4)/(sqrt(d1*d1+d2*d2)*sqrt(d3*d3+d4*d4));
    if (cosGoc<0 ) cosGoc=-cosGoc;
    if ((cosGoc==1) || (cosGoc==0)) printf ("giua hai duong thang khong co goc ton tai");
    else printf("cos goc giua hai doan AB VÀ CD =%0.2f",cosGoc);
}
