CXXFLAGS = -std=c++17 -pthread
GTKFLAGS = `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`

all: executable

executable: nld2896_main.o nld2896_Auto_Part.o nld2896_Tire.o nld2896_Wheel.o nld2896_Wheel_Tire_Combo.o nld2896_Battery.o nld2896_Windshield_Wiper.o nld2896_Frame.o nld2896_Engine.o nld2896_Inventory.o nld2896_View.o nld2896_Controller.o nld2896_dialog.o nld2896_Window.o Order.o nld2896_Seat.o nld2896_Dashboard.o nld2896_Steering_wheel.o nld2896_Door.o
	$(CXX) $(CXXFLAGS) nld2896_main.o nld2896_Auto_Part.o nld2896_Tire.o nld2896_Wheel.o nld2896_Wheel_Tire_Combo.o nld2896_Battery.o  nld2896_Windshield_Wiper.o nld2896_Frame.o nld2896_Engine.o nld2896_Inventory.o nld2896_View.o nld2896_Controller.o nld2896_dialog.o nld2896_Window.o Order.o nld2896_Seat.o nld2896_Dashboard.o nld2896_Steering_wheel.o nld2896_Door.o $(GTKFLAGS)
	./a.out
nld2896_main.o: nld2896_Auto_Part.h nld2896_Tire.h nld2896_Wheel.h nld2896_Wheel_Tire_Combo.h nld2896_Battery.h nld2896_Frame.h nld2896_Engine.h nld2896_Windshield_Wiper.h nld2896_Inventory.h nld2896_main.cpp nld2896_dialog.h nld2896_Window.h nld2896_order.h nld2896_Seat.h nld2896_Dashboard.h nld2896_Steering_wheel.h nld2896_Door.h
	$(CXX) $(CXXFLAGS) -c nld2896_main.cpp $(GTKFLAGS)
nld2896_dialog.o: nld2896_dialog.h nld2896_dialog.cpp
	$(CXX) $(CXXFLAGS) -c nld2896_dialog.cpp $(GTKFLAGS)
nld2896_Controller.o: nld2896_Auto_Part.h nld2896_Tire.h nld2896_Wheel.h nld2896_Wheel_Tire_Combo.h nld2896_Battery.h nld2896_Frame.h nld2896_Engine.h nld2896_Windshield_Wiper.h nld2896_Inventory.h nld2896_View.h nld2896_Controller.h nld2896_Controller.cpp nld2896_Seat.h nld2896_Door.h nld2896_Dashboard.h nld2896_Steering_wheel.h
	$(CXX) $(CXXFLAGS) -c nld2896_Controller.cpp $(GTKFLAGS)
nld2896_View.o: nld2896_Auto_Part.h nld2896_Tire.h nld2896_Wheel.h nld2896_Wheel_Tire_Combo.h nld2896_Battery.h nld2896_Frame.h nld2896_Engine.h nld2896_Windshield_Wiper.h nld2896_Inventory.h nld2896_View.h nld2896_View.cpp nld2896_Seat.h nld2896_Door.h nld2896_Dashboard.h nld2896_Steering_wheel.h
	$(CXX) $(CXXFLAGS) -c nld2896_View.cpp $(GTKFLAGS)
nld2896_Inventory.o: nld2896_Auto_Part.h nld2896_Tire.h nld2896_Wheel.h nld2896_Wheel_Tire_Combo.h nld2896_Battery.h nld2896_Frame.h nld2896_Engine.h nld2896_Windshield_Wiper.h nld2896_Inventory.h nld2896_Inventory.cpp nld2896_order.h nld2896_Seat.h nld2896_Door.h nld2896_Dashboard.h nld2896_Steering_wheel.h	
	$(CXX) $(CXXFLAGS) -c nld2896_Inventory.cpp $(GTKFLAGS)
nld2896_Frame.o: nld2896_Auto_Part.h nld2896_Frame.h nld2896_Frame.cpp
	$(CXX) $(CXXFLAGS) -c nld2896_Frame.cpp $(GTKFLAGS)
nld2896_Engine.o: nld2896_Auto_Part.h nld2896_Engine.h nld2896_Engine.cpp
	$(CXX) $(CXXFLAGS) -c nld2896_Engine.cpp $(GTKFLAGS)
nld2896_Windshield_Wiper.o: nld2896_Auto_Part.h nld2896_Windshield_Wiper.h nld2896_Windshield_Wiper.cpp
	$(CXX) $(CXXFLAGS) -c nld2896_Windshield_Wiper.cpp $(GTKFLAGS)
nld2896_Battery.o: nld2896_Auto_Part.h nld2896_Battery.h nld2896_Battery.cpp
	$(CXX) $(CXXFLAGS) -c nld2896_Battery.cpp $(GTKFLAGS)
nld2896_Wheel_Tire_Combo.o: nld2896_Auto_Part.h nld2896_Wheel.h nld2896_Tire.h nld2896_Wheel_Tire_Combo.h nld2896_Wheel_Tire_Combo.cpp
	$(CXX) $(CXXFLAGS) -c nld2896_Wheel_Tire_Combo.cpp $(GTKFLAGS)
nld2896_Wheel.o: nld2896_Auto_Part.h nld2896_Wheel.h nld2896_Wheel.cpp
	$(CXX) $(CXXFLAGS) -c nld2896_Wheel.cpp $(GTKFLAGS)
nld2896_Tire.o: nld2896_Auto_Part.h nld2896_Tire.h nld2896_Tire.cpp
	$(CXX) $(CXXFLAGS) -c nld2896_Tire.cpp $(GTKFLAGS)
nld2896_Window.o: nld2896_Window.cpp nld2896_Window.h nld2896_Controller.h nld2896_View.h
	$(CXX) $(CXXFLAGS) -c nld2896_Window.cpp $(GTKFLAGS)
nld2896_Auto_Part.o: nld2896_Auto_Part.h nld2896_Auto_Part.cpp
	$(CXX) $(CXXFLAGS) -c nld2896_Auto_Part.cpp $(GTKFLAGS)
nld2896_Order.o: nld2896_order.cpp nld2896_order.h
	$(CXX) $(CXXFLAGS) -c nld2896_order.cpp $(GTKFLAGS)
nld2896_Seat.o: nld2896_Auto_Part.h nld2896_Seat.h nld2896_Seat.cpp
	$(CXX) $(CXXFLAGS) -c nld2896_Seat.cpp $(GTKFLAGS)
nld2896_Dashboard.o: nld2896_Auto_Part.h nld2896_Dashboard.h nld2896_Dashboard.cpp
	$(CXX) $(CXXFLAGS) -c nld2896_Dashboard.cpp $(GTKFLAGS)
nld2896_Steering_wheel.o: nld2896_Auto_Part.h nld2896_Steering_wheel.h nld2896_Steering_wheel.cpp
	$(CXX) $(CXXFLAGS) -c nld2896_Steering_wheel.cpp $(GTKFLAGS)
nld2896_Door.o: nld2896_Auto_Part.h nld2896_Door.h nld2896_Door.cpp
	$(CXX) $(CXXFLAGS) -c nld2896_Door.cpp $(GTKFLAGS)

