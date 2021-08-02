#include "ft_printf.h"
#include <unistd.h>

int ft_printf(const char *str, ...)
{
  v_list ap;

  (void)str;
  write(1, "hello", 5);
  return 0;
}
