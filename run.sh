#!/bin/bash
clear
cd build
cmake ..
make -j4
cd ../Bundle-GNU/Debug/bin/
./main-app
