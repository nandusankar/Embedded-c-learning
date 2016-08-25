#INCLUDE <16F877A.h>
#INCLUDE <stdio.h>
#INCLUDE <string.h>
#use delay(clock=4000000)
#use rs232(baud=9600,xmit=PIN_C6,rcv=PIN_C7,bits=8)
char x[3];

int i,a,z;
void main()
{
printf("enter the count\n");

while(1)
{
if(kbhit()>0)
{

for(i=0;i<3;i++)
{
x[i]=getc();
printf ("%c",x[i]);
}
a=((x[0]*100)+(x[1]*10)+x[2]);
z=a-16;
printf ("%d",z);
for(i=0;i<z;i++)
{
output_D(x);
 delay_us(500);
output_D(0);
delay_us(500);
}
}

}
}