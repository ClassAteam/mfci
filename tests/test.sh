#!/usr/bin/env sh

IUSEXEC=$1
MFCI1EXEC=$2
MFCI2EXEC=$3
MFCI3EXEC=$4

# OUTPUT=$($EXECUTABLE 1 2 3 4)


(trap 'kill 0' SIGINT; $IUSEXEC & $MFCI1EXEC & $MFCI2EXEC $MFCI3EXEC)