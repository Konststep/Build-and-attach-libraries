#ifndef DLLDYNEMIK_H
#define DLLDYNEMIK_H

#ifdef DLLDYNEMIK_EXPORTS
#define PROGECT_PROG __declspec(dllexport)
#else
#define PROGECT_PROG __declspec(dllimport)
#endif

namespace Dlldynamika
{
	class PROGECT_PROG Leaver {
	public:
		void leave(std::string name);
	};
}

#endif