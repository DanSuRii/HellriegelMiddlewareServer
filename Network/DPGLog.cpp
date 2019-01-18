#include "stdafx.h"

#include "DPNetwork.h"
#include "DPGLog.h"

namespace NS_DPNET
{

	DPGLog::DPGLog()
	{
	}


	DPGLog::~DPGLog()
	{
	}

	DPGLog & DPGLog::GetInstance()
	{
		static DPGLog _instance;
		return _instance;
	}

	void DPGLog::Log(std::string strLog)
	{
		if (pLogger) pLogger->Log(strLog);
	}

	void DPGLog::SetLogger(decltype(pLogger) _pLogger)
	{
		pLogger = _pLogger;
	}

	void logDPG(std::string strLog)
	{
		DPGLog::GetInstance().Log(strLog);
	}

}
