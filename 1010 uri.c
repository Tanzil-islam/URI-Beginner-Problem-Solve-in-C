#include<stdio.h>
int main(){
    int code1, quantity1, code2, quantity2;
    double price1, price2, result1, result2, result;
    scanf(" %d %d %lf", &code1, &quantity1, &price1);
    scanf(" %d %d %lf", &code2, &quantity2, &price2);
    result1 = (double)quantity1 * price1;
    result2 = (double)quantity2 * price2;
    result = result1 + result2;
    printf("VALOR A PAGAR: R$ %.2lf\n",result);
    return 0;
}
