# gtk-example
A template for creating UI on Linux devices using the GTK2 toolkit

# How to Compile:

First, make sure you have GCC installed

Then make sure you have all the libraries, packages and dependencies installed, if you're on Linux, this should be easy enough if you just look them up in your package manager. Then just run this line in your terminal.

gcc gtk-example.c `pkg-config --cflags gtk+-3.0` `pkg-config --libs gtk+-3.0`

