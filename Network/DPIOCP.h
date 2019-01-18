#pragma once
namespace NS_DPNET
{

	//IOCP Known how it works

	class DPIOCP
	{
	public:
		DPIOCP();
		virtual ~DPIOCP();

	private:
		HANDLE _hIOCP;
	};

}
