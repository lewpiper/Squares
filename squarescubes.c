/* Chapter 2 Example */

#include<stdio.h>

//Define file variable to point to
FILE *fp;

//Define min and max
#define MIN 1
#define MAX 30

int main(void) {
	int i;
		
		//Open file to print to
		fp = fopen("csci.txt", "w");
		
		//Setup columns and headers for both the console and in the text file it will print to
		printf("%10s %10s %10s %10s %10s\n", "Value", "Square", "Cube", "Fourth", "Fifth");
		fprintf(fp, "%10s %10s %10s %10s %10s\n", "Value", "Square", "Cube", "Fourth", "Fifth");
		printf("%10s %10s %10s %10s %10s\n", "-------", "-------", "-------", "-------", "-------");
		fprintf(fp, "%10s %10s %10s %10s %10s\n", "-------", "-------", "-------", "-------", "-------");
		
		
		//Loop through function printing vales for every number to both the conole and the text file
		for (i = MIN; i <= MAX; ++i) {
			printf("%10d %10d %10d %10d %10d\n", i, i * i, i * i * i, i * i * i * i, i * i * i * i * i);
			fprintf(fp,"%10d %10d %10d %10d %10d\n", i, i * i, i * i * i, i * i * i * i, i * i * i * i * i);
		}
		
		//Close the file and exit the program
		fclose(fp);
		return 0;
}