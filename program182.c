#include<stdio.h>


//  Replace 'Capital ' with its Small Letter  

void strToggle( char *str )
{
    int Gap = 'a' - 'A';

  while(*str != '\0')
  {
    if ((*str >= 'A') && (*str <= 'Z'))
    {
        *str = *str + Gap;
    }
     else if ((*str >= 'a') && (*str <= 'z'))
    {
        *str = *str - Gap;
    }
      str++;
  }
}

int main()
{
    char Arr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s" , Arr);

     strToggle( Arr );

     printf("String After Editing is : %s\n",Arr);

    return 0;
}