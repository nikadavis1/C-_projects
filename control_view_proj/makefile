CXXFLAGS = -std=c++17

all: executable

executable: nld2896_main.o nld2896_Auto_Part.o nld2896_Inventory.o nld2896_view.o Controller.o
	$(CXX) $(CXXFLAGS) nld2896_main.o nld2896_Auto_Part.o nld2896_Inventory.o nld2896_view.o Controller.o
	./a.out
main.o: nld2896_Auto_Part.h nld2896_main.cpp nld2896_Inventory.h controller.h view.h
	$(CXX) $(CXXFLAGS) -c nld2896_main.cpp
Controller.o: nld2896_Auto_Part.h nld2896_Inventory.h view.h nld2896_controller.h controller.cpp
	$(CXX)	$(CXXFLAGS) -c	controller.cpp
View.o: nld2896_Inventory.h nld2896_Auto_Part.h view.h nld2896_view.cpp
	$(CXX)	$(CXXFLAGS) -c	nld2896_view.cpp
Auto_Part.o: nld2896_Auto_Part.h nld2896_Auto_Part.cpp
	$(CXX) $(CXXFLAGS) -c nld2896_Auto_Part.cpp
Inventory.o: nld2896_Inventory.h nld2896_Auto_Part.h nld2896_Inventory.cpp
	$(CXX) $(CXXFLAGS) -c nld2896_Inventory.cpp
clean:
	rm -f *.o a.out