#pragma once
#include "OutputWnd.h"
class COutputDPGLog : public COutputWnd, public NS_DPNET::ILogger
{
public:
	COutputDPGLog();
	virtual ~COutputDPGLog();

	// Inherited via ILogger
	virtual void Log(std::string) override;
};

