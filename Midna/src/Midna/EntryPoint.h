#pragma once

#ifdef MD_PLATFORM_WINDOWS

extern Midna::Application* Midna::CreateApplication();

int main(int argc, char** argv) 
{
	
	
	auto app = Midna::CreateApplication();
	app->Run();
	delete app;
	

}


#endif