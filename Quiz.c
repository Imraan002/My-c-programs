#include<stdio.h>
// #include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

struct details{
    char name[20];
    int attempts;
    int score;
  
};

struct details d1;
FILE *ptr;
void solve()
{   
    d1.attempts+=1;
    if(d1.attempts>3)
    {
        printf("No more Attempts Left\n\n");
        ptr = fopen("quiz.txt","r");
        if(ptr == NULL) {
        printf("file couldn't be opened\n");
        exit(1);
      }
      char buff[255];
      ptr = fopen("file.txt", "r");  
      while(fscanf(ptr, "%s", buff)!=EOF){  
        printf("%s ", buff );  
     }  
    
        exit(1);
    }
    int choice;

     printf("\t\t\tC PROGRAM QUIZ GAME\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      to ");
     printf("\n\t\t\t   THE GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t      BECOME A MILLIONAIRE!!!!!!!!!!!    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press 1 to start the game");
     printf("\n\t\t > press 0 to quit ");
     printf("\n\t\t________________________________________\n\n");

     scanf("%d",&choice);
     
    
    while(choice!=1)
    {
        printf("Enter a valid input\n");
        scanf("%d",&choice);
        if(choice==0)
            {
                printf("Thanks for Playing!!");
                exit(1);
            }
    }
    
    printf("Welcome to the Game\n");
    printf("Enter your Name\n");
    
   // struct details d1;
    scanf("%s",d1.name);
    
    d1.score=0;
    
    
    printf("\n");
    int cnt=0;
    int q1,q2,q3,q4,q5;
    printf("Quiz Starts\n\n\n");
    
    printf("What is the Time Complexity of Binary Search\n");
    printf("\n\n1. Log(n)\t\t2. N^2\n\n3. N^3\t\t4. log(n)^2");
    printf("\n\n");
    scanf("\n%d",&q1);
    if(q1==1)
    {
        d1.score+=1;
    }
    cnt++;
    printf("\n\n");
    printf("\n Prefix notation is alsow known as\n");
    printf("\n\n1. Reverse Polish Notation\t\t2. Reverse Notation\n\n3. Polish Reverse Notation\t\t4. Polish Notation");
    printf("\n\n");
    scanf("\n%d",&q2);
    if(q2==4)
    {
        d1.score+=1;
    }
    cnt++;
    printf("\n\n");
    printf("\n Find the odd out\n");
    printf("\n\n1.  Prim's Minimal Spanning Tree Algorithm\t\t2. Kruskal's Minimal Spanning Tree Algorithm\n\n3.Floyd-Warshall's All pair shortest path Algorithm\t\t4.  Dijkstra's Minimal Spanning Tree Algorithm");
    printf("\n\n");
    scanf("\n%d",&q3);
    if(q3==3)
    {
        d1.score+=1;
    }
    cnt++;
    printf("\n\n");
    printf("\n What could be the worst case height of an AVL tree\n");
    printf("\n\n1.  0.97 log n\t\t2. 2.13 log n\n\n3. 1.44 log n\t\t4.  n2 log n");
    printf("\n\n");
    scanf("\n%d",&q4);
    if(q4==3)
    {
        d1.score+=1;
    }
    cnt++;
    printf("\n\n");
    printf("\n Time complexity of Depth First Traversal of is\n");
    printf("\n\n1.  Θ(|V|+|E|)\t\t2. Θ(|V|)\n\n3.1Θ(|E|)\t\t4.  nΘ(|V|*|E|)");
    printf("\n\n");
    scanf("\n%d",&q5);
    if(q5==3)
    {
        d1.score+=1;
    }
    cnt++;
    printf("\n\n");
    
    char ch;
    if(cnt==5)
    {
        ptr = fopen("quiz.txt","w");
        if(ptr == NULL) {
        printf("file couldn't be opened\n");
        exit(1);
      }
      else{
          fprintf(ptr, "Name: %s\tScore: %f \tAttempts: %s\t \n", d1.name, d1.score, d1.attempts);
      }
        printf("\n\n\nFive Questions are over!!!\n\n\n");
        solve();
    }
}



int main()
{
    d1.attempts=0;
    solve();
  //  printf("%d",d1.score);
    return 0;
}