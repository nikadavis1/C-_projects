#include "Window.h"

Window::Window() 
{
	set_default_size(400, 200);
	
	Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    add(*vbox);
	
	Gtk::MenuBar *menubar = Gtk::manage(new Gtk::MenuBar());
    vbox->pack_start(*menubar, Gtk::PACK_SHRINK, 0);
	
	Gtk::MenuItem *menuitem_file = Gtk::manage(new Gtk::MenuItem("_File", true));
    menubar->append(*menuitem_file);
    Gtk::Menu *filemenu = Gtk::manage(new Gtk::Menu());
    menuitem_file->set_submenu(*filemenu);

	Gtk::MenuItem *menuitem_load = Gtk::manage(new Gtk::MenuItem("_load", true));
    menuitem_load->signal_activate().connect(sigc::mem_fun(*this, &Window::on_load_click));
	filemenu->append(*menuitem_load);
	
	Gtk::MenuItem *menuitem_save = Gtk::manage(new Gtk::MenuItem("_save", true));
    menuitem_save->signal_activate().connect(sigc::mem_fun(*this, &Window::on_save_click));
	filemenu->append(*menuitem_save);
	
	Gtk::MenuItem *menuitem_exit = Gtk::manage(new Gtk::MenuItem("_exit", true));
    menuitem_exit->signal_activate().connect(sigc::mem_fun(*this, &Window::on_exit_click));
	filemenu->append(*menuitem_exit);
	
	Gtk::MenuItem *menuitem_sp = Gtk::manage(new Gtk::MenuItem("_show parts", true));
    menuitem_sp->signal_activate().connect(sigc::mem_fun(*this, &Window::on_show_click));
	filemenu->append(*menuitem_sp);
	
	
	Gtk::MenuItem *menuitem_parts = Gtk::manage(new Gtk::MenuItem("_Parts", true));
    menubar->append(*menuitem_parts);
    Gtk::Menu *partsmenu = Gtk::manage(new Gtk::Menu());
    menuitem_parts->set_submenu(*partsmenu);
	
	Gtk::MenuItem *menuitem_addp = Gtk::manage(new Gtk::MenuItem("_add parts", true));
    menuitem_addp->signal_activate().connect(sigc::mem_fun(*this, &Window::on_add_click));
	partsmenu->append(*menuitem_addp);
	
	Gtk::MenuItem *menuitem_removep = Gtk::manage(new Gtk::MenuItem("_remove parts", true));
    menuitem_removep->signal_activate().connect(sigc::mem_fun(*this, &Window::on_remove_click));
	partsmenu->append(*menuitem_removep);
	
	
	Gtk::MenuItem *menuitem_order = Gtk::manage(new Gtk::MenuItem("_Order", true));
    menubar->append(*menuitem_order);
    Gtk::Menu *ordermenu = Gtk::manage(new Gtk::Menu());
    menuitem_order->set_submenu(*ordermenu);
	
	Gtk::MenuItem *menuitem_order_one = Gtk::manage(new Gtk::MenuItem("_Make one Order", true));
    menuitem_order_one->signal_activate().connect(sigc::mem_fun(*this, &Window::on_order_click));
	ordermenu->append(*menuitem_order_one);
	
	Gtk::MenuItem *menuitem_order_two = Gtk::manage(new Gtk::MenuItem("_order multiple parts", true));
    menuitem_order_two->signal_activate().connect(sigc::mem_fun(*this, &Window::on_order2_click));
    ordermenu->append(*menuitem_order_two);

	vbox->show_all();
	
}


void Window::on_load_click()
{
	View view(inventory);
	Controller con(inventory,view);
	con.load_file();
}

void Window::on_save_click()
{
	View view(inventory);
	Controller con(inventory,view);
	con.save_file();
}

void Window::on_exit_click()
{
	View view(inventory);
	Controller con(inventory,view);
	view.exit_prompt();
	exit(0);
	
}

void Window::on_show_click()
{
	View view(inventory);
	Controller con(inventory,view);
	view.view_all_inventory();
}

void Window::on_remove_click()
{
	View view(inventory);
	Controller con(inventory,view);
	con.remove_part();
}

void Window::on_add_click()
{
	View view(inventory);
	Controller con(inventory,view);
	con.add_part();
}

void Window::on_order_click()
{
	View view(inventory);
	Controller con(inventory,view);
	con.order();
}

void Window::on_order2_click()
{
	View view(inventory);
	Controller con(inventory,view);
	con.order2();
}

Window::~Window()
{
}