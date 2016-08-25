#INCLUDE <16F877A.h>
#use delay(clock=4000000)

void main()
{
int y;
while(1)
{
setup_adc_ports(ALL_ANALOG);
setup_adc(ADC_CLOCK_INTERNAL);
set_adc_channel(0);
y=read_adc();
output_b(y);
 delay_us(500);
}
}