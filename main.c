#include <stdio.h>
int main()
{
    int n;
    printf("Enter a positive integer\n");
    scanf("%d",&n);
    digits(n);
}//main function
int digits(int n)
{
    int i=0;
    int rem,reverse=0;
    do{
        i++; //digits increase by 1
        rem=n%10; //gets the remainder
        reverse=reverse*10+rem; //multiply reverse by 10 and add the result to remainder
        n/=10;
    } while(n!=0);
    printf_s("Number has %d digits \n",i); //prints digits
    printf_s("Number is reversed to %d \n",reverse); //prints reversed
}//digits() function
