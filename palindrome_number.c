#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x);

int main()
{
    bool a = isPalindrome(145);
    bool b = isPalindrome(131);

    printf("%d, %d\n", a, b);

    return 0;
}

bool isPalindrome(int x)
{
    if (x < 0 || (x % 10 == 0 && x != 0)) return false;

    int original, reversed, remainder;

    original = x;
    reversed = 0;
    remainder = 0;

    while (x > 0)
    {
        remainder = x % 10;
        reversed = reversed * 10 + remainder;
        x = x / 10;
    }

    if (original == reversed) return true;
    else return false;
}