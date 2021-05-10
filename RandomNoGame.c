#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   int num, gus,n=0;
    srand(time(0));
    num = rand() % 100 + 1;
    //    printf("%d", num);
    do
    {
        printf("Guess a no. between 1 to 100:\n");
        scanf("%d", &gus);
        if(num<gus){
            printf("Lower no. plzz\n\n");
        }
        else if(num>gus){
            printf("Greater no. plzz\n\n");
        }
        else{
            printf("You have gussed correct number(%d) in %d attempts.\n",num,n);
        }
        n++;
    } while (gus!=num);

    return 0;
}