#!/bin/bash

dzien=$(date +%u)

#warunek w if bedzie spelniony tylko podczas weekendu

if [ $dzien -ge 5 ] ; then
id=$(ipcmd msgget -Q 00001 -e) # otwieramy kolejke
ipcmd msgrcv -q $id  #odbieramy wiadomosc do standardowego wyjscia
else
echo "Nie ma weekendu, nie mozesz odebrac wiadomosci"
fi
