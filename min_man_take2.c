#include <stdio.h>
#include <stdlib.h>

int main()
{
   //so this challenge has me capturing the input of three variables and then comparing between the three so set up the base
   int numb1, numb2, numb3;

   //prompt the user
   printf("Enter the first number: ");
   scanf("%d", &numb1);

   printf("Enter the second number: ");
   scanf("%d", &numb2);

   printf("Enter the third number: ");
   scanf("%d", &numb3);


    //now to build the logic, this is when we have equality amongst most or all of the numbers

    if (numb1 == numb2 && numb2 == numb3) //done
    {
        printf("All numbers are equal\n");
    }
    else if (numb1 > numb2 && numb2 == numb3){ //done
        printf ("MAX = %d\n", numb1);
        printf ("MIN = %d and %d\n", numb2, numb3);
    }
	 else if (numb1 == numb2 && numb2 < numb3){ //done
        printf ("MAX = %d\n", numb3);
        printf ("MIN = %d and %d\n", numb1, numb2);
    }
     else if (numb1 == numb2 && numb2 < numb3){ //done
        printf ("MAX = %d\n", numb2);
        printf ("MIN = %d and %d\n", numb1, numb3);
    }
     else if (numb1 < numb2 && numb2 > numb3){ // done
        printf ("MAX = %d\n", numb2);
        printf ("MIN = %d and %d\n", numb1, numb3);
    }
/* This is the equals part between two terms, now onto the next terms with three different numbers */
    else if (numb1 < numb2 && numb2 < numb3){  //done
        printf ("MAX = %d\n", numb3);
        printf ("MIN = %d\n", numb1);
    }
      else if (numb1 > numb2 && numb2 < numb3){ //done
        printf ("MAX = %d\n", numb3);
        printf ("MIN = %d\n", numb2);
    }
      else if (numb1 < numb2 && numb2 > numb3){ //done
        printf ("MAX = %d\n", numb2);
        printf ("MIN = %d\n", numb1);
    }
      else if (numb1 > numb2 && numb2 > numb3){ //done
        printf ("MAX = %d\n", numb1);
        printf ("MIN = %d\n", numb3);
    }
    else {
        printf("Please try again!\n");
    }
}
