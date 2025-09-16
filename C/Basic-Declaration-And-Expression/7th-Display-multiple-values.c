#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putnbr(int nb)
{
  if(nb >= 10)
  {
    ft_putnbr(nb / 10);
  }
  ft_putchar(nb % 10 + '0');
}

void sum(int a, int b)
{
  int result = a + b;
  ft_putnbr(result);
}

void SumAscii(float x, char c)
{
  char result = x + c;
  write(1, &result, 1);
}

void SumCastingFloat(double dx, long ax)
{
  int result = ((int) dx) + ax;
  ft_putnbr(result);
}

void SumFloatsWithInteger(int a, float x)
{
  float result = a + x;
  ft_putnbr(result);
}

void sumSHortNumbers(short s, int b)
{
  int result = s + b;
  ft_putnbr(result);
}

void SumLongNumbers(long ax , int b)
{
  long int result = ax + b;
  ft_putnbr(ax + b);
}


