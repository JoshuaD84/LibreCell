#!/bin/sh

mkdir -p bin
gcc src/main.c -o bin/librecell `pkg-config --libs --cflags gtk+-2.0`
