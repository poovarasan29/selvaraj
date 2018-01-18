#include <stdio.h>
#include <conio.h>
#include <string.h>
 
int main(){
    char inputString[1001], outputArray[1001];
    int readIndex = 0, writeIndex;
    printf("Enter a String \n");
    gets(inputString);
    
    while(inputString[readIndex] == ' '){
        readIndex++;
    }
 
    for(writeIndex = 0;inputString[readIndex] != '\0'; readIndex++){
      if(inputString[readIndex]==' ' && inputString[readIndex-1]==' '){
          continue;
      }
      outputArray[writeIndex] = inputString[readIndex];
      writeIndex++;
    }
    outputArray[writeIndex] = '\0';
    printf("String without extra spaces\n%s", outputArray);
 
    getch();
    return 0;
}
