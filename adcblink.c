#INCLUDE <16F877A.h>
#use delay(clock=4000000)

void main()
{
int y,x,i;
while(1)
{
setup_adc_ports(ALL_ANALOG);
setup_adc(ADC_CLOCK_INTERNAL);
set_adc_channel(0);
y=read_adc();
x=128;
for(i=0;i<8;i++)
{
output_b(x);
 delay_us(y);
output_b(0);
delay_us(y);
x=x/2;
}

}
}