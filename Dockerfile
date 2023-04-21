FROM gcc:latest

WORKDIR /engine

COPY . /engine

RUN apt-get update && apt-get install -y cmake

RUN mkdir build && cmake -B ./build && cmake --build ./build

CMD ["./engine"]