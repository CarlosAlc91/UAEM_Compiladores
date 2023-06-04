/* Ejemplo de analisis lexcio en lex */

%{
  #include <stdio.h>
%}

digit [0-9]
number {digit}+
letter  [a-zA-Z]
identifier {letter}+{number}+
newline \n
whitespace  [\t]+
simbolos  [@|#|&]+
conditional [if|then|else|for]+

%option noyywrap

%%

{digit} {printf("Digit found: %s\n", yytext);}
{simbolos} {printf("An scpecial character found: %s\n", yytext);}
{number} {printf("Number found: %s\n", yytext);}
{identifier} {printf("Indentifier found: %s\n", yytext);}
{conditional} {printf("Reserved word: %s\n", yytext);}
.             {}
%%

int main(void) {

  yylex();
  return 0;

}