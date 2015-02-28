#pragma once
#ifdef AUI_EXPORTS
#define AUI_API __declspec(dllexport)
#else
#define AUI_API __declspec(dllimport)
#endif

namespace organi2e
{
	namespace AUI
	{
		class AUI_API ASIO
		{
		public:
			ASIO();
			~ASIO();
		};
	};
};
