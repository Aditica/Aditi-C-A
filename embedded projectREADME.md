# Aditi-C-A
#include<stdio.h>
void Butt(),HeaterS(),Ledop();
void Butt()
{
PD0=0x00;
PB0=0x00;
if(PD1==0)
{
PB0=0;
}
else
{
PB0=1;
}
}
void HeaterS()
{
PD1=0x00;
PB1=0x00;
if(PD1==0)
{
PB1=0;
}
else
{
PB1=1;
}
}
void Ledop()
{
PB2=0x00;
if(PD0||PD1==0)
PB2==0;
else
{
PB2=1;
}
}
