#!/bin/bash

if [ `uname` = "Linux" ] ; then
  if [ -f /etc/debian_version ] ; then
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
  fi
fi