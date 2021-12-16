// Program ce ispisat abecedni trokut

#include<stdio.h>    
#include<stdlib.h>  
int main(){  
  int znak=65;    
    int i,j,k,m;      
    for(i=1;i<=5;i++)    
    {    
        for(j=5;j>=i;j--)    
            printf(" ");    
        for(k=1;k<=i;k++)    
            printf("%c",znak++);    
            znak--;    
        for(m=1;m<i;m++)    
            printf("%c",--znak);    
        printf("\n");    
        znak=65;    
    }    
return 0;  
}  
