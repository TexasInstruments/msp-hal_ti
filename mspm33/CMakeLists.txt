add_subdirectory(source/ti/devices/msp)

if(CONFIG_HAS_MSPM33_SDK)
  zephyr_include_directories(
	.
	source
	source/ti
	source/ti/driverlib
	source/ti/driverlib/m33
	source/ti/driverlib/m33/sysctl
	)

  file(GLOB sysctl source/ti/driverlib/m33/sysctl/*.c)

  zephyr_library()
  zephyr_library_compile_definitions(${COMPILER})
  zephyr_library_sources(${sysctl})
  zephyr_library_sources(source/ti/driverlib/dl_common.c)

  #drivers common for m0 and m33
  zephyr_library_sources_ifdef(CONFIG_USE_MSP_DL_GPIO source/ti/driverlib/dl_gpio.c)
  
  #m33 specific drivers

endif()
