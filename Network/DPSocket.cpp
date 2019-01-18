#include "stdafx.h"
#include "DPSocket.h"

namespace NS_DPNET
{
	BaseSock::BaseSock()
	{
		Init();
	}
	void BaseSock::Init()
	{
		sock = ::socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
		if (INVALID_SOCKET == sock)
		{
			strLastErr = "Failed to init socket";
			logDPG(strLastErr);
			
			::WSAGetLastError();
			return;
		}

		bActive = true;
	}
}