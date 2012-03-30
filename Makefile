all: xml
xml:main.c
	gcc main.c -o xml -I/usr/include/libxml2 -lxml2
clean:
	rm xml
