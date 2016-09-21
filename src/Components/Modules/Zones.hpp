#define VERSION_ALPHA2 316
#define VERSION_ALPHA3 318//319

namespace Components
{
	class Zones : public Component
	{
	public:
		Zones();
		~Zones();

#if defined(DEBUG) || defined(FORCE_UNIT_TESTS)
		const char* GetName() { return "Zones"; };
#endif

		static void InstallPatches(int version);

	//private:
		static int ZoneVersion;

		static Utils::Hook LoadFxElemDefHook;
		static Utils::Hook LoadFxElemDefArrayHook;
		static Utils::Hook LoadXModelLodInfoHook;

		static void LoadFxElemDefArrayStub(bool atStreamStart);
		static bool LoadFxElemDefStub(bool atStreamStart, Game::FxElemDef* fxElem, int size);

		static void LoadXModelLodInfo(int i);
		static void LoadXModelLodInfoStub();
	};
}
