#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>   
 
int main() 
{
    
    char playername[20];
    char ch,b;
    int countt=0,countf=0,tcount=0;
    FILE *Q,*P;   
    
    P=fopen("Players.txt","a");
       
     system("cls");
     printf("\n\n\n\n\n\n\n\t\t\tRegister Your Name :");
     scanf("%s",&playername);
     fprintf(P,"%s",playername);
     
     getch();
     system("cls");


     printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
     printf("\n\n Here are some tips you might wanna know before playing:");
     printf("\n -------------------------------------------------------------------------");
     printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
     printf("\n    right option.");
     printf("\n >> Negative marking for wrong answers!");
     printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
     printf("\n\n\n Press any key to start the game!\n");
     getch();

     system("cls");
     Q=fopen("questions/q1.txt","r");
     while((ch=getc(Q))!=EOF)     
     printf("%c",ch);
     fclose(Q);
     b=getch();
     if(b=='a' || b=='A')

    {
        printf("\nCorrect!!");
        countt=countt+2;
    }
    else
    {
        printf("\nWrong!!");
        countf=countf-1;
    }
    getch();

    system("cls");

    Q=fopen("questions/q2.txt","r");
    while((ch=getc(Q))!=EOF)
    printf("%c",ch);
    fclose(Q);
    b=getch();
    if(b=='c' || b=='C')
    {
        printf("\nCorrect!!");
        countt=countt+2;
    }
    else
    {
        printf("\nWrong!!");
        countf=countf-1;
    }
    getch();

    system("cls");
    Q=fopen("questions/q3.txt","r");
    while((ch=getc(Q))!=EOF)
    printf("%c",ch);
    fclose(Q);
    b=getch();
    if(b=='b' || b=='B')
    {
        printf("\nCorrect!!");
        countt=countt+2;
    }
    else
    {
        printf("\nWrong!!");
        countf=countf-1;
    }
    getch();

    system("cls");
    Q=fopen("questions/q4.txt","r");
    while((ch=getc(Q))!=EOF)
    printf("%c",ch);
    fclose(Q);
    b=getch();
    if(b=='b' || b=='B')
    {
        printf("\nCorrect!!");
        countt=countt+2;
    }
    else
    {
        printf("\nWrong!!");
        countf=countf-1;
    }
    getch();

    system("cls");
    Q=fopen("questions/q5.txt","r");
    while((ch=getc(Q))!=EOF)
    printf("%c",ch);
    fclose(Q);
    b=getch();
    if(b=='d' || b=='D')
    {
        printf("\nCorrect!!");
        countt=countt+2;
    }
    else
    {
        printf("\nWrong!!");
        countf=countf-1;
    }
    getch();

    system("cls");
    Q=fopen("questions/q6.txt","r");
    while((ch=getc(Q))!=EOF)
    printf("%c",ch);
    fclose(Q);
    b=getch();
    if(b=='c' || b=='C')
    {
        printf("\nCorrect!!");
        countt=countt+2;
    }
    else
    {
        printf("\nWrong!!");
        countf=countf-1;
    }
    getch();

    system("cls");
    Q=fopen("questions/q7.txt","r");
    while((ch=getc(Q))!=EOF)
    printf("%c",ch);
    fclose(Q);
    b=getch();
    if(b=='d' || b=='D')
    {
        printf("\nCorrect!!");
        countt=countt+2;
    }
    else
    {
        printf("\nWrong!!");
        countf=countf-1;
    }
    getch();

    system("cls");
    Q=fopen("questions/q8.txt","r");
    while((ch=getc(Q))!=EOF)
    printf("%c",ch);
    fclose(Q);
    b=getch();
    if(b=='b' || b=='B')
    {
        printf("\nCorrect!!");
        countt=countt+2;
    }
    else
    {
        printf("\nWrong!!");
        countf=countf-1;
    }
    getch();

    system("cls");
    Q=fopen("questions/q9.txt","r");
    while((ch=getc(Q))!=EOF)
    printf("%c",ch);
    fclose(Q);
    b=getch();
    if(b=='c' || b=='C')
    {
        printf("\nCorrect!!");
        countt=countt+2;
    }
    else
    {
        printf("\nWrong!!");
        countf=countf-1;
    }
    getch();

    system("cls");
    Q=fopen("questions/q10.txt","r");
    while((ch=getc(Q))!=EOF)
    printf("%c",ch);
    fclose(Q);
    b=getch();
    if(b=='b' || b=='B')
    {
        printf("\nCorrect!!");
        countt=countt+2;
    }
    else
    {
        printf("\nWrong!!");
        countf=countf-1;
    }
    getch();

             printf("\n\nTrue:%d",countt);
             printf("\n\nFalse:%d",countf);

             fprintf(P,"\t\t\t\t\t%d",countt);
             fprintf(P,"\t\t\t\t%d",countf);
             
             tcount=countt+countf;
             printf("\nYour score is : %d\n",tcount);
             fprintf(P,"\t\t\t%d\n",tcount);
    fclose(P);

    printf("Want to see the leaderboard? (Y/N): ");
    char choice;
    choice=getch();
    if(choice == 'Y' || choice == 'y') {
        
        system("cls");
    printf("\n------------------ Leaderboard ------------------\n");

    P = fopen("Players.txt", "r");
    
    while((ch=getc(P))!=EOF)
    printf("%c",ch);
    fclose(P);
    
    printf("\n-------------------------------------------------\n");
    getch();
    } else {
        printf("Thank you for playing!\n");
    }

    

    return 0;
     
}
