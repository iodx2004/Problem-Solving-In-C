#include <unistd.h>

void ft_putstr(char *str)
{
  while(*str)
  {
    write(1, str++, 1);
  }
}

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putnbr(unsigned long int nb)
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
  int result = x + c;
  ft_putnbr(result);
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

void CharWithShortNum(short int s, char c)
{
  char result = s + c;
  ft_putnbr(result);
}

void CharWithLongNum(long int ax, char c)
{
  char result = ax + c;
  ft_putnbr(result);
}

void LongsValueSum(long int ax, unsigned long int ux)
{
  unsigned long int result = ax + ux;
  ft_putnbr(result);
}

int main()
{

  int a = 125, b = 12345;
  long ax = 1234567890;
  short s = 4043;
  float x = 2.13459;
  double dx = 1.1415927;
  char c = 'W';
  unsigned long ux = 2541567890;
  
  ft_putstr("The Result of Sum Numbers is : ");
  sum(a, b);

  ft_putstr("\nThe Result Of Sum Ascii Num is : ");
  SumAscii(x, c);

  ft_putstr("\nThe Result of sum Of Casting Floats Number is : ");
  SumCastingFloat(dx, ax);

  ft_putstr("\nThe Result Of Sum Float Numbers With Integers is : ");
  SumFloatsWithInteger(a, x);

  ft_putstr("\nThe Result Of Sum Short Numbers is : ");
  sumSHortNumbers(s, b);

  ft_putstr("\nThe Result Of Sum Long Numbers is : ");
  SumLongNumbers(ax, b);

  ft_putstr("\nThe Result Of Short Numbers With Character is : ");
  CharWithShortNum(s, c);

  ft_putstr("\nThe Result Of Long Numbers With Character is : ");
  CharWithLongNum(ax, c);

  ft_putstr("\nThe Result Of Long Number Of Values is : ");
  LongsValueSum(ax, ux);
}
