#pragma once

namespace NS_DPNET
{
	//there are no IOCP to specific ThreadWorker

	class ThreadWorker
	{
	public:
		ThreadWorker();
		~ThreadWorker();

		void DoWork();

	private:

	};

}
