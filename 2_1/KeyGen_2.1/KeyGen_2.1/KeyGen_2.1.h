
// KeyGen_2.1.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CKeyGen21App:
// See KeyGen_2.1.cpp for the implementation of this class
//

class CKeyGen21App : public CWinApp
{
public:
	CKeyGen21App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CKeyGen21App theApp;
