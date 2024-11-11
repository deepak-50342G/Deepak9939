#include <stdio.h>

int main() {
   int a, b, c, date, year, mo, moo, yearr, lep, leap, dayy, da, d;
   printf("enter date month and year");
   scanf("%d%d%d", &date, &mo, &year);
   //month trick 033 614 625
   if(mo==1)
   moo=0;
   else if(mo==2)
   moo=3;
   else if(mo==3)
   moo=3;
   else if(mo==4)
   moo=6;
   else if(mo==5)
   moo=1;
   else if(mo==6)
   moo=4;
   else if(mo==7)
   moo=6;
   else if(mo==8)
   moo=2;
   else if(mo==9)
   moo=5;
   else if(mo==10)
   moo=0;
   else if(mo==11)
   moo=3;
   else if(mo==12)
   moo=3;
   a = (year/100);//tear trick for2000,1000
   d = a%4;
   yearr = year%100;//for year two digit 2024-24
   leap=yearr/4;//gow many leap years present
   
   if(d==1)
   lep=4;
   else if(d==2)
   lep=2;
   else if(d==3)
   lep=0;
   else if(d==0)
   lep=6;
   dayy = date+moo+yearr+leap+lep;
   da=dayy%7;
   if(da==0)
   printf("its sunday");
   else if(da==1)
   printf("its monday");
   else if(da==2)
   printf("its tuesday");
   else if(da==3)
   printf("its wednesday");
   else if(da==4)
   printf("its thursday");
   else if(da==5)
   printf("its friday");
   else if(da==6)
   printf("its saturday");
   
   

    return 0;
}