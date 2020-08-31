all: myapp

# Which compiler
CC = gcc

# Where to install
INSTDIR = $(PWD)/installedHere

# Where are include files kept
INCLUDE = .

# Local Libraries
MYLIB = mylib.a

myapp: main.o $(MYLIB)
	$(CC) -o myapp main.o $(MYLIB)
$(MYLIB): $(MYLIB)(file2.o) $(MYLIB)(file3.o)
main.o: main.c headers/headerFile1.h
file2.o: file2.c headers/headerFile1.h headers/headerFile2.h
file3.o: file3.c headers/headerFile2.h headers/headerFile3.h
clean:
	-rm main.o file2.o file3.o $(MYLIB)
install: myapp
	@if [ -d $(INSTDIR) ]; \
		then \
		cp myapp $(INSTDIR);\
		chmod a+x $(INSTDIR)/myapp;\
		chmod og-w $(INSTDIR)/myapp;\
		rm main.o file2.o file3.o $(MYLIB) myapp;\
		echo “Installed in $(INSTDIR)“;\
	else \
		echo “Sorry, $(INSTDIR) does not exist”;\
	fi