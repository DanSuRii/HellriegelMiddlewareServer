#pragma once

namespace NS_DPNET
{
	class DPGLog
	{
	private:
		std::shared_ptr< class ILogger > pLogger;

		DPGLog();
	public:
		virtual ~DPGLog();
		static DPGLog& GetInstance();

		void Log(std::string);

		void SetLogger(decltype(pLogger) _pLogger);
	};

	void logDPG(std::string strLog);
	
}
