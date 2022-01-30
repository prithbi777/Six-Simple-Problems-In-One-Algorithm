#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void prime()
{
    printf("\nOK! YOu have choosen the prime program...\n");
    printf("PLease press enter or any key to get started....!\n");
    getch();
    int n, i, m, Hello = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    m = n / 2;
    for (i = 2; i <= m; i++)
    {
        if (n % i == 0)
        {
            printf("The number %d is not a prime number!\n", n);
            Hello = 1;
            break;
        }
    }
    if (Hello == 0)
    {
        printf("The number %d is a prime number!\n", n);
    }
    
}
void Factorial()
{
    printf("\nOK! YOu have choosen the Factorial program...\n");
    printf("PLease press enter or any key to get started....!\n");
    getch();
    double i, r = 1, n;
    printf("Enter the number : ");
    scanf("%lf", &n);
    for (i = 1; i <= n; i++)
    {
        r = r * i;
    }
    printf("The factorial of %0.0lf is : %0.0lf \n", n, r);
}
void Odd_Even()
{
    printf("\nOK! YOu have choosen the Odd_Even program...\n");
    printf("PLease press enter or any key to get started....!\n");
    getch();
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("The number %d is a even number\n", n);
    }
    else
    {
        printf("The number %d is Odd number\n", n);
    }
}
void Calculator()
{
    printf("\nOK! YOu have choosen the Calculator program...\n");
    printf("PLease press enter or any key to get started....!\n");
    getch();
    double a,c=1,n;
 printf("Enter the first number :- ");
 scanf("%lf",&a);
while(c==1)
 { double q;
 int p;
 printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
 printf("\nEnter the number of the operation as given above :- ");
 scanf("%d",&p);
 printf("Enter the next number :- ");
 scanf("%lf",&q);
 switch(p)
 { case 1:
 n=a+q;
 break;
 case 2:
 n=a-q;
 break;
 case 3:
 n=a*q;
 break;
 case 4:
 n=a/q;
 break;
 default:
 printf("Invalid!");



 }

 printf("Do You wanna continue then press 1 Otherwise press between [2-9] :- ");
 scanf("%lf",&c);
 a=n+0;
 }

 printf("The final result is :- %0.3lf",n);
}
void Armstrong()
{
    printf("\nOK! YOu have choosen the Armstrong program...\n");
    printf("PLease press enter or any key to get started....!\n");
    getch();
    int num, rem, res = 0, i;
    printf("Enter the number : ");
    scanf("%d", &num);
    for (i = num; i != 0; i = i / 10)
    {
        rem = i % 10;
        res = rem * rem * rem + res;
    }
    if (num == res)
    {
        printf("The number %d is a armstrong number\n", num);
    }
    else
    {
        printf("The number %d is not a armstrong number\n", num);
    }
}
void Fibonacci()
{
    printf("\nOK! YOu have choosen the Fibonacci series program...\n");
    printf("PLease press enter or any key to get started....!\n");
    getch();
    int i, n1, n2, result, no;
    printf("Enter the elements number : ");
    scanf("%d", &no);
    n1 = 0;
    n2 = 1;
    printf("\n%d %d ", n1, n2);
    for (i = 3; i <= no; i++)
    {
        result = n1 + n2;
        printf("%d ", result);
        n1 = n2;
        n2 = result;
    }
}
int Exit(int n)
{
    return (n+1);
}
int main()
{
    int a,pass=0;   
    while(pass!=1)
    {
    printf("\n\n1. Prime number\n2. Factorial\n3. Odd Even\n4. Calculator\n5. Armstrong number\n6. Fibonacci Series\n7. Exit");
    printf("\nEnter the program according to the number : ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        prime();
        break;
    case 2:
        Factorial();
        break;
    case 3:
        Odd_Even();
        break;
    case 4:
        Calculator();
        break;
    case 5:
        Armstrong();
        break;
    case 6:
        Fibonacci();
        break;
    case 7:
        pass=Exit(pass);
        break;
    default:
        printf("Enter Valid keyword!");
        break;
    }
    }
    printf("\n\nHey! There My Name Is Prithbiraj Mahanta...\nI Just Hope That You Have enjoyed This Software\nThank You!\n");
    printf("\nPlease Press Enter Or Any Key To Get Exit From The CCP!\n");
    getch();
    return 0;
}