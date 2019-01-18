#include "stdafx.h"
#include "COutputDPGLog.h"


COutputDPGLog::COutputDPGLog()
{
}


COutputDPGLog::~COutputDPGLog()
{
}

void COutputDPGLog::Log(std::string strOut )
{
	CString strToWrite( strOut.c_str() );
	m_wndOutputBuild.AddString( strToWrite.GetBuffer() );
}
