#include <stdio.h>

void main()

{

    int i;

    float n;

    printf ("moi cac ban nhap so i\n");

    scanf ("%d",&i);

    n=i+0.5;

    if (i>0)

    {

        printf ("n=%0.1f la mot so ban nguyen\n",n);

    }

    else if (i<0)

        printf ("n=%0.2f khong phai la mot so ban nguyen\n",n);

    else printf ("n=0.5 la mot so ban nguyen");


}
