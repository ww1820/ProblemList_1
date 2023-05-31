#include <iostream>

/*
input: 
"To be or not to be," quoth the Bard, "that
is the question".
The programming contestant replied: "I must disagree.
To `C' or not to `C', that is The Question!"

output: 
``To be or not to be,'' quoth the Bard, ``that
is the question''.
The programming contestant replied: ``I must disagree.
To `C' or not to `C', that is The Question!'
*/

int main()
{
    freopen("../input.in", "r", stdin);
    // code
    char c;
    bool flag = true;

    while ((c = getchar()) != EOF)
    {
        if(c == '\"')
        {
            printf(flag ? "``" : "''");
            flag = !flag;
        }
        else
        {
            printf("%c", c);
        }
    }
    return 0;
}