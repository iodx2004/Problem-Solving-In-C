#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putnbr(int nb)
{
  if(nb > 10)
  {
    ft_putnbr(nb / 10);
  }
  ft_putchar(nb % 10 + '0');
}

int PiremeterRectangle(int a, int b)
{
  int result = ((a * 2) + (b * 2));
  ft_putnbr(result);
}

int main()
{
  PiremeterRectangle(7, 5);
}
