#include<unistd.h>
/**
 *main - program start here
 *
 *Return: Always 1 (program run successfully)
 */
int main(void)
{
char lin1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

write(2, lin1, 59);
return (1);
}
