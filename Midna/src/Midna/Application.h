#pragma once

#include "Core.h"

namespace Midna {

	class MIDNA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}
