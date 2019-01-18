#pragma once
namespace NS_DPNET
{
	class ILogger
	{
	public:
		virtual void Log( std::string ) = 0; //must be declare here, client code only inlcude dpnetwork.h
	};
	using PLogger = std::shared_ptr<ILogger>;
	using PSocket = std::shared_ptr< class BaseSock >;

	class DPNetwork
	{
	public:
		DPNetwork();
		virtual ~DPNetwork();

		void setLogger(PLogger pLogger);

	private:		
		PSocket ptrSock;
		
		// You can describe Logger, DPNetwork consums as Interface
		PLogger logger;
	};

}
