#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

int main()
{

    /*Below is the answer
    */
    //define values
        int var1, var2, var3, unit_math, u_input;
        printf("Please only a three digit number: \n");
        scanf("%d", &u_input);

    //use modulo to pull the place values for each number
    var1 = u_input % 10;
    var2 = (u_input / 10) % 10;
    var3 = u_input / 100;

    unit_math = var1 + var2 + var3;

    //print the results
    printf("The combined results of %d, are %d + %d + %d = %d", u_input, var1, var2, var3, unit_math);




////////    //define values
//       int var1, var2, var3, math_answer;
////////
////////
////////    //prompt the user for
//    printf("Please only a three digit number: \n");
//    scanf("%d", &var1);
//    scanf("%d", &var2);
//    scanf("%d", &var3);
////////
////////    //do the math
//     math_answer = var1 + var2 + var3;
////////
////////    //print the final answer
//     printf("The sum of your answer: %d, %d, %d is %i\n", var1, var2, var3, math_answer);

}

/*
* https://www.youtube.com/watch?v=lXYSW4_ojEk
*
*/

//int id;
//char message [256];
//while (1){
//    printf("Input Id: ");
//    scanf("%d", &id);
//    //add's the fgetc() to the stdin
//    fgetc(stdin);
//    printf("Input message: ");
//    //scanf("%s", &message); it's better to use fgets it reads to '\' or EOF
//    fgets(message, 256, stdin);
//    //there's a way to cut out the extra empty space at the end of the message
//    message[strleng(message) - 1] = 0;
//    printf("(%d) Sent message %s\n", id, message);
//
//}
//return 0;
//
//}
