#include "Core/EntryPoint.hpp"
#include "Hart.hpp"

class Game : public Hart::Application {
public:
	Game() 
		: Application(640, 480, "Hart-Engine: Game-Template", true) {
		HART_CLIENT_LOG("Init Game");
		setBackgroundColor(Hart::Black);
		setExitKey(Hart::KeyCode::Escape);
		setMaxFPS(144);
	}
private:

};


std::unique_ptr<Hart::Application> Hart::CreateApplication() {
	return std::make_unique<Game>();
}