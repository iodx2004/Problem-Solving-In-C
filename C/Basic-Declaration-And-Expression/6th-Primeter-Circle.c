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

void CirclePiremeter(int PI, int r)
{
  int result = 2 * PI * r;
  ft_putnbr(result);
}

int main()
{
  const int PI = 3.14;
  int r = 5;

  CirclePiremeter(PI, r);
}
