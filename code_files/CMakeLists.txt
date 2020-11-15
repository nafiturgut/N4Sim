cmake_minimum_required(VERSION 3.9)
project(untitled)

set(CMAKE_CXX_STANDARD 11)

add_executable(untitled main.cpp AXON.cpp AXON.h NEURON.cpp NEURON.h SOMA.cpp SOMA.h DENDRITE.cpp DENDRITE.h SYNAPSE.cpp SYNAPSE.h Event.cpp Event.h OutEvent.cpp OutEvent.h Randomizer.cpp Randomizer.h CORDINATE.cpp CORDINATE.h Network.cpp Network.h)