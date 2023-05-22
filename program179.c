#include<stdio.h>


//  Replace 'Capital ' with its Small Letter  

void strlwrX( char *str )
{
  while(*str != '\0')
  {
    if ((*str >= 'A') && (*str <= 'Z'))
    {
        *str = *str + 32;
    }
      str++;
  }
}

int main()
{
    char Arr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s" , Arr);

     strlwrX( Arr );

     printf("String After Editing is : %s\n",Arr);

    return 0;
}