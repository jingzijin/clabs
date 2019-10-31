#include <stdio.h>
main()
{
    int count = 1;
    int number = 0;
    int anothernumber = 0;
    printf("please input the number\n");
    scanf("%5d", &anothernumber);
    while(anothernumber =1)
    {
        number = anothernumber%2;
        anothernumber = anothernumber/2;
        if(number =1)
        count++;
    }
    printf("the amount is %d\n",count);
}