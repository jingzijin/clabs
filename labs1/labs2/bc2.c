#include <stdio.h>
main()
{
    int count = 1;
    int x = 0;
    int y = 0;
    printf("please input the x\n");
    scanf("%5d", &y);
    while(y !=1)
    {
        x = y%2;
        y = y/2;
        if(x  ==1)
        count++;
    }
    printf("the amount is %d\n",count);
}