#include <stdio.h>
#include <ctype.h>

char	*ft_strupcase(char *str);

int main () {
   int i = 0;
   char c;
   char str[] = "Tutorials Point";
   
   while(str[i]) {
      putchar (ft_strupcase(str[i]));
      i++;
   }
   
   return(0);
}
