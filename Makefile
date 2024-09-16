bin/termus: src/main.c
	mkdir -p bin
	cc -o bin/termus src/main.c -lcurses -lpthread -ldl -lm

play:
	bin/termus

clean:
	rm -r bin/
