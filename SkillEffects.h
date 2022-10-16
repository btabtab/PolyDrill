#ifndef SKILLS
#define SKILLS
enum SkillBehaviourIDs
{
	SIMPLE = 0, //no extra effect.
	BLOCK, // protects from all damage.
	SNOOZE, //puts the user to sleep.

	ATTACK_BOOSTING, //raises attack by (power / 10) stages.
	DEFENSE_BOOSTING, //raises defense by (defense / 10) stages.
	MAGIC_BOOSTING, //raises energy by (energy / 10) stages.
	RESISTANCE_BOOSTING, //raises resistance by (resistance / 10) stages.
	SPEED_BOOSTING, //raises speed by (speed / 10) stages.
};
#endif