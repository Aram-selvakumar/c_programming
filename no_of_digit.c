#include <stdio.h>

int main()
{
    int num,count=0;
   printf("Enter the number:");
   scanf("%d",&num);
   if(num == 0){
       count++;
    }
    else{
        while(num!=0){
            num/=10;
            count++; 
        }
    }
    printf("Number of digit:%d",count);

    return 0;
}
