#include <stdio.h>

int main() {
    
int child,adult,senior,coupon,totalTicket;
float a,b,c, totalPrice,couponPrice, afterDiscount, overall;

printf("Enter the number of children:");
scanf("%d",&child);

printf("Enter the number of adult:");
scanf("%d",&adult);

printf("Enter the number of senior citizen:");
scanf("%d", &senior);

totalTicket= child+adult+senior;

a= child*5.50;
b= adult*7.00;
c= senior*4.50;

totalPrice= a+b+c;

printf("Enter the number of additional coupon purchased: ");
scanf("%d",&coupon);

couponPrice=75.00+(coupon*25.00)-25.00;

if (couponPrice>150){
    
    afterDiscount= 0.9*couponPrice;
    
    overall=totalPrice+afterDiscount;
    
    printf("Total ticket purchased is %d ", totalTicket );
    printf("Total amount of tickets is %.2f",totalPrice);
    printf("Total amount of coupons(before discount) is %.2f ",couponPrice);
    printf("Total amount of coupons(after discount) is %.2f ",afterDiscount);
    printf("Total amount of to be paid is %.2f ",overall);
    
    
}else{
    
    overall=totalPrice+couponPrice;
    
    printf("\nTotal ticket purchased is %d ", totalTicket );
    printf("\nTotal amount of tickets is %.2f ",totalPrice);
    printf("\nTotal amount of coupons is RM %.2f ",couponPrice);
    printf("\nTotal amount of to be paid is RM %.2f ",overall);
    
    
   
}
 
}
