demo: obj
	gcc *.o -o bin/demo
obj: demo.c lib/
	gcc -c demo.c lib/*.c
test:
	./bin/demo
clean: 
	rm *.o bin/demo
