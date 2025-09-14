#include <unistd.h>

void ft_putstr(char *str)
{
  while(*str)
  {
    write(1, str++, 1);
  }
}

int ft_strlen(char *str)
{
  int i = 0;
  while(str[i])
  {
    i++;
  }
  return i;
}

char *ft_strrev(char *str)
{
  int i = 0;
  int len = ft_strlen(str);

  while(str[i])
  {
    if(i < len / 2){
      int temp;
      temp = str[len - i - 1];
      str[len - i - 1] = str[i];
      str[i] = temp;
    }
    i++;
  }
  return str;
}

int main()
{
  char str[] = "XML";
  ft_putstr(ft_strrev(str));
}
