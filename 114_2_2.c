//This Program is Prepare by 22TCE114_MEET
//some changing is done by me
#include<stdio.h>
int main()
{
    int r, x;
    printf("\n Enter the amount");
    scanf("%d",&r);
    x = r/100;
    r = r%100;
    printf("\n Requirement of 100Rs notes: %d",x);
    x = r/50;
    r = r%50;
    printf("\n Requirement of 50Rs notes: %d",x);

    x = r/10;
    r = r%10;
    printf("\n Requirement of 10Rs notes: %d",x);

    printf("\n Change left: %d",r);
    printf("\n\n 22TCE114_MEET");
    printf("\n\n 22CE019_MEET");
    printf("clone command check");
    printf("new future is add");
    return 0;
}
