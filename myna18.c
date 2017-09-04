
#include <stdio.h>
#include <math.h>
int main()
{
int a,b,i,tem1,tem2,rem,n = 0,res = 0;
printf("Enter two numbers intervals:");
scanf("%d %d",&a,&b);
printf("Armstrong numbers between %d an %d are:",a,b);
for(i=a+1;i<b;++i)
{
tem2 = i;
tem1= i;
while(tem1!=0)
{
tem1/=10;
++n;
}
while(tem2!=0)
{
rem = tem2 % 10;
res += pow(rem, n);
tem2 /= 10;
}
if (res == i) {
printf("%d ", i);
}
n = 0;
res = 0;
}
return 0;
}
