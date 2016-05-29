#!/bin/bash

zmienna=$(ipcmd msgget -Q 00001 -e) #otwieramy kolejke
echo "Podaj wyraz do wyslania"
read a
ipcmd msgsnd -q $zmienna -n $a #wysylamy wprowadzony przez nas tekst
