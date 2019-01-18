#pragma once

namespace NS_DPNET
{

	using P_ISOCKET = std::shared_ptr<class BaseSock>;

	enum EIO_OPERATION 
	{
		EIO_Accept,
		EIO_Read,
		EIO_Write,

		EIO_OPERATION_CNT,
	};

	class NetworkModel
	{
	public:
	};

	// IOCP = Network Model, FileIO Model, DB Model?
	//class IOCP : NetworkModel
	//class EventSelect : NetworkModel
	// class Mutlithreaded IO : Network Model
}
