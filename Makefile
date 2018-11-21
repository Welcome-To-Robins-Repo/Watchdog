FLAGS = 	`pkg-config --cflags gtk+-3.0`
LIBS = 		`pkg-config --libs gtk+-3.0`
OBJS = 		shi.o window.o func.o
OUT = 		shi

default: shi

shi: $(OBJS)
	g++ -o$(OUT) $(OBJS) $(FLAGS) $(LIBS)

shi.o: shi.cpp shi.h
	g++ -c $*.cpp $(FLAGS) $(LIBS) -g3

window.o: window.cpp shi.h
	g++ -c $*.cpp $(FLAGS) $(LIBS) -g3

func.o: func.cpp shi.h
	g++ -c $*.cpp $(FLAGS) $(LIBS) -g3

clean:
	rm -f $(OBJS) $(OUT)

install: shi

	mkdir ~/.local/share/shi
	mv shi /usr/local/bin
