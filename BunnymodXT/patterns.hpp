#pragma once

#include <SPTLib/MemUtils.hpp>

namespace Patterns
{
	// Engine patterns.
	const MemUtils::ptnvec ptnsCbuf_Execute =
	{
		{
			"HL-SteamPipe",
			{
				0x55, 0x8B, 0xEC, 0x81, 0xEC, 0x00, 0x04, 0x00, 0x00, 0x8B, 0x15, '?', '?', '?', '?', 0x53, 0x56, 0x57, 0x85, 0xD2, 0x0F, 0x84, 0xB5, 0x00, 0x00, 0x00, 0x8B, 0x1D, '?', '?', '?', '?', 0x33, 0xC9, 0x33, 0xF6, 0x85, 0xD2, 0x7E, 0x22, 0x8A, 0x04, 0x1E, 0x3C, 0x22, 0x75, 0x01, 0x41
			},
			"xxxxxxxxxxx????xxxxxxxxxxxxx????xxxxxxxxxxxxxxxx"
		},

		{
			"HL-NGHL",
			{
				0x8B, 0x15, '?', '?', '?', '?', 0x81, 0xEC, 0x00, 0x04, 0x00, 0x00, 0x53, 0x33, 0xDB, 0x55, 0x56, 0x3B, 0xD3, 0x57, 0x0F, 0x84, '?', '?', '?', '?', 0x8B, 0x2D, '?', '?', '?', '?', 0x33, 0xC9, 0x33, 0xF6, 0x3B, 0xD3, 0x7E, 0x22, 0x8A, 0x04, 0x2E, 0x3C, 0x22, 0x75, 0x01, 0x41
			},
			"xx????xxxxxxxxxxxxxxxx????xx????xxxxxxxxxxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsCbuf_InsertText =
	{
		{
			"HL-SteamPipe",
			{
				0x55, 0x8B, 0xEC, 0x53, 0x8B, 0x5D, 0x08, 0x56, 0x8B, 0x35, '?', '?', '?', '?', 0x57, 0x53, 0xE8, '?', '?', '?', '?', 0x8B, 0x0D, '?', '?', '?', '?', 0x03, 0xC6, 0x83, 0xC4, 0x04, 0x3B, 0xC1, 0x7C, 0x12, 0x68, '?', '?', '?', '?', 0xE8
			},
			"xxxxxxxxxx????xxx????xx????xxxxxxxxxx????x"
		},

		{
			"HL-NGHL",
			{
				0x53, 0x8B, 0x5C, 0x24, 0x08, 0x56, 0x8B, 0x35, '?', '?', '?', '?', 0x57, 0x53, 0xE8, '?', '?', '?', '?', 0x8B, 0x0D, '?', '?', '?', '?', 0x03, 0xC6, 0x83, 0xC4, 0x04, 0x3B, 0xC1, 0x7C, 0x10, 0x5F, 0x5E, 0x5B, 0xC7, 0x44, 0x24, 0x04
			},
			"xxxxxxxx????xxx????xx????xxxxxxxxxxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsHost_AutoSave_f =
	{
		{
			"HL-SteamPipe",
			{
				0xA1, '?', '?', '?', '?', 0xB9, 0x01, 0x00, 0x00, 0x00, 0x3B, 0xC1, 0x0F, 0x85, 0x9F, 0x00, 0x00, 0x00, 0xA1, '?', '?', '?', '?', 0x85, 0xC0, 0x75, 0x10, 0x68, '?', '?', '?', '?', 0xE8, '?', '?', '?', '?', 0x83, 0xC4, 0x04, 0x33, 0xC0, 0xC3, 0x39, 0x0D
			},
			"x????xxxxxxxxxxxxxx????xxxxx????x????xxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsSeedRandomNumberGenerator =
	{
		{
			"HL-SteamPipe",
			{
				0x6A, 0x00, 0xE8, '?', '?', '?', '?', 0xF7, 0xD8, 0x83, 0xC4, 0x04, 0x3D, 0xE8, 0x03, 0x00, 0x00, 0xA3, '?', '?', '?', '?', 0x7E, 0x08, 0xF7, 0xD8, 0xA3, '?', '?', '?', '?', 0xC3, 0x3D, 0x18, 0xFC, 0xFF, 0xFF, 0x7E, 0x0A, 0x2D, 0x38, 0xAD, 0x53, 0x01, 0xA3, '?', '?', '?', '?', 0xC3
			},
			"xxx????xxxxxxxxxxx????xxxxx????xxxxxxxxxxxxxx????x"
		}
	};

	const MemUtils::ptnvec ptnsRandomFloat =
	{
		{
			"HL-SteamPipe",
			{
				0x55, 0x8B, 0xEC, 0x51, 0x8D, 0x45, 0x0C, 0x8D, 0x4D, 0x08, 0x50, 0x51, 0xFF, 0x15, '?', '?', '?', '?', 0x83, 0xC4, 0x08, 0xE8
			},
			"xxxxxxxxxxxxxx????xxxx"
		}
	};

	const MemUtils::ptnvec ptnsRandomLong =
	{
		{
			"HL-SteamPipe",
			{
				0x55, 0x8B, 0xEC, 0x53, 0x8D, 0x45, 0x0C, 0x56, 0x8D, 0x4D, 0x08, 0x50, 0x51, 0xFF, 0x15, '?', '?', '?', '?', 0x8B, 0x75, 0x0C
			},
			"xxxxxxxxxxxxxxx????xxx"
		}
	};

	const MemUtils::ptnvec ptnsSCR_DrawFPS =
	{
		{
			"HL-SteamPipe",
			{
				0xD9, 0x05, '?', '?', '?', '?', 0xD8, 0x1D, '?', '?', '?', '?', 0xDF, 0xE0, 0xF6, 0xC4, 0x44, 0x7B, '?', 0xDD, 0x05, '?', '?', '?', '?', 0xDC, 0x1D, '?', '?', '?', '?', 0xDF, 0xE0, 0xF6, 0xC4, 0x41, 0x7B, '?', 0xDD, 0x05
			},
			"xx????xx????xxxxxx?xx????xx????xxxxxx?xx"
		}
	};

	// Shared patterns.
	const MemUtils::ptnvec ptnsPMJump =
	{
		{
			"HL-SteamPipe",
			{
				0x51, 0xA1, '?', '?', '?', '?', 0x53, 0x56, 0x8B, 0x88, 0xD0, 0x00, 0x00, 0x00, 0x85, 0xC9, 0x74, 0x13, 0x8B, 0x88, 0xC8, 0x00, 0x00, 0x00, 0x5E, 0x83, 0xC9, 0x02, 0x5B, 0x89, 0x88, 0xC8, 0x00, 0x00, 0x00, 0x59, 0xC3, 0x8D, 0x88, 0xF0, 0xF3, 0x04, 0x00, 0x68
			},
			"xx????xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"gunman",
			{
				0x51, 0xA1, '?', '?', '?', '?', 0x53, 0x8B, 0x88, 0xD0, 0x00, 0x00, 0x00, 0x85, 0xC9, 0x74, 0x12, 0x8B, 0x88, 0xC8, 0x00, 0x00, 0x00, 0x5B, 0x83, 0xC9, 0x02, 0x89, 0x88, 0xC8, 0x00, 0x00, 0x00, 0x59, 0xC3, 0x8D, 0x88, 0xF0, 0xF3, 0x04, 0x00, 0x68
			},
			"xx????xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"AG-Server",
			{
				0x51, 0x8B, 0x0D, '?', '?', '?', '?', 0x53, 0x8B, 0x81, 0xD0, 0x00, 0x00, 0x00, 0x85, 0xC0, 0x74, 0x11, 0x8B, 0x81, 0xC8, 0x00, 0x00, 0x00, 0x5B, 0x0C, 0x02, 0x89, 0x81, 0xC8, 0x00, 0x00, 0x00, 0x59, 0xC3, 0xD9, 0x81, 0xCC, 0x00, 0x00, 0x00, 0xD8, 0x1D
			},
			"xxx????xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"AG-Client",
			{
				0x51, 0x8B, 0x0D, '?', '?', '?', '?', 0x8B, 0x81, 0xD0, 0x00, 0x00, 0x00, 0x85, 0xC0, 0x74, 0x09, 0x83, 0x89, 0xC8, 0x00, 0x00, 0x00, 0x02, 0x59, 0xC3, 0xD9, 0x05, '?', '?', '?', '?', 0xD9, 0x81, 0xCC, 0x00, 0x00, 0x00, 0xDA, 0xE9
			},
			"xxx????xxxxxxxxxxxxxxxxxxxxx????xxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsPMPreventMegaBunnyJumping =
	{
		{
			"HL-SteamPipe",
			{
				0x51, 0x8B, 0x0D, '?', '?', '?', '?', 0xD9, 0x81, '?', '?', '?', '?', 0xD8, 0x0D, '?', '?', '?', '?', 0xD9, 0x54, 0x24, 0x00, 0xD8, 0x1D, '?', '?', '?', '?', 0xDF, 0xE0, 0xF6, 0xC4, 0x41, 0x7B, 0x3B, 0x83, 0xC1
			},
			"xxx????xx????xx????xxxxxx????xxxxxxxxx"
		}
	};
	
	const MemUtils::ptnvec ptnsBhopcap =
	{
		{
			"HL-SteamPipe",
			{
				0xD9, 0x05, '?', '?', '?', '?', 0xBA, 0xFF, 0xFF, 0xFF, 0xFF, 0xD8, 0x89, '?', '?', '?', '?', 0xD9, 0xC9, 0x89, 0x91, '?', '?', '?', '?', 0xDF, 0xE9, 0x0F, 0x82
			},
			"xx????xxxxxxx????xxxx????xxxx"
		}
	};

	const MemUtils::ptnvec ptnsPMPlayerMove =
	{
		{
			"HL-SteamPipe",
			{
				0xA1, '?', '?', '?', '?', 0x8B, 0x4C, 0x24, 0x04, 0x55, 0x57, 0x33, 0xFF, 0x89, 0x48, 0x04, 0xE8, '?', '?', '?', '?', 0x8B, 0x15, '?', '?', '?', '?', 0x33, 0xC9, 0x89, 0xBA, 0x8C, 0x54, 0x04, 0x00, 0xA1, '?', '?', '?', '?', 0x8A, 0x88, 0x5A, 0x54, 0x04, 0x00, 0x89
			},
			"x????xxxxxxxxxxxx????xx????xxxxxxxxx????xxxxxxx"
		}
	};
}
