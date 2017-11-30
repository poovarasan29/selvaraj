#include<stdio.h>
int main()
{
   FILE *fp;
   char ch;
   int nol=0,not=0,nos=0,noc=0;
   fp=fopen(“animesh.txt”,”r”);
   while(1)
   {
      ch=fgetc(fp);
      if(ch==EOF)
      break;
      noc++;
      if(ch==’ ‘)
      nos++;
      if(ch==’\n’)
      nol++;
      if(ch==’\t’)
      not++;
   }
   fclose(fp);
   printf(“\n Number of characters = %d”,noc);
   printf(“\n Number of spaces = %d”,nos);
   printf(“\n Number of tabs = %d”,not);
   printf(“\n Number of lines = %d”,nol);
   getch();
}


My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN