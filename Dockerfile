FROM ubuntu:latest
RUN apt-get -y update && apt-get install -y
RUN apt-get -y install clang make

COPY . /usr/src/hello
WORKDIR /usr/src/hello

RUN make
CMD ["./bin/hello Fabien"]