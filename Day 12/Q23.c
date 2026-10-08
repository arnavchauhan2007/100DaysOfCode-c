/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/
#include <stdio.h>
int main(){
float days,fine;
printf("enter the amount of due days");
scanf("%f",&days);
if(days<=0)
printf("no fine");
else if(days<=7){
fine=(days*2);
printf("fine : %.2f",fine);
}
else if (days<=14){
    fine=days*4;
    printf("fine %.2f",fine);
}
else if(days<=21){
fine=days*6;
printf("%.2f",fine);

}
else if (days<=28){

fine=days*8;
printf("fine %.2f",fine);

}
else
printf("membership cancelled");




    return 0;
}