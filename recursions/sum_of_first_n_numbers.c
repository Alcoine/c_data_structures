/*
    Sum of First n Natural Numbers
    Sum(n) = 1 + 2 + 3 + 4 + 5 + ... + n;
    Sum(n) = 1 + 2 + 3 + 4 + 5 + ... + (n - 1) + n;
    Sum(n) = Sum(n - 1) + n;
            
            | if n = 0 => 0,
    Sum(n)= |
            | if n > 0 => sum(n - 1) + n;  
*/

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return sum(n - 1) + n;
}

int main()
{
    int n = 10;
    int result = sum(n);

    printf("%d ", result);

    return 0;
}