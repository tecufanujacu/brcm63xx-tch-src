/*
 * Driver for /dev/ncr device (aka NCR)
 *
 * Copyright (c) 2014 Marc Rivière <marc.riviere AT gmail DOT com>
 *
 * This file is part of linux cryptodev.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

unsigned char rsa_der_data[162] = {
		0x30, 0x81, 0x9f, 0x30, 0x0d, 0x06, 0x09, 0x2a,
		0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x01,
		0x05, 0x00, 0x03, 0x81, 0x8d, 0x00, 0x30, 0x81,
		0x89, 0x02, 0x81, 0x81, 0x00, 0xb1, 0x63, 0x2c,
		0x42, 0x8d, 0x32, 0xdb, 0x5f, 0x7a, 0x31, 0x95,
		0x51, 0x4a, 0xc0, 0x9f, 0xeb, 0x28, 0xc3, 0x2b,
		0x4d, 0xff, 0x5b, 0xbe, 0x8c, 0xf4, 0x20, 0x54,
		0x37, 0xa8, 0x8f, 0x47, 0x0a, 0xc1, 0x9e, 0xd5,
		0x1c, 0x3c, 0xa6, 0x3d, 0x99, 0x3f, 0x02, 0xf6,
		0xfc, 0xac, 0xf4, 0x88, 0x96, 0x02, 0x4d, 0x28,
		0xa4, 0xaa, 0xd5, 0x74, 0x99, 0xcf, 0xd3, 0x9e,
		0xb1, 0x66, 0x40, 0x20, 0x87, 0xe0, 0xc4, 0x74,
		0xbb, 0xbc, 0x77, 0x41, 0xa9, 0xca, 0x9f, 0x97,
		0xff, 0x10, 0x03, 0x7a, 0xfb, 0x4a, 0x4c, 0x02,
		0xe1, 0x5f, 0xe1, 0xda, 0xa3, 0xc9, 0x26, 0xeb,
		0x27, 0x47, 0x32, 0x24, 0xc3, 0xde, 0x8c, 0xf3,
		0x0e, 0xf7, 0xdb, 0xb0, 0x91, 0x20, 0x51, 0x3b,
		0x5d, 0xd8, 0x9e, 0x3f, 0x30, 0xc6, 0x94, 0xe4,
		0x97, 0xfa, 0xdc, 0x0f, 0x5a, 0x43, 0xb4, 0x5f,
		0x1c, 0x05, 0x9e, 0x05, 0x37, 0x02, 0x03, 0x01,
		0x00, 0x01
	};