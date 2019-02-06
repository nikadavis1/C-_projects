CXXFLAGS = -std=c++17 -pthread
GTKFLAGS = `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`

all: executable

executable: main.o Auto_Part.o Tire.o Wheel.o Wheel_Tire_Combo.o Battery.o Windshield_Wiper.o Frame.o Engine.o Inventory.o View.o Controller.o dialog.o Window.o Order.o
	$(CXX) $(CXXFLAGS) main.o Auto_Part.o Tire.o Wheel.o Wheel_Tire_Combo.o Battery.o  Windshield_Wiper.o Frame.o Engine.o Inventory.o View.o Controller.o dialog.o Window.o Order.o $(GTKFLAGS)
	./a.out
main.o: Auto_Part.h Tire.h Wheel.h Wheel_Tire_Combo.h Battery.h Frame.h Engine.h Windshield_Wiper.h Inventory.h main.cpp dialog.h Window.h order.h
	$(CXX) $(CXXFLAGS) -c main.cpp $(GTKFLAGS)
dialog.o: dialog.h dialog.cpp
	$(CXX) $(CXXFLAGS) -c dialog.cpp $(GTKFLAGS)
Controller.o: Auto_Part.h Tire.h Wheel.h Wheel_Tire_Combo.h Battery.h Frame.h Engine.h Windshield_Wiper.h Inventory.h View.h Controller.h Controller.cpp
	$(CXX) $(CXXFLAGS) -c Controller.cpp $(GTKFLAGS)
View.o: Auto_Part.h Tire.h Wheel.h Wheel_Tire_Combo.h Battery.h Frame.h Engine.h Windshield_Wiper.h Inventory.h View.h View.cpp 
	$(CXX) $(CXXFLAGS) -c View.cpp $(GTKFLAGS)
Inventory.o: Auto_Part.h Tire.h Wheel.h Wheel_Tire_Combo.h Battery.h Frame.h Engine.h Windshield_Wiper.h Inventory.h Inventory.cpp order.h
	$(CXX) $(CXXFLAGS) -c Inventory.cpp $(GTKFLAGS)
Frame.o: Auto_Part.h Frame.h Frame.cpp
	$(CXX) $(CXXFLAGS) -c Frame.cpp $(GTKFLAGS)
Engine.o: Auto_Part.h Engine.h Engine.cpp
	$(CXX) $(CXXFLAGS) -c Engine.cpp $(GTKFLAGS)
Windshield_Wiper.o: Auto_Part.h Windshield_Wiper.h Windshield_Wiper.cpp
	$(CXX) $(CXXFLAGS) -c Windshield_Wiper.cpp $(GTKFLAGS)
Battery.o: Auto_Part.h Battery.h Battery.cpp
	$(CXX) $(CXXFLAGS) -c Battery.cpp $(GTKFLAGS)
Wheel_Tire_Combo.o: Auto_Part.h Wheel.h Tire.h Wheel_Tire_Combo.h Wheel_Tire_Combo.cpp
	$(CXX) $(CXXFLAGS) -c Wheel_Tire_Combo.cpp $(GTKFLAGS)
Wheel.o: Auto_Part.h Wheel.h Wheel.cpp
	$(CXX) $(CXXFLAGS) -c Wheel.cpp $(GTKFLAGS)
Tire.o: Auto_Part.h Tire.h Tire.cpp
	$(CXX) $(CXXFLAGS) -c Tire.cpp $(GTKFLAGS)
Window.o: Window.cpp Window.h Controller.h View.h
	$(CXX) $(CXXFLAGS) -c Window.cpp $(GTKFLAGS)
Auto_Part.o: Auto_Part.h Auto_Part.cpp
	$(CXX) $(CXXFLAGS) -c Auto_Part.cpp $(GTKFLAGS)
Order.o: order.cpp order.h
	$(CXX) $(CXXFLAGS) -c order.cpp $(GTKFLAGS)

