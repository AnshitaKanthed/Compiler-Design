%{
#include <stdio.h>
int add = 0, sub = 0, prod = 0, divi = 0, other = 0;
%}

%%
auto|break|case|char|const|continue|default|do|double|else|enum|extern|float|for|goto|if|int|long|register|return|short|signed|sizeof|static|struct|switch|typedef|union|unsigned|void|volatile|while {
    printf("\n%s is a Keyword", yytext);
}

[0-9]+ {
    printf("\n%s is a Constant", yytext);
}

[a-zA-Z]+ {
    printf("\n%s is an Identifier", yytext);
}

[(){}();,.=*&^%$#@!'":|\/?><] {
    other++;
}

%%

int main(void) {
    yylex();
    return 0;
}

int yywrap() {
    return 1;
}
