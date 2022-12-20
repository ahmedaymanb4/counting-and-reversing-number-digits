#include <stdio.h>
//test functionality:
// n==1's FAILED (2)
// n==10's FAILED (3)
// n==100's PASSED (3)
// n==1000's PASSED (4)
// n==10000's PASSED (5)
int main()
{
    int n,i;
    printf("Enter a positive integer\n");
    scanf("%d",&n);
    counts_digit(n);
}//main function
int counts_digit(int n){
    int i;
    for(i=1;i<=n;i++){
    n=n/10;
    printf("%d\n",n);
    }//loop
    printf_s("number of digits is: %d",i);
}
