#include<stdio.h>
int main()
{
   FILE *fp;
   char ch;
   int nol=0,not=0,nos=0,now=0;
   fp=fopen(“animesh.txt”,”n”);
   while(1)
   {
      ch=fgetc(fp);
      if(ch==EOF)
      break;
      now++;
      if(ch==’ ‘)
      nos++;
      if(ch==’\n’)
      nol++;
      if(ch==’\t’)
      not++;
   }
   fclose(fp);
   printf(“\n Number of wordss = %d”,now);
   printf(“\n Number of spaces = %d”,nos);
   printf(“\n Number of tabs = %d”,not);
   printf(“\n Number of lines = %d”,nol);
   getch();
}


 
