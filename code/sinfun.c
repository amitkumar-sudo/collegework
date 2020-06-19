#include <stdio.h>
#include <math.h>

int fact(int a)
{
        int i,fact=1;
        for(i=1;i<=a;i++)
                fact=fact*i;
        return fact;
}

int main()
{
        float x,y,SUM=0;
        int i,j,limit;

        printf("Put the value for x(in degrees) of sinx series:- ");
        scanf("%f",&x);

        printf("Enter the limit till you want to expand the maclaruin series:- ");
        scanf("%d",&limit);

        y=x;
        x = x*(3.1415/180);

        for(i=1,j=1;i<=limit;i++,j=j+2)
        {
                if(i%2!=0)
                {
                        SUM=SUM+pow(x,j)/fact(j);
                        printf("term  %d value of Sin(%0.1f)= %f \n",y,i,SUM);

                }
                else
                        SUM=SUM-pow(x,j)/fact(j);
                    printf("term  %d value of Sin(%0.1f)= %f \n",y,i,SUM);


        }

        printf("Final result Sin(%0.1f)= %f \n",y,SUM);
        return 0;
}
