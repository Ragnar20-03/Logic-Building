#include<stdio.h>


//  Replace 'Small ' with its Capital Letter  

void strUprX( char *str )
{
  while(*str != '\0')
  {
    if ((*str >= 'a') && (*str <= 'z'))
    {
        *str = *str - 32;
    }
      str++;
  }
}

int main()
{
    char Arr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s" , Arr);

     strUprX( Arr );

     printf("String After Editing is : %s\n",Arr);

    return 0;
}