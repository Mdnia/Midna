#include <Midna.h>


class Sandbox : public Midna::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}


};


Midna::Application* Midna::CreateApplication()
{
	return new Sandbox();
}