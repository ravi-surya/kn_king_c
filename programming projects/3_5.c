#include<stdio.h>

int main(void)
{
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16;

    // int rows,cols,dias;
    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11,&n12,&n13,&n14,&n15,&n16);

    printf("%d %d %d %d\n",n1,n2,n3,n4);
    printf("%d %d %d %d\n",n5,n6,n7,n8);
    printf("%d %d %d %d\n",n9,n10,n11,n12);
    printf("%d %d %d %d\n",n13,n14,n15,n16);

    printf("row sum: %d %d %d %d\n",n1+n2+n3+n4,n5+n6+n7+n8,n9+n10+n11+n12,n13+n14+n15+n16);
    printf("column sum: %d %d %d %d\n",n1+n5+n9+n13,n2+n6+n10+n14,n3+n7+n11+n15,n4+n8+n12+n16);
    printf("diagonal sum: %d %d\n",n1+n6+n11+n16,n4+n7+n10+n13);

}