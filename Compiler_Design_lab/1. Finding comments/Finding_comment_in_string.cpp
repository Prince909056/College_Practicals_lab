#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
    char com[30];
    int i , flag=0;
    printf("Enter the comment :-");
    gets(com);      
    
    if(com[0]=='/')
    {
        if(com[1] == '/')
        {
            printf("\nIt is a comment.");
            flag = 1;
        }
        
        else if(com[1] == '*')
        {
            for ( i=2; i<30; i++) 
            {
                if(com[i] == '*' && com[i+1] == '/')
                {
                    printf("\nIt is a comment.");
                    flag = 1;
                    break;
                }
            }
            
        }
    }
    
    if( flag == 0 )
            {
                printf("\nIt is not a comment.");
            }
    
    return 0;
}
