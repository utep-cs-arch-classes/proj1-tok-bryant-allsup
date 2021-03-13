CFLAGS =-g 

all:test

test: ui.c tokenizer.h history.h
	cc -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o *~ test

run: test
	./test
