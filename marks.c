#include <stdio.h>
void main() {

int math,eng,chem,phy,com,total,percentage,penalty=0;
printf("Enter Marks Of Maths: ");
scanf("%d",&math);
printf("Enter Marks Of English: ");
scanf("%d",&eng);
printf("Enter Marks Of Chemistry: ");
scanf("%d",&chem);
printf("Enter Marks Of Physics: ");
scanf("%d",&phy);
printf("Enter Marks Of Computer: ");
scanf("%d",&com);

total=math+chem+phy+eng+com;
percentage=(total/5);



if(math<=18 || eng<=18 || chem<=18 || phy<=18 || com<=18)
    { 
        printf("You are Fail\n");
        
        if (math<=18)
        {
          printf("You are failed in Maths\n");
          penalty+=500;
        }
        if(eng<=18)
        {
          printf("You are failed in English\n");
          penalty+=500;
        }
        if (chem<=18)
        {
          printf("You are failed in Chemistry\n");
          penalty+=500;
        }
        if (phy<=18)
        {
          printf("You are failed in Physics\n");
          penalty+=500;
        }
        if(com<=18)
        {
          printf("You are failed in Computer\n");
          penalty+=500;
        }
        
        printf("Penalty is %d\n",penalty);
    }
    
else{

    printf("Total is %d\n",total);
    printf("Percentage is %d\n",percentage);

if(percentage>=90){
    printf("A++");
}
else if(percentage>=80)
    {
        printf("A+");
    }
else if(percentage>=70)
    {
        printf("A");
    }
else if(percentage>=60)
    {
        printf("B+");
    }
else
    {
        printf("B");
    }
}
}