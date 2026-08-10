#ifndef CMAKEDYNAMIKLIB_H
#define CMAKEDYNAMIKLIB_H


#ifdef CMAKEDYNAMIKLIB_EXPORTS
#define LEAVER_API __declspec(dllexport)
#else
#define LEAVER_API __declspec(dllimport)
#endif

namespace Dlldynamika
{
	class LEAVER_API Leaver {
	public:
		void leave(std::string name);
	};
}

#endif