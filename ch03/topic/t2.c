#include <stdio.h>

int main(void)
{
  int items, month, day, year;
  float price;

  printf("Enter item number: ");
  scanf("%d", &items);
  printf("Enter unit price: ");
  scanf("%f", &price);
  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("Item\tUnit\tPurchase\n");
  printf("\tPrice\tDate\n");
  printf("%d\t$%4.2f\t%.2d/%.2d/%d\n", items, price, month, day, year)5;

  return 0;
}
