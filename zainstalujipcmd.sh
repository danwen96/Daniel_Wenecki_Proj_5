#!/bin/bash

wget https://github.com/nathanweeks/ipcmd/archive/master.zip #pobieramy pliki do instalacji i odpakowujemy je
unzip ./master.zip
cd ipcmd-master
make #instalujemy ipcmdwedlug instrukcji z README
sudo cp ./bin/* /usr/local/sbin/
sudo cp -r ./man/* /usr/local/man/
