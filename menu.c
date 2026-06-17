#include <stdio.h>
int main()
{
    char op;

    printf("<---------welcome to my dhaba----------->\n\n\n");
    printf("Select waht you want->\n");
    printf("1.satrter\n2.Maincourse\n3.Dessert\n4.Exit\n\n");

    scanf("%c",&op);

    switch(op)
    {
        case'1':
        printf("you have choosed starter\n");
        printf("1.chiken 65\n 2.Dragon chicken\n 3.panner pakoda\n");
        break;

        case'2':
        printf("you have main course\n");
        printf("1.\n 2.\n 3.\n");
        break;
        case'3':
        printf("you have chossed dessert\n");
        printf("1.\n 2.\n 3.\n");
        break;
        
        case'4':
        printf("thank you visit again\n");
        break;
        
       default:
       printf("sorry not not in menu\n");
        
    }
    return 0;
}