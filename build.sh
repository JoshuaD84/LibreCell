#!/bin/sh

mkdir -p bin
g++ src/*.cpp -o bin/librecell `pkg-config --libs --cflags gtk+-2.0`
