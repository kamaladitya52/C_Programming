#include <stdio.h>

struct dob
{
    int dd;
    int mm;
    int yy;
};

struct student
{
    char name[20];
    int roll;
    struct dob d;
};

struct student p[3];
void func(struct student s[])
{
    struct student temp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (s[i].d.yy == s[j].d.yy)
            {
                if (s[i].d.mm == s[j].d.mm)
                {
                    if (s[i].d.yy > s[j].d.yy)
                    {
                        temp = s[i];
                        s[i] = s[j];
                        s[j] = temp;
                    }
                }
                else if (s[i].d.mm >s[j].d.mm)
                {
                    temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
            else if (s[i].d.yy > s[j].d.yy)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for (int i = 0; i <3;i++){
        p[i]=s[i];
    }
}

int main()
{
    struct student s[3];
    for (int i = 0; i < 3; i++)
    {

        printf("Enter your name");
        scanf("%s", s[i].name);

        printf("Enter your roll");
        scanf("%d", &s[i].roll);

        printf("Enter your birth date");
        scanf("%d", &s[i].d.dd);

        printf("Enter your birth month");
        scanf("%d", &s[i].d.mm);

        printf("Enter your birth year");
        scanf("%d", &s[i].d.yy);
    }
    
    func(s);

    for (int i = 0; i < 3; i++){
        printf("%s\n",p[i].name);
    }
    return 0;
}