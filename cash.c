#include <stdio.h>
#include <cs50.h>

int change (void);
int calculator (int r);
void results (int v);

int main (void)
{
    int t = change ();
    int value = calculator (t);
    results(value);
}

//solicitar o troco em centavos
int change (void)
{
    int ask;
    do
    {
        ask = get_int ("Change owed: ");
    }
    while (ask < 0);
    return ask;
}

int calculator (int r)
{
    int q = 0; //25
    int d = 0; //10
    int n = 0; //5
    int p = 0; //1

    while (r >= 25)
    {
        ++q;
        r = r - 25;
    }

    while (r >= 10)
    {
        ++d;
        r = r - 10;
    }
    while (r >= 5)
    {
        ++n;
        r = r - 5;
    }
    while (r >= 1)
    {
        ++p;
        r = r - 1;
    }
    int sum = q + d + n + p;
    return sum;

}

void results (int v) // v value
{
    printf("%d\n", v);
}




