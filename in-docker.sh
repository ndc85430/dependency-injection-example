#!/bin/bash

case "$1" in
    "build") command="make";;
    "test") command="make test";;
    "clean") command="make clean";;
    *)
	echo "Usage: $0 build|test|clean"
	exit 1
	;;
esac

docker run \
       --rm \
       -v "$PWD":/usr/src/myapp \
       -w /usr/src/myapp \
       gcc:10.1.0 \
       $command
