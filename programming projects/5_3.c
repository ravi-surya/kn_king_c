#include<stdio.h>

int main()
{
    int shares;
    float value, commission,share_price,rival;

    printf("Enter number of shares: ");
    scanf("%d", &shares);
    printf("Enter price per share: ");
    scanf("%f", &share_price);

    value=share_price*shares;

    

  if (value < 2500.00f) {
    commission = 30.00f + 0.017f * value;
  } else if (value < 6250.00f) {
    commission = 56.00f + 0.0066f * value;
  } else if (value < 20000.00f) {
    commission = 76.00f + 0.0034f * value;
  } else if (value < 50000.00f) {
    commission = 100.00f + 0.0022f * value;
  } else if (value < 500000.00f) {
    commission = 155.00f + 0.0011f * value;
  } else {
    commission = 255.00f + 0.0009f * value;
  }

  if (commission < 39.00f) {
    commission = 39.00f;
  }

  printf("Commission: $%.2f\n", commission);
   
  if (shares < 2000)
  rival = 33.00f + .03f * shares;
else 
  rival = 33.00f + .02f * shares;

printf("Rival comission: $%.2f\n", rival);

}