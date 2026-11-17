#include"main.h"
char prompt[30] = "minishell$";
int main(int argc, char *argv)
{
    system("clear");
    char input_string[40];
    scan_input(prompt,input_string);
}