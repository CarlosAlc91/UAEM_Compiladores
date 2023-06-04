/*** Definition Section has one variable
which can be accessed inside yylex()
and main()***/

%{
int count = 0;
%}
/*** Rule Section has three rules, first rule 
matches with capital letters, second rule
matches with any character except new line and
third rule does not take input after the enter ***/

%%
[A-Z] {printf("%s Capital letter\n", yytext);
       count++;}
.      {printf("%s not a capital letter\n", yytext);}
\n	{return 0;}
%%

/*** Code Section prints the number of 
capital letters present in the given input ***/

int yywrap(){}
int main(){
	//explanation:
	//yywrap()-wraps the above rule Section
	/*yyin takes the the file pointer
					which contains the input*/
	/*yylex()- this is the main flex function
					which runs the rule section*/
	//yytext is the text in the buffer

	//uncommen6t the lines below
	//to take input from file
	//FILE*fp
	//char filename[50];
	//printf("Enter the file name:\n");
	//scanf("%S", filename);
	//fp = fopen(filename, "r");
	//yyin = fp;

	yylex();
	printf("\nNumber of Capital letters" 
					"in the given input - %d\n", count);

	return 0;

}