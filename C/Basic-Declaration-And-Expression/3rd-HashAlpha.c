#include <unistd.h>

void ft_putstr(char *str)
{
  int i = 0;
  while(str[i])
  {
    write(1, &str[i], 1);
    i++;
  }

}

int main()
{
  /* Type Hash F (Hard Coded)*/
  ft_putstr("###############\n");
  ft_putstr("#\n");
  ft_putstr("#\n");
  ft_putstr("#\n");
  ft_putstr("########\n");
  ft_putstr("#\n");
  ft_putstr("#\n");
  ft_putstr("#\n");
}
