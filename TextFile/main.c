#include <stdio.h>
#include <stdlib.h>

int main()
{

  char nameFIle[100];// name of file to be named
  char filePath[200];//store the file path of the file

  scanf("%[^\t\n]s", nameFIle);


  FILE *fp;

    sprintf(filePath, "C:\\Users\\Gary Lloyd Senoc\\Desktop\\Student\\%s.txt", nameFIle);

    fp = fopen(filePath,"w");
    fprintf(fp,"Hello World");

    fclose(fp);


   return 0;
}
