#pragma once


namespace NS_DPNET
{
	class BaseSock
	{
	public:
		inline bool IsActive() { return bActive; }
		std::string GetLastError()
		{
			return strLastErr;
		}
		BaseSock();
	protected:
		
		SOCKET sock;
		bool bActive = false;
	private:
		void Init();

		std::string strLastErr;
	};
}