pushd ~/repo/builds/mfci
cmake ~/repo/mfci_test
cmake --build .
(trap 'kill 0' SIGINT; ./bin/ius & ./bin/mfci1 & ./bin/mfci2 & ./bin/mfci3)
#./bin/ius &
#./bin/mfci1
#wait

