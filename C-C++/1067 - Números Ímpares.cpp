#include<stdio.h>
using namespace std;

int main(){
    
   int X=0, Y=1;
   scanf("%d", &X);
 
   while(X>=Y){
       if (Y%2!=0)
       printf("%d\n", Y);
       
       Y++;
   }

  return 0;
  
}