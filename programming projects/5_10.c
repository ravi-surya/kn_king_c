#include <stdio.h>

int main(void)
{
    int grade;

    printf("Enter numerical grade from 0 to 100: ");
    scanf("%d", &grade);

switch (grade/10)
{
case 10 :
case 9 :
    printf("Letter grade: A\n");
    break;
case 8 :
    printf("Letter grade: B\n");
    break;
case 7 :
    printf("Letter grade: C\n");
    break;
case 6 :
    printf("Letter grade: D\n");
    break;
case 5 :
case 4 :
case 3 :
case 2 :
case 1 :
case 0 :
    printf("Letter grade: E\n");
    break;

default:
    break;
}


}
