# Lexer and Automata

Implementations of a simple lexer, a DFA recognizer, and an NFA recognizer in programming language C.


## Compilation

**For lexer:**
1. ```flex simple_lexer.l```
2. ```gcc lex.yy.c -o lexer -lfl```
3. ```./lexer input.cpp > output/lexerOutput.txt``` 

**For DFA:**
1. ```gcc DFA.c -o dfa```
2. ```./dfa```

**For NFA:**
1. ```gcc NFA.c -o nfa```
2. ```./nfa```