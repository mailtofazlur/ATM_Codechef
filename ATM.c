#include<stdio.h>
int main() {

int withdraw_amt;
float accBal;
float servChrg = 0.5;
scanf("%d",&withdraw_amt);
scanf("%f",&accBal);
if((withdraw_amt%5==0) && ((withdraw_amt+servChrg)<accBal)){
    accBal=(accBal-(withdraw_amt+servChrg));
    printf("%f",accBal);
}
else
    printf("%f",accBal);
return 0;
}


/*
#include<stdio.h>
int main() {

int withdraw_amt;
float accBal;
float servChrg = 0.5;
scanf("%d",&withdraw_amt);
if(withdraw_amt%5==0 && (withdraw_amt>0 && withdraw_amt<=2000)){
    scanf("%f",&accBal);
    accBal=(accBal-(withdraw_amt+servChrg));
    printf("%.2f",accBal);
}
return 0;
}

#include<stdio.h>
int main() {

int withdraw_amt;
float accBal;
float servChrg = 0.5;
scanf("%d",&withdraw_amt);
if(withdraw_amt%5==0){
    scanf("%f",&accBal);
    accBal=(accBal-(withdraw_amt+servChrg));
    printf("%.2f",accBal);
}
return 0;
}
*/
