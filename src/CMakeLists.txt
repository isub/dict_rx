# The dict_rx extension
PROJECT("Rx Dictionary" CXX)

#SET(CMAKE_BUILD_TYPE DebugValgrind)
SET(CMAKE_CXX_FLAGS "--std=c++0x -g -Wall -Wextra")

# List of source files
SET( RX_DICT_SRC
	dict_rx.c
)

# Compile as a module
FD_ADD_EXTENSION(dict_rx ${RX_DICT_SRC})

####
## INSTALL section ##

INSTALL(TARGETS dict_rx
	LIBRARY DESTINATION ${INSTALL_EXTENSIONS_SUFFIX}
	COMPONENT Rx-Dictionary)
