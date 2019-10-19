
// paint.h : main header file for the paint application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CpaintApp:
// See paint.cpp for the implementation of this class
//

class CpaintApp : public CWinApp
{
public:
	CpaintApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CpaintApp theApp;
