all		:	myml

src/y.tab.h src/y.tab.c :	src/myml.y
			bison -y -o $@ -d -v  src/myml.y
lex.yy.c	:	src/myml.l src/y.tab.h
			flex src/myml.l 
myml		:	src/lex.yy.c src/y.tab.c src/Table_des_symboles.c src/Table_des_chaines.c src/Attribut.c
			gcc -o myml $^
clean		:	
			rm -f 	src/lex.yy.c *.o src/y.tab.h src/y.tab.c myml *~ y.output
