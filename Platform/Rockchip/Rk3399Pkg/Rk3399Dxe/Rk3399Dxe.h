/** @file
*
*  Copyright (c) 2018, Linaro Ltd. All rights reserved.
*
*  This program and the accompanying materials
*  are licensed and made available under the terms and conditions of the BSD License
*  which accompanies this distribution.  The full text of the license may be found at
*  http://opensource.org/licenses/bsd-license.php
*
*  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
*  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
*
**/

#ifndef __RK3399DXE_H__
#define __RK3399DXE_H__

#define ADB_REBOOT_ADDRESS               0x32100000
#define ADB_REBOOT_BOOTLOADER            0x77665500
#define ADB_REBOOT_NONE                  0x77665501

#define DETECT_SW_FASTBOOT               68        // GPIO8_4

#define RK3399_BOOT_OPTION_NUM         4

enum {
  BOOT_MODE_RECOVERY  = 0,
  BOOT_MODE_MASK = 1,
};

#endif /* __RK3399DXE_H__ */
