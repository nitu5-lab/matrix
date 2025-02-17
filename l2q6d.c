#include <stdio.h>
#include <conio.h>
int main()
{
int a;
printf(â€œEnter a numberâ€);
scanf(â€œ%dâ€,&a);
if((a>>1)<<1==a)
{
printf(â€œNumber is evenâ€);
}
else
{
printf(â€œnumber is oddâ€);
}
return 0;
getch();
}
