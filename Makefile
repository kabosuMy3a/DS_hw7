CXX = g++
CXXFLAGS = -ggdb -Wall
TARGETS = hw7
TARGETS2 = 
OBJS =	BinarySearchTree.o default.h hw7.cpp
OBJS2 = 


all : $(TARGETS) $(TARGETS2)

$(TARGETS) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o : %.cpp %.h
	$(CXX) -c $(CXXFLAGS) $(OPTION) $< -o $@


$(TARGETS2) : $(OBJS2)
	$(CXX) -o $@ $^
	




clean :
	rm *.o hw7

