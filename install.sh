#!/bin/bash

if [ `uname` = "Linux" ] && [ -f /etc/debian_version ] ; then
  if [ -f libsdes.so ] ; then
    # Move our lib
    sudo cp libsdes.so /usr/lib
    sudo chmod 0755 /usr/lib/libsdes.so
    cd src/
    sudo cp sdes.h /usr/include
    sudo chmod 0666 /usr/include/sdes.h
    cd ..

    # Update cache
    #ldconfig

    # Clear our LD_LIBRARY_PATH
    unset LD_LIBRARY_PATH
  else
    echo "Make sure you have compiled"
  fi
else
  echo "Make sure to use Debian system !"
fi