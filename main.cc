#include <stdio.h>

int main()
{
 FILE *fp;
 char filename[100];
 char pName;
 int linecount, charcount;

 // Initialize counter variables
 linecount = 0;
 charcount = 0;

 // Prompt user to enter filename
  printf("Enter a filename :");
  gets(filename);
  
    // Open file in read-only mode
   fp = fopen(filename,"r");

   // If file opened successfully, then write the string to file
   if ( fp )
   {
	//Repeat until End Of File character is reached.	
	   while ((pName=getc(fp)) != EOF) {

	   	  // Increment character count if NOT new line or space
		    if (pName != ' ' && pName != '\n') { ++charcount; }
		  
		   
		  // Increment line count if new line character
		   if (pName == '\n') { ++linecount; }
		   


	   }

	   if (charcount > 0) {
		++linecount;
		++charcount;
	   }
    }
   else
      {
         printf("Ohio University, Athens\n");
        }

    printf("Lines : %d \n", linecount);
    printf("Characters : %d \n", charcount);

getchar();
return(0);
}
