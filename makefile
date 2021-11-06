.SUFFIXES : .cpp

CC = g++

CXXFLAGS = -g -std=c++11

OBJS = main.o functions.o functions2.o 

TARGET = final

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

.cpp.o:
	$(CC) -c $(CXXFLAGS) $(INCDIR) $<

clean:
	rm -f $(OBJS) $(TARGET) core

