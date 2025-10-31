OldaleTown_House2_MapScripts::
	.byte 0

OldaleTown_House2_EventScript_Woman::
	msgbox OldaleTown_House2_Text_PokemonLevelUp, MSGBOX_NPC
	end

OldaleTown_House2_EventScript_Man::
	msgbox OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon, MSGBOX_NPC
	end

OldaleTown_House2_Text_PokemonLevelUp:
	.string "When POKéMON battle, they eventually\n"
	.string "level up and become stronger.\p"
	.string "The stronger they are, the farther\n"
	.string "away you'll be able to travel.$"

OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon:
	.string "When I was a trainer I enjoyed\n"
	.string "having my POKéMON follow me.\p"
	.string "Be sure to enable that option\n"
	.string "If you want your POKéMON to\l"
	.string "follow you too!$"

