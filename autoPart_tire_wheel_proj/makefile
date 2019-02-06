CXXFLAGS = -std=c++17

all: executable

executable: nld2896_main.o nld2896_Auto_Part.o nld2896_Tire.o nld2896_Battery.o nld2896_Wheel.o nld2896_Windshield_Wiper.o nld2896_Wheel_Tire_Combo.o
	$(CXX) $(CXXFLAGS) nld2896_main2.o nld2896_Auto_Part.o nld2896_Tire.o nld2896_Battery.o nld2896_Wheel.o nld2896_Windshield_Wiper.o nld2896_Wheel_Tire_Combo.o
	./a.out
main.o: nld2896_Auto_Part.h nld2896_main.cpp Tire.h Battery.h Wheel.h Windshield_Wiper.h Wheel_Tire_Combo.h
	$(CXX) $(CXXFLAGS) -c nld2896_main.cpp
Tire.o: nld2896_Auto_Part.h Tire.h nld2896_tire.cpp
	$(CXX)	$(CXXFLAGS) -c	nld2896_Tire.cpp
Auto_Part.o: nld2896_Auto_Part.h nld2896_Auto_Part.cpp
	$(CXX) $(CXXFLAGS) -c nld2896_Auto_Part.cpp
Battery.o: nld2896_Auto_Part.h Battery.h nld2896_Battery.cpp
	$(CXX) $(CXXFLAGS) -c nld2896_Battery.cpp
Wheel.o: nld2896_Auto_Part.h Wheel.h nld2896_Wheel.cpp
	$(CXX) $(CXXFLAGS) -c nld2896_Wheel.cpp
Windshield.o: nld2896_Auto_Part.h Windshield_Wiper.h nld2896_Windshield_Wiper.cpp
	$(CXX) $(CXXFLAGS) -c nld2896_Windshield_Wiper.cpp
Wheel_Tire_Combo.o: nld2896_Auto_Part.h nld2896_Wheel_Tire_Combo.cpp Wheel_Tire_Combo.h
	$(CXX) $(CXXFLAGS) -c nld2896_Wheel_Tire_Combo.cpp
clean:
	rm -f *.o a.out