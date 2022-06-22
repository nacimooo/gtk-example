#include <stdlib.h>
#include <stdio.h>

// include the gtk header file
#include <gtk/gtk.h>



// gcc gtk-example.c `pkg-config --cflags gtk+-3.0` `pkg-config --libs gtk+-3.0`
//		      ^ this a pkg-config call to    |^ this is a pkg call to find the gtk+-3
//		        find the cflags for gtk+-3.0 |  library itself

int main(int argc, char **argv) {
    GtkWidget *window, *grid;
    // initialize the elements of the window as GtkWidget types
    
    gtk_init(&argc, &argv);
    // It can be used to initlize the window with specific stuff

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    // makes a window at the top level
    
    gtk_window_set_default_size(GTK_WINDOW(window), 230, 150);
    // set the window resolution to 230 x 150
    
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    // make it so that the porgram stops when it is closed


    grid = gtk_grid_new();
    // make a new element of the window
    
    gtk_container_add(GTK_CONTAINER(window), grid);
    // add the elements of the window to the window itself
    
    static GtkWidget *entry1;
    // creating the new element to the window

    entry1 = gtk_label_new("Hello World");
    // making the element say something by using the gtk_label_new() function
    
    static GtkWidget *button;
    // create a button element
    
    button = gtk_button_new_with_label("compute");
    // make a button
    
    gtk_grid_attach(GTK_GRID(grid), entry1, 1, 0, 1, 1);
    // putting the grid element in the grid at a specific coordinate (this is useful if you have multile elements)

    gtk_grid_attach(GTK_GRID(grid), button, 0,1,2,1);
    // 

    gtk_widget_show_all(window);
    // show the window
    
    gtk_main();
    // call to gtk mai()

    return 0;
}
