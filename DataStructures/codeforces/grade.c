#include<stdio.h>

int main()

{
   char grade;
   
   printf("Enter your grade:");
    scanf("%c",&grade);
  
   switch(grade)
    {
     case 'A' : printf("Excellent.You got an %c grade\n",grade);
               break;
     case 'B' : printf("Very good.You got a %c grade\n",grade);

               break;
     case 'C' : printf("Good.You got a %c grade\n",grade);

               break;
     case 'D' : printf("Can perform better!.You got a %c grade\n",grade);

               break;
     default : printf("Invalid grade\n");
    }


  return 0;
}
