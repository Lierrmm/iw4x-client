#pragma once

namespace Components
{
	class Stats : public Component
	{
	public:
		Stats();
		~Stats();

#if defined(DEBUG) || defined(FORCE_UNIT_TESTS)
		const char* getName() override { return "Stats"; };
#endif

		static bool IsMaxLevel();

	private:
		static void UpdateClasses(UIScript::Token token);
		static void SendStats();

	};
}