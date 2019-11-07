
#include<stdio.h>
int main()
{
    int i, T;
    scanf("%d", &T);
    for(i = 1; i <= T; i++)
    {
      char s[1000];
      int s_len, j, count = 0;
      scanf("%s", s);
      s_len = strlen(s);
      for(j = 0; j < s_len; j++)
      {
          if(s[j] == '0')
          {
              count += 6;
          }
          else if(s[j] == '1')
          {
              count += 2;
          }
           else if(s[j] == '2')
          {
              count += 5;
          }
           else if(s[j] == '3')
          {
              count += 5;
          }
           else if(s[j] == '4')
          {
              count += 4;
          }
           else if(s[j] == '5')
          {
              count += 5;
          }
           else if(s[j] == '6')
          {
              count += 6;
          }
           else if(s[j] == '7')
          {
              count += 3;
          }
           else if(s[j] == '8')
          {
              count += 7;
          }
           else if(s[j] == '9')
          {
              count += 6;
          }
      }
      printf("%d leds\n", count);
    }
}
