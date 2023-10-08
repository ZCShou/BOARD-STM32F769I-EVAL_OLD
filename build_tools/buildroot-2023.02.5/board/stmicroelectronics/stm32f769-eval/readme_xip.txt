STM32F769I-EVAL Evaluation Board
===================

This tutorial describes how to use the predefined Buildroot
configuration for the STM32F769I-EVAL evaluation platform.

Internal flash memory stores simple afboot-stm32 bootloader, device tree and
in place (XIP) kernel with built-in initramfs. No external flash or SD card
is needed.

Kernel is based on tinyconfig.

Building
--------

  make stm32f769_eval_xip_defconfig
  make

Flashing
--------

  ./board/stmicroelectronics/stm32f769-eval/flash_xip.sh output/

It will flash binary to internal flash memory.
