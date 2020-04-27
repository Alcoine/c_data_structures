/*
    Exponent (m)^n

    pow(m, n) = (m * m * m * ... * (n - 1 times)) * m
                | if n = 0 => 1,
    pow(m, n) = |
                | if n > 0 => pow(m, n - 1) * m;
*/  

int pow(int num, int power)
{
    if (power == 0) 
    {
        return 1;
    }

    return pow(num, power - 1) * num;
}

int main()
{
    int num = 3;
    int power = 3;
    int result = pow(3, 3);

    printf("%d ", result);

    return result;
}