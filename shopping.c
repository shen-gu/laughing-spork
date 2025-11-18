#include<stdio.h>
int main()
{
  int price=100;
  printf("请输入金额（元）：")；
    scanf("%d",&price);
  int change=100-price;
  printf("找回您%d\n",change);
  return 0;
}
