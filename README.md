# Projet_Animation_LBS
This project is a quick and naive implementation of *Linear Blending Skinning* (LSB) with CPU and GPU.

The script is running under Linux OS.
## Running project
For running this project, you must authorized the script launching with:
`chmod 755 run.sh`

AFter this, launch the script with:
`./run.sh`

### Troubleshooting
In case of compilation error, run to the root: `git submodule update --init --recursive`

## Commands
|Commands|Actions|
|---|:---:|
|Up arrow|clockwise parent bone rotation|
|Down arrow|anticlockwise parent bone rotation|
|Right arrow|clockwise child bone rotation|
|Left arrow|anticlockwise child bone rotation|
|G|toggle GPU/CPU rendering (indication in terminal)|
|F5|shader reloading (base command)|
