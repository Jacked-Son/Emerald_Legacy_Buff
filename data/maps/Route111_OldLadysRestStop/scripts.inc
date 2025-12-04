Route111_OldLadysRestStop_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OldLadysRestStop_OnTransition
	.byte 0

Route111_OldLadysRestStop_OnTransition:
	setflag FLAG_LANDMARK_OLD_LADY_REST_SHOP
	end

Route111_OldLadysRestStop_EventScript_OldLady::
	lock
	faceplayer
	goto_if_set FLAG_POKECENTER_DIFF_MAIN, Route111_OldLadysRestStop_EventScript_NoResting
	msgbox Route111_OldLadysRestStop_Text_RestUpHere, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route111_OldLadysRestStop_EventScript_Rest
	goto_if_eq VAR_RESULT, NO, Route111_OldLadysRestStop_EventScript_DeclineRest
	end

Route111_OldLadysRestStop_EventScript_NoResting::
	dotimebasedevents
	goto_if_set FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY, Route111_OldLadysRestStop_NoRestingNoBerry
	msgbox Route111_OldLadysRestStop_Text_NoRestingTextBerry, MSGBOX_DEFAULT
	random 8
	addvar VAR_RESULT, FIRST_BERRY_INDEX
	giveitem VAR_RESULT
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
	setflag FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY
	release
	end

Route111_OldLadysRestStop_EventScript_NoRestingNoBerry::
	msgbox Route111_OldLadysRestStop_Text_NoRestingText, MSGBOX_DEFAULT
	release
	end

Route111_OldLadysRestStop_EventScript_Rest::
	msgbox Route111_OldLadysRestStop_Text_TakeYourTimeRestUp, MSGBOX_DEFAULT
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox Route111_OldLadysRestStop_Text_StillTiredTakeAnotherRest, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route111_OldLadysRestStop_EventScript_Rest
	goto_if_eq VAR_RESULT, NO, Route111_OldLadysRestStop_EventScript_DeclineRest
	end

Route111_OldLadysRestStop_EventScript_DeclineRest::
	msgbox Route111_OldLadysRestStop_Text_DontNeedToBeShy, MSGBOX_DEFAULT
	release
	end

Route111_OldLadysRestStop_Text_RestUpHere:
	.string "Oh, dear, dear.\n"
	.string "Aren't your POKéMON exhausted?\p"
	.string "If you'd like, rest up here.\n"
	.string "That's a fine idea! You should do that.$"

Route111_OldLadysRestStop_Text_TakeYourTimeRestUp:
	.string "That's right.\n"
	.string "Take your time and rest up!$"

Route111_OldLadysRestStop_Text_StillTiredTakeAnotherRest:
	.string "Oh, dear, dear.\n"
	.string "Are your POKéMON still tired?\p"
	.string "You should take another rest here.\n"
	.string "That's a fine idea. You should do that.$"

Route111_OldLadysRestStop_Text_DontNeedToBeShy:
	.string "Is that so?\n"
	.string "You don't need to be shy about it.$"

Route111_OldLadysRestStop_Text_NoRestingText:
	.string "Oh dear, dear.\n"
	.string "Are your bones tired?\p"
	.string "Put your feet up and relax here\l"
	.string "as long as you like!$"

Route111_OldLadysRestStop_Text_NoRestingTextBerry:
	.string "Oh dear, dear.\n"
	.string "Your POKéMON look famished.\p"
	.string "Here, take this.$"