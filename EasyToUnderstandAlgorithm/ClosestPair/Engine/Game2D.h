#pragma once

#include "RGB.h"
#include "Vector2.h"
#include "Vector3.h"
#include "Colors.h"
#include "Timer.h"
#include "DrawFunctions.h"
#include "yh.h"

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <thread>         // std::this_thread::sleep_for
#include <iostream>
#include <vector>
#include <string>
#include <map>

namespace jm
{
	using vec2 = Vector2<float>;
	using vec3 = Vector3<float>;

	class Game2D
	{
	private:
		int width = 640;
		int height = 480;

		GLFWwindow* glfw_window = nullptr;

		Timer timer;

		float spf = 1.0f / 60.0f;		 // second(s) per frame

		// control options
		std::map<int, bool> key_status;  // key_id, is_pressed
		std::map<int, bool> mbtn_status; // mouse_button_id, is_pressed
		bool draw_grid = false;

	public:
		Game2D()
		{}

		Game2D(const std::string& _title, const int& _width, const int& _height,
			const bool & use_full_screen = false, const int & display_ix = 0);

		~Game2D();

		Game2D & init(const std::string& _title, const int& _width, const int& _height,
			const bool & use_full_screen = false, const int & display_ix = 0);

		void reportErrorAndExit(const std::string& function_name, const std::string& message);

		bool isKeyPressed(const int& key);
		bool isKeyReleased(const int & key);
		bool isKeyPressedAndReleased(const int& key);

		bool isMouseButtonPressed(const int& mbtn);
		bool isMouseButtonReleased(const int& mbtn);
		bool isMouseButtonPressedAndReleased(const int& mbtn);

		vec2 getCursorPos(const bool& screen_coordinates = true);

		float getTimeStep();

		void drawGrid();

		void run(yh::vec2 *v, yh::vec2 *pair);

		virtual void update(const yh::vec2 *v, const yh::vec2* pair)
		{
			for (int i = 0; i < 10; ++i)
				drawPoint(Colors::red, v[i], 15.0f);
			drawPoint(Colors::blue, pair[0], 14.0f);
			drawPoint(Colors::blue, pair[1], 14.0f);
			
			// draw
			// play sould
			// physics update
			// etc.
		}
	};
}