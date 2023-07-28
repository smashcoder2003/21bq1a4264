#!/bin/bash

build() {
  if docker images | grep -q "my_engine"; then
    docker rm my_engine
  fi
  docker build -t my_engine -f "./builder/Dockerfile" . --no-cache
}

start() {
  if docker ps -a | grep -aq "my_engine"; then
    docker start  my_engine
  else
    docker run -d --name my_engine -p 2000:2000 my_engine
  fi
}

stop() {
  if docker ps -a | grep -aq "my_engine"; then
    docker stop my_engine
  fi
}

help() {
  printf "Usage: ./my_engine \n<start> -to start the engine\
      <build> - to build the engine\n \
      <help> - to display list of commands"
      echo
}

for arg in "$@"; do
  case "$arg" in
  "start")
    start
    ;;
  "build")
    build
    ;;
  "stop")
    stop
    ;;
  "help")
    help
    ;;
  *)
    printf "Usage: ./my_engine \n<start> -to start the engine\
    <build> - to build the engine\n \
    <help> - to display list of commands"
    echo
    ;;
  esac
done
