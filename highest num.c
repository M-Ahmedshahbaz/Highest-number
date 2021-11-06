#include <stdio.h>
int main()
{
    int num1,num2,num3,num4;
    printf("please enter number 1\n");
    scanf("%d", &num1);
    printf("please enter number 2\n");
    scanf("%d", &num2);
    printf("please enter number 3\n");
    scanf("%d", &num3);
    printf("please enter number 4\n");
    scanf("%d", &num4);

    if(num1>num2  && num1>num3 && num1>num4)
    {
        printf("The highest number is %d",num1);
    }
  else  if(num2>num1 && num2>num3 && num2>num4)
    {
        printf("The highest number is %d",num2);
    }

    else if(num3>num1 && num3>num2 && num3>num4)
    {
        printf("The highest number is %d",num3);
    }

    else if(num4>num1 && num4>num2 && num4>num3)
    {
        printf("The highest number is %d",num4);
    }

    /*else if(num1>num2 && num1>num2 && num1>num3 && num1>num4)
    {
        printf("The highest number is %d",num1);
    }*/
    return 0;
}
