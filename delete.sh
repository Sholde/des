#!/bin/bash

if [ `uname` = "Linux" ] && [ -f /etc/debian_version ] ; then
  if [ -f /usr/lib/libsdes.so ] && [ -f /usr/include/sdes.h ] ; then
    # Delete library
    sudo rm /usr/lib/libsdes.so
    sudo rm /usr/include/sdes.h
  else
    echo "Files don't exist"
    echo "Make sure you have already install library"
  fi
else
  echo "Be sure to use Debian system"
fi