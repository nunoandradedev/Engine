### How to run this project


## Prerequisites
- CMake installed
- Empty "build" folder created in the root directory of the project (not mandatory as CMake creates the directory if it doesn't exist)

## Generate build files and build the project

- Open command prompt (or terminal) in the root directory of the project
- Run the commands: 
```console
cmake -B ./build
cmake --build ./build
```

## Run the project

- The binaries to run the project are located in the build folder


## Build a docker image of the repo

- Note: Before building a docker image of this dockerfile, the build folder must be deleted.

- Open command prompt (or terminal) in the root directory of the project
- Make sure docker is installed by running:
```console
docker --version
```
- Run the command: 
```console
docker build -t engine .
```

## Next features

- Build with Docker (Done)

