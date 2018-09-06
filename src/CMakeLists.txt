# The app_pcrf extension
PROJECT("Rx Dictionary" C)

SET(CMAKE_BUILD_TYPE MaxPerformance)

# List of source files
SET( PCRF_APP_SRC dict_rx.c )

# Compile as a module
FD_ADD_EXTENSION(dict_rx ${PCRF_APP_SRC})

#TARGET_LINK_LIBRARIES(app_rx "-L/oracle/orahome/lib -lmudflapth")

####
## INSTALL section ##

INSTALL(TARGETS dict_rx
	LIBRARY DESTINATION ${INSTALL_EXTENSIONS_SUFFIX}
	COMPONENT Rx-Dictionary)
