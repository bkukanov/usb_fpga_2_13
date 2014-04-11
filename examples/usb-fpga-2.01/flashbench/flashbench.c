/*!
   flashbench -- Flash memory benchmark for ZTEX USB-FPGA Modules 2.16
   Copyright (C) 2009-2014 ZTEX GmbH.
   http://www.ztex.de

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License version 3 as
   published by the Free Software Foundation.

   This program is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, see http://www.gnu.org/licenses/.
!*/

#include[ztex-conf.h]	// Loads the configuration macros, see ztex-conf.h for the available macros
#include[ztex-utils.h]	// include basic functions and variables

// select ZTEX USB FPGA Module 2.01 as target
IDENTITY_UFM_2_01(10.18.0.0,0);	 

// this product string is also used for identification by the host software
#define[PRODUCT_STRING]["flashbench for UFM 2.01"]
//USE_4KSECTORS;

// enable Flash support
ENABLE_FLASH;

// include the main part of the firmware kit, define the descriptors, ...
#include[ztex.h]

void main(void)	
{
    init_USB();		// init everything ...
    
    while (1) {	}	// ... and twiddle thumbs
}

