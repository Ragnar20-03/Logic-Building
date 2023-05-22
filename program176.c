#include<stdio.h>


//  Replace '_' instead of WhiteSpace' ' 

void EditString( char *str )
{
  while(*str != '\0')
  {
    if (*str == ' ')
    {
        *str = '_';
    }
  str++;
  }
}

int main()
{
    char Arr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s" , Arr);

     EditString( Arr );

     printf("String After Editing is : %s\n",Arr);

    return 0;
}