#include <gtkmm.h>
#include "Controller.h"

class Window : public Gtk::Window {
    public:
        Window();
        virtual ~Window();
		void on_load_click();
		void on_save_click();
		void on_exit_click();
		void on_show_click();
		void on_add_click();
		void on_remove_click();
		void on_order_click();
		void on_order2_click();
		
	private:	
			Inventory inventory;
		
};
