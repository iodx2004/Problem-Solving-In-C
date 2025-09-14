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
  ft_putstr("Name   : Alexandra Abramov\n");
  ft_putstr("DOB    : July 14, 1975  \n");
  ft_putstr("Mobile : 99-9999999999\n");
}
