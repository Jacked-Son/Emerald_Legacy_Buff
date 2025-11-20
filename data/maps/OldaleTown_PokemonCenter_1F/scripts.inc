.set LOCALID_NURSE, 1

OldaleTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

OldaleTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_OLDALE_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

OldaleTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	setvar VAR_POKECENTER_NOW, 9   	@ Oldale Town
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_Gentleman::
	lock
	faceplayer
	goto_if_set FLAG_POKECENTER_DIFF_MAIN, OldaleTown_PokemonCenter_1F_EventScript_Gentleman_Hard
	msgbox OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC, MSGBOX_NPC
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_Gentleman_Hard::
	msgbox OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePCHard, MSGBOX_NPC
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_Boy::
	lock
	faceplayer
	goto_if_set FLAG_POKECENTER_DIFF_MAIN, OldaleTown_PokemonCenter_1F_EventScript_Boy_Hard
	msgbox OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat, MSGBOX_NPC
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_Boy_Hard::
	msgbox OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreatHard, MSGBOX_NPC
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_Girl::
	lock
	faceplayer
	goto_if_set FLAG_SYS_POKEDEX_GET, OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable
	msgbox OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable, MSGBOX_DEFAULT
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable::
	msgbox OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub, MSGBOX_DEFAULT
	release
	end

OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC:
	.string "That PC in the corner there is\n"
	.string "for any POKéMON TRAINER to use.\p"
	.string "Naturally, that means you're welcome\n"
	.string "to use it too.\p"
	.string "The wonders of modern technology are\n"
	.string "truly incredible!$"

OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePCHard:
	.string "That PC in the corner there is\n"
	.string "for any POKéMON TRAINER to use.\p"
	.string "Naturally, that means you're welcome\n"
	.string "to use it too.\p"
	.string "Personal item storage services aren't\n"
	.string "available right now though.\p"
	.string "Be careful when travelling.\p"
	.string "You'll lose some of your items\n"
	.string "and money if you white out!$"

OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat:
	.string "POKéMON CENTERS are great!\p"
	.string "You can use their services as much\n"
	.string "as you like, and it's all for free.\l"
	.string "You never have to worry!$"

OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreatHard:
	.string "I heard there's trouble with the\n"
	.string "Power Plant in Mauville City…\p"
	.string "I guess I won't be able to heal\n"
	.string "as much as I want to.\p"
	.string "…\p"
	.string "Better plan my route carefully!$"

OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable:
	.string "The POKéMON WIRELESS CLUB on\n"
	.string "the second floor was built recently.\p"
	.string "But they say they're still making\n"
	.string "adjustments.$"

OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub:
	.string "The POKéMON WIRELESS CLUB on\n"
	.string "the second floor was built recently.\p"
	.string "I traded POKéMON right away.$"

