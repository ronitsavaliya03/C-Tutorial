#include<stdio.h>

int main()
{
long long int s,m,h,days,weeks,months,years,decades,century;
printf("Enter Seconds : ");
scanf("%lld",&s);
m=s/60;
s=s%60;

h=m/60;
m=m%60;

days=h/24;
h=h%24;

weeks=days/7;
days=days%7;

months=weeks/4;
weeks=weeks%4;

years=months/12;
months=months%12;

for (int i = 1; i<=years; i++)
{
    if((i%4==0 && i%100!=0)||i%400==0){
        days++;
    }
}

weeks=weeks + (days/7);
days=days%7;

months=months+(weeks/4);
weeks=weeks%4;

years=years + (months/12);
months=months%12;

decades=years/10;
years=years%10;

century=decades/10;
decades=decades%10;

printf("%lld",century);
printf(" century, ");
printf("%lld",decades);
printf(" decades, ");
printf("%lld",years);
printf(" years, ");
printf("%lld",months);
printf(" months, ");
printf("%0.2lld",weeks);
printf(" weeks, ");
printf("%0.2lld",days);
printf(" days, ");
printf("%0.2lld",h);
printf(" hours, ");
printf("%0.2lld",m);
printf(" minutes, ");
printf("%0.2lld",s);
printf(" seconds, ");

    return 0;
}



/*void main()
{
long long int s,m,h,days,weeks,months,years,decades,century;
printf("Enter Seconds : ");
scanf("%lld",&s);
m=s/60;
s=s%60;

h=m/60;
m=m%60;

days=h/24;
h=h%24;

weeks=days/7;
days=days%7; 

months=weeks/4;
weeks=weeks%4;

years=months/12;
months=months%12;


//------------------------------------------------------------------------------------------
for (int i = 1; i<=years; i++)
{
    if((i%4==0 && i%100!=0)||i%400==0){
        days++;
    }
}
//------------------------------------------------------------------------------------------

weeks=weeks + (days/7);
days=days%7;

months=months+(weeks/4);
weeks=weeks%4;

years=years + (months/12);
months=months%12;

decades=years/10;
years=years%10;

century=decades/10;
decades=decades%10;

printf("%0.2lld",century);
printf(" century \n ");
printf("%0.2lld",decades);
printf(" decades \n ");
printf("%0.2lld",years);
printf(" years \n ");
printf("%0.2lld",months);
printf(" months \n");
printf("%0.2lld",weeks);
printf(" weeks \n ");
printf("%0.2lld",days);
printf(" days \n ");
printf("%0.2lld",h);
printf(" hours \n ");
printf("%0.2lld",m);
printf(" minutes \n ");
printf("%0.2lld",s);
printf(" seconds \n ");
}*/

