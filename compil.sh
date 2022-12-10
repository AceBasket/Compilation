#!/bin/bash
make
if [ $# -lt 1 ]; then 
    echo "Saisir un chemin vers le fichier à test"
fi
./myml $1