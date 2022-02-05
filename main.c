#include  <stdio.h>

int main()
{
    char x;
    int n1,n2;
    start:
        printf("1)+\n2)-\n3)*\n4)/\n"); 
               printf("choose a number: ");
                 scanf("%c",&x);
     printf("enter the first number: ");
        scanf("%d",&n1);
     printf("enter the second number: ");
        scanf("%d",&n2);
    switch(x){
        case '1':
        case '+':
             printf("%d+%d=%d",n1,n2,n1+n2);
           break;
        case '2':
        case '-':
            printf("%d-%d=%d",n1,n2,n1-n2);
            break;
        case '3':
        case '*':
            printf("%d*%d=%d",n1,n2,n1*n2);
            break;
        case '4':
        case '/':
            printf("%d/%d=%d",n1,n2,n1/n2);
            break;
        default:
            printf("not montiond");
    }
    goto start;
}
