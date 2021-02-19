# Copyright: (C) 2020 Reverb Robotics Inc.
# Authors: Lukas Grasse <lukas@reverbrobotics.ca>
#
# Based on source code from https://github.com/TataLab/iCubAudioAttention
# Copyright (C) 2019 Department of Neuroscience - University of Lethbridge

# CopyPolicy: Released under the terms of the GNU GPL v2.0.

set(appname rero)

file(GLOB conf    ${CMAKE_CURRENT_SOURCE_DIR}/conf/*.ini         ${CMAKE_CURRENT_SOURCE_DIR}/conf/*.xml)
file(GLOB scripts ${CMAKE_CURRENT_SOURCE_DIR}/scripts/*.template ${CMAKE_CURRENT_SOURCE_DIR}/scripts/*.sh )

yarp_install(FILES ${conf}    DESTINATION ${ICUBCONTRIB_CONTEXTS_INSTALL_DIR}/${appname})
yarp_install(FILES ${scripts} DESTINATION ${ICUBCONTRIB_APPLICATIONS_TEMPLATES_INSTALL_DIR})
