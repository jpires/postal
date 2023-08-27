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
#ifndef TXT_H
#define TXT_H

//////////////////////////////////////////////////////////////////////////////
// Please see the CPP file for an explanation of this API.
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
// Headers.
//////////////////////////////////////////////////////////////////////////////

#include "System.h"
// If PATHS_IN_INCLUDES macro is defined, we can utilized relative
// paths to a header file.  In this case we generally go off of our
// RSPiX root directory.  System.h MUST be included before this macro
// is evaluated.  System.h is the header that, based on the current
// platform (or more so in this case on the compiler), defines
// PATHS_IN_INCLUDES.  Blue.h includes system.h so you can include that
// instead.
#ifdef PATHS_IN_INCLUDES
#include "ORANGE/GUI/guiItem.h"
#else
#include "GuiItem.h"
#endif // PATHS_IN_INCLUDES

//////////////////////////////////////////////////////////////////////////////
// Macros.
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
// Typedefs.
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
class RTxt : public RGuiItem
{
  public: // Construction/Destruction.
    // Default constructor.
    RTxt(void);
    // Destructor.
    ~RTxt(void);

    //////////////////////////////////////////////////////////////////////////////

  public: // Methods.
    ////////////////////////////////////////////////////////////////////////
    // Methods.
    ////////////////////////////////////////////////////////////////////////

    // Compose item.
    virtual // If you override this, call this base if possible.
      void
      Compose(               // Returns nothing.
        RImage *pim = NULL); // Dest image, uses m_im if NULL.

    ////////////////////////////////////////////////////////////////////////
    // Querries.
    ////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////////

  public: // Static
          //////////////////////////////////////////////////////////////////////////////

  public: // Querries.
          //////////////////////////////////////////////////////////////////////////////

  protected: // Internal functions.
             //////////////////////////////////////////////////////////////////////////////

  public:    // Member variables.
  protected: // Internal typedefs.
  protected: // Protected member variables.
};

#endif // TXT_H
//////////////////////////////////////////////////////////////////////////////
//	EOF
//////////////////////////////////////////////////////////////////////////////
