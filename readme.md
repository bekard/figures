# Install raylib

Fedora: dnf install raylib-devel
Arch: pacman -S raylib
Debian: sudo apt install libraylib-dev

For reference: https://github.com/raysan5/raylib/wiki/Working-on-GNU-Linux

# Build app

g++ main.cpp -o figures -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
