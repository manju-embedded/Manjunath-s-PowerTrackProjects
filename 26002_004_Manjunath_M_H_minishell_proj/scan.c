#include"main.h"

void scan_input(char *prompt, char *input_string)
{
    //1.prompt
    while(1)
    {
        printf("%s ",prompt);
        scanf(" %[^\n]",input_string);
        //validate the input string is PS1 or not
        if(strncmp(input_string,"PS1=",4) == 0)
        {
            //ys, PS1 is the cmd then 
            //step1: validate space
            if(input_string[4] == ' ')
            {
                //if space is prsnt print err msg
            }
            else{
                //if space is not prsnt , chang the prompt
                strcpy(prompt,input_string+4);
            }

        }
    }
}