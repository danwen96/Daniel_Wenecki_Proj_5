#!/bin/bash

read a
ilosc=$(echo $a | aspell -l pl -a | wc -m)

#sprawdzamy ile liter zwrocil aspell, w celu okreslenia czy uznal podane slowo za slownikowe

if [ $ilosc -eq 80 ] ; then
echo "Otrzymany kommunikat: $a ,jest wyrazem slownikowym w jezyku polskim"
else
echo "Otrzymany komunikat: $a ,nie jest wyrazem slownikowym w jezyku polskim"
fi

