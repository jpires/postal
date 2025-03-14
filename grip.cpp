////////////////////////////////////////////////////////////////////////////////
//
// Copyright 2016 RWS Inc, All Rights Reserved
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of version 2 of the GNU General Public License as published by
// the Free Software Foundation
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
//
// grip.cpp
// Project: Nostril (aka Postal)
//
// This module impliments the CGrip class
//
// History:
//		01/09/97 MJR	Started.
//		01/28/97	MJR	Actually started filling in some usefull code.
//
////////////////////////////////////////////////////////////////////////////////
#define GRIP_CPP

#include "RSPiX.h"
#include "grip.h"

////////////////////////////////////////////////////////////////////////////////
// Macros/types/etc.
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
// Default (and only) constructor
////////////////////////////////////////////////////////////////////////////////
CGrip::CGrip()
{
    // Clear for testing/debugging
    m_pCamera = nullptr;
}

////////////////////////////////////////////////////////////////////////////////
// Destructor
////////////////////////////////////////////////////////////////////////////////
CGrip::~CGrip() {}

////////////////////////////////////////////////////////////////////////////////
// Set camera to control
////////////////////////////////////////////////////////////////////////////////
void CGrip::SetCamera(CCamera *pCamera) // In:  Camera to control
{
    m_pCamera = pCamera;
}

////////////////////////////////////////////////////////////////////////////////
// Track specified target coordinates
////////////////////////////////////////////////////////////////////////////////
// void CGrip::TrackTarget(
//	short sTargetX,										// In:  Target's x coord
//	short sTargetY)										// In:  Target's y coord
//	{
//	// For now, simply move camera to specified coordinates
//	ASSERT(m_pCamera != 0);
//	m_pCamera->SetViewPos(sTargetX, sTargetY);
//	}

////////////////////////////////////////////////////////////////////////////////
// EOF
////////////////////////////////////////////////////////////////////////////////
