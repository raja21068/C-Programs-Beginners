//Q.NO.4 :Write a  program that take temperature of a city in fahrenheit as input through the keyboard and convert it into centigrade degrees.?                    

void main()
{
int ftemp, ctemp;

clrscr();
printf("Type temperature in degrees fahrenheit:");
scanf("%d",&ftemp);
ctemp=(ftemp-32)*5/9;
printf("Temperature in degrees centigrade is %d",ctemp);
getch();
}
