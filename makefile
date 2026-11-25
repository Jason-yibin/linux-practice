CC := gcc

hello: hello.c
	$(CC) -Wall -g $< -o $@

.PHONY: clean
clean:
	rm -f hello