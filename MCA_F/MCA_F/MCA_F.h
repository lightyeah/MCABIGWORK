
// MCA_F.h : MCA_F Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMCA_FApp:
// �йش����ʵ�֣������ MCA_F.cpp
//

class CMCA_FApp : public CWinApp
{
public:
	CMCA_FApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMCA_FApp theApp;
