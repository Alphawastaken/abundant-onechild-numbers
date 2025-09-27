
#include <stdio.h>
#define max 10000000

int main()
{
    int n, j, i;            //General variables
    int count, digits;      //Variables for digits
    int subseq, pow10;      //Variables for subsequence
    int oc, countchild;     //Variables for childs and only childs
    int diair, z,countA;    //Variables for abundant
    int  both;              //Variable for both classes 

    countA = 0;
    countchild = 0;
    both = 0;

    for (n = 0; n <= max; n++) //Finding the digits of a number
    {
        digits = 0; //Created a counter variable so my programm can count the digits of a number
        count = n;  //Created a new variable called  count and giving it the price of the n variable

        while (count != 0)
        {
            digits++;
            count /= 10;
        }

        pow10 = 1;
        oc = 0;

        for (j = 1; j <= digits; j++) //Finding the subsequence
        {
            pow10 *= 10;
            count = n;
            for (i = 1; i <= digits - j + 1; i++)
            {

                subseq = count % pow10;

                if (subseq % digits == 0)
                {

                    oc++;
                }
                count /= 10;
            }
        }

        if (oc == 1) //Checking if number has only one child
        {

            countchild += 1; //counting the child
        }

        diair = 0;
        for (z = 2; z * z < n; z++)  //Finding the divisors
        {
            if ((n % z) == 0)
            {
                if (diair>n){
                    break;
                }        
                diair += z + n / z;
            }
        }

        if (z * z == n)
        {
            diair += z; 
        }

        if (diair > n)     //Seeing if number is abundant 
        {
            countA++;     //counting it
            if (oc == 1) //Also checking if number has only one child to see if it's both abundant and onlychild
            {
                printf("%d  ", n);
                both++;  //Counting it
            }
        }
    }
    printf("\n");
    printf("Found %d one-child numbers\n", countchild);
    printf("Found %d abundant numbers\n", countA);
    printf("Found %d numbers in both classes\n", both);
}
