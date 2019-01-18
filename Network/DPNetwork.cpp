#include "stdafx.h"
#include "DPNetwork.h"

#pragma comment(lib, "ws2_32.lib")

namespace NS_DPNET
{
	DPNetwork::DPNetwork()
	{
		ptrSock = std::make_shared< PSocket::element_type >();
	}


	DPNetwork::~DPNetwork()
	{
	}

	void DPNetwork::setLogger(PLogger pLogger)
	{ 
		logger = pLogger; 
		DPGLog::GetInstance().SetLogger(pLogger);
	}
}
