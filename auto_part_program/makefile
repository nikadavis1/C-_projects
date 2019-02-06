CXXFLAGS = -std=c++17

all: executable

executable: nld2896_main.o nld2896_Auto_Part.o
	$(CXX) $(CXXFLAGS) nld2896_main.o nld2896_Auto_Part.o
	./a.out
nld2896_main.o: nld2896_main.cpp nld2896_Auto_Part.h
	$(CXX) $(CXXFLAGS) -c nld2896_main.cpp
nld2896_Auto_Part.o: nld2896_Auto_Part.h nld2896_Auto_Part.cpp
	$(CXX) $(CXXFLAGS) -c nld2896_Auto_Part.cpp
clean:
	rm -f*.o a.out