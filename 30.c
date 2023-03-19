#include<stdio.h>

// 3. FIND THE 2nd LARGEST AND 3rd LARGEST AMONG 4 NUMBERS.

int main ()
{
int a,b,c,d,e,f,g;
printf("Enter the 1st number:");
scanf("%d",&a);
printf("Enter the 2nd number:");
scanf("%d",&b);
printf("Enter the 3rd number:");
scanf("%d",&c);
printf("Enter the 4th number:");
scanf("%d",&d);

	e = (a>b && a>c && a>d) ? a : ((b>c && b>d) ? b:((c>d)?c:d));
    if(e==a)
    {
        f = (b>c && b>d)?b:((c>d)?c:d);
        if(f==b || f==c)
        {
            if(f==b)
            {
                printf("The 2nd largest number is %d\n",b);
                g = (c>d)?c:d;
                if(g==c)
                {
                    printf("The 3rd largest number is %d\n", c);
                }
                else
                {
                    printf("The 3rd largest number id %d\n", d);
                }
            }
            else
            {
                printf("The 2nd largest number is %d\n", c);
                g = (b>d)?b:d;
                if(g==b)
                {
                    printf("The 3rd largest number is %d\n", b);
                }
                else
                {
                    printf("The 3rd largest number is %d\n", d);
                }
            }
        }
        else
        {
            printf("The 2nd largest number is %d\n",d);
            if(b>c)
            {
                printf("The 3rd largest number is %d\n",b);
            }
            else
            {
                printf("The 3rd largest number is %d\n", c);
            }
        }
    }

    if(e==b)
    {
        f = (a>c && a>d)?a:((c>d)?c:d);
        if(f==a || f==c)
        {
            if(f==a)
            {
                printf("The 2nd largest number is %d\n",a);
                g = (c>d)?c:d;
                if(g==c)
                {
                    printf("The 3rd largest number is %d\n", c);
                }
                else
                {
                    printf("The 3rd largest number is %d\n", d);
                }
            }
            else
            {
                printf("The 2nd largest number is %d\n", c);
                g = (a>d)?a:d;
                if(g==a)
                {
                    printf("The 3rd largest number is %d\n", a);
                }
                else
                {
                    printf("The 3rd largest number is %d\n", d);
                }
            }
        }
        else
        {
            printf("The 2nd largest number is %d\n",d);
            if(a>c)
            {
                printf("The 3rd largest number is %d\n",a);
            }
            else
            {
                printf("The 3rd largest number is %d\n", c);
            }
        }
    }

    if(e==c)
    {
        f = (a>b && a>d)?a:((b>d)?b:d);
        if(f==a || f==b)
        {
            if(f==a)
            {
                printf("The 2nd largest number is %d\n",a);
                g = (b>d)?b:d;
                if(g==b)
                {
                    printf("The 3rd largest number is %d\n", b);
                }
                else
                {
                    printf("The 3rd largest number is %d\n", d);
                }
            }
            else
            {
                printf("The 2nd largest number is %d\n", b);
                g = (a>d)?a:d;
                if(g==a)
                {
                    printf("The 3rd largest number is %d\n", a);
                }
                else
                {
                    printf("The 3rd largest number is %d\n", d);
                }
            }
        }
        else
        {
            printf("The 2nd largest number is %d\n",d);
            if(a>b)
            {
                printf("The 3rd largest number is %d\n",a);
            }
            else
            {
                printf("The 3rd largest number is %d\n", b);
            }
        }
    }

    if(e==d)
    {
        f = (a>b && a>c)?a:((b>c)?b:c);
        if(f==a || f==b)
        {
            if(f==a)
            {
                printf("The 2nd largest number is %d\n",a);
                g = (b>c)?b:c;
                if(g==b)
                {
                    printf("The 3rd largest number is %d\n", b);
                }
                else
                {
                    printf("The 3rd largest number is %d\n", c);
                }
            }
            else
            {
                printf("The 2nd largest number is %d\n", b);
                g = (a>c)?a:c;
                if(g==a)
                {
                    printf("The 3rd largest number is %d\n", a);
                }
                else
                {
                    printf("The 3rd largest number is %d\n", c);
                }
            }
        }
        else
        {
            printf("The 2nd largest number is %d\n",c);
            if(a>b)
            {
                printf("The 3rd largest number is %d\n",a);
            }
            else
            {
                printf("The 3rd largest number is %d\n", b);
            }
        }
    }


return 0;
}
