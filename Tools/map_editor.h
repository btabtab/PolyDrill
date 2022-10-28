#include <raylib.h>
#include "../Map.h"
#include "../../MetaLauncher/EngineCode/UI.h"
#include "../../MetaLauncher/EngineCode/Saving.h"

#define UI_ELEMENTS_FOR_EDITOR 25

UIElement* getUIElements()
{
	static UIElement elements[UI_ELEMENTS_FOR_EDITOR];
	return elements;
}

bool* getProgramFlags()
{
	static bool flags[UI_ELEMENTS_FOR_EDITOR];
	return flags;
}

void initUI()
{
	getUIElements()[0] = generateUIElement(30, 30, 10, 10, newKettleString("UNDO_BUTTON"), UI_BUTTON, &(getProgramFlags()[0]), BLUE);
	getUIElements()[1] = generateUIElement(30, 30, 10, 40, newKettleString("REDO_BUTTON"), UI_BUTTON, &(getProgramFlags()[1]), BLUE);
	
	getUIElements()[1] = generateUIElement(30, 30, 10, 40, newKettleString("SAVE_BUTTON"), UI_BUTTON, &(getProgramFlags()[2]), ORANGE);
	getUIElements()[1] = generateUIElement(30, 30, 10, 40, newKettleString("lOAD_bUTTON"), UI_BUTTON, &(getProgramFlags()[2]), ORANGE);
}

void UIDrawLoop()
{
}

void processLoop()
{
}

void saveCurrentMap()
{
	saveData(getCurrentMap(), sizeof(Map), generateRandomFileName(newKettleString(".MAP_bckupf")).contents);
	saveData(getCurrentMap(), sizeof(Map), newKettleString("current_file.mapf").contents);
}

int main()
{
	initUI();
	while (!WindowShouldClose())
	{
		UIMenu(getUIElements(), UI_ELEMENTS_FOR_EDITOR, true, false);
		UIDrawLoop();
		processLoop();
	}
	
}