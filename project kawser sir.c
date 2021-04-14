#include<stdio.h>
#include<Windows.h>
#include<string.h>
int main()
{
    int n,i,j,c,p[100],b[100][100],b2[100],num,l,x,al[100][100],y[1000];
    float  u,m[100],e[100][100], array[100][100],h[100],term;
    char  com[100][100],term1[100][100],*q,*q1,t[100],s[100],z[100],d[1000], grade[100][100],grade1[100],r[100][100],s_name[100][100],f[100][100],g[]="Promoted",g1[]="Not Promoted",sem1[1000]="1ST1ST",sem[100],sem2[]="2ND1ND",v[]="Result Sheet :-  ";
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    printf("\nInstitution Name :\n\n");
    gets(z);
    system("cls");
    printf("\nDepertment  Name :\n\n");
    gets(d);
    system("cls");
    printf("\nEducational Year :\n\n");
    gets(sem);
    strcat(z,"\n\n\t\t");
    strcat(z,v);
    strcat(z," ");
    strcat(z,sem);
    system("cls");
    printf("\nYear :\n\n");
    gets(t);
    system("cls");
    printf("\nSemister :\n\n");
    gets(s);
    strcat(t,s);

    system("cls");
    printf("\nTotal Student's Number :\n\n");
    scanf("%d",&n);
    system("cls");
    printf("\nStudent's ID. :\n\n");
    for(i=1; i<=n; i++)
    {
        printf(" ID. :  ");
        scanf("%s",r[i]);
    }
    system("cls");
    printf("\nTotal Course in This Semister:\n\n");
    scanf("%d",&num);
    for(j=1; j<=num; j++)

    {
        system("cls");
        printf("\nCourse %d :\n\n",j);
        scanf("%s",s_name[j]);
        system("cls");
        printf("\nCourse %s  ::   Credid : ",s_name[j]);
        scanf("%d",&b2[j]);
        printf("\n");
        for(i=1; i<=n; i++)
        {
            printf("ID. :  %s",r[i]);

            printf("\tNumber:  ");
            scanf("%d",&b[i][j]);
            if(b[i][j]<40)
            {
                al[i][j]=0;
                printf("dhsfghdf\n");
                strcpy(s_name[j],com[i][j]);
                printf("%s\n",com[i][j]);
            }
            else
            {
                al[i][j]=b2[j];
                if(b[i][j]>100||b[i][j]<0)
                {
                    printf("\nInvalid Number :  Change this ");
                    scanf("%d",&b[i][j]);
                }
                if(b[i][j]>=80&&b[i][j]<=100)
                {
                    array[i][j]=4.00;
                    grade[i][j]='A';
                }
                else if(b[i][j]>=75&&b[i][j]<=79)
                {
                    array[i][j]=3.75;
                    grade[i][j]='A';
                }

                else if(b[i][j]>=70&&b[i][j]<=74)
                {
                    array[i][j]=3.50;
                    grade[i][j]='A';
                }
                else if(b[i][j]>=65&&b[i][j]<=69)
                {
                    array[i][j]=3.25;
                    grade[i][j]='B';
                }
                else if(b[i][j]>=60&&b[i][j]<=64)
                {
                    array[i][j]=3.00;
                    grade[i][j]='B';
                }
                else if(b[i][j]>=55&&b[i][j]<=59)
                {
                    array[i][j]=2.75;
                    grade[i][j]='B';
                }
                else if(b[i][j]>=50&&b[i][j]<=54)
                {
                    array[i][j]=2.50;
                    grade[i][j]='C';
                }
                else if(b[i][j]>=45&&b[i][j]<=49)
                {
                    array[i][j]=2.25;
                    grade[i][j]='C';
                }
                else if(b[i][j]>=40&&b[i][j]<=44)
                {
                    array[i][j]=2.00;
                    grade[i][j]='D';
                }

                else if(b[i][j]<40)

                {
                    array[i][j]=0.00;
                    grade[i][j]='F';

                }
                //system("cls");
            }
        }
    }
    for(i=1; i<=n; i++)
    {
        c=0;
        for(j=1; j<=num; j++)
        {
            c=c+al[i][j];
        }
        y[i]=c;
        printf("%d\n",y[i]);
    }
    c=0;
    for(j=1; j<=num; j++)
        c=c+b2[j];

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=num; j++)
            e[i][j]=b2[j]*array[i][j];
    }


    for(i=1; i<=n; i++)
    {

        m[0]=0;
        for(j=1; j<=num; j++)
            m[i]=m[i]+b2[j]*array[i][j];
    }
    for(i=1; i<=n; i++)
        h[i]=(m[i]/c);

//12 nd innings
    for(i=1; i<=n; i++)

        if(h[i]>=4.00)
            grade1[i]='A';

        else if(h[i]<4.00&&h[i]>=3.75)
            grade1[i]='A';

        else if(h[i]<3.75&&h[i]>=3.50)
            grade1[i]='A';

        else if(h[i]<3.50&&h[i]>=3.25)
            grade1[i]='B';

        else if(h[i]<3.25&&h[i]>=3.00)
            grade1[i]='B';

        else if(h[i]<3.00&&h[i]>=2.75)
            grade1[i]='B';

        else if(h[i]<2.75&&h[i]>=2.50)
            grade1[i]='C';

        else if(h[i]<2.50&&h[i]>=2.25)
            grade1[i]='C';

        else if(h[i]<2.25&&h[i]>=2.00)
            grade1[i]='D';

        else if(h[i]<2.00)
            grade1[i]='F';


    system("cls");
    if(!strcmp(sem1,t))
    {

        u=2.00;
    }
    else if(!strcmp(sem2,t))
    {
        u=2.50;
    }
M:
    {
        printf("\n\t ");
        puts(z);
        printf("\t\t  Dept. of :  ");
        puts(d);
        printf("\n");
        printf("  ------------------------------------------------------\n");
        printf("  | ID  no: | Credid  |  Grade |  GPA  | Comment       |\n");
        printf("  ------------------------------------------------------\n");
        for(i=1; i<=n; i++)

            if(h[i]>=4.00)
            {

                if(h[i]>=u)

                {
                    printf("  |   %4s  |   %4d  |  %3c + |  %3.2f | %12s  |\n",r[i],y[i],grade1[i],h[i],g);
                    printf("  ------------------------------------------------------\n");
                }
                else
                {
                    printf("  |   %4s  |   %4d  |  %3c + |  %3.2f | %12s  |\n",r[i],y[i],grade1[i],h[i],g1);
                    printf("  ------------------------------------------------------\n");
                }
            }


            else if(h[i]<3.75&&h[i]>=3.50)
            {
                if(h[i]>=u)

                {
                    printf("  |   %4s  |   %4d  |  %3c - |  %3.2f | %12s  |\n",r[i],y[i],grade1[i],h[i],g);
                    printf("  ------------------------------------------------------\n");
                }
                else
                {
                    printf("  |   %4s  |   %4d  |  %3c - |  %3.2f | %12s  |\n",r[i],y[i],grade1[i],h[i],g1);
                    printf("  ------------------------------------------------------\n");
                }
            }

            else if(h[i]<3.50&&h[i]>=3.25)

            {
                if(h[i]>=u)

                {
                    printf("  |   %4s  |   %4d  |  %3c + |  %3.2f | %12s  |\n",r[i],y[i],grade1[i],h[i],g);
                    printf("  ------------------------------------------------------\n");
                }
                else
                {
                    printf("  |   %4s  |   %4d  |  %3c + |  %3.2f | %12s  |\n",r[i],y[i],grade1[i],h[i],g1);
                    printf("  ------------------------------------------------------\n");
                }
            }

            else if(h[i]<3.00&&h[i]>=2.75)
            {
                if(h[i]>=u)

                {
                    printf("  |   %4s  |   %4d  |  %3c - |  %3.2f | %12s  |\n",r[i],y[i],grade1[i],h[i],g);
                    printf("  ------------------------------------------------------\n");
                }
                else
                {
                    printf("  |   %4s  |   %4d  |  %3c - |  %3.2f | %12s  |\n",r[i],y[i],grade1[i],h[i],g1);
                    printf("  ------------------------------------------------------\n");
                }

            }

            else if(h[i]<2.75&&h[i]>=2.50)
            {
                if(h[i]>=u)

                {
                    printf("  |   %4s  |   %4d  |  %3c + |  %3.2f | %12s  |\n",r[i],y[i],grade1[i],h[i],g);
                    printf("  ------------------------------------------------------\n");
                }
                else
                {
                    printf("  |   %4s  |   %4d  |  %3c + |  %3.2f | %12s  |\n",r[i],y[i],grade1[i],h[i],g1);
                    printf("  ------------------------------------------------------\n");
                }
            }
            else
            {
                if(h[i]>=u)

                {
                    printf("  |   %4s  |   %4d  |  %3c   |  %3.2f | %12s  |\n",r[i],y[i],grade1[i],h[i],g);
                    printf("  ------------------------------------------------------\n");
                }
                else if(h[i]<u)
                {
                    printf("  |   %4s  |   %4d  |  %3c   |  %3.2f | %12s  |\n",r[i],y[i],grade1[i],h[i],g1);
                    printf("  ------------------------------------------------------\n");
                }
            }

    }
    getchar();
    getchar();



    system("cls");
    printf("\n\n#press 0:\t Indevidual mark sheet :\n#Press 1:\t Result Sheet :\n#Press 2:\t point table:\n#Press any key to EXIT\n\n");
    scanf("%d",&x);
    system("cls");
    if(x==0)
        goto B;
    if(x==1)
        goto M;
    else if(x==2)
        goto Z;
    else
        goto A;
B:
    {
        printf("\n  Student ID/ Roll :\n\n");

        scanf("%d",&l);
        system("cls");

        printf("\n\n\t\t\t\t\tID. : %s \n\n",r[l]);

        printf("  -------------------------------------------------------------------------------------------\n");
        printf("  | SL.No | Name of Course: | Creaded |  Mark | C.L.Grade |  Grade Point  | Point Scored  |\n");
        printf("  -------------------------------------------------------------------------------------------\n");
        for(j=1; j<=num; j++)

            if(array[l][j]==4)
            {
                printf("  | %3d   | %10s      | %4d    | %3d   |%5.c +    | %8.2f      | %8.2f      |\n",j,s_name[j],b2[j],b[l][j],grade[l][j],array[l][j],e[l][j]);
                printf("  -------------------------------------------------------------------------------------------\n");
            }
            else if(array[l][j]==3.50)
            {
                printf("  | %3d   | %10s      | %4d    | %3d   |%5.c -    | %8.2f      | %8.2f      |\n",j,s_name[j],b2[j],b[l][j],grade[l][j],array[l][j],e[l][j]);
                printf("  -------------------------------------------------------------------------------------------\n");
            }
            else if(array[l][j]==3.25)
            {
                printf("  | %3d   | %10s      | %4d    | %3d   |%5.c +    | %8.2f      | %8.2f      |\n",j,s_name[j],b2[j],b[l][j],grade[l][j],array[l][j],e[l][j]);
                printf("  -------------------------------------------------------------------------------------------\n");
            }
            else  if(array[l][j]==2.75)
            {
                printf("  | %3d   | %10s      | %4d    | %3d   |%5.c -    | %8.2f      | %8.2f      |\n",j,s_name[j],b2[j],b[l][j],grade[l][j],array[l][j],e[l][j]);
                printf("  -------------------------------------------------------------------------------------------\n");
            }
            else  if(array[l][j]==2.50)
            {
                printf("  | %3d   | %10s      | %4d    | %3d   |%5.c +    | %8.2f      | %8.2f      |\n",j,s_name[j],b2[j],b[l][j],grade[l][j],array[l][j],e[l][j]);
                printf("  -------------------------------------------------------------------------------------------\n");
            }
            else
            {
                printf("  | %3d   | %10s      | %4d    | %3d   |%5.c      | %8.2f      | %8.2f      |\n",j,s_name[j],b2[j],b[l][j],grade[l][j],array[l][j],e[l][j]);
                printf("  -------------------------------------------------------------------------------------------\n");
            }
        printf("  |                           | T.C = %2d|                                   | P.C = %5.2f   |\n",c,m[l]);
        printf("  -------------------------------------------------------------------------------------------\n");

        printf("\n\n\t\tTotal creaded = %d\n",c);
        printf("\t\tTotal C-GPA: %.2f    in this Semister \n",h[l]);
        if(!strcmp(t,sem1))
        {
            if(h[l]>=2.00)
                printf("\t\t\tPromoted\n\n");
            else
                printf("\t\t\tNot  Promoted\n\n");
        }
        else if(!strcmp(t,sem2))
        {
            if(h[l]>=2.50)
                printf("\t\t\tPromoted\n\n");
            else
                printf("\t\t\tNot  Promoted\n\n");
        }

        printf("       ***********************************************************    \n\n\n");
    }
K:
    {
        getchar();
        getchar();
        system("cls");

        printf("\n\n#press 0:\t Main Manu :\n#Press 1:\t Result Sheet :\n#Press 2:\t point table:\n#Press any key to EXIT\n\n");
        scanf("%d",&x);
        system("cls");
        if(x==0)
            goto B;
        if(x==1)
            goto M;
        else if(x==2)
            goto Z;
        else
            goto A;
    }
    {
Z:
        {
            for(i=1; i<n; i++)
            {
                for(j=i+1; j<=n; j++)
                {
                    if(h[i]<h[j])
                    {
                        term=h[i];
                        h[i]=h[j];
                        h[j]=term;
                        strcpy(term1[j],r[i]);
                        strcpy(r[i],r[j]);
                        strcpy(r[j],term1[j]);
                    }
                }
            }
            printf("Position :  student ID.    :  C- GPA   :\n\n");
            for(i=1; i<=n; i++)
            {

                printf("|%5d   :%12s     :%6.2f     |\n",i,r[i],h[i]);
            }

        }

        goto K;
    }

    {
A:
        {
            printf("\n\n\n\t\t##########_______END_______##########\n");
            getch();
        }
    }

}

