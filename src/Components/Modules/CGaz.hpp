#pragma once

namespace Components
{
	class CGaz : public Component
	{

	public:
		CGaz();
		~CGaz();
		const char* getName() override { return "CGaz"; };

		static void main();
	
	private:
		static void CG_DrawCGaz();

		static void PM_Accelerate(float wishspeed, float accel);
		static void PM_SlickAccelerate(float wishspeed, float accel);

		static float PM_CmdScale(Game::playerState_s* ps, Game::usercmd_s* cmd);
		static float PM_DamageScale_Walk(int damage_timer);

		static void PmoveSingle(Game::pmove_t* pm, Game::pml_t* pml);
		static void PM_AirMove(Game::pmove_t* pm, Game::pml_t* pml);
		static void PM_WalkMove(Game::pmove_t* pm, Game::pml_t* pml);
	};
}