
#INCLUDE <16F877A.h>
#use delay(clock=4000000)
void main()
{
int i,x,y,z;
while(1)
{
x=128;
for(i=0;i<8;i++)
{
output_b(x);
 delay_us(500);
output_b(0);
delay_us(500);
x=x/2;
}
y=128;
for(i=0;i<4;i++)
{
output_d(y);
 delay_us(500);
output_d(0);
delay_us(500);
y=y/2;
}

y=128;
for(i=0;i<4;i++)
{
output_c(y);
 delay_us(500);
output_c(0);
delay_us(500);
y=y/2;
}
y=8;
for(i=0;i<4;i++)
{
output_d(y);
 delay_us(500);
output_d(0);
delay_us(500);
y=y/2;
}
y=8;
for(i=0;i<4;i++)
{
output_c(y);
 delay_us(500);
output_c(0);
delay_us(500);
y=y/2;
}
}
}