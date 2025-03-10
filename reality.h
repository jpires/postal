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
// Reality.H
// Project: Nostril (aka Postal)
//
// History:
//		02/23/97 JMI	Started.
//
//		02/23/97	JMI	Changed calling convention making acceleration functions
//							less tied to gravity and, therefore, more versatile.
//
//		02/23/97	JMI	Accidentally mixed distance and velocity in Accelerate().
//
//		02/24/97	JMI	For the gravity constant I had calculated the equivalent
//							of a meter in pixels but forgot to multiply by 9.8.
//							What a dumb ass?!
//
//		02/24/97	JMI	Changed accel to dAccel (a double instead of a templated
//							parameter) so it could be defaulted.
//							Also, changed Accel() to AdjustVel().
//
//		02/24/97	JMI	Now Map2DTo3D can take two different templated types.
//
//		06/26/97	JMI	Moved Map2DTo3D from here to CRealm.
//
//////////////////////////////////////////////////////////////////////////////
//
// Reality constants and functions for postal.
//
//////////////////////////////////////////////////////////////////////////////

#ifndef REALITY_H
#define REALITY_H

//////////////////////////////////////////////////////////////////////////////
// C Headers -- Must be included before RSPiX.h b/c RSPiX utilizes SHMalloc.
//////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// RSPiX Headers.
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// Postal includes.
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// Macros.
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// Typedefs.
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// Constants/Tunables.
///////////////////////////////////////////////////////////////////////////////

// I figure a meter is about half a man's height.  Our man is about 50 pixels
// tall.
const double g_dAccelerationDueToGravity = -(25 * 9.8); // Pixels/(sec^2) upward.

///////////////////////////////////////////////////////////////////////////////
// Protos.
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// Inlines/Templates.
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// Adjust provided velocity by drag for the given period.
///////////////////////////////////////////////////////////////////////////////
template<class VelT>
void AdjustVel(                                // Returns nothing.
  VelT *pvel,                                  // In:  Velocity to affect by specified acceleration.
                                               // Out: New velocity.
  double dDeltaTime,                           // In:  Duration over which acceleration affected
                                               // *pvel in seconds.
  double dAccel = g_dAccelerationDueToGravity) // In:  Acceleration value
                                               // to apply (in Pixels/Sec^2).
{
    *pvel += (VelT)(dAccel * dDeltaTime);
}

///////////////////////////////////////////////////////////////////////////////
// Adjust provided vertical position and velocity by gravity for the given
// period.
///////////////////////////////////////////////////////////////////////////////
template<class PosT, class VelT>
void AdjustPosVel(                             // Returns nothing.
  PosT *ppos,                                  // In:  Current position.
                                               // Out: New position.
  VelT *pvel,                                  // In:  Velocity to affect by drag.
                                               // Out: New velocity.
  double dDeltaTime,                           // In:  Duration over which drag affected
                                               // *ppos in seconds.
  double dAccel = g_dAccelerationDueToGravity) // In:  Drag value to apply
                                               // (in Pixels/Sec^2).
{
    VelT velDelta = 0;
    AdjustVel(&velDelta, dDeltaTime, dAccel);

    // On the average during this duration, the position was affected
    // by the average velocity change (hence velDelta / 2).
    *ppos += (*pvel + velDelta / 2) * dDeltaTime;

    // Adjust velocity.
    *pvel += velDelta;
}

#endif // REALITY_H
///////////////////////////////////////////////////////////////////////////////
// EOF
///////////////////////////////////////////////////////////////////////////////
