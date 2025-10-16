flags = -Llib -Iinclude

ldaCink:
	gcc -c $(wildcard src/*.c) $(flags)
	mv *.o build/
	cp licence build/
	cp include/*.h build/
	ar rcs $(wildcard build/*o) build/libldaCink.a

.PHONY: c
c:
	rm build/licence build/*o build/*.a build/*.h build/libldaCink.a