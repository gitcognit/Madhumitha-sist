#include<stdio.h> 

// Palindrome is a number that is same if read forward/backward
// Ex : 12321
int main ()
{
    int num, reverse = 0, rem, temp;
    num=11211;
    printf("The number is :%d\n",num);
 
    temp = num;
    
    //loop to find reverse number
    while(temp != 0)
    {
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp /= 10;
    };
    
    // palindrome if num and reverse are equal
    if (num == reverse)
        printf("%d is Palindrome\n", num);
    else
        printf("%d is Not Palindrome\n", num);

}

