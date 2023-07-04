/*

 */
#define MIN_YEAR 2012
#define MAX_YEAR 2022

#include <stdio.h>

const char* getMonths(int month);

int main(int argc, char **argv)
{
	 const char JAN =1, DEC = 12;
	 int year;
	 int month;
	 int flag = 1;
	
	puts("General Well-being Log");
	puts("======================");
	
	
	while(flag == 1){
	printf("Set the year and month for the well-being log (YYYY MM): ");
	scanf("%d %d",&year,&month);
		
		if((year < MIN_YEAR) || (year > MAX_YEAR)){
			puts("ERROR: The year must be between 2012 and 2022 inclusive.");
			if((month < JAN) || (month > DEC)){
			puts("ERROR: JAN.(1) - DEC.(12)");
			}
		}
		else if((month < JAN) || (month > DEC)){
			puts("ERROR: JAN.(1) - DEC.(12)");
		}
		else{
		flag = 0;
		}
	}
	printf("\n");
	puts("*** Log date set! ***");
	printf("\n");
	printf("Log starting date: %d - %s -",year, getMonths(month));
	
	
	return 0;
}

const char* getMonths(int month){
	switch(month){
		case 1: return "JAN";
		case 2: return "FEB";
		case 3: return "MAR";
		case 4: return "APR";
		case 5: return "MAY";
		case 6: return "JUN";
		case 7: return "JLY";
		case 8: return "AUG";
		case 9: return "SEP";
		case 10: return "OCT";
		case 11: return "NOV";
		case 12: return "DEC";
		default: return "";

	}
}
