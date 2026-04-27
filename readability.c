#include <cs50.h>   // string
#include <ctype.h>  //isalpha check A-Z or a to z
#include <math.h>   // round function floating point
#include <stdio.h>  // printf
#include <string.h> //strlen
int main(void)
{
    string text = get_string("Text:");
    // ask for text

    int letters = 0;
    // counter to zero to tract a-z or  A-Z
    int word = 1;
    // start by default
    int sentence = 0;
    // to instalize the counter sentence to 0 like !?
    for (int i = 0, n = strlen(text); i < n; i++)
    // int i= 0 loop i to 0
    // n= strlen(text) = computes lengeth and stores in n to avoid  of up stored value strlen each
    // literation ( different from standard c)
    // i<n continues i++ increment after i
    { // alpha is above in include ... check current character
        if (isalpha(text[i]))
        { // open only if body character is alphabetic
            letters++;
        }

        else if (text[i] == ' ')
        // check if space  and space used to count word boundaries
        {

            if (n > 0 && text[i - 1] != ' ')
            // only increment if previous character is no space
            {
                word++;
                // increment of word by 1 end of one and start of other
            }
        }
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        // check that is it is .?! which end the sentence
        {
            sentence++; // increment by 1
        }
    }

    // close for loop after all alteration
    float L = (float) letters / word * 100;
    // as l is average of letter per 100
    // (float) letters ensure to cast letters to a float to floating division
    // /word divises the number of lettter by the number of word
    // * 100 multiplies by 100 to get letter per 100 word

    float S = (float) sentence / word * 100;
    // same but for sentence

    float index = 0.0588 * L - 0.296 * S - 15.8;
    // as mention in formula in video
    int grade = (int) round(index); // as asking for grade // int is grade of type like 5= int  //
                                    // round(index)= math library where index= formula as above
    // round intex to nearest integer using math.h
    // cast it to an int to store in grade
    if (grade < 1) // like after comparing like from formula l=letter / word = 200 , s= sent/word =
                   // 100 index= 0.528*200.... =
    // (int) round = -34 grade =-34 so grade is less than 1 then print f
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade); // put from %i like Grade 5
    }
    return 0; // program sucessful
}
