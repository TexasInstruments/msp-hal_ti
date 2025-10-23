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
  zephyr_library_sources_ifdef(CONFIG_USE_MSP_DL_TIMER source/ti/driverlib/dl_timer.c)
  zephyr_library_sources_ifdef(CONFIG_USE_MSP_DL_TIMER source/ti/driverlib/dl_timera.c)
  zephyr_library_sources_ifdef(CONFIG_USE_MSP_DL_TIMER source/ti/driverlib/dl_timerg.c)

  
  #m33 specific drivers
  zephyr_library_sources_ifdef(CONFIG_USE_MSPM33_DL_HSADC source/ti/driverlib/dl_hsadc.c)

endif()
