/*
trainer_control by surskitty
    .nickname = _("Nickname")
    .ivs[NUM_STATS] OR .iv Use .iv to assign all IVs to the same number. .ivs needs an array of six stats, in order of HP ATK DEF SPEED SPATK SPDEF; many optimal IV spreads are pre-defined in include/constants/pokemon.h
    .heldItem and .moves[MAX_MON_MOVES] are as in vanilla.
    .ability should be set to ABILITY_SLOT_1, ABILITY_SLOT_2, or ABILITY_HIDDEN for future-proofing.
    .evs[NUM_STATS] again uses the stat order. The constants provided are not player-legal.
    .ball will still allow trainer-class balls to function when unset.
    .shiny = TRUE if you want shinies :)
    .friendship should be set to TRAINER_MON_FRIENDLY or TRAINER_MON_UNFRIENDLY to adjust Return/Frustration.
*/
// Mt Chimney Hiker
static const struct TrainerMon sParty_Sawyer1[] = {
    {
    .ivs = {30, 25, 12, 9, 16, 18},
    .lvl = 28,
    .species = SPECIES_GRAVELER,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Aqua Hideout Entrance GruntM
static const struct TrainerMon sParty_GruntAquaHideout1[] = {
    {
    .ivs = {18, 20, 13, 16, 14, 10},
    .lvl = 38,
    .species = SPECIES_ELECTRODE,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Aqua Hideout B1F 3 GruntM
static const struct TrainerMon sParty_GruntAquaHideout2[] = {
    {
    .ivs = {18, 25, 16, 24, 26, 21},
    .lvl = 37,
    .species = SPECIES_WAILMER,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {14, 4, 23, 22, 16, 17},
    .lvl = 37,
    .species = SPECIES_SEADRA,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Aqua Hideout B1F 6 GruntM
static const struct TrainerMon sParty_GruntAquaHideout3[] = {
    {
    .ivs = {7, 15, 17, 22, 7, 6},
    .lvl = 39,
    .species = SPECIES_WAILMER,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Aqua Hideout Submarine Room 1 GruntM
static const struct TrainerMon sParty_GruntAquaHideout4[] = {
    {
    .ivs = {26, 10, 24, 17, 18, 15},
    .lvl = 38,
    .species = SPECIES_SNEASEL,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern1[] = {
    {
    .ivs = {21, 15, 4, 20, 22, 21},
    .lvl = 46,
    .species = SPECIES_SEVIPER,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern2[] = {
    {
    .ivs = {19, 12, 13, 16, 15, 17},
    .lvl = 46,
    .species = SPECIES_ELECTRODE,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern3[] = {
    {
    .ivs = {24, 11, 11, 23, 14, 7},
    .lvl = 46,
    .species = SPECIES_GOLBAT,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Mt Pyre Interior 3F BreederF
static const struct TrainerMon sParty_Gabrielle1[] = {
    {
    .ivs = {9, 24, 13, 26, 31, 10},
    .lvl = 31,
    .species = SPECIES_SHUPPET,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {10, 8, 10, 16, 15, 16},
    .lvl = 31,
    .species = SPECIES_DUSKULL,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {22, 27, 3, 24, 3, 20},
    .lvl = 31,
    .species = SPECIES_NATU,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {12, 25, 9, 8, 22, 24},
    .lvl = 31,
    .species = SPECIES_CHIMECHO,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
//Petalburg Woods Team Aqua Grunt 
static const struct TrainerMon sParty_GruntPetalburgWoods[] = {
    {
    .ivs = {31, 17, 26, 20, 11, 19},
    .lvl = 11,
    .species = SPECIES_POOCHYENA,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {16, 16, 11, 3, 10, 12},
    .lvl = 11,
    .species = SPECIES_CARVANHA,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Route 121 CooltrainerM
static const struct TrainerMon sParty_Marcel[] = {
    {
    .ivs = {20, 5, 29, 14, 6, 19},
    .lvl = 34,
    .species = SPECIES_HERACROSS,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {28, 13, 9, 3, 31, 13},
    .lvl = 34,
    .species = SPECIES_GIRAFARIG,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 123 (via 122 from Mt Pyre) Bird Keeper
static const struct TrainerMon sParty_Alberto[] = {
    {
    .ivs = {22, 15, 6, 14, 23, 30},
    .lvl = 35,
    .species = SPECIES_PELIPPER,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {10, 21, 5, 28, 9, 15},
    .lvl = 35,
    .species = SPECIES_XATU,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 123 (via 122 from Mt Pyre) Collector
static const struct TrainerMon sParty_Ed[] = {
    {
    .ivs = {17, 15, 10, 16, 24, 5},
    .lvl = 35,
    .species = SPECIES_ZANGOOSE,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {24, 16, 25, 18, 12, 14},
    .lvl = 35,
    .species = SPECIES_SEVIPER,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern4[] = {
    {
    .ivs = {20, 22, 15, 6, 16, 24},
    .lvl = 46,
    .species = SPECIES_MUK,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 124 SwimmerM
static const struct TrainerMon sParty_Declan[] = {
    {
    .ivs = {17, 17, 24, 19, 22, 11},
    .lvl = 39,
    .species = SPECIES_GYARADOS,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Rusturf Tunnel Aqua Grunt
static const struct TrainerMon sParty_GruntRusturfTunnel[] = {
    {
    .ivs = {17, 6, 25, 23, 15, 16},
    .lvl = 13,
    .species = SPECIES_POOCHYENA,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {6, 14, 16, 15, 16, 8},
    .lvl = 13,
    .species = SPECIES_CARVANHA,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Weather Institute Aqua Grunt (1st floor)
static const struct TrainerMon sParty_GruntWeatherInst1[] = {
    {
    .ivs = {14, 12, 11, 16, 22, 7},
    .lvl = 29,
    .species = SPECIES_GOLBAT,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {6, 20, 5, 9, 9, 19},
    .lvl = 29,
    .species = SPECIES_TENTACOOL,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Weather Institute Aqua Grunt (2nd floor double battle)
static const struct TrainerMon sParty_GruntWeatherInst2[] = {
    {
    .ivs = {18, 11, 2, 21, 20, 10},
    .lvl = 29,
    .species = SPECIES_MIGHTYENA,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {22, 14, 13, 18, 19, 15},
    .lvl = 29,
    .species = SPECIES_TENTACOOL,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Weather Institute Aqua Grunt (2nd floor)
static const struct TrainerMon sParty_GruntWeatherInst3[] = {
    {
    .ivs = {15, 17, 11, 5, 12, 18},
    .lvl = 30,
    .species = SPECIES_GRIMER,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {14, 15, 8, 20, 11, 7},
    .lvl = 30,
    .species = SPECIES_VOLTORB,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {4, 18, 27, 14, 24, 16},
    .lvl = 30,
    .species = SPECIES_GRIMER,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
//Slateport Museum Grunt 1
static const struct TrainerMon sParty_GruntMuseum1[] = {
    {
    .ivs = {16, 20, 10, 16, 21, 18},
    .lvl = 18,
    .species = SPECIES_CARVANHA,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {19, 6, 11, 18, 15, 3},
    .lvl = 19,
    .species = SPECIES_ZUBAT,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
//Slateport Museum Grunt 2
static const struct TrainerMon sParty_GruntMuseum2[] = {
     {
    .ivs = {17, 13, 21, 16, 8, 4},
    .lvl = 19,
    .species = SPECIES_POOCHYENA,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {16, 29, 14, 26, 9, 14},
    .lvl = 20,
    .species = SPECIES_TENTACOOL,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Space Center
static const struct TrainerMon sParty_GruntSpaceCenter1[] = {
    {
    .ivs = {15, 16, 23, 12, 18, 24},
    .lvl = 44,
    .species = SPECIES_CAMERUPT,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Mt Pyre Summit Magma Grunt 1
static const struct TrainerMon sParty_GruntMtPyre1[] = {
    {
    .ivs = {18, 12, 15, 8, 3, 1},
    .lvl = 37,
    .species = SPECIES_CROBAT,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Mt Pyre Summit Aqua Grunt 1
static const struct TrainerMon sParty_GruntMtPyre2[] = {
    {
    .ivs = {24, 30, 12, 15, 23, 20},
    .lvl = 37,
    .species = SPECIES_SHARPEDO,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// UNUSED Mt Pyre Summit Aqua GruntM 3 (Double Battle w GruntF)
static const struct TrainerMon sParty_GruntMtPyre3[] = {
    {
    .ivs = {1, 13, 3, 15, 27, 7},
    .lvl = 36,
    .species = SPECIES_TENTACRUEL,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {19, 17, 27, 17, 14, 27},
    .lvl = 36,
    .species = SPECIES_SEVIPER,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Weather Institute Aqua GruntF (1st floor)
static const struct TrainerMon sParty_GruntWeatherInst4[] = {
    {
    .ivs = {29, 12, 23, 10, 12, 23},
    .lvl = 31,
    .species = SPECIES_SEVIPER,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Aqua Hideout B1F 3 GruntF
static const struct TrainerMon sParty_GruntAquaHideout5[] = {
    {
    .ivs = {17, 18, 19, 21, 0, 20},
    .lvl = 40,
    .species = SPECIES_MUK,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Aqua Hideout Submarine Room 4 GruntF (Double)
static const struct TrainerMon sParty_GruntAquaHideout6[] = {
    {
    .ivs = {21, 16, 17, 14, 19, 2},
    .lvl = 36,
    .species = SPECIES_TENTACRUEL,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {3, 15, 12, 13, 23, 13},
    .lvl = 36,
    .species = SPECIES_GOLBAT,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 123 (via 122 from Mt Pyre) Expert
static const struct TrainerMon sParty_Fredrick[] = {
    {
    .ivs = {27, 23, 11, 27, 9, 29},
    .lvl = 34,
    .species = SPECIES_HARIYAMA,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {27, 25, 2, 13, 20, 12},
    .lvl = 36,
    .species = SPECIES_MACHOKE,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Aqua Hideout Aqua Admin 
static const struct TrainerMon sParty_Matt[] = {
    {
    .ivs = {20, 21, 19, 14, 19, 6},
    .lvl = 40,
    .species = SPECIES_ELECTRODE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_RAIN_DANCE, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_MIRROR_COAT}
    },
    {
    .ivs = {5, 31, 6, 18, 10, 16},
    .lvl = 41,
    .species = SPECIES_CRAWDAUNT,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_ICE_BEAM, MOVE_BRICK_BREAK}
    },
    {
    .ivs = {27, 13, 16, 18, 26, 9},
    .lvl = 40,
    .species = SPECIES_MACHAMP,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_BODY_SLAM, MOVE_SUBMISSION, MOVE_ROCK_TOMB, MOVE_FOCUS_ENERGY}
    },
    {
    .ivs = {20, 25, 9, 20, 7, 18},
    .lvl = 42,
    .species = SPECIES_HUNTAIL,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BODY_SLAM, MOVE_CURSE, MOVE_CRUNCH, MOVE_SURF}
    }
};
// Mt Pyre Interior 2f Blackbelt
static const struct TrainerMon sParty_Zander[] = {
    {
    .ivs = {13, 11, 14, 17, 12, 13},
    .lvl = 36,
    .species = SPECIES_HARIYAMA,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Weather Institute Aqua Admin 
static const struct TrainerMon sParty_ShellyWeatherInstitute[] = {
    {
    .ivs = {24, 8, 4, 8, 21, 21},
    .lvl = 34,
    .species = SPECIES_MIGHTYENA,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_BITE, MOVE_TAKE_DOWN, MOVE_DIG, MOVE_SCARY_FACE}
    },
    {
    .ivs = {14, 9, 21, 20, 26, 20},
    .lvl = 33,
    .species = SPECIES_SEVIPER,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_POISON_FANG, MOVE_IRON_TAIL, MOVE_GLARE, MOVE_CRUNCH}
    },
    {
    .ivs = {31, 22, 23, 21, 16, 10},
    .lvl = 35,
    .species = SPECIES_GOREBYSS,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_DOUBLE_EDGE, MOVE_PSYCHIC, MOVE_WATER_PULSE, MOVE_AMNESIA}
    }
};
// Aqua Admin Seafloor Cavern
static const struct TrainerMon sParty_ShellySeafloorCavern[] = {
    {
    .ivs = {17, 4, 12, 2, 19, 14},
    .lvl = 46,
    .species = SPECIES_SEVIPER,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_POISON_TAIL, MOVE_POISON_FANG, MOVE_IRON_TAIL, MOVE_GLARE}
    },
    {
    .ivs = {29, 25, 20, 11, 3, 5},
    .lvl = 46,
    .species = SPECIES_CASTFORM,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_WEATHER_BALL, MOVE_RAIN_DANCE, MOVE_HEADBUTT, MOVE_AURORA_BEAM}
    },
    {
    .ivs = {15, 17, 16, 28, 20, 18},
    .lvl = 47,
    .species = SPECIES_GOREBYSS,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DOUBLE_EDGE, MOVE_PSYCHIC, MOVE_HYDRO_PUMP, MOVE_AMNESIA}
    }
};
// Aqua Leader Seafloor Cavern
static const struct TrainerMon sParty_Archie[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 48,
    .species = SPECIES_MIGHTYENA,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SUPER_FANG, MOVE_CRUNCH, MOVE_TAKE_DOWN, MOVE_ROAR}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 47,
    .species = SPECIES_WAILORD,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_WATER_SPOUT, MOVE_AMNESIA, MOVE_SURF, MOVE_REST}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 48,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_VITAL_THROW, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 48,
    .species = SPECIES_CROBAT,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_AIR_CUTTER, MOVE_BITE, MOVE_SLUDGE_BOMB, MOVE_HAZE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 49,
    .species = SPECIES_SHARPEDO,
    .heldItem = ITEM_LIECHI_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_CRUNCH, MOVE_SLASH, MOVE_ICE_BEAM}
    }
};
// Mt Pyre Interior 2F Hex Maniac
static const struct TrainerMon sParty_Leah[] = {
    {
    .ivs = {21, 5, 29, 21, 23, 22},
    .lvl = 35,
    .species = SPECIES_GRUMPIG,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 103 Aroma Lady
static const struct TrainerMon sParty_Daisy[] = {
    {
    .ivs = {18, 22, 20, 22, 19, 11},
    .lvl = 18,
    .species = SPECIES_SHROOMISH,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {22, 18, 12, 18, 7, 6},
    .lvl = 18,
    .species = SPECIES_ROSELIA,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
//Route 118 Mauville Aroma Lady
static const struct TrainerMon sParty_Rose1[] = {
    {
    .ivs = {10, 17, 19, 28, 28, 29},
    .lvl = 19,
    .species = SPECIES_ODDISH,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {16, 14, 25, 27, 17, 3},
    .lvl = 18,
    .species = SPECIES_SHROOMISH,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {15, 18, 6, 2, 23, 12},
    .lvl = 20,
    .species = SPECIES_ROSELIA,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Victory Road CooltrainerM
static const struct TrainerMon sParty_Felix[] = {
    {
    .ivs = {19, 11, 22, 10, 4, 16},
    .lvl = 48,
    .species = SPECIES_MEDICHAM,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_PSYCHIC, MOVE_ROLLING_KICK, MOVE_NONE, MOVE_NONE}
    },
    {
    .ivs = {22, 2, 14, 5, 11, 7},
    .lvl = 48,
    .species = SPECIES_SWALOT,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_SLUDGE_BOMB, MOVE_YAWN, MOVE_BODY_SLAM, MOVE_NONE}
    },
    {
    .ivs = {25, 12, 19, 23, 6, 10},
    .lvl = 48,
    .species = SPECIES_CLAYDOL,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_SKILL_SWAP, MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_NONE}
    }
};
// Route 123 (via 118 from mauville) Aroma Lady
static const struct TrainerMon sParty_Violet[] = {
    {
    .ivs = {14, 13, 5, 13, 26, 26},
    .lvl = 29,
    .species = SPECIES_ROSELIA,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {22, 7, 16, 20, 12, 22},
    .lvl = 29,
    .species = SPECIES_GLOOM,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Rose2[] = {
    {
    .ivs = {12, 8, 21, 6, 11, 10},
    .lvl = 29,
    .species = SPECIES_GLOOM,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {19, 26, 9, 3, 20, 11},
    .lvl = 28,
    .species = SPECIES_BRELOOM,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {17, 10, 20, 28, 23, 7},
    .lvl = 30,
    .species = SPECIES_ROSELIA,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Rose3[] = {
    {
    .ivs = {15, 24, 1, 25, 25, 6},
    .lvl = 36,
    .species = SPECIES_GLOOM,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {10, 15, 6, 15, 22, 2},
    .lvl = 35,
    .species = SPECIES_BRELOOM,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {13, 25, 11, 15, 29, 11},
    .lvl = 37,
    .species = SPECIES_ROSELIA,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Rose4[] = {
    {
    .ivs = {15, 25, 14, 13, 13, 18},
    .lvl = 50,
    .species = SPECIES_VILEPLUME,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {14, 17, 21, 10, 1, 14},
    .lvl = 49,
    .species = SPECIES_BRELOOM,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {23, 6, 15, 11, 18, 21},
    .lvl = 49,
    .species = SPECIES_VICTREEBEL,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {26, 18, 23, 13, 7, 11},
    .lvl = 49,
    .species = SPECIES_JUMPLUFF,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {12, 18, 14, 21, 15, 22},
    .lvl = 50,
    .species = SPECIES_ROSELIA,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Rose5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_JUMPLUFF,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 252, 0, 0},
    .moves = {MOVE_SLEEP_POWDER, MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_ENCORE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_VICTREEBEL,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_ENCORE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_EXEGGUTOR,
    .heldItem = ITEM_CHESTO_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_SLEEP_POWDER, MOVE_DREAM_EATER, MOVE_REST, MOVE_EGG_BOMB}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_SCEPTILE,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 252, 0, 252, 0},
    .moves = {MOVE_LEAF_BLADE, MOVE_SLASH, MOVE_CUT, MOVE_ENDURE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_LEPPA_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {202, 202, 0, 0, 0, 100},
    .moves = {MOVE_LEECH_SEED, MOVE_CURSE, MOVE_ANCIENT_POWER, MOVE_RECOVER}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_ROSELIA,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GRASS_WHISTLE, MOVE_GIGA_DRAIN, MOVE_INGRAIN, MOVE_SLUDGE_BOMB}
    }
};
//Route 111 Desert Ruin Maniac 1
static const struct TrainerMon sParty_Dusty1[] = {
    {
    .ivs = {16, 15, 15, 12, 5, 19},
    .lvl = 31,
    .species = SPECIES_SANDSLASH,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_SLASH}
    }
};
// Route 120 Ruin Maniac
static const struct TrainerMon sParty_Chip[] = {
    {
    .ivs = {15, 13, 5, 16, 17, 22},
    .lvl = 32,
    .species = SPECIES_BALTOY,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_PSYBEAM, MOVE_SELF_DESTRUCT, MOVE_SANDSTORM, MOVE_ANCIENT_POWER}
    },
    {
    .ivs = {6, 19, 11, 15, 1, 18},
    .lvl = 32,
    .species = SPECIES_SANDSHREW,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    },
    {
    .ivs = {7, 13, 15, 20, 9, 11},
    .lvl = 33,
    .species = SPECIES_SANDSLASH,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_ROCK_TOMB}
    }
};
// Route 105 Ruin Maniac
static const struct TrainerMon sParty_Foster[] = {
    {
    .ivs = {27, 20, 4, 20, 21, 27},
    .lvl = 30,
    .species = SPECIES_SANDSLASH,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    },
    {
    .ivs = {10, 16, 10, 3, 9, 15},
    .lvl = 30,
    .species = SPECIES_SANDSLASH,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty2[] = {
    {
    .ivs = {23, 23, 12, 22, 3, 6},
    .lvl = 33,
    .species = SPECIES_SANDSLASH,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty3[] = {
    {
    .ivs = {18, 16, 15, 17, 19, 20},
    .lvl = 35,
    .species = SPECIES_SANDSLASH,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty4[] = {
    {
    .ivs = {10, 14, 14, 16, 8, 20},
    .lvl = 48,
    .species = SPECIES_SANDSLASH,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty5[] = {
    {
    .ivs = {14, 8, 8, 12, 14, 18},
    .lvl = 60,
    .species = SPECIES_DUGTRIO,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {18, 14, 4, 25, 15, 11},
    .lvl = 61,
    .species = SPECIES_SANDSLASH,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};
//Route 111 Mid Interviewer
static const struct TrainerMon sParty_GabbyAndTy1[] = {
    {
    .ivs = {21, 14, 8, 5, 9, 29},
    .lvl = 24,
    .species = SPECIES_MAGNEMITE,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {20, 16, 25, 17, 15, 12},
    .lvl = 24,
    .species = SPECIES_WHISMUR,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
//Route 118 East Interviewer
static const struct TrainerMon sParty_GabbyAndTy2[] = {
    {
    .ivs = {17, 8, 19, 4, 15, 11},
    .lvl = 30,
    .species = SPECIES_MAGNEMITE,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {14, 25, 18, 13, 12, 16},
    .lvl = 30,
    .species = SPECIES_LOUDRED,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 120 Interviewer
static const struct TrainerMon sParty_GabbyAndTy3[] = {
    {
    .ivs = {7, 23, 11, 3, 7, 20},
    .lvl = 35,
    .species = SPECIES_MAGNETON,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {12, 18, 20, 15, 22, 9},
    .lvl = 35,
    .species = SPECIES_LOUDRED,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_GabbyAndTy4[] = {
    {
    .ivs = {6, 13, 26, 10, 21, 21},
    .lvl = 37,
    .species = SPECIES_MAGNETON,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {25, 4, 24, 13, 17, 25},
    .lvl = 37,
    .species = SPECIES_LOUDRED,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_GabbyAndTy5[] = {
    {
    .ivs = {13, 16, 23, 10, 2, 26},
    .lvl = 40,
    .species = SPECIES_MAGNETON,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {25, 15, 7, 11, 19, 7},
    .lvl = 40,
    .species = SPECIES_LOUDRED,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_GabbyAndTy6[] = {
    {
    .ivs = {10, 15, 9, 15, 24, 7},
    .lvl = 44,
    .species = SPECIES_MAGNETON,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_SONIC_BOOM, MOVE_THUNDER_WAVE, MOVE_METAL_SOUND, MOVE_THUNDERBOLT}
    },
    {
    .ivs = {25, 14, 4, 26, 12, 16},
    .lvl = 44,
    .species = SPECIES_EXPLOUD,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_ASTONISH, MOVE_STOMP, MOVE_SUPERSONIC, MOVE_HYPER_VOICE}
    }
};
// Route 109 TuberF 2 (Potential Double Battle with Chandler)
static const struct TrainerMon sParty_Lola1[] = {
    {
    .ivs = {8, 22, 19, 4, 22, 18},
    .lvl = 14,
    .species = SPECIES_AZURILL,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {15, 16, 16, 15, 8, 16},
    .lvl = 16,
    .species = SPECIES_MARILL,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
//Route 109 Surf TuberF 1
static const struct TrainerMon sParty_Austina[] = {
    {
    .ivs = {15, 18, 8, 30, 21, 20},
    .lvl = 28,
    .species = SPECIES_AZUMARILL,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
//Route 109 Surf TuberF 2
static const struct TrainerMon sParty_Gwen[] = {
    {
    .ivs = {15, 26, 12, 19, 27, 15},
    .lvl = 28,
    .species = SPECIES_AZUMARILL,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Lola2[] = {
    {
    .ivs = {14, 16, 10, 19, 16, 18},
    .lvl = 28,
    .species = SPECIES_MARILL,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {8, 16, 28, 5, 4, 7},
    .lvl = 28,
    .species = SPECIES_AZUMARILL,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Lola3[] = {
    {
    .ivs = {4, 18, 6, 11, 19, 11},
    .lvl = 37,
    .species = SPECIES_AZUMARILL,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {10, 6, 17, 10, 13, 21},
    .lvl = 37,
    .species = SPECIES_AZUMARILL,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Lola4[] = {
    {
    .ivs = {15, 29, 22, 15, 6, 14},
    .lvl = 45,
    .species = SPECIES_AZUMARILL,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {16, 23, 11, 15, 22, 13},
    .lvl = 45,
    .species = SPECIES_AZUMARILL,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Lola5[] = {
    {
    .ivs = {15, 13, 9, 3, 13, 8},
    .lvl = 56,
    .species = SPECIES_AZUMARILL,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {23, 19, 10, 11, 1, 14},
    .lvl = 56,
    .species = SPECIES_AZUMARILL,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Route 109 TuberM 1 (Potential Double Battle with Edmond or Hailey)
static const struct TrainerMon sParty_Ricky1[] = {
    {
    .ivs = {19, 23, 21, 9, 11, 2},
    .lvl = 16,
    .species = SPECIES_ZIGZAGOON,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_SAND_ATTACK, MOVE_HEADBUTT, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};
// Route 109 Seashore House TuberM
static const struct TrainerMon sParty_Simon[] = {
    {
    .ivs = {14, 29, 5, 15, 15, 23},
    .lvl = 14,
    .species = SPECIES_CORPHISH,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {16, 16, 16, 4, 16, 16},
    .lvl = 16,
    .species = SPECIES_PSYDUCK,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Abandoned Ship TuberM
static const struct TrainerMon sParty_Charlie[] = {
    {
    .ivs = {12, 12, 21, 20, 19, 18},
    .lvl = 32,
    .species = SPECIES_LINOONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_HEADBUTT, MOVE_SHADOW_BALL, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Ricky2[] = {
    {
    .ivs = {5, 23, 19, 12, 14, 18},
    .lvl = 29,
    .species = SPECIES_LINOONE,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Ricky3[] = {
    {
    .ivs = {24, 13, 23, 29, 15, 16},
    .lvl = 39,
    .species = SPECIES_LINOONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Ricky4[] = {
    {
    .ivs = {23, 19, 26, 11, 15, 12},
    .lvl = 52,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Ricky5[] = {
    {
    .ivs = {14, 12, 20, 19, 14, 19},
    .lvl = 64,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};
//Petalburg Gym CooltrainerM Speed Room
static const struct TrainerMon sParty_Randall[] = {
    {
    .ivs = {15, 25, 7, 5, 13, 25},
    .lvl = 32,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_QUICK_ATTACK, MOVE_AGILITY, MOVE_WING_ATTACK, MOVE_FACADE}
    }
};
//Petalburg Gym CooltrainerM Confusion Room
static const struct TrainerMon sParty_Parker[] = {
    {
    .ivs = {11, 28, 7, 20, 27, 11},
    .lvl = 32,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_TEETER_DANCE, MOVE_DIZZY_PUNCH, MOVE_FAINT_ATTACK, MOVE_NONE}
    }
};
//Petalburg Gym CooltrainerM Recovery Room
static const struct TrainerMon sParty_George[] = {
    {
    .ivs = {14, 7, 13, 23, 20, 9},
    .lvl = 32,
    .species = SPECIES_SLAKOTH,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_SLACK_OFF, MOVE_COUNTER, MOVE_SHADOW_BALL, MOVE_NONE}
    }
};
//Petalburg Gym CooltrainerM Berke
static const struct TrainerMon sParty_Berke[] = {
    {
    .ivs = {22, 23, 20, 29, 25, 20},
    .lvl = 32,
    .species = SPECIES_VIGOROTH,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_FOCUS_ENERGY, MOVE_SLASH, MOVE_FAINT_ATTACK, MOVE_NONE}
    }
};
// Route 123 (via 122 from Mt Pyre) CooltrainerM
static const struct TrainerMon sParty_Braxton[] = {
    {
    .ivs = {26, 25, 28, 16, 4, 14},
    .lvl = 33,
    .species = SPECIES_SWELLOW,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_FOCUS_ENERGY, MOVE_QUICK_ATTACK, MOVE_WING_ATTACK, MOVE_ENDEAVOR}
    },
    {
    .ivs = {30, 6, 15, 18, 13, 15},
    .lvl = 34,
    .species = SPECIES_TRAPINCH,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_BITE, MOVE_DIG, MOVE_FAINT_ATTACK, MOVE_SAND_TOMB}
    },
    {
    .ivs = {12, 10, 11, 24, 13, 6},
    .lvl = 35,
    .species = SPECIES_WAILMER,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_ROLLOUT, MOVE_WHIRLPOOL, MOVE_ASTONISH, MOVE_WATER_PULSE}
    },
    {
    .ivs = {16, 11, 15, 13, 20, 5},
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_THUNDERBOLT, MOVE_SUPERSONIC, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM}
    },
    {
    .ivs = {15, 11, 20, 22, 8, 19},
    .lvl = 35,
    .species = SPECIES_SHIFTRY,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_GIGA_DRAIN, MOVE_FAINT_ATTACK, MOVE_DOUBLE_TEAM, MOVE_SWAGGER}
    }
};
// Trick House 8
static const struct TrainerMon sParty_Vincent[] = {
    {
    .ivs = {6, 22, 17, 13, 13, 24},
    .lvl = 54,
    .species = SPECIES_BANETTE,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {18, 26, 9, 19, 19, 10},
    .lvl = 53,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {23, 21, 21, 10, 15, 14},
    .lvl = 54,
    .species = SPECIES_SHARPEDO,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Trick House 8
static const struct TrainerMon sParty_Leroy[] = {
    {
    .ivs = {21, 8, 5, 23, 25, 16},
    .lvl = 52,
    .species = SPECIES_MAWILE,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {13, 20, 1, 15, 21, 24},
    .lvl = 54,
    .species = SPECIES_STARMIE,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {13, 30, 14, 9, 12, 18},
    .lvl = 52,
    .species = SPECIES_FLYGON,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Route 111 Northern End
static const struct TrainerMon sParty_Wilton1[] = {
    {
    .ivs = {16, 12, 12, 20, 23, 9},
    .lvl = 22,
    .species = SPECIES_ELECTRIKE,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {9, 11, 14, 4, 16, 12},
    .lvl = 23,
    .species = SPECIES_WAILMER,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {14, 13, 19, 22, 4, 16},
    .lvl = 22,
    .species = SPECIES_MAKUHITA,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Victory Road CooltrainerM
static const struct TrainerMon sParty_Edgar[] = {
    {
    .ivs = {10, 13, 12, 28, 6, 16},
    .lvl = 50,
    .species = SPECIES_CACTURNE,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {23, 10, 17, 20, 27, 11},
    .lvl = 50,
    .species = SPECIES_AGGRON,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Victory Road CooltrainerM
static const struct TrainerMon sParty_Albert[] = {
    {
    .ivs = {8, 18, 10, 14, 21, 23},
    .lvl = 50,
    .species = SPECIES_MAGNETON,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {23, 14, 9, 20, 9, 14},
    .lvl = 50,
    .species = SPECIES_MUK,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Victory Road CooltrainerM
static const struct TrainerMon sParty_Samuel[] = {
    {
    .ivs = {19, 21, 3, 16, 18, 19},
    .lvl = 48,
    .species = SPECIES_SWELLOW,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {3, 16, 15, 17, 17, 15},
    .lvl = 49,
    .species = SPECIES_MAWILE,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {21, 25, 16, 6, 16, 30},
    .lvl = 48,
    .species = SPECIES_ALAKAZAM,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Victory Road CooltrainerM Winstrate
static const struct TrainerMon sParty_Vito[] = {
    {
    .ivs = {24, 14, 8, 13, 3, 4},
    .lvl = 49,
    .species = SPECIES_SWELLOW,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_STEEL_WING, MOVE_ENDEAVOR, MOVE_AERIAL_ACE, MOVE_FACADE}
    },
    {
    .ivs = {16, 21, 19, 28, 12, 13},
    .lvl = 48,
    .species = SPECIES_ALAKAZAM,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_SHOCK_WAVE, MOVE_RECOVER, MOVE_CALM_MIND, MOVE_PSYCHIC}
    },
    {
    .ivs = {15, 6, 13, 13, 11, 10},
    .lvl = 49,
    .species = SPECIES_MANECTRIC,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_SHADOW_BALL, MOVE_CHARGE, MOVE_THUNDERBOLT, MOVE_CRUNCH}
    },
    {
    .ivs = {5, 4, 8, 15, 21, 8},
    .lvl = 50,
    .species = SPECIES_SHIFTRY,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_FAINT_ATTACK, MOVE_FAKE_OUT, MOVE_LEAF_BLADE, MOVE_EXTRASENSORY}
    }
};
// Victory Road CooltrainerM
static const struct TrainerMon sParty_Owen[] = {
    {
    .ivs = {16, 18, 27, 20, 20, 20},
    .lvl = 49,
    .species = SPECIES_KECLEON,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {13, 4, 12, 8, 17, 17},
    .lvl = 48,
    .species = SPECIES_GOLEM,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {19, 15, 9, 17, 26, 26},
    .lvl = 47,
    .species = SPECIES_WAILORD,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Wilton2[] = {
    {
    .ivs = {3, 16, 18, 1, 11, 19},
    .lvl = 28,
    .species = SPECIES_ELECTRIKE,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {16, 10, 17, 18, 7, 12},
    .lvl = 28,
    .species = SPECIES_WAILMER,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {28, 3, 22, 6, 17, 16},
    .lvl = 28,
    .species = SPECIES_HARIYAMA,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Wilton3[] = {
    {
    .ivs = {20, 7, 18, 15, 11, 18},
    .lvl = 38,
    .species = SPECIES_MANECTRIC,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {20, 14, 16, 2, 23, 13},
    .lvl = 38,
    .species = SPECIES_WAILMER,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {20, 7, 12, 23, 8, 21},
    .lvl = 38,
    .species = SPECIES_HARIYAMA,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Wilton4[] = {
    {
    .ivs = {13, 20, 6, 22, 9, 13},
    .lvl = 51,
    .species = SPECIES_MANECTRIC,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {13, 15, 10, 8, 24, 19},
    .lvl = 51,
    .species = SPECIES_WAILORD,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {16, 15, 16, 17, 14, 8},
    .lvl = 51,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Wilton5[] = {
    {
    .ivs = {6, 8, 19, 28, 19, 6},
    .lvl = 57,
    .species = SPECIES_MANECTRIC,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {2, 0, 13, 18, 21, 12},
    .lvl = 56,
    .species = SPECIES_WAILORD,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {17, 8, 6, 11, 17, 11},
    .lvl = 57,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Route 133 CooltrainerM
static const struct TrainerMon sParty_Warren[] = {
    {
    .ivs = {5, 6, 13, 15, 26, 23},
    .lvl = 45,
    .species = SPECIES_GOLEM,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {13, 20, 1, 5, 10, 15},
    .lvl = 45,
    .species = SPECIES_LAIRON,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {5, 12, 14, 20, 17, 9},
    .lvl = 45,
    .species = SPECIES_SHIFTRY,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
//Petalburg Gym CooltrainerF Accuracy Room
static const struct TrainerMon sParty_Mary[] = {
    {
    .ivs = {16, 15, 15, 21, 25, 14},
    .lvl = 32,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_FAINT_ATTACK, MOVE_SHOCK_WAVE, MOVE_SWIFT, MOVE_NONE}
    }
};
//Petalburg Gym CooltrainerF Defense Room
static const struct TrainerMon sParty_Alexia[] = {
    {
    .ivs = {22, 17, 13, 16, 18, 4},
    .lvl = 32,
    .species = SPECIES_WIGGLYTUFF,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_DEFENSE_CURL, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_NONE}
    }
};
//Petalburg Gym CooltrainerF Strength Room
static const struct TrainerMon sParty_Jody[] = {
    {
    .ivs = {6, 7, 25, 17, 14, 9},
    .lvl = 32,
    .species = SPECIES_ZANGOOSE,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_SWORDS_DANCE, MOVE_SLASH, MOVE_NONE, MOVE_NONE}
    }
};
// Route 123 (via 122 from Mt Pyre) CooltrainerF
static const struct TrainerMon sParty_Wendy[] = {
    {
    .ivs = {13, 4, 19, 22, 17, 17},
    .lvl = 35,
    .species = SPECIES_MAWILE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_BATON_PASS, MOVE_FAINT_ATTACK, MOVE_FAKE_TEARS, MOVE_BITE}
    },
    {
    .ivs = {20, 19, 25, 21, 19, 17},
    .lvl = 35,
    .species = SPECIES_ROSELIA,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_MEGA_DRAIN, MOVE_MAGICAL_LEAF, MOVE_GRASS_WHISTLE, MOVE_LEECH_SEED}
    },
    {
    .ivs = {7, 11, 12, 14, 16, 18},
    .lvl = 35,
    .species = SPECIES_PELIPPER,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_FLY, MOVE_WATER_PULSE, MOVE_MIST, MOVE_NONE}
    }
};
// Trick House 8
static const struct TrainerMon sParty_Keira[] = {
    {
    .ivs = {18, 9, 16, 2, 23, 3},
    .lvl = 52,
    .species = SPECIES_AGGRON,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {20, 23, 4, 6, 15, 10},
    .lvl = 52,
    .species = SPECIES_MANECTRIC,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {15, 18, 18, 8, 12, 0},
    .lvl = 52,
    .species = SPECIES_MILOTIC,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Route 111 Northern End
static const struct TrainerMon sParty_Brooke1[] = {
    {
    .ivs = {12, 27, 15, 10, 15, 21},
    .lvl = 23,
    .species = SPECIES_WINGULL,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {2, 27, 18, 8, 18, 28},
    .lvl = 23,
    .species = SPECIES_NUMEL,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {9, 15, 15, 1, 10, 18},
    .lvl = 23,
    .species = SPECIES_ROSELIA,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 120 CooltrainerF
static const struct TrainerMon sParty_Jennifer[] = {
    {
    .ivs = {16, 8, 2, 12, 23, 6},
    .lvl = 35,
    .species = SPECIES_SWALOT,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Victory Road CooltrainerF
static const struct TrainerMon sParty_Hope[] = {
    {
    .ivs = {22, 20, 13, 24, 6, 17},
    .lvl = 50,
    .species = SPECIES_ROSELIA,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Victory Road CooltrainerF
static const struct TrainerMon sParty_Shannon[] = {
    {
    .ivs = {18, 15, 18, 10, 15, 4},
    .lvl = 51,
    .species = SPECIES_CLAYDOL,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Victory Road CooltrainerF
static const struct TrainerMon sParty_Michelle[] = {
    {
    .ivs = {18, 3, 16, 16, 11, 22},
    .lvl = 49,
    .species = SPECIES_TORKOAL,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {16, 14, 11, 27, 17, 26},
    .lvl = 49,
    .species = SPECIES_MEDICHAM,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {19, 23, 15, 5, 16, 16},
    .lvl = 49,
    .species = SPECIES_LUDICOLO,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Victory Road CooltrainerF
static const struct TrainerMon sParty_Caroline[] = {
    {
    .ivs = {24, 20, 4, 18, 8, 15},
    .lvl = 49,
    .species = SPECIES_SKARMORY,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {21, 18, 8, 24, 15, 23},
    .lvl = 49,
    .species = SPECIES_SABLEYE,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Victory Road CooltrainerF
static const struct TrainerMon sParty_Julie[] = {
    {
    .ivs = {19, 13, 18, 16, 21, 21},
    .lvl = 48,
    .species = SPECIES_SANDSLASH,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {19, 16, 13, 17, 10, 13},
    .lvl = 48,
    .species = SPECIES_NINETALES,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {24, 5, 30, 11, 21, 20},
    .lvl = 48,
    .species = SPECIES_TROPIUS,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Brooke2[] = {
    {
    .ivs = {20, 21, 20, 15, 15, 11},
    .lvl = 28,
    .species = SPECIES_PELIPPER,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {11, 12, 4, 2, 11, 20},
    .lvl = 28,
    .species = SPECIES_NUMEL,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {13, 15, 23, 9, 25, 12},
    .lvl = 28,
    .species = SPECIES_ROSELIA,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Brooke3[] = {
    {
    .ivs = {14, 5, 11, 17, 20, 12},
    .lvl = 37,
    .species = SPECIES_PELIPPER,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {15, 16, 22, 18, 16, 12},
    .lvl = 37,
    .species = SPECIES_NUMEL,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {11, 14, 25, 20, 18, 12},
    .lvl = 37,
    .species = SPECIES_ROSELIA,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Brooke4[] = {
    {
    .ivs = {15, 22, 8, 5, 8, 16},
    .lvl = 46,
    .species = SPECIES_PELIPPER,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {28, 24, 23, 12, 15, 18},
    .lvl = 48,
    .species = SPECIES_NUMEL,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {19, 18, 17, 20, 11, 14},
    .lvl = 49,
    .species = SPECIES_ROSELIA,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Brooke5[] = {
    {
    .ivs = {19, 29, 26, 14, 21, 26},
    .lvl = 60,
    .species = SPECIES_PELIPPER,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {24, 15, 14, 16, 26, 10},
    .lvl = 61,
    .species = SPECIES_CAMERUPT,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {3, 22, 21, 2, 22, 18},
    .lvl = 61,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Trick Room 7
static const struct TrainerMon sParty_Patricia[] = {
    {
    .ivs = {27, 22, 22, 20, 10, 17},
    .lvl = 44,
    .species = SPECIES_BANETTE,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {21, 14, 16, 25, 12, 11},
    .lvl = 44,
    .species = SPECIES_LUNATONE,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 123 (via 122 from Mt Pyre) Hex Maniac
static const struct TrainerMon sParty_Kindra[] = {
    {
    .ivs = {18, 24, 22, 24, 22, 10},
    .lvl = 36,
    .species = SPECIES_DUSKULL,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {22, 22, 14, 25, 21, 20},
    .lvl = 36,
    .species = SPECIES_SHUPPET,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 121 Hex Maniac
static const struct TrainerMon sParty_Tammy[] = {
    {
    .ivs = {19, 26, 16, 13, 16, 16},
    .lvl = 35,
    .species = SPECIES_DUSKULL,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {21, 14, 13, 8, 20, 16},
    .lvl = 36,
    .species = SPECIES_SHUPPET,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Mt Pyre Interior 6F Hex Maniac
static const struct TrainerMon sParty_Valerie1[] = {
    {
    .ivs = {7, 28, 21, 21, 9, 19},
    .lvl = 36,
    .species = SPECIES_SABLEYE,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Mt Pyre Interior 4F Hex Maniac
static const struct TrainerMon sParty_Tasha[] = {
    {
    .ivs = {13, 10, 17, 18, 24, 21},
    .lvl = 36,
    .species = SPECIES_SHUPPET,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Valerie2[] = {
    {
    .ivs = {18, 20, 14, 3, 27, 14},
    .lvl = 37,
    .species = SPECIES_SABLEYE,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {23, 21, 22, 15, 22, 22},
    .lvl = 37,
    .species = SPECIES_GRUMPIG,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Valerie3[] = {
    {
    .ivs = {15, 26, 11, 8, 9, 3},
    .lvl = 39,
    .species = SPECIES_GRUMPIG,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {26, 16, 19, 7, 13, 13},
    .lvl = 39,
    .species = SPECIES_SABLEYE,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Valerie4[] = {
    {
    .ivs = {10, 3, 13, 26, 25, 10},
    .lvl = 42,
    .species = SPECIES_GRUMPIG,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {7, 16, 8, 3, 6, 6},
    .lvl = 42,
    .species = SPECIES_SABLEYE,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Valerie5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {152, 0, 126, 0, 102, 126},
    .moves = {MOVE_SHADOW_PUNCH, MOVE_CALM_MIND, MOVE_PAIN_SPLIT, MOVE_THUNDER_PUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_SABLEYE,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_MOONLIGHT, MOVE_WILL_O_WISP, MOVE_FIRE_PUNCH, MOVE_SHADOW_BALL}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_SALAC_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 100, 0, 0, 152, 0},
    .moves = {MOVE_ENDURE, MOVE_DESTINY_BOND, MOVE_SHADOW_BALL, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_MISDREAVUS,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_WILL_O_WISP, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_THUNDERBOLT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_SHEDINJA,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_AERIAL_ACE, MOVE_SILVER_WIND, MOVE_FAINT_ATTACK, MOVE_SHADOW_BALL}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_GENGAR,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FIRE_PUNCH, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_WILL_O_WISP}
    }
};
//Route 104 Lady
static const struct TrainerMon sParty_Cindy1[] = {
    {
    .ivs = {12, 9, 7, 16, 16, 6},
    .lvl = 10,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_NUGGET,
    .evs = {14, 14, 14, 14, 14, 14},
    }
};
//Sootopolis Gym Lady 1 (Middle Level - Double Battle w Annika)
static const struct TrainerMon sParty_Daphne[] = {
    {
    .ivs = {6, 16, 17, 29, 10, 4},
    .lvl = 50,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_BRIGHT_POWDER,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_ATTRACT, MOVE_LOVELY_KISS, MOVE_RAIN_DANCE, MOVE_WATER_PULSE}
    },
    {
    .ivs = {18, 14, 17, 13, 28, 19},
    .lvl = 50,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_BRIGHT_POWDER,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_ATTRACT, MOVE_LOVELY_KISS, MOVE_RAIN_DANCE, MOVE_WATER_PULSE}
    }
};
// Space Center
static const struct TrainerMon sParty_GruntSpaceCenter2[] = {
    {
    .ivs = {16, 15, 15, 31, 12, 18},
    .lvl = 42,
    .species = SPECIES_MIGHTYENA,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {8, 11, 7, 19, 10, 20},
    .lvl = 42,
    .species = SPECIES_GOLEM,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {25, 19, 22, 18, 16, 19},
    .lvl = 42,
    .species = SPECIES_MAGCARGO,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Cindy2[] = {
    {
    .ivs = {15, 25, 19, 18, 14, 23},
    .lvl = 13,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_NUGGET,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_NONE, MOVE_NONE}
    }
};
//Sootopolis Gym Lady 2 (Highest Level - Double Battle w Bridget)
static const struct TrainerMon sParty_Brianna[] = {
    {
    .ivs = {4, 21, 7, 16, 7, 18},
    .lvl = 47,
    .species = SPECIES_SEAKING,
    .heldItem = ITEM_NUGGET,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// SS Tidal Aroma Lady (nat dex)
static const struct TrainerMon sParty_Naomi[] = {
    {
    .ivs = {22, 21, 5, 13, 20, 6},
    .lvl = 55,
    .species = SPECIES_SUNFLORA,
    .heldItem = ITEM_SUN_STONE,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {18, 16, 19, 16, 2, 4},
    .lvl = 55,
    .species = SPECIES_SKIPLOOM,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    },
};

static const struct TrainerMon sParty_Cindy3[] = {
    {
    .ivs = {14, 28, 10, 20, 9, 22},
    .lvl = 35,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_NUGGET,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_DOUBLE_SLAP, MOVE_SING, MOVE_FAINT_ATTACK, MOVE_CHARM}
    }
};

static const struct TrainerMon sParty_Cindy4[] = {
    {
    .ivs = {17, 22, 3, 12, 18, 15},
    .lvl = 47,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_NUGGET,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_DOUBLE_SLAP, MOVE_SING, MOVE_FAINT_ATTACK, MOVE_CHARM}
    }
};

static const struct TrainerMon sParty_Cindy5[] = {
    {
    .ivs = {19, 12, 3, 3, 31, 11},
    .lvl = 53,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DOUBLE_EDGE, MOVE_SING, MOVE_FAINT_ATTACK, MOVE_THUNDER_WAVE}
    }
};

static const struct TrainerMon sParty_Cindy6[] = {
    {
    .ivs = {8, 10, 24, 14, 18, 24},
    .lvl = 70,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DOUBLE_EDGE, MOVE_SING, MOVE_FAINT_ATTACK, MOVE_THUNDER_WAVE}
    }
};
// Mt Chimney Beauty
static const struct TrainerMon sParty_Melissa[] = {
    {
    .ivs = {20, 17, 10, 11, 10, 14},
    .lvl = 28,
    .species = SPECIES_AZUMARILL,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Mt Chimney  Beauty 2
static const struct TrainerMon sParty_Sheila[] = {
    {
    .ivs = {17, 21, 11, 6, 20, 24},
    .lvl = 27,
    .species = SPECIES_BRELOOM,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Mt Chimney Beauty 3
static const struct TrainerMon sParty_Shirley[] = {
    {
    .ivs = {16, 15, 8, 19, 7, 11},
    .lvl = 27,
    .species = SPECIES_SPOINK,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 121 Beauty
static const struct TrainerMon sParty_Jessica1[] = {
    {
    .ivs = {16, 8, 24, 18, 11, 14},
    .lvl = 34,
    .species = SPECIES_KECLEON,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FAINT_ATTACK}
    },
    {
    .ivs = {17, 14, 16, 19, 14, 14},
    .lvl = 34,
    .species = SPECIES_SEVIPER,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};
//Sootopolis Gym Beauty 1 (Lowest Level)
static const struct TrainerMon sParty_Connie[] = {
    {
    .ivs = {8, 19, 27, 3, 11, 21},
    .lvl = 46,
    .species = SPECIES_WALREIN,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
//Sootopolis Gym Beauty 4 (Highest Level - Double Battle w Brianna)
static const struct TrainerMon sParty_Bridget[] = {
    {
    .ivs = {17, 8, 17, 14, 4, 10},
    .lvl = 48,
    .species = SPECIES_AZUMARILL,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
//Sootopolis Gym Beauty 3 (Highest Level - Double Battle w Bethany)
static const struct TrainerMon sParty_Olivia[] = {
    {
    .ivs = {14, 23, 17, 9, 22, 16},
    .lvl = 47,
    .species = SPECIES_CLAMPERL,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_IRON_DEFENSE, MOVE_WHIRLPOOL, MOVE_RAIN_DANCE, MOVE_WATER_PULSE}
    },
    {
    .ivs = {15, 16, 12, 20, 16, 6},
    .lvl = 47,
    .species = SPECIES_CRAWDAUNT,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_TAUNT, MOVE_CRABHAMMER, MOVE_WATER_PULSE, MOVE_NONE}
    },
    {
    .ivs = {25, 16, 31, 8, 7, 17},
    .lvl = 47,
    .species = SPECIES_LUDICOLO,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_UPROAR, MOVE_FURY_SWIPES, MOVE_FAKE_OUT, MOVE_WATER_PULSE}
    }
};
//Sootopolis Gym Beauty 2 (Highest Level - Double Battle w Crissy)
static const struct TrainerMon sParty_Tiffany[] = {
    {
    .ivs = {14, 27, 17, 16, 17, 13},
    .lvl = 47,
    .species = SPECIES_SHARPEDO,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {20, 3, 20, 11, 22, 18},
    .lvl = 48,
    .species = SPECIES_SHARPEDO,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Jessica2[] = {
    {
    .ivs = {22, 26, 29, 14, 15, 17},
    .lvl = 37,
    .species = SPECIES_KECLEON,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FAINT_ATTACK}
    },
    {
    .ivs = {20, 27, 13, 21, 4, 2},
    .lvl = 37,
    .species = SPECIES_SEVIPER,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Jessica3[] = {
    {
    .ivs = {17, 8, 22, 14, 13, 20},
    .lvl = 43,
    .species = SPECIES_KECLEON,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FAINT_ATTACK}
    },
    {
    .ivs = {21, 11, 13, 10, 2, 16},
    .lvl = 43,
    .species = SPECIES_SEVIPER,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Jessica4[] = {
    {
    .ivs = {8, 12, 19, 29, 23, 6},
    .lvl = 50,
    .species = SPECIES_KECLEON,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FAINT_ATTACK}
    },
    {
    .ivs = {16, 12, 11, 12, 18, 12},
    .lvl = 50,
    .species = SPECIES_SEVIPER,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Jessica5[] = {
    {
    .ivs = {25, 28, 2, 15, 17, 14},
    .lvl = 58,
    .species = SPECIES_KECLEON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FAINT_ATTACK}
    },
    {
    .ivs = {11, 25, 11, 9, 16, 23},
    .lvl = 58,
    .species = SPECIES_ARBOK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GLARE, MOVE_SLUDGE_BOMB, MOVE_BITE, MOVE_STOCKPILE}
    },
    {
    .ivs = {12, 23, 13, 11, 19, 8},
    .lvl = 58,
    .species = SPECIES_SEVIPER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};
//Route 104 North Rich Boy
static const struct TrainerMon sParty_Winston1[] = {
    {
    .ivs = {9, 14, 16, 28, 14, 16},
    .lvl = 11,
    .species = SPECIES_SLAKOTH,
    .heldItem = ITEM_NUGGET,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Route 133 ExpertF
static const struct TrainerMon sParty_Mollie[] = {
    {
    .ivs = {15, 9, 28, 7, 27, 5},
    .lvl = 46,
    .species = SPECIES_ROSELIA,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {9, 22, 5, 25, 11, 13},
    .lvl = 47,
    .species = SPECIES_MEDICHAM,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// SS Tidal Rich Boy (nat dex)
static const struct TrainerMon sParty_Garret[] = {
    {
    .ivs = {12, 22, 13, 11, 25, 17},
    .lvl = 52,
    .species = SPECIES_CHANSEY,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {18, 14, 12, 23, 27, 8},
    .lvl = 52,
    .species = SPECIES_PERSIAN,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Winston2[] = {
    {
    .ivs = {5, 5, 25, 3, 18, 15},
    .lvl = 31,
    .species = SPECIES_VIGOROTH,
    .heldItem = ITEM_NUGGET,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Winston3[] = {
    {
    .ivs = {23, 11, 11, 17, 11, 25},
    .lvl = 34,
    .species = SPECIES_VIGOROTH,
    .heldItem = ITEM_NUGGET,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {13, 11, 17, 17, 16, 22},
    .lvl = 34,
    .species = SPECIES_VIGOROTH,
    .heldItem = ITEM_NUGGET,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Winston4[] = {
    {
    .ivs = {14, 13, 4, 20, 12, 22},
    .lvl = 46,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_NUGGET,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_BODY_SLAM, MOVE_THUNDERBOLT, MOVE_YAWN, MOVE_DYNAMIC_PUNCH}
    },
    {
    .ivs = {29, 13, 11, 10, 18, 29},
    .lvl = 46,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_NUGGET,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_FACADE, MOVE_YAWN, MOVE_ENCORE, MOVE_EARTHQUAKE}
    },
    {
    .ivs = {2, 26, 2, 14, 5, 27},
    .lvl = 46,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_NUGGET,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_YAWN, MOVE_SLACK_OFF}
    }
};

static const struct TrainerMon sParty_Winston5[] = {
    {
    .ivs = {5, 3, 30, 27, 24, 21},
    .lvl = 62,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FURY_SWIPES, MOVE_EARTHQUAKE, MOVE_YAWN, MOVE_DYNAMIC_PUNCH}
    },
    {
    .ivs = {11, 17, 14, 9, 22, 6},
    .lvl = 62,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FACADE, MOVE_REST, MOVE_ENCORE, MOVE_EARTHQUAKE}
    },
    {
    .ivs = {21, 24, 30, 20, 9, 19},
    .lvl = 62,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_HYPER_BEAM, MOVE_SHADOW_BALL, MOVE_YAWN, MOVE_SLACK_OFF}
    },
    {
    .ivs = {4, 13, 11, 16, 11, 9},
    .lvl = 62,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_HYPER_BEAM, MOVE_FAINT_ATTACK, MOVE_YAWN, MOVE_THUNDERBOLT}
    },
    {
    .ivs = {20, 20, 18, 14, 15, 10},
    .lvl = 62,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SLASH, MOVE_BLIZZARD, MOVE_YAWN, MOVE_THUNDERBOLT}
    }
};
// Route 114 Pokemaniac
static const struct TrainerMon sParty_Steve1[] = {
    {
    .ivs = {9, 13, 17, 16, 23, 15},
    .lvl = 25,
    .species = SPECIES_SEVIPER,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Abandoned Ship Beauty
static const struct TrainerMon sParty_Thalia1[] = {
    {
    .ivs = {18, 9, 12, 6, 19, 25},
    .lvl = 31,
    .species = SPECIES_ROSELIA,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {7, 9, 4, 27, 22, 13},
    .lvl = 31,
    .species = SPECIES_SWABLU,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Mt Pyre Interior 2F Pokemaniac
static const struct TrainerMon sParty_Mark[] = {
    {
    .ivs = {15, 17, 15, 18, 20, 17},
    .lvl = 36,
    .species = SPECIES_RHYHORN,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Mt Chimney GruntF (double)
static const struct TrainerMon sParty_GruntMtChimney1[] = {
    {
    .ivs = {6, 18, 21, 4, 13, 4},
    .lvl = 28,
    .species = SPECIES_VULPIX,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Steve2[] = {
    {
    .ivs = {18, 10, 23, 19, 8, 22},
    .lvl = 35,
    .species = SPECIES_SEVIPER,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Steve3[] = {
    {
    .ivs = {21, 11, 22, 24, 19, 27},
    .lvl = 39,
    .species = SPECIES_SEVIPER,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {19, 20, 19, 19, 18, 14},
    .lvl = 41,
    .species = SPECIES_RHYHORN,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Steve4[] = {
    {
    .ivs = {13, 5, 28, 20, 8, 14},
    .lvl = 48,
    .species = SPECIES_SEVIPER,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {19, 9, 12, 21, 6, 5},
    .lvl = 49,
    .species = SPECIES_RHYHORN,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Steve5[] = {
    {
    .ivs = {7, 2, 6, 19, 12, 12},
    .lvl = 60,
    .species = SPECIES_SEVIPER,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {21, 18, 25, 17, 11, 8},
    .lvl = 61,
    .species = SPECIES_RHYDON,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Route 105 SwimmerM
static const struct TrainerMon sParty_Luis[] = {
    {
    .ivs = {18, 17, 26, 25, 2, 9},
    .lvl = 30,
    .species = SPECIES_CARVANHA,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 105 SwimmerM
static const struct TrainerMon sParty_Dominik[] = {
    {
    .ivs = {23, 12, 15, 21, 16, 15},
    .lvl = 30,
    .species = SPECIES_TENTACOOL,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 106 Surf SwimmerM
static const struct TrainerMon sParty_Douglas[] = {
    {
    .ivs = {19, 7, 26, 17, 8, 11},
    .lvl = 30,
    .species = SPECIES_TENTACOOL,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {25, 7, 15, 20, 20, 14},
    .lvl = 30,
    .species = SPECIES_TENTACOOL,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 107 SwimmerM
static const struct TrainerMon sParty_Darrin[] = {
    {
    .ivs = {22, 13, 25, 26, 13, 17},
    .lvl = 30,
    .species = SPECIES_TENTACOOL,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {21, 17, 14, 20, 21, 9},
    .lvl = 30,
    .species = SPECIES_PELIPPER,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {6, 18, 4, 23, 26, 21},
    .lvl = 30,
    .species = SPECIES_TENTACOOL,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 107 SwimmerM
static const struct TrainerMon sParty_Tony1[] = {
    {
    .ivs = {18, 20, 22, 20, 12, 17},
    .lvl = 31,
    .species = SPECIES_CARVANHA,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 108 SwimmerM
static const struct TrainerMon sParty_Jerome[] = {
    {
    .ivs = {19, 16, 12, 9, 15, 16},
    .lvl = 30,
    .species = SPECIES_TENTACRUEL,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 108 SwimmerM
static const struct TrainerMon sParty_Matthew[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 30,
    .species = SPECIES_CARVANHA,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
//Route 109 Surf SwimmerM
static const struct TrainerMon sParty_David[] = {
    {
    .ivs = {11, 6, 7, 20, 27, 7},
    .lvl = 30,
    .species = SPECIES_TENTACOOL,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {26, 6, 27, 16, 9, 9},
    .lvl = 30,
    .species = SPECIES_CARVANHA,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 124 SwimmerM
static const struct TrainerMon sParty_Spencer[] = {
    {
    .ivs = {22, 9, 10, 25, 21, 8},
    .lvl = 38,
    .species = SPECIES_SEAKING,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {5, 3, 8, 21, 22, 14},
    .lvl = 38,
    .species = SPECIES_PELIPPER,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 124 SwimmerM
static const struct TrainerMon sParty_Roland[] = {
    {
    .ivs = {14, 16, 17, 8, 19, 16},
    .lvl = 39,
    .species = SPECIES_LANTURN,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 125 SwimmerM
static const struct TrainerMon sParty_Nolen[] = {
    {
    .ivs = {26, 16, 6, 27, 19, 11},
    .lvl = 39,
    .species = SPECIES_TENTACRUEL,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 125 SwimmerM
static const struct TrainerMon sParty_Stan[] = {
    {
    .ivs = {18, 16, 14, 19, 21, 22},
    .lvl = 39,
    .species = SPECIES_SEADRA,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {11, 8, 31, 23, 12, 25},
    .lvl = 39,
    .species = SPECIES_GYARADOS,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 126 SwimmerM
static const struct TrainerMon sParty_Barry[] = {
    {
    .ivs = {16, 5, 19, 13, 11, 22},
    .lvl = 40,
    .species = SPECIES_GYARADOS,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 126 SwimmerM
static const struct TrainerMon sParty_Dean[] = {
    {
    .ivs = {20, 29, 14, 17, 19, 10},
    .lvl = 38,
    .species = SPECIES_SHARPEDO,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {19, 25, 10, 11, 20, 2},
    .lvl = 38,
    .species = SPECIES_CRAWDAUNT,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {26, 21, 13, 21, 0, 21},
    .lvl = 38,
    .species = SPECIES_CARVANHA,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 130 SwimmerM
static const struct TrainerMon sParty_Rodney[] = {
    {
    .ivs = {20, 16, 8, 9, 22, 10},
    .lvl = 44,
    .species = SPECIES_GYARADOS,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 131 SwimmerM
static const struct TrainerMon sParty_Richard[] = {
    {
    .ivs = {18, 23, 18, 11, 8, 23},
    .lvl = 45,
    .species = SPECIES_PELIPPER,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 131 SwimmerM 
static const struct TrainerMon sParty_Herman[] = {
    {
    .ivs = {21, 6, 14, 18, 8, 9},
    .lvl = 44,
    .species = SPECIES_PELIPPER,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {21, 20, 14, 23, 25, 27},
    .lvl = 44,
    .species = SPECIES_TENTACRUEL,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 130 SwimmerM (Potential Double Battle with Katie)
static const struct TrainerMon sParty_Santiago[] = {
    {
    .ivs = {8, 7, 20, 23, 24, 26},
    .lvl = 42,
    .species = SPECIES_TENTACRUEL,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {22, 9, 24, 7, 12, 6},
    .lvl = 44,
    .species = SPECIES_WAILORD,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 132 SwimmerM
static const struct TrainerMon sParty_Gilbert[] = {
    {
    .ivs = {19, 8, 17, 24, 12, 6},
    .lvl = 46,
    .species = SPECIES_SHARPEDO,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 133 SwimmerM
static const struct TrainerMon sParty_Franklin[] = {
    {
    .ivs = {9, 9, 28, 30, 12, 13},
    .lvl = 47,
    .species = SPECIES_WALREIN,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 131 SwimmerM
static const struct TrainerMon sParty_Kevin[] = {
    {
    .ivs = {22, 6, 15, 26, 22, 25},
    .lvl = 44,
    .species = SPECIES_RELICANTH,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 134 SwimmerM
static const struct TrainerMon sParty_Jack[] = {
    {
    .ivs = {19, 21, 27, 12, 6, 9},
    .lvl = 48,
    .species = SPECIES_GYARADOS,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Dudley[] = {
    {
    .ivs = {12, 25, 4, 10, 14, 7},
    .lvl = 35,
    .species = SPECIES_TENTACOOL,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {14, 14, 16, 27, 18, 20},
    .lvl = 35,
    .species = SPECIES_WINGULL,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {23, 27, 4, 3, 17, 8},
    .lvl = 35,
    .species = SPECIES_TENTACRUEL,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 124 SwimmerM
static const struct TrainerMon sParty_Chad[] = {
    {
    .ivs = {24, 10, 19, 13, 3, 6},
    .lvl = 38,
    .species = SPECIES_TENTACRUEL,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {6, 13, 4, 19, 28, 7},
    .lvl = 40,
    .species = SPECIES_WAILMER,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Tony2[] = {
    {
    .ivs = {19, 25, 17, 24, 9, 9},
    .lvl = 32,
    .species = SPECIES_SHARPEDO,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Tony3[] = {
    {
    .ivs = {19, 15, 13, 10, 1, 8},
    .lvl = 35,
    .species = SPECIES_SHARPEDO,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Tony4[] = {
    {
    .ivs = {16, 2, 11, 7, 12, 11},
    .lvl = 46,
    .species = SPECIES_STARMIE,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {2, 14, 15, 0, 19, 27},
    .lvl = 46,
    .species = SPECIES_SHARPEDO,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Tony5[] = {
    {
    .ivs = {21, 18, 22, 11, 4, 17},
    .lvl = 58,
    .species = SPECIES_WAILORD,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {12, 10, 13, 12, 7, 17},
    .lvl = 59,
    .species = SPECIES_STARMIE,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {8, 6, 17, 4, 17, 8},
    .lvl = 58,
    .species = SPECIES_CRAWDAUNT,
    .evs = {84, 84, 84, 84, 84, 84},
    },    
    {
    .ivs = {17, 18, 28, 18, 21, 17},
    .lvl = 59,
    .species = SPECIES_SHARPEDO,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Dewford Gym Black Belt 1 (Bottom Left)
static const struct TrainerMon sParty_Takao[] = {
    {
    .ivs = {13, 23, 13, 27, 16, 4},
    .lvl = 16,
    .species = SPECIES_MACHOP,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {13, 9, 24, 3, 9, 19},
    .lvl = 16,
    .species = SPECIES_MACHOP,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Route 134 Black Belt
static const struct TrainerMon sParty_Hitoshi[] = {
    {
    .ivs = {22, 17, 4, 9, 17, 29},
    .lvl = 47,
    .species = SPECIES_HERACROSS,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {30, 27, 13, 14, 28, 10},
    .lvl = 47,
    .species = SPECIES_MACHAMP,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {17, 17, 5, 19, 26, 10},
    .lvl = 47,
    .species = SPECIES_BRELOOM,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 132 Black Belt
static const struct TrainerMon sParty_Kiyo[] = {
    {
    .ivs = {28, 19, 18, 7, 2, 24},
    .lvl = 45,
    .species = SPECIES_HARIYAMA,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {18, 23, 15, 7, 18, 18},
    .lvl = 45,
    .species = SPECIES_MEDICHAM,
    .evs = {70, 70, 70, 70, 70, 70},
    },
};
// Route 115 Surf Black Belt
static const struct TrainerMon sParty_Koichi[] = {
    {
    .ivs = {12, 22, 22, 16, 20, 20},
    .lvl = 26,
    .species = SPECIES_MACHOP,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {11, 22, 15, 12, 4, 4},
    .lvl = 32,
    .species = SPECIES_MACHOKE,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 115 Black Belt
static const struct TrainerMon sParty_Nob1[] = {
    {
    .ivs = {14, 11, 5, 4, 19, 15},
    .lvl = 28,
    .species = SPECIES_MACHOKE,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Nob2[] = {
    {
    .ivs = {11, 9, 24, 5, 24, 15},
    .lvl = 37,
    .species = SPECIES_MACHOKE,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Nob3[] = {
    {
    .ivs = {14, 11, 22, 14, 18, 20},
    .lvl = 44,
    .species = SPECIES_MEDICHAM,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {3, 12, 6, 24, 9, 15},
    .lvl = 44,
    .species = SPECIES_MACHAMP,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Nob4[] = {
    {
    .ivs = {18, 17, 14, 22, 15, 14},
    .lvl = 52,
    .species = SPECIES_HITMONCHAN,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {12, 14, 15, 17, 4, 25},
    .lvl = 52,
    .species = SPECIES_PRIMEAPE,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {14, 16, 18, 4, 8, 17},
    .lvl = 52,
    .species = SPECIES_MACHAMP,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Nob5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_PRIMEAPE,
    .heldItem = ITEM_KINGS_ROCK,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_ROCK_SLIDE, MOVE_CROSS_CHOP, MOVE_TAUNT, MOVE_EARTHQUAKE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_BLAZIKEN,
    .heldItem = ITEM_SALAC_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 0, 252, 0},
    .moves = {MOVE_BLAZE_KICK, MOVE_REVERSAL, MOVE_EARTHQUAKE, MOVE_ENDURE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_HITMONLEE,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_EARTHQUAKE, MOVE_HI_JUMP_KICK, MOVE_ROCK_SLIDE, MOVE_MEGA_KICK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_POLIWRATH,
    .heldItem = ITEM_WIKI_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 252, 0, 0},
    .moves = {MOVE_BELLY_DRUM, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_THIEF}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_HERACROSS,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_BULK_UP, MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_BRICK_BREAK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SLOT_1,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_REST, MOVE_SLEEP_TALK, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK}
    }
};
// Trick Room 4
static const struct TrainerMon sParty_Yuji[] = {
    {
    .ivs = {10, 16, 28, 4, 9, 11},
    .lvl = 29,
    .species = SPECIES_MEDICHAM,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 111 Northern End (Mach Bike)
static const struct TrainerMon sParty_Daisuke[] = {
    {
    .ivs = {16, 18, 28, 17, 1, 24},
    .lvl = 25,
    .species = SPECIES_MACHOP,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Mt Pyre Interior 5F Black Belt
static const struct TrainerMon sParty_Atsushi[] = {
    {
    .ivs = {23, 21, 28, 14, 22, 13},
    .lvl = 37,
    .species = SPECIES_HARIYAMA,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Mauville Gym Guitarist 1
static const struct TrainerMon sParty_Kirk[] = {
    {
    .ivs = {10, 31, 22, 24, 24, 10},
    .lvl = 22,
    .species = SPECIES_VOLTORB,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_ROLLOUT, MOVE_SHOCK_WAVE, MOVE_SCREECH, MOVE_SELF_DESTRUCT}
    },
    {
    .ivs = {10, 14, 15, 16, 15, 18},
    .lvl = 22,
    .species = SPECIES_ELECTRIKE,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_QUICK_ATTACK, MOVE_HOWL, MOVE_SHOCK_WAVE, MOVE_LEER}
    }
};
// Aqua Hideout B1F 3 GruntF
static const struct TrainerMon sParty_GruntAquaHideout7[] = {
    {
    .ivs = {10, 23, 17, 8, 20, 16},
    .lvl = 36,
    .species = SPECIES_ELECTRODE,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {19, 16, 9, 17, 13, 19},
    .lvl = 36,
    .species = SPECIES_GOLBAT,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Aqua Hideout Submarine Room 4 GruntM (Double)
static const struct TrainerMon sParty_GruntAquaHideout8[] = {
    {
    .ivs = {16, 25, 11, 16, 17, 15},
    .lvl = 36,
    .species = SPECIES_GYARADOS,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {12, 17, 13, 16, 14, 13},
    .lvl = 36,
    .species = SPECIES_MURKROW,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Mauville Gym Guitarist 2
static const struct TrainerMon sParty_Shawn[] = {
    {
    .ivs = {0, 15, 4, 19, 10, 21},
    .lvl = 21,
    .species = SPECIES_VOLTORB,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {26, 22, 11, 20, 7, 14},
    .lvl = 20,
    .species = SPECIES_MAGNEMITE,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Route 123 (via 122 from Mt Pyre) Guitarist
static const struct TrainerMon sParty_Fernando1[] = {
    {
    .ivs = {25, 16, 19, 19, 28, 16},
    .lvl = 35,
    .species = SPECIES_ELECTRODE,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {12, 20, 31, 15, 14, 16},
    .lvl = 35,
    .species = SPECIES_LOUDRED,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
//Route 118 Mauville Guitarist
static const struct TrainerMon sParty_Dalton1[] = {
    {
    .ivs = {9, 10, 22, 21, 14, 25},
    .lvl = 20,
    .species = SPECIES_MAGNEMITE,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {5, 20, 25, 11, 16, 15},
    .lvl = 21,
    .species = SPECIES_WHISMUR,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Dalton2[] = {
    {
    .ivs = {17, 23, 17, 17, 17, 7},
    .lvl = 27,
    .species = SPECIES_RAICHU,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {26, 1, 21, 15, 23, 17},
    .lvl = 27,
    .species = SPECIES_MAGNETON,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Dalton3[] = {
    {
    .ivs = {14, 10, 17, 3, 11, 6},
    .lvl = 36,
    .species = SPECIES_PLUSLE,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {2, 24, 10, 27, 13, 18},
    .lvl = 44,
    .species = SPECIES_MANECTRIC,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {15, 22, 17, 19, 7, 8},
    .lvl = 44,
    .species = SPECIES_MAGNETON,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Dalton4[] = {
    {
    .ivs = {11, 11, 16, 22, 15, 7},
    .lvl = 55,
    .species = SPECIES_MINUN,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {21, 27, 28, 5, 16, 20},
    .lvl = 55,
    .species = SPECIES_ELECTRODE,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {9, 13, 13, 24, 25, 11},
    .lvl = 56,
    .species = SPECIES_ELECTABUZZ,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Dalton5[] = {
    {
    .ivs = BEST_IV_SPREAD_HIDDEN_POWER_ICE,
    .lvl = 67,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_SILK_SCARF,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_HIDDEN_POWER, MOVE_VOLT_TACKLE, MOVE_EXPLOSION, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = BEST_IV_SPREAD_HIDDEN_POWER_ICE,
    .lvl = 67,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_OVERHEAT, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_ELECTABUZZ,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 150, 0, 100, 0},
    .moves = {MOVE_TRICK, MOVE_VOLT_TACKLE, MOVE_MAGICAL_LEAF, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = BEST_IV_SPREAD_HIDDEN_POWER_ICE,
    .lvl = 67,
    .species = SPECIES_JOLTEON,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER}
    },
    {
    .ivs = BEST_IV_SPREAD_HIDDEN_POWER_ICE,
    .lvl = 67,
    .species = SPECIES_PIKACHU,
    .heldItem = ITEM_LIGHT_BALL,
    .ability = ABILITY_SLOT_1,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_VOLT_TACKLE, MOVE_HIDDEN_POWER, MOVE_ENCORE}
    }
};
// Lavaridge Gym Kindler 3
static const struct TrainerMon sParty_Cole[] = {
    {
    .ivs = {7, 9, 19, 12, 19, 12},
    .lvl = 29,
    .species = SPECIES_NUMEL,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Lavaridge Gym Kindler 1
static const struct TrainerMon sParty_Jeff[] = {
    {
    .ivs = {29, 17, 7, 31, 4, 17},
    .lvl = 28,
    .species = SPECIES_SLUGMA,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {13, 24, 17, 15, 23, 16},
    .lvl = 29,
    .species = SPECIES_SLUGMA,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Lavaridge Gym Kindler 4
static const struct TrainerMon sParty_Axle[] = {
    {
    .ivs = {7, 7, 16, 11, 10, 17},
    .lvl = 29,
    .species = SPECIES_NUMEL,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Lavaridge Gym Kindler 2
static const struct TrainerMon sParty_Jace[] = {
    {
    .ivs = {17, 5, 4, 16, 25, 4},
    .lvl = 29,
    .species = SPECIES_VULPIX,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Lavaridge Gym Kindler 5
static const struct TrainerMon sParty_Keegan[] = {
    {
    .ivs = {30, 15, 16, 10, 21, 10},
    .lvl = 29,
    .species = SPECIES_SLUGMA,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 114 Kindler
static const struct TrainerMon sParty_Bernie1[] = {
    {
    .ivs = {10, 6, 16, 18, 22, 10},
    .lvl = 27,
    .species = SPECIES_SLUGMA,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {10, 4, 9, 27, 18, 15},
    .lvl = 27,
    .species = SPECIES_WINGULL,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Bernie2[] = {
    {
    .ivs = {15, 5, 22, 14, 16, 13},
    .lvl = 34,
    .species = SPECIES_MAGCARGO,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {13, 19, 15, 25, 4, 19},
    .lvl = 234,
    .species = SPECIES_HOUNDOOM,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Bernie3[] = {
    {
    .ivs = {6, 13, 13, 24, 5, 19},
    .lvl = 42,
    .species = SPECIES_MAGCARGO,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {3, 26, 19, 10, 3, 9},
    .lvl = 42,
    .species = SPECIES_RAPIDASH,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {8, 16, 9, 18, 23, 19},
    .lvl = 42,
    .species = SPECIES_HOUNDOOM,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Bernie4[] = {
    {
    .ivs = {15, 17, 9, 28, 21, 18},
    .lvl = 52,
    .species = SPECIES_MAGCARGO,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {13, 25, 12, 8, 23, 12},
    .lvl = 53,
    .species = SPECIES_NINETALES,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {13, 15, 24, 12, 15, 23},
    .lvl = 54,
    .species = SPECIES_HOUNDOOM,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Bernie5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_FLAREON,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_SUNNY_DAY, MOVE_FIRE_BLAST, MOVE_CHARM, MOVE_WISH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_SLOT_1,
    .evs = {152, 252, 0, 100, 0, 0},
    .moves = {MOVE_OVERHEAT, MOVE_EXTREME_SPEED, MOVE_IRON_TAIL, MOVE_CRUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_MAGMAR,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_SUNNY_DAY, MOVE_OVERHEAT, MOVE_THUNDER_PUNCH, MOVE_PSYCHIC}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_CHARIZARD,
    .heldItem = ITEM_WIKI_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 0, 252, 0},
    .moves = {MOVE_BELLY_DRUM, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_OVERHEAT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 252, 252, 0, 0},
    .moves = {MOVE_WILL_O_WISP, MOVE_SUNNY_DAY, MOVE_CONFUSE_RAY, MOVE_FLAMETHROWER}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SLOT_1,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FIRE_BLAST, MOVE_ROCK_SLIDE, MOVE_YAWN, MOVE_SUNNY_DAY}
    }
};
// Route 111 Desert Camper
static const struct TrainerMon sParty_Drew[] = {
    {
    .ivs = {11, 7, 17, 11, 18, 23},
    .lvl = 29,
    .species = SPECIES_SANDSLASH,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_DIG, MOVE_SAND_ATTACK, MOVE_POISON_STING, MOVE_SLASH}
    }
};
//Route 111 Desert Camper 1 
static const struct TrainerMon sParty_Beau[] = {
    {
    .ivs = {18, 20, 19, 26, 12, 15},
    .lvl = 28,
    .species = SPECIES_BALTOY,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {8, 13, 15, 21, 15, 14},
    .lvl = 28,
    .species = SPECIES_SANDSHREW,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {17, 21, 19, 25, 15, 4},
    .lvl = 28,
    .species = SPECIES_TRAPINCH,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 112 South Section Camper 1
static const struct TrainerMon sParty_Larry[] = {
    {
    .ivs = {26, 23, 20, 16, 18, 24},
    .lvl = 24,
    .species = SPECIES_NUZLEAF,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 114 Camper 
static const struct TrainerMon sParty_Shane[] = {
    {
    .ivs = {5, 18, 17, 6, 5, 8},
    .lvl = 26,
    .species = SPECIES_SANDSHREW,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {11, 20, 4, 7, 17, 7},
    .lvl = 26,
    .species = SPECIES_NUZLEAF,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Trick House 3 Camper
static const struct TrainerMon sParty_Justin[] = {
    {
    .ivs = {17, 26, 13, 15, 21, 20},
    .lvl = 27,
    .species = SPECIES_MACHOKE,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Jagged Pass Camper
static const struct TrainerMon sParty_Ethan1[] = {
    {
    .ivs = {28, 15, 17, 17, 17, 16},
    .lvl = 27,
    .species = SPECIES_SWELLOW,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {16, 19, 10, 12, 15, 11},
    .lvl = 27,
    .species = SPECIES_LINOONE,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Jagged Pass Picnicker 2
static const struct TrainerMon sParty_Autumn[] = {
    {
    .ivs = {9, 17, 2, 16, 10, 29},
    .lvl = 28,
    .species = SPECIES_BRELOOM,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
//Route 111 Mid Camper
static const struct TrainerMon sParty_Travis[] = {
    {
    .ivs = {15, 15, 21, 13, 23, 23},
    .lvl = 24,
    .species = SPECIES_SANDSHREW,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Ethan2[] = {
    {
    .ivs = {3, 16, 13, 25, 11, 22},
    .lvl = 32,
    .species = SPECIES_SWELLOW,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {24, 7, 18, 11, 12, 23},
    .lvl = 32,
    .species = SPECIES_LINOONE,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Ethan3[] = {
    {
    .ivs = {23, 17, 11, 10, 12, 20},
    .lvl = 39,
    .species = SPECIES_LINOONE,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {17, 14, 21, 7, 14, 13},
    .lvl = 40,
    .species = SPECIES_SWELLOW,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Ethan4[] = {
    {
    .ivs = {16, 3, 22, 15, 28, 23},
    .lvl = 46,
    .species = SPECIES_SANDSHREW,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {27, 18, 28, 13, 10, 19},
    .lvl = 47,
    .species = SPECIES_SWELLOW,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {7, 24, 13, 13, 11, 16},
    .lvl = 48,
    .species = SPECIES_LINOONE,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Ethan5[] = {
    {
    .ivs = {14, 19, 13, 14, 7, 5},
    .lvl = 58,
    .species = SPECIES_SWELLOW,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {12, 20, 13, 22, 17, 14},
    .lvl = 58,
    .species = SPECIES_SANDSLASH,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {15, 12, 24, 7, 26, 2},
    .lvl = 58,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Route 119 Bug Maniac 3
static const struct TrainerMon sParty_Brent[] = {
    {
    .ivs = {22, 6, 23, 25, 3, 9},
    .lvl = 30,
    .species = SPECIES_MASQUERAIN,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 119 Bug Maniac 1
static const struct TrainerMon sParty_Donald[] = {
    {
    .ivs = {26, 21, 26, 24, 12, 12},
    .lvl = 30,
    .species = SPECIES_WURMPLE,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {15, 15, 21, 17, 17, 13},
    .lvl = 30,
    .species = SPECIES_SILCOON,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {26, 25, 4, 5, 11, 17},
    .lvl = 30,
    .species = SPECIES_BEAUTIFLY,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 119 Bug Maniac Taylor
static const struct TrainerMon sParty_Taylor[] = {
    {
    .ivs = {27, 26, 1, 27, 26, 8},
    .lvl = 29,
    .species = SPECIES_WURMPLE,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {11, 13, 26, 12, 13, 8},
    .lvl = 29,
    .species = SPECIES_CASCOON,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {10, 19, 18, 8, 0, 23},
    .lvl = 29,
    .species = SPECIES_DUSTOX,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 120 Bug Maniac
static const struct TrainerMon sParty_Jeffrey1[] = {
    {
    .ivs = {19, 17, 28, 13, 26, 17},
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {10, 27, 5, 17, 26, 3},
    .lvl = 34,
    .species = SPECIES_MASQUERAIN,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {19, 27, 15, 23, 21, 25},
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 117 Bug Maniac
static const struct TrainerMon sParty_Derek[] = {
    {
    .ivs = {10, 5, 18, 20, 10, 13},
    .lvl = 19,
    .species = SPECIES_DUSTOX,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {18, 18, 13, 18, 16, 24},
    .lvl = 19,
    .species = SPECIES_BEAUTIFLY,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};

static const struct TrainerMon sParty_Jeffrey2[] = {
    {
    .ivs = {12, 21, 15, 25, 7, 12},
    .lvl = 33,
    .species = SPECIES_MASQUERAIN,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {14, 7, 14, 10, 22, 6},
    .lvl = 33,
    .species = SPECIES_MASQUERAIN,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {17, 19, 24, 16, 22, 26},
    .lvl = 33,
    .species = SPECIES_MASQUERAIN,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Jeffrey3[] = {
    {
    .ivs = {11, 28, 22, 15, 4, 6},
    .lvl = 41,
    .species = SPECIES_MASQUERAIN,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {14, 27, 11, 14, 4, 22},
    .lvl = 41,
    .species = SPECIES_MASQUERAIN,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {22, 22, 20, 8, 27, 10},
    .lvl = 41,
    .species = SPECIES_MASQUERAIN,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Jeffrey4[] = {
    {
    .ivs = {19, 10, 6, 14, 9, 14},
    .lvl = 49,
    .species = SPECIES_MASQUERAIN,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {19, 13, 22, 16, 7, 10},
    .lvl = 49,
    .species = SPECIES_DUSTOX,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {23, 15, 19, 11, 26, 23},
    .lvl = 49,
    .species = SPECIES_MASQUERAIN,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {14, 12, 18, 28, 24, 5},
    .lvl = 49,
    .species = SPECIES_MASQUERAIN,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Jeffrey5[] = {
    {
    .ivs = {18, 17, 14, 26, 8, 15},
    .lvl = 61,
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {18, 18, 15, 10, 8, 9},
    .lvl = 61,
    .species = SPECIES_DUSTOX,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {22, 27, 22, 16, 20, 11},
    .lvl = 61,
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {9, 5, 0, 6, 16, 25},
    .lvl = 61,
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_SILVER_POWDER,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {16, 8, 13, 15, 19, 6},
    .lvl = 61,
    .species = SPECIES_BEAUTIFLY,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Route 110 PsychicM
static const struct TrainerMon sParty_Edward[] = {
    {
    .ivs = {17, 2, 7, 13, 4, 12},
    .lvl = 18,
    .species = SPECIES_KADABRA,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_HIDDEN_POWER, MOVE_CONFUSION, MOVE_NONE, MOVE_NONE}
    }
};
// Mossdeep Gym PsychicM 1 - Entrance Room (Double Battle w Maura)
static const struct TrainerMon sParty_Preston[] = {
    {
    .ivs = {16, 24, 14, 22, 6, 11},
    .lvl = 42,
    .species = SPECIES_GARDEVOIR,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Mossdeep Gym PsychicM 4 - Northwest (Double Battle w Nate or Sylvia)
static const struct TrainerMon sParty_Virgil[] = {
    {
    .ivs = {4, 16, 13, 22, 29, 28},
    .lvl = 42,
    .species = SPECIES_KADABRA,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Mossdeep Gym PsychicM 2 - West Central (Double Battle w Samantha)
static const struct TrainerMon sParty_Blake[] = {
    {
    .ivs = {16, 9, 21, 5, 22, 14},
    .lvl = 42,
    .species = SPECIES_GIRAFARIG,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Mt Pyre Interior 3F PsychicM
static const struct TrainerMon sParty_William[] = {
    {
    .ivs = {12, 21, 29, 28, 15, 13},
    .lvl = 28,
    .species = SPECIES_RALTS,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {22, 17, 15, 15, 17, 19},
    .lvl = 31,
    .species = SPECIES_KIRLIA,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {24, 18, 25, 12, 13, 25},
    .lvl = 35,
    .species = SPECIES_GARDEVOIR,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Trick Room 7
static const struct TrainerMon sParty_Joshua[] = {
    {
    .ivs = {8, 26, 23, 10, 5, 12},
    .lvl = 44,
    .species = SPECIES_ALAKAZAM,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {11, 15, 13, 11, 26, 14},
    .lvl = 44,
    .species = SPECIES_SOLROCK,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 123 (via 122 with Cut) Psychic
static const struct TrainerMon sParty_Cameron1[] = {
    {
    .ivs = {25, 22, 20, 19, 8, 10},
    .lvl = 36,
    .species = SPECIES_SOLROCK,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Cameron2[] = {
    {
    .ivs = {12, 23, 19, 15, 9, 7},
    .lvl = 38,
    .species = SPECIES_KADABRA,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {17, 19, 13, 17, 13, 10},
    .lvl = 38,
    .species = SPECIES_SOLROCK,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Cameron3[] = {
    {
    .ivs = {17, 19, 14, 16, 27, 18},
    .lvl = 47,
    .species = SPECIES_KADABRA,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {24, 25, 9, 16, 17, 22},
    .lvl = 47,
    .species = SPECIES_SOLROCK,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Cameron4[] = {
    {
    .ivs = {8, 11, 22, 18, 18, 14},
    .lvl = 53,
    .species = SPECIES_KADABRA,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {20, 16, 15, 12, 17, 1},
    .lvl = 53,
    .species = SPECIES_SOLROCK,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Cameron5[] = {
    {
    .ivs = {17, 24, 27, 26, 20, 29},
    .lvl = 64,
    .species = SPECIES_SOLROCK,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {20, 10, 16, 14, 19, 18},
    .lvl = 64,
    .species = SPECIES_ALAKAZAM,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Cycling Road fPsychic
static const struct TrainerMon sParty_Jaclyn[] = {
    {
    .ivs = {15, 16, 20, 22, 18, 26},
    .lvl = 21,
    .species = SPECIES_KADABRA,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
// Mossdeep Gym PsychicF 4 - Northwest (Double Battle w Sylvia)
static const struct TrainerMon sParty_Hannah[] = {
    {
    .ivs = {13, 22, 23, 22, 19, 11},
    .lvl = 43,
    .species = SPECIES_ABSOL,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Mossdeep Gym PsychicF 2 - West Central (Double Battle w Blake)
static const struct TrainerMon sParty_Samantha[] = {
    {
    .ivs = {17, 20, 16, 10, 13, 19},
    .lvl = 43,
    .species = SPECIES_XATU,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Mossdeep Gym PsychicF 1 - Entrance Room (Double Battle w Preston)
static const struct TrainerMon sParty_Maura[] = {
    {
    .ivs = {2, 14, 19, 16, 8, 11},
    .lvl = 42,
    .species = SPECIES_KADABRA,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Mt Pyre Interior 3F PsychicF
static const struct TrainerMon sParty_Kayla[] = {
    {
    .ivs = {10, 17, 9, 19, 28, 7},
    .lvl = 34,
    .species = SPECIES_WOBBUFFET,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {11, 9, 17, 11, 21, 23},
    .lvl = 33,
    .species = SPECIES_XATU,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {17, 14, 19, 13, 21, 16},
    .lvl = 34,
    .species = SPECIES_KADABRA,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Trick Room 7
static const struct TrainerMon sParty_Alexis[] = {
    {
    .ivs = {16, 14, 18, 20, 20, 27},
    .lvl = 44,
    .species = SPECIES_GARDEVOIR,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {7, 11, 5, 7, 12, 24},
    .lvl = 44,
    .species = SPECIES_XATU,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 123 (via 122 from Mt Pyre) Psychic
static const struct TrainerMon sParty_Jacki1[] = {
    {
    .ivs = {21, 11, 26, 23, 11, 19},
    .lvl = 35,
    .species = SPECIES_KADABRA,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {16, 7, 18, 18, 29, 15},
    .lvl = 34,
    .species = SPECIES_LUNATONE,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Jacki2[] = {
    {
    .ivs = {8, 7, 19, 31, 14, 8},
    .lvl = 42,
    .species = SPECIES_KADABRA,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {18, 8, 11, 25, 20, 9},
    .lvl = 42,
    .species = SPECIES_LUNATONE,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Jacki3[] = {
    {
    .ivs = {30, 18, 25, 18, 8, 23},
    .lvl = 48,
    .species = SPECIES_KADABRA,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {4, 9, 21, 30, 11, 26},
    .lvl = 48,
    .species = SPECIES_LUNATONE,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Jacki4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 55,
    .species = SPECIES_ALAKAZAM,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 55,
    .species = SPECIES_GIRAFARIG,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 55,
    .species = SPECIES_LUNATONE,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Jacki5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_ALAKAZAM,
    .heldItem = ITEM_KINGS_ROCK,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_PSYCHIC, MOVE_ICE_PUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {152, 0, 100, 0, 252, 0},
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_FIRE_PUNCH, MOVE_DYNAMIC_PUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_WOBBUFFET,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 252, 0, 0, 0},
    .moves = {MOVE_ENCORE, MOVE_DESTINY_BOND, MOVE_COUNTER, MOVE_MIRROR_COAT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_SLOWBRO,
    .heldItem = ITEM_WIKI_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 252, 0, 0},
    .moves = {MOVE_SKILL_SWAP, MOVE_PSYCHIC, MOVE_THUNDER_WAVE, MOVE_SURF}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {100, 0, 152, 0, 252, 0},
    .moves = {MOVE_IMPRISON, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_REST, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_ICE_BEAM}
    }
};
// Route 121 Gentleman
static const struct TrainerMon sParty_Walter1[] = {
    {
    .ivs = {2, 26, 22, 24, 14, 11},
    .lvl = 34,
    .species = SPECIES_MANECTRIC,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// SS Tidal Gentleman (nat dex)
static const struct TrainerMon sParty_Micah[] = {
    {
    .ivs = {2, 19, 9, 15, 21, 24},
    .lvl = 52,
    .species = SPECIES_GROWLITHE,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {21, 2, 18, 12, 16, 25},
    .lvl = 54,
    .species = SPECIES_ARCANINE,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// SS Tidal Gentleman (nat dex)
static const struct TrainerMon sParty_Thomas[] = {
    {
    .ivs = {23, 11, 4, 12, 9, 25},
    .lvl = 54,
    .species = SPECIES_TAUROS,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Walter2[] = {
    {
    .ivs = {11, 12, 13, 21, 17, 18},
    .lvl = 36,
    .species = SPECIES_MANECTRIC,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Walter3[] = {
    {
    .ivs = {19, 10, 12, 13, 12, 9},
    .lvl = 38,
    .species = SPECIES_LINOONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .ivs = {17, 23, 11, 25, 22, 16},
    .lvl = 38,
    .species = SPECIES_MANECTRIC,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_ROAR}
    }
};

static const struct TrainerMon sParty_Walter4[] = {
    {
    .ivs = {21, 18, 15, 23, 23, 10},
    .lvl = 45,
    .species = SPECIES_LINOONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .ivs = {20, 27, 15, 21, 16, 17},
    .lvl = 45,
    .species = SPECIES_MANECTRIC,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Walter5[] = {
    {
    .ivs = {18, 12, 20, 30, 13, 12},
    .lvl = 58,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .ivs = {21, 15, 23, 22, 15, 14},
    .lvl = 58,
    .species = SPECIES_GOLDUCK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FURY_SWIPES, MOVE_DISABLE, MOVE_CONFUSION, MOVE_PSYCH_UP}
    },
    {
    .ivs = {12, 20, 19, 17, 6, 19},
    .lvl = 58,
    .species = SPECIES_MANECTRIC,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_ROAR}
    }
};
// Elite Four Sydney
static const struct TrainerMon sParty_Sidney[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 53,
    .species = SPECIES_MIGHTYENA,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CRUNCH, MOVE_SUPER_FANG, MOVE_YAWN, MOVE_SCARY_FACE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 53,
    .species = SPECIES_MURKROW,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SKY_ATTACK, MOVE_PURSUIT, MOVE_STEEL_WING, MOVE_HAZE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 54,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_LEAF_BLADE, MOVE_FAINT_ATTACK, MOVE_AERIAL_ACE, MOVE_EXTRASENSORY}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 54,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_SCOPE_LENS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CRABHAMMER, MOVE_SWORDS_DANCE, MOVE_CRUNCH, MOVE_SLUDGE_BOMB}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_FIGY_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CRUNCH, MOVE_IRON_TAIL, MOVE_ROCK_SLIDE, MOVE_AERIAL_ACE}
    }
};
//Elite Four Phoebe
static const struct TrainerMon sParty_Phoebe[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 54,
    .species = SPECIES_SABLEYE,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_MOONLIGHT, MOVE_CRUNCH, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_REVENGE, MOVE_DESTINY_BOND}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_WHITE_HERB,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_OVERHEAT, MOVE_WILL_O_WISP, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_HI_JUMP_KICK, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 56,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SHADOW_BALL, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE}
    }
};
// Elite Four Glacia
static const struct TrainerMon sParty_Glacia[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 56,
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BLIZZARD, MOVE_WATER_PULSE, MOVE_SHADOW_BALL, MOVE_HAIL}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_SNEASEL,
    .heldItem = ITEM_SCOPE_LENS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FAINT_ATTACK, MOVE_BLIZZARD, MOVE_SWORDS_DANCE, MOVE_SLASH}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 56,
    .species = SPECIES_CASTFORM,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_WEATHER_BALL, MOVE_HYDRO_PUMP, MOVE_HAIL, MOVE_THUNDERBOLT}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 56,
    .species = SPECIES_PILOSWINE,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_BLIZZARD, MOVE_ROCK_SLIDE, MOVE_REST}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 57,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_BLIZZARD, MOVE_HAIL, MOVE_SHEER_COLD}
    }
};
// Elite Four Drake
static const struct TrainerMon sParty_Drake[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 56,
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_FLAMETHROWER, MOVE_SIGNAL_BEAM, MOVE_CRUNCH}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 57,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_SHARP_BEAK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SKY_ATTACK, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE, MOVE_DOUBLE_EDGE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 57,
    .species = SPECIES_HUNTAIL,
    .heldItem = ITEM_PETAYA_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_HYDRO_PUMP, MOVE_CONFUSE_RAY}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 57,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_REST, MOVE_SLEEP_TALK, MOVE_SURF, MOVE_DRAGON_BREATH}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 58,
    .species = SPECIES_SALAMENCE,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_CLAW, MOVE_ROCK_SLIDE, MOVE_CRUNCH}
    }
};
//Rustboro Gym Leader
static const struct TrainerMon sParty_Roxanne1[] = {
    {
    .ivs = {15, 15, 15, 15, 15, 15},
    .lvl = 13,
    .species = SPECIES_ANORITH,
    .heldItem = ITEM_NONE,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_SCRATCH, MOVE_HARDEN, MOVE_NONE, MOVE_NONE}
    },
    {
    .ivs = {15, 15, 15, 15, 15, 15},
    .lvl = 14,
    .species = SPECIES_LILEEP,
    .heldItem = ITEM_NONE,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_ASTONISH, MOVE_CONSTRICT, MOVE_HARDEN, MOVE_NONE}
    },
    {
    .ivs = {15, 15, 15, 15, 15, 15},
    .lvl = 15,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_ROCK_THROW, MOVE_HARDEN, MOVE_HEADBUTT, MOVE_ROCK_TOMB}
    }
};
// Dewford Gym Leader
static const struct TrainerMon sParty_Brawly1[] = {
    {
    .ivs = {20, 20, 20, 20, 20, 20},
    .lvl = 17,
    .species = SPECIES_MAKUHITA,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_VITAL_THROW, MOVE_REVERSAL, MOVE_BULK_UP, MOVE_FAINT_ATTACK}
    },
    {
    .ivs = {20, 20, 20, 20, 20, 20},
    .lvl = 18,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_NONE,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_CONFUSION, MOVE_THUNDER_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT}
    },
    {
    .ivs = {20, 20, 20, 20, 20, 20},
    .lvl = 19,
    .species = SPECIES_BRELOOM,
    .heldItem = ITEM_NONE,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_TACKLE, MOVE_MEGA_DRAIN, MOVE_BULK_UP, MOVE_STUN_SPORE}
    }
};
// Mauville Gym Leader
static const struct TrainerMon sParty_Wattson1[] = {
    {
    .ivs = {25, 25, 25, 25, 25, 25},
    .lvl = 23,
    .species = SPECIES_CHINCHOU,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_SHOCK_WAVE, MOVE_BUBBLE_BEAM, MOVE_ICY_WIND, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = {25, 25, 25, 25, 25, 25},
    .lvl = 24,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_THUNDER_SHOCK, MOVE_THUNDER_WAVE, MOVE_SUPERSONIC, MOVE_SONIC_BOOM}
    },
    {
    .ivs = {25, 25, 25, 25, 25, 25},
    .lvl = 24,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_SPARK, MOVE_CHARM, MOVE_QUICK_ATTACK, MOVE_MAGICAL_LEAF}
    },
    {
    .ivs = {25, 25, 25, 25, 25, 25},
    .lvl = 25,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_QUICK_ATTACK, MOVE_BITE, MOVE_SHOCK_WAVE, MOVE_HOWL}
    }
};

static const struct TrainerMon sParty_Flannery1[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 30,
    .species = SPECIES_VULPIX,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_OVERHEAT, MOVE_WILL_O_WISP, MOVE_ROAR, MOVE_SUNNY_DAY}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 30,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_OVERHEAT, MOVE_ROCK_THROW, MOVE_LIGHT_SCREEN, MOVE_SUNNY_DAY}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 31,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_OVERHEAT, MOVE_MAGNITUDE, MOVE_SUNNY_DAY, MOVE_ATTRACT}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 32,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_BODY_SLAM, MOVE_ATTRACT}
    }
};
//Petalburg Gym Leader
static const struct TrainerMon sParty_Norman1[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 33,
    .species = SPECIES_VIGOROTH,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_SLASH, MOVE_FACADE, MOVE_ENCORE, MOVE_FAINT_ATTACK}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 34,
    .species = SPECIES_GIRAFARIG,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_FACADE, MOVE_PSYBEAM, MOVE_BITE, MOVE_SHOCK_WAVE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 34,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_PURSUIT, MOVE_BELLY_DRUM, MOVE_FACADE, MOVE_DIG}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 35,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_COUNTER, MOVE_YAWN, MOVE_FACADE, MOVE_FAINT_ATTACK}
    }
};
// Fortree Gym Leader
static const struct TrainerMon sParty_Winona1[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 36,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_AERIAL_ACE, MOVE_MAGICAL_LEAF, MOVE_EARTHQUAKE, MOVE_WHIRLWIND}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 37,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_AERIAL_ACE, MOVE_STEEL_WING, MOVE_TAKE_DOWN, MOVE_WHIRLWIND}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 37,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_WATER_PULSE, MOVE_SHOCK_WAVE, MOVE_ICE_BEAM, MOVE_AERIAL_ACE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 37,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_WHIRLWIND, MOVE_MUD_SLAP, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 38,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_EARTHQUAKE, MOVE_FLAMETHROWER, MOVE_DRAGON_DANCE, MOVE_AERIAL_ACE}
    }
};
// Mossdeep Gym Leader
static const struct TrainerMon sParty_TateAndLiza1[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 43,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 43,
    .species = SPECIES_XATU,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_SUNNY_DAY, MOVE_GIGA_DRAIN}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 44,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EXTRASENSORY, MOVE_HI_JUMP_KICK, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 44,
    .species = SPECIES_CHIMECHO,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_WISH, MOVE_HEAL_BELL }
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 45,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_HYPNOSIS, MOVE_CALM_MIND}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 45,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_SOLAR_BEAM, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY}
    }
};
// Original Base Gym Leader Placeholder
static const struct TrainerMon sParty_Juan1[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 44,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_WATER_PULSE, MOVE_ATTRACT, MOVE_SWEET_KISS, MOVE_FLAIL}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 44,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_AMNESIA, MOVE_EARTHQUAKE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 45,
    .species = SPECIES_SEALEO,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ENCORE, MOVE_BODY_SLAM, MOVE_AURORA_BEAM, MOVE_WATER_PULSE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 45,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_WATER_PULSE, MOVE_CRABHAMMER, MOVE_TAUNT, MOVE_LEER}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 46,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};
// Route 116 Cut School Kid
static const struct TrainerMon sParty_Jerry1[] = {
    {
    .ivs = {6, 7, 28, 22, 14, 19},
    .lvl = 14,
    .species = SPECIES_MEDITITE,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {16, 4, 7, 16, 16, 11},
    .lvl = 14,
    .species = SPECIES_RALTS,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Trick House 2
static const struct TrainerMon sParty_Ted[] = {
    {
    .ivs = {17, 11, 26, 27, 17, 11},
    .lvl = 24,
    .species = SPECIES_KIRLIA,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Trick House 2
static const struct TrainerMon sParty_Paul[] = {
    {
    .ivs = {29, 2, 13, 0, 15, 8},
    .lvl = 20,
    .species = SPECIES_NUMEL,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {7, 20, 13, 10, 14, 13},
    .lvl = 21,
    .species = SPECIES_ODDISH,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {15, 13, 11, 19, 26, 14},
    .lvl = 20,
    .species = SPECIES_GULPIN,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};

static const struct TrainerMon sParty_Jerry2[] = {
    {
    .ivs = {6, 12, 23, 18, 19, 12},
    .lvl = 28,
    .species = SPECIES_KIRLIA,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {21, 23, 18, 28, 24, 23},
    .lvl = 28,
    .species = SPECIES_MEDITITE,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Jerry3[] = {
    {
    .ivs = {21, 15, 18, 15, 8, 18},
    .lvl = 32,
    .species = SPECIES_KIRLIA,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {10, 5, 22, 14, 19, 13},
    .lvl = 32,
    .species = SPECIES_MEDITITE,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Jerry4[] = {
    {
    .ivs = {8, 8, 17, 17, 24, 12},
    .lvl = 43,
    .species = SPECIES_GARDEVOIR,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {14, 24, 20, 17, 19, 23},
    .lvl = 43,
    .species = SPECIES_MEDICHAM,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Jerry5[] = {
    {
    .ivs = {1, 12, 10, 13, 15, 7},
    .lvl = 60,
    .species = SPECIES_GARDEVOIR,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {18, 24, 20, 20, 18, 24},
    .lvl = 60,
    .species = SPECIES_BANETTE,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {17, 7, 26, 28, 22, 23},
    .lvl = 60,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Route 116 School Kid
static const struct TrainerMon sParty_Karen1[] = {
    {
    .ivs = {23, 4, 13, 17, 16, 5},
    .lvl = 12,
    .species = SPECIES_SHROOMISH,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Trick House 2 
static const struct TrainerMon sParty_Georgia[] = {
    {
    .ivs = {18, 2, 15, 9, 21, 17},
    .lvl = 20,
    .species = SPECIES_SURSKIT,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {3, 4, 24, 26, 20, 16},
    .lvl = 22,
    .species = SPECIES_BEAUTIFLY,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Karen2[] = {
    {
    .ivs = {10, 21, 6, 24, 15, 18},
    .lvl = 28,
    .species = SPECIES_BRELOOM,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {22, 18, 8, 4, 16, 12},
    .lvl = 28,
    .species = SPECIES_LOUDRED,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Karen3[] = {
    {
    .ivs = {28, 22, 8, 24, 21, 23},
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {7, 4, 26, 9, 17, 11},
    .lvl = 31,
    .species = SPECIES_LOUDRED,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Karen4[] = {
    {
    .ivs = {10, 9, 12, 20, 25, 16},
    .lvl = 34,
    .species = SPECIES_BRELOOM,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {16, 26, 24, 8, 17, 23},
    .lvl = 34,
    .species = SPECIES_LOUDRED,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Karen5[] = {
    {
    .ivs = {18, 10, 24, 15, 10, 10},
    .lvl = 59,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {18, 21, 13, 12, 11, 19},
    .lvl = 59,
    .species = SPECIES_WHISCASH,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {2, 22, 22, 26, 19, 9},
    .lvl = 59,
    .species = SPECIES_TROPIUS,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {14, 15, 22, 5, 13, 20},
    .lvl = 59,
    .species = SPECIES_EXPLOUD,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Route 121 Sr and Jr
static const struct TrainerMon sParty_KateAndJoy[] = {
    {
    .ivs = {10, 5, 12, 24, 25, 13},
    .lvl = 35,
    .species = SPECIES_SPINDA,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_HYPNOSIS, MOVE_PSYBEAM, MOVE_DIZZY_PUNCH, MOVE_TEETER_DANCE}
    },
    {
    .ivs = {29, 1, 21, 16, 8, 5},
    .lvl = 35,
    .species = SPECIES_SLAKING,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_YAWN, MOVE_SLACK_OFF, MOVE_FAINT_ATTACK, MOVE_FURY_SWIPES }
    }
};
// Route 117 Sr and Jr
static const struct TrainerMon sParty_AnnaAndMeg1[] = {
    {
    .ivs = {3, 19, 6, 20, 17, 30},
    .lvl = 19,
    .species = SPECIES_ZIGZAGOON,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_NONE}
    },
    {
    .ivs = {16, 18, 17, 19, 20, 10},
    .lvl = 19,
    .species = SPECIES_MAKUHITA,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg2[] = {
    {
    .ivs = {31, 21, 19, 13, 15, 20},
    .lvl = 30,
    .species = SPECIES_LINOONE,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .ivs = {22, 25, 9, 4, 14, 10},
    .lvl = 32,
    .species = SPECIES_HARIYAMA,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg3[] = {
    {
    .ivs = {11, 13, 17, 11, 17, 14},
    .lvl = 47,
    .species = SPECIES_LINOONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .ivs = {13, 17, 15, 16, 24, 15},
    .lvl = 47,
    .species = SPECIES_HARIYAMA,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg4[] = {
    {
    .ivs = {15, 21, 12, 12, 11, 26},
    .lvl = 53,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_SHADOW_BALL}
    },
    {
    .ivs = {15, 16, 13, 11, 13, 15},
    .lvl = 53,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg5[] = {
    {
    .ivs = {19, 13, 29, 19, 16, 19},
    .lvl = 66,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_SHADOW_BALL}
    },
    {
    .ivs = {13, 12, 18, 8, 10, 23},
    .lvl = 65,
    .species = SPECIES_MACHAMP,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_REVENGE, MOVE_SEISMIC_TOSS, MOVE_ROCK_SLIDE, MOVE_FIRE_PUNCH}
    },
    {
    .ivs = {24, 7, 9, 9, 10, 28},
    .lvl = 65,
    .species = SPECIES_FURRET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EXTREME_SPEED, MOVE_IRON_TAIL, MOVE_DIG, MOVE_FOCUS_ENERGY}
    },
    {
    .ivs = {17, 14, 15, 20, 26, 19},
    .lvl = 66,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BODY_SLAM, MOVE_FOCUS_ENERGY, MOVE_BRICK_BREAK, MOVE_NONE}
    }
};
//Winstrate House
static const struct TrainerMon sParty_Victor[] = {
    {
    .ivs = {20, 5, 14, 1, 15, 9},
    .lvl = 19,
    .species = SPECIES_TAILLOW,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {22, 19, 29, 11, 20, 11},
    .lvl = 19,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Route 103 Pokefan
static const struct TrainerMon sParty_Miguel1[] = {
    {
    .ivs = {14, 11, 14, 22, 10, 5},
    .lvl = 20,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// SS Tidal Pokefan Colton (all gen 2 baby from nat dex)
static const struct TrainerMon sParty_Colton[] = {
    {
    .ivs = {2, 18, 12, 22, 26, 20},
    .lvl = 55,
    .species = SPECIES_TOGEPI,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {17, 24, 30, 18, 4, 25},
    .lvl = 54,
    .species = SPECIES_SMOOCHUM,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {25, 29, 26, 13, 16, 26},
    .lvl = 55,
    .species = SPECIES_CLEFFA,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {6, 25, 13, 15, 22, 12},
    .lvl = 56,
    .species = SPECIES_MAGBY,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {18, 19, 8, 14, 16, 28},
    .lvl = 55,
    .species = SPECIES_ELEKID,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {16, 13, 19, 6, 14, 22},
    .lvl = 57,
    .species = SPECIES_TYROGUE,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Miguel2[] = {
    {
    .ivs = {24, 24, 21, 15, 19, 24},
    .lvl = 31,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Miguel3[] = {
    {
    .ivs = {25, 9, 19, 11, 22, 29},
    .lvl = 37,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Miguel4[] = {
    {
    .ivs = {14, 27, 12, 24, 15, 27},
    .lvl = 50,
    .species = SPECIES_CHANSEY,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {12, 21, 22, 22, 18, 9},
    .lvl = 50,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Miguel5[] = {
    {
    .ivs = {6, 11, 13, 13, 7, 16},
    .lvl = 59,
    .species = SPECIES_BLISSEY,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {13, 28, 11, 21, 22, 15},
    .lvl = 59,
    .species = SPECIES_BLISSEY,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {7, 13, 19, 16, 18, 26},
    .lvl = 59,
    .species = SPECIES_PERSIAN,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {4, 16, 14, 20, 4, 10},
    .lvl = 59,
    .species = SPECIES_BLISSEY,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {28, 15, 10, 9, 20, 25},
    .lvl = 60,
    .species = SPECIES_DELCATTY,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Winstrate House
static const struct TrainerMon sParty_Victoria[] = {
    {
    .ivs = {13, 17, 25, 19, 12, 16},
    .lvl = 21,
    .species = SPECIES_ROSELIA,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_POISON_STING, MOVE_STUN_SPORE, MOVE_MEGA_DRAIN, MOVE_LEECH_SEED}
    }
};
// Route 121 PokefanF
static const struct TrainerMon sParty_Vanessa[] = {
    {
    .ivs = {18, 11, 23, 17, 15, 10},
    .lvl = 35,
    .species = SPECIES_PIKACHU,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
//Sootopolis Gym Pokefan 2 (Highest Level - Double Battle w Olivia)
static const struct TrainerMon sParty_Bethany[] = {
    {
    .ivs = {21, 18, 13, 23, 8, 14},
    .lvl = 45,
    .species = SPECIES_AZURILL,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {12, 22, 23, 23, 21, 16},
    .lvl = 46,
    .species = SPECIES_MARILL,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {8, 3, 23, 16, 17, 22},
    .lvl = 48,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
//Route 110 PokefanF 1
static const struct TrainerMon sParty_Isabel1[] = {
    {
    .ivs = {14, 21, 10, 11, 13, 8},
    .lvl = 17,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_THUNDER_SHOCK, MOVE_GROWL, MOVE_LIGHT_SCREEN, MOVE_FLASH}
    },
    {
    .ivs = {25, 7, 26, 13, 7, 9},
    .lvl = 18,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_THUNDER_SHOCK, MOVE_HELPING_HAND, MOVE_LIGHT_SCREEN, MOVE_QUICK_ATTACK}
    }
};

static const struct TrainerMon sParty_Isabel2[] = {
    {
    .ivs = {8, 12, 10, 11, 3, 23},
    .lvl = 28,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {14, 19, 4, 14, 15, 14},
    .lvl = 28,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Isabel3[] = {
    {
    .ivs = {12, 10, 11, 11, 19, 13},
    .lvl = 34,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {24, 11, 5, 10, 11, 0},
    .lvl = 34,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Isabel4[] = {
    {
    .ivs = {10, 9, 4, 6, 8, 19},
    .lvl = 48,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {5, 23, 31, 8, 21, 14},
    .lvl = 48,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Isabel5[] = {
    {
    .ivs = {25, 7, 13, 5, 19, 11},
    .lvl = 58,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {23, 15, 16, 23, 21, 26},
    .lvl = 56,
    .species = SPECIES_ILLUMISE,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {20, 13, 4, 16, 9, 15},
    .lvl = 56,
    .species = SPECIES_VOLBEAT,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {20, 15, 6, 19, 19, 11},
    .lvl = 58,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Route 115 Surf Expert 
static const struct TrainerMon sParty_Timothy1[] = {
    {
    .ivs = {31, 11, 18, 21, 11, 15},
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Timothy2[] = {
    {
    .ivs = {5, 10, 13, 16, 18, 16},
    .lvl = 36,
    .species = SPECIES_HARIYAMA,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_ARM_THRUST, MOVE_KNOCK_OFF, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Timothy3[] = {
    {
    .ivs = {12, 19, 17, 14, 14, 15},
    .lvl = 43,
    .species = SPECIES_HARIYAMA,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_ARM_THRUST, MOVE_KNOCK_OFF, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Timothy4[] = {
    {
    .ivs = {24, 13, 5, 17, 16, 26},
    .lvl = 50,
    .species = SPECIES_HARIYAMA,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_ARM_THRUST, MOVE_BELLY_DRUM, MOVE_SAND_ATTACK, MOVE_DIG}
    },
    {
    .ivs = {15, 21, 10, 18, 21, 18},
    .lvl = 50,
    .species = SPECIES_BRELOOM,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Timothy5[] = {
    {
    .ivs = {9, 15, 10, 11, 15, 21},
    .lvl = 59,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {17, 7, 10, 17, 17, 14},
    .lvl = 59,
    .species = SPECIES_PINSIR,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {16, 17, 11, 12, 25, 1},
    .lvl = 60,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Winstrate House
static const struct TrainerMon sParty_Vicky[] = {
    {
    .ivs = {10, 16, 26, 6, 22, 17},
    .lvl = 23,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_HI_JUMP_KICK, MOVE_MEDITATE, MOVE_CONFUSION, MOVE_CALM_MIND}
    }
};
// Mt Chimney ExpertF
static const struct TrainerMon sParty_Shelby1[] = {
    {
    .ivs = {20, 15, 16, 24, 18, 12},
    .lvl = 28,
    .species = SPECIES_HARIYAMA,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Shelby2[] = {
    {
    .ivs = {16, 15, 26, 12, 19, 15},
    .lvl = 32,
    .species = SPECIES_MEDITITE,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {22, 20, 19, 11, 16, 18},
    .lvl = 32,
    .species = SPECIES_HARIYAMA,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Shelby3[] = {
    {
    .ivs = {12, 11, 12, 30, 19, 1},
    .lvl = 35,
    .species = SPECIES_MEDICHAM,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {26, 20, 31, 21, 9, 18},
    .lvl = 35,
    .species = SPECIES_HARIYAMA,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Shelby4[] = {
    {
    .ivs = {20, 1, 25, 21, 10, 9},
    .lvl = 46,
    .species = SPECIES_MEDICHAM,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {20, 15, 13, 16, 24, 20},
    .lvl = 46,
    .species = SPECIES_HARIYAMA,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Shelby5[] = {
    {
    .ivs = {26, 5, 15, 16, 18, 13},
    .lvl = 60,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {22, 12, 18, 6, 17, 18},
    .lvl = 59,
    .species = SPECIES_BANETTE,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {24, 6, 28, 25, 30, 19},
    .lvl = 60,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
//Route 102 Youngster 1
static const struct TrainerMon sParty_Calvin1[] = {
    {
    .ivs = {24, 22, 6, 0, 16, 24},
    .lvl = 6,
    .species = SPECIES_POOCHYENA,
    .evs = {14, 14, 14, 14, 14, 14},
    }
};
//Route 104 Youngster
static const struct TrainerMon sParty_Billy[] = {
    {
    .ivs = {20, 21, 19, 2, 7, 15},
    .lvl = 8,
    .species = SPECIES_ZIGZAGOON,
    .evs = {14, 14, 14, 14, 14, 14},
    },
    {
    .ivs = {11, 16, 13, 7, 11, 16},
    .lvl = 9,
    .species = SPECIES_SEEDOT,
    .evs = {14, 14, 14, 14, 14, 14},
    }
};
//Rustboro Gym Youngster 1 (One by himself)
static const struct TrainerMon sParty_Josh[] = {
    {
    .ivs = {6, 9, 18, 1, 30, 20},
    .lvl = 11,
    .species = SPECIES_GEODUDE,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_NONE, MOVE_NONE}
    },
    {
    .ivs = {16, 16, 9, 11, 16, 16},
    .lvl = 12,
    .species = SPECIES_ARON,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_METAL_CLAW, MOVE_TACKLE, MOVE_HARDEN, MOVE_NONE}
    },
    {
    .ivs = {13, 16, 12, 14, 15, 16},
    .lvl = 12,
    .species = SPECIES_GEODUDE,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_ROCK_THROW, MOVE_NONE}
    }
};
//Rustboro Gym Youngster 2 (Potential Double Battle with Marc)
static const struct TrainerMon sParty_Tommy[] = {
    {
    .ivs = {22, 2, 18, 2, 12, 15},
    .lvl = 11,
    .species = SPECIES_GEODUDE,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_ROCK_THROW, MOVE_NONE}
    },
    {
    .ivs = {16, 6, 16, 8, 9, 15},
    .lvl = 12,
    .species = SPECIES_ARON,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_METAL_CLAW, MOVE_TACKLE, MOVE_HARDEN, MOVE_NONE}
    },
};
// Route 116 Youngster 1
static const struct TrainerMon sParty_Joey[] = {
    {
    .ivs = {22, 17, 10, 21, 12, 22},
    .lvl = 11,
    .species = SPECIES_MACHOP,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {16, 16, 12, 16, 16, 6},
    .lvl = 10,
    .species = SPECIES_VULPIX,
    .evs = {14, 14, 14, 14, 14, 14},
    },
};
// Mauville Gym Youngster
static const struct TrainerMon sParty_Ben[] = {
    {
    .ivs = {10, 13, 11, 12, 10, 11},
    .lvl = 20,
    .species = SPECIES_LINOONE,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_GROWL, MOVE_THUNDERBOLT}
    },
    {
    .ivs = {11, 22, 3, 13, 25, 15},
    .lvl = 19,
    .species = SPECIES_GULPIN,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_AMNESIA, MOVE_SLUDGE, MOVE_YAWN, MOVE_POUND}
    }
};
// Victory Road CooltrainerM (Iconic Double Battle w Katelynn)
static const struct TrainerMon sParty_Quincy[] = {
    {
    .ivs = {22, 14, 18, 23, 21, 26},
    .lvl = 50,
    .species = SPECIES_SLAKING,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_ATTRACT, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER}
    },
    {
    .ivs = {17, 13, 11, 27, 26, 7},
    .lvl = 50,
    .species = SPECIES_DUSCLOPS,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_SKILL_SWAP, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_TOXIC}
    }
};
// Victory Road CooltrainerF (Iconic Double Battle w Quincy)
static const struct TrainerMon sParty_Katelynn[] = {
    {
    .ivs = {18, 21, 2, 24, 16, 8},
    .lvl = 50,
    .species = SPECIES_GARDEVOIR,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_SKILL_SWAP, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_CALM_MIND}
    },
    {
    .ivs = {22, 22, 10, 19, 4, 1},
    .lvl = 50,
    .species = SPECIES_SLAKING,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK}
    }
};
// Route 113 Youngster 1
static const struct TrainerMon sParty_Jaylen[] = {
    {
    .ivs = {16, 16, 15, 10, 12, 19},
    .lvl = 25,
    .species = SPECIES_TRAPINCH,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 113 Youngster 2
static const struct TrainerMon sParty_Dillon[] = {
    {
    .ivs = {3, 15, 23, 20, 15, 5},
    .lvl = 26,
    .species = SPECIES_ARON,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Calvin2[] = {
    {
    .ivs = {17, 17, 8, 12, 11, 18},
    .lvl = 29,
    .species = SPECIES_MIGHTYENA,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Calvin3[] = {
    {
    .ivs = {4, 4, 27, 17, 1, 20},
    .lvl = 30,
    .species = SPECIES_SWELLOW,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {5, 10, 18, 22, 10, 14},
    .lvl = 32,
    .species = SPECIES_MIGHTYENA,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Calvin4[] = {
    {
    .ivs = {13, 27, 15, 16, 12, 25},
    .lvl = 33,
    .species = SPECIES_SWELLOW,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {3, 7, 12, 20, 18, 14},
    .lvl = 31,
    .species = SPECIES_LINOONE,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {14, 25, 12, 1, 26, 31},
    .lvl = 35,
    .species = SPECIES_MIGHTYENA,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Calvin5[] = {
    {
    .ivs = {24, 13, 17, 12, 25, 16},
    .lvl = 53,
    .species = SPECIES_SWELLOW,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {13, 15, 14, 4, 1, 29},
    .lvl = 53,
    .species = SPECIES_PIDGEOT,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {29, 21, 1, 18, 26, 27},
    .lvl = 53,
    .species = SPECIES_RATICATE,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {0, 25, 24, 17, 17, 26},
    .lvl = 51,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {14, 12, 12, 26, 13, 19},
    .lvl = 52,
    .species = SPECIES_MIGHTYENA,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Trick House 1 (Cut) Youngster
static const struct TrainerMon sParty_Eddie[] = {
    {
    .ivs = {21, 20, 3, 23, 23, 13},
    .lvl = 18,
    .species = SPECIES_NINCADA,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {16, 18, 12, 20, 19, 23},
    .lvl = 18,
    .species = SPECIES_NUZLEAF,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
//Route 102 Youngster 2
static const struct TrainerMon sParty_Allen[] = {
    {
    .ivs = {17, 20, 12, 8, 25, 20},
    .lvl = 6,
    .species = SPECIES_ZIGZAGOON,
    .evs = {14, 14, 14, 14, 14, 14},
    },
    {
    .ivs = {16, 16, 16, 0, 16, 16},
    .lvl = 5,
    .species = SPECIES_TAILLOW,
    .evs = {14, 14, 14, 14, 14, 14},
    }
};
//Route 110 Youngster 1
static const struct TrainerMon sParty_Timmy[] = {
    {
    .ivs = {20, 14, 14, 21, 13, 9},
    .lvl = 18,
    .species = SPECIES_ARON,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {27, 13, 9, 13, 8, 5},
    .lvl = 18,
    .species = SPECIES_GULPIN,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};

// Gym Leader
static const struct TrainerMon sParty_Wallace1[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 50,
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_PETAYA_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 50,
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_SILVER_POWDER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_HYDRO_PUMP, MOVE_SIGNAL_BEAM, MOVE_STUN_SPORE, MOVE_BLIZZARD}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 50,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_SURF, MOVE_RAIN_DANCE, MOVE_YAWN}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 50,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_MYSTIC_WATER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GIGA_DRAIN, MOVE_WATER_PULSE, MOVE_LEECH_SEED, MOVE_DOUBLE_TEAM}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 51,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_RECOVER, MOVE_DIVE, MOVE_ICE_BEAM, MOVE_TOXIC}
    }
};

// Champion (Rematch)
static const struct TrainerMon sParty_Wallace2[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 77,
    .species = SPECIES_WAILORD,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_SPOUT, MOVE_DOUBLE_EDGE, MOVE_BLIZZARD}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 75,
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP, MOVE_TOXIC, MOVE_ICE_BEAM}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 76,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_MIRACLE_SEED,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_GIGA_DRAIN, MOVE_SURF, MOVE_ICE_BEAM, MOVE_RAIN_DANCE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 76,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_FOCUS_BAND,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_EARTHQUAKE, MOVE_SURF, MOVE_YAWN, MOVE_ICY_WIND}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 76,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {0, 252, 0, 0, 0, 252},
    .moves = {MOVE_BOUNCE, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_SURF}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 78,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {252, 0, 0, 0, 0, 252},
    .moves = {MOVE_DIVE, MOVE_RECOVER, MOVE_LIGHT_SCREEN, MOVE_TOXIC}
    }
};

// Route 103 Fisherman
static const struct TrainerMon sParty_Andrew[] = {
    {
    .ivs = {16, 8, 1, 19, 19, 12},
    .lvl = 17,
    .species = SPECIES_BARBOACH,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {7, 22, 23, 13, 12, 13},
    .lvl = 17,
    .species = SPECIES_TENTACOOL,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {27, 24, 17, 21, 14, 4},
    .lvl = 21,
    .species = SPECIES_MAGIKARP,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
//Route 104 North Fisherman
static const struct TrainerMon sParty_Ivan[] = {
    {
    .ivs = {3, 18, 19, 27, 19, 15},
    .lvl = 8,
    .species = SPECIES_MAGIKARP,
    .evs = {14, 14, 14, 14, 14, 14},
    },
    {
    .ivs = {16, 12, 16, 16, 11, 16},
    .lvl = 9,
    .species = SPECIES_GOLDEEN,
    .evs = {14, 14, 14, 14, 14, 14},
    }
};
// Route 114 Fisherman 3
static const struct TrainerMon sParty_Claude[] = {
    {
    .ivs = {6, 21, 10, 29, 23, 19},
    .lvl = 25,
    .species = SPECIES_BARBOACH,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {9, 5, 24, 22, 31, 8},
    .lvl = 25,
    .species = SPECIES_GOLDEEN,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {24, 21, 8, 3, 5, 8},
    .lvl = 25,
    .species = SPECIES_BARBOACH,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 106 Fisherman 2
static const struct TrainerMon sParty_Elliot1[] = {
    {
    .ivs = {10, 6, 15, 5, 26, 9},
    .lvl = 14,
    .species = SPECIES_TENTACOOL,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {11, 14, 9, 7, 16, 14},
    .lvl = 14,
    .species = SPECIES_CORPHISH,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Route 106 Fisherman 1
static const struct TrainerMon sParty_Ned[] = {
    {
    .ivs = {11, 18, 13, 9, 23, 24},
    .lvl = 13,
    .species = SPECIES_HORSEA,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {16, 16, 16, 16, 16, 12},
    .lvl = 13,
    .species = SPECIES_TENTACOOL,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {16, 16, 14, 10, 12, 16},
    .lvl = 13,
    .species = SPECIES_HORSEA,
    .evs = {28, 28, 28, 28, 28, 28},
    },
};
// Route 110 Fisherman
static const struct TrainerMon sParty_Dale[] = {
    {
    .ivs = {9, 16, 6, 29, 5, 17},
    .lvl = 18,
    .species = SPECIES_WAILMER,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {19, 26, 19, 16, 21, 8},
    .lvl = 17,
    .species = SPECIES_TENTACOOL,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {12, 2, 3, 12, 8, 25},
    .lvl = 18,
    .species = SPECIES_WAILMER,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Route 114 Fisherman 1
static const struct TrainerMon sParty_Nolan[] = {
    {
    .ivs = {6, 28, 20, 10, 31, 24},
    .lvl = 22,
    .species = SPECIES_GYARADOS,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
//Route 118 East Fisherman
static const struct TrainerMon sParty_Barny[] = {
    {
    .ivs = {27, 16, 29, 13, 8, 30},
    .lvl = 28,
    .species = SPECIES_BARBOACH,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {16, 2, 13, 18, 27, 15},
    .lvl = 28,
    .species = SPECIES_CARVANHA,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
//Route 118 Mauville Fisherman
static const struct TrainerMon sParty_Wade[] = {
    {
    .ivs = {11, 9, 26, 5, 9, 18},
    .lvl = 21,
    .species = SPECIES_BARBOACH,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
//Route 109 Surf Fisherman 1
static const struct TrainerMon sParty_Carter[] = {
    {
    .ivs = {30, 21, 18, 16, 10, 19},
    .lvl = 30,
    .species = SPECIES_WAILMER,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {15, 22, 9, 3, 30, 17},
    .lvl = 30,
    .species = SPECIES_TENTACRUEL,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Elliot2[] = {
    {
    .ivs = {14, 24, 6, 14, 25, 18},
    .lvl = 26,
    .species = SPECIES_TENTACOOL,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {6, 25, 16, 14, 25, 20},
    .lvl = 29,
    .species = SPECIES_CORPHISH,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {30, 11, 18, 8, 16, 17},
    .lvl = 29,
    .species = SPECIES_GYARADOS,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Elliot3[] = {
    {
    .ivs = {19, 3, 26, 13, 17, 13},
    .lvl = 31,
    .species = SPECIES_GYARADOS,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {10, 23, 15, 12, 23, 29},
    .lvl = 31,
    .species = SPECIES_TENTACOOL,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {16, 17, 13, 19, 14, 24},
    .lvl = 31,
    .species = SPECIES_CRAWDAUNT,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {19, 18, 13, 26, 16, 23},
    .lvl = 31,
    .species = SPECIES_GYARADOS,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Elliot4[] = {
    {
    .ivs = {8, 12, 8, 18, 19, 7},
    .lvl = 33,
    .species = SPECIES_GYARADOS,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {12, 16, 24, 6, 12, 15},
    .lvl = 32,
    .species = SPECIES_CRAWDAUNT,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {12, 23, 28, 21, 24, 19},
    .lvl = 32,
    .species = SPECIES_TENTACRUEL,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {24, 31, 17, 15, 2, 6},
    .lvl = 33,
    .species = SPECIES_GYARADOS,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Elliot5[] = {
    {
    .ivs = {1, 18, 4, 15, 20, 4},
    .lvl = 61,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {29, 2, 24, 16, 8, 13},
    .lvl = 61,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {11, 24, 19, 10, 18, 25},
    .lvl = 61,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {13, 19, 0, 17, 2, 11},
    .lvl = 61,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {19, 19, 14, 13, 26, 7},
    .lvl = 61,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {13, 16, 11, 10, 20, 24},
    .lvl = 61,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Route 132 Fisherman
static const struct TrainerMon sParty_Ronald[] = {
    {
    .ivs = {17, 22, 10, 18, 24, 23},
    .lvl = 21,
    .species = SPECIES_MAGIKARP,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {12, 11, 15, 22, 13, 17},
    .lvl = 42,
    .species = SPECIES_GYARADOS,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {16, 10, 13, 24, 10, 24},
    .lvl = 42,
    .species = SPECIES_GYARADOS,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {30, 10, 18, 22, 16, 13},
    .lvl = 42,
    .species = SPECIES_GYARADOS,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {24, 17, 24, 14, 20, 19},
    .lvl = 42,
    .species = SPECIES_GYARADOS,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {10, 14, 9, 27, 15, 16},
    .lvl = 47,
    .species = SPECIES_GYARADOS,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Cycling Road mTriathlete
static const struct TrainerMon sParty_Jacob[] = {
    {
    .ivs = {17, 27, 16, 23, 21, 18},
    .lvl = 20,
    .species = SPECIES_TAILLOW,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {8, 18, 17, 15, 20, 11},
    .lvl = 22,
    .species = SPECIES_VOLTORB,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {16, 20, 9, 20, 18, 27},
    .lvl = 20,
    .species = SPECIES_PONYTA,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Cycling Road mTriathlete
static const struct TrainerMon sParty_Anthony[] = {
    {
    .ivs = {14, 16, 27, 7, 13, 22},
    .lvl = 20,
    .species = SPECIES_PLUSLE,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {7, 13, 6, 14, 12, 18},
    .lvl = 20,
    .species = SPECIES_DODUO,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Cycling Road mTriathlete 
static const struct TrainerMon sParty_Benjamin1[] = {
    {
    .ivs = {16, 26, 16, 16, 15, 12},
    .lvl = 22,
    .species = SPECIES_MAGNEMITE,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Benjamin2[] = {
    {
    .ivs = {11, 28, 14, 18, 14, 25},
    .lvl = 39,
    .species = SPECIES_MAGNETON,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Benjamin3[] = {
    {
    .ivs = {18, 17, 16, 21, 18, 18},
    .lvl = 48,
    .species = SPECIES_MAWILE,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {18, 26, 18, 20, 13, 13},
    .lvl = 47,
    .species = SPECIES_AGGRON,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {13, 14, 24, 7, 14, 23},
    .lvl = 48,
    .species = SPECIES_MAGNETON,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Benjamin4[] = {
    {
    .ivs = {20, 14, 13, 11, 11, 6},
    .lvl = 55,
    .species = SPECIES_SCYTHER,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {28, 15, 15, 19, 24, 31},
    .lvl = 56,
    .species = SPECIES_MAWILE,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {12, 8, 8, 8, 21, 7},
    .lvl = 56,
    .species = SPECIES_AGGRON,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {28, 26, 17, 5, 20, 13},
    .lvl = 57,
    .species = SPECIES_MAGNETON,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Benjamin5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_FORRETRESS,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_EXPLOSION, MOVE_SPIKES, MOVE_TOXIC, MOVE_PROTECT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_MAWILE,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_METAL_CLAW, MOVE_CRUNCH, MOVE_SLUDGE_BOMB, MOVE_ROCK_SLIDE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 0, 252},
    .moves = {MOVE_TOXIC, MOVE_WHIRLWIND, MOVE_FLY, MOVE_TORMENT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_CHESTO_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 252, 0, 252, 0},
    .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_REST, MOVE_TRI_ATTACK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_METAGROSS,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_METEOR_MASH, MOVE_BRICK_BREAK, MOVE_ROCK_SLIDE, MOVE_EXPLOSION}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_SCIZOR,
    .heldItem = ITEM_SALAC_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TWINEEDLE, MOVE_REVERSAL, MOVE_ENDURE, MOVE_BATON_PASS}
    }
};
// Cycling Road fTriathlete
static const struct TrainerMon sParty_Abigail1[] = {
    {
    .ivs = {18, 6, 20, 18, 21, 18},
    .lvl = 23,
    .species = SPECIES_MAGNEMITE,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Cycling Road fTriathlete
static const struct TrainerMon sParty_Jasmine[] = {
    {
    .ivs = {14, 15, 11, 5, 12, 27},
    .lvl = 20,
    .species = SPECIES_DODUO,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {15, 14, 7, 10, 25, 11},
    .lvl = 22,
    .species = SPECIES_PONYTA,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {14, 11, 15, 2, 16, 4},
    .lvl = 20,
    .species = SPECIES_VOLTORB,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};

static const struct TrainerMon sParty_Abigail2[] = {
    {
    .ivs = {16, 16, 9, 16, 28, 28},
    .lvl = 30,
    .species = SPECIES_MAGNEMITE,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Abigail3[] = {
    {
    .ivs = {16, 29, 15, 13, 10, 28},
    .lvl = 37,
    .species = SPECIES_MAGNETON,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Abigail4[] = {
    {
    .ivs = {6, 8, 14, 17, 14, 9},
    .lvl = 47,
    .species = SPECIES_MAGNETON,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Abigail5[] = {
    {
    .ivs = {22, 4, 13, 23, 14, 23},
    .lvl = 60,
    .species = SPECIES_AIPOM,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {24, 14, 11, 20, 13, 24},
    .lvl = 61,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {15, 30, 19, 18, 20, 5},
    .lvl = 58,
    .species = SPECIES_MAGNETON,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Route 117 Triathlete
static const struct TrainerMon sParty_Dylan1[] = {
    {
    .ivs = {24, 9, 13, 13, 5, 9},
    .lvl = 19,
    .species = SPECIES_DODUO,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {23, 14, 17, 21, 15, 11},
    .lvl = 19,
    .species = SPECIES_PONYTA,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};

static const struct TrainerMon sParty_Dylan2[] = {
    {
    .ivs = {22, 15, 9, 21, 22, 28},
    .lvl = 30,
    .species = SPECIES_DODUO,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {19, 11, 26, 11, 22, 13},
    .lvl = 33,
    .species = SPECIES_PONYTA,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Dylan3[] = {
    {
    .ivs = {12, 12, 15, 7, 17, 16},
    .lvl = 33,
    .species = SPECIES_DODUO,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {8, 13, 28, 15, 20, 21},
    .lvl = 36,
    .species = SPECIES_PONYTA,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Dylan4[] = {
    {
    .ivs = {24, 20, 22, 24, 7, 17},
    .lvl = 36,
    .species = SPECIES_DODRIO,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {8, 15, 8, 22, 6, 22},
    .lvl = 39,
    .species = SPECIES_PONYTA,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Dylan5[] = {
    {
    .ivs = {6, 16, 11, 12, 6, 12},
    .lvl = 39,
    .species = SPECIES_DODRIO,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {22, 19, 6, 15, 1, 20},
    .lvl = 42,
    .species = SPECIES_RAPIDASH,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 117 TriathleteF
static const struct TrainerMon sParty_Maria1[] = {
    {
    .ivs = {30, 19, 9, 16, 9, 8},
    .lvl = 21,
    .species = SPECIES_DODUO,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Maria2[] = {
    {
    .ivs = {18, 13, 5, 6, 20, 3},
    .lvl = 30,
    .species = SPECIES_DODUO,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Maria3[] = {
    {
    .ivs = {19, 13, 3, 6, 19, 20},
    .lvl = 33,
    .species = SPECIES_DODUO,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Maria4[] = {
    {
    .ivs = {5, 24, 18, 1, 4, 23},
    .lvl = 54,
    .species = SPECIES_DODRIO,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Maria5[] = {
    {
    .ivs = {17, 21, 11, 1, 2, 16},
    .lvl = 63,
    .species = SPECIES_DODRIO,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {6, 16, 14, 19, 13, 16},
    .lvl = 63,
    .species = SPECIES_RAPIDASH,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Route 127 TriathleteM
static const struct TrainerMon sParty_Camden[] = {
    {
    .ivs = {9, 19, 26, 9, 22, 26},
    .lvl = 40,
    .species = SPECIES_STARMIE,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {12, 19, 6, 17, 24, 15},
    .lvl = 40,
    .species = SPECIES_LUVDISC,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Abandoned Ship
static const struct TrainerMon sParty_Demetrius[] = {
    {
    .ivs = {12, 18, 8, 16, 29, 21},
    .lvl = 30,
    .species = SPECIES_MAGCARGO,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {18, 8, 14, 19, 19, 6},
    .lvl = 30,
    .species = SPECIES_MANECTRIC,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 128 TriatheleteM
static const struct TrainerMon sParty_Isaiah1[] = {
    {
    .ivs = {26, 14, 28, 6, 18, 6},
    .lvl = 42,
    .species = SPECIES_STARMIE,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 126 Triathlete
static const struct TrainerMon sParty_Pablo1[] = {
    {
    .ivs = {18, 13, 25, 25, 27, 14},
    .lvl = 40,
    .species = SPECIES_LANTURN,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {19, 17, 28, 6, 17, 16},
    .lvl = 40,
    .species = SPECIES_STARMIE,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 129 TriathleteM
static const struct TrainerMon sParty_Chase[] = {
    {
    .ivs = {23, 17, 10, 8, 12, 13},
    .lvl = 43,
    .species = SPECIES_RELICANTH,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Isaiah2[] = {
    {
    .ivs = {25, 24, 10, 15, 25, 18},
    .lvl = 44,
    .species = SPECIES_STARMIE,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Isaiah3[] = {
    {
    .ivs = {14, 10, 18, 21, 14, 12},
    .lvl = 46,
    .species = SPECIES_STARMIE,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Isaiah4[] = {
    {
    .ivs = {13, 21, 22, 16, 12, 14},
    .lvl = 48,
    .species = SPECIES_STARMIE,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Isaiah5[] = {
    {
    .ivs = {10, 25, 23, 15, 18, 18},
    .lvl = 61,
    .species = SPECIES_KINGLER,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {6, 29, 23, 21, 15, 16},
    .lvl = 61,
    .species = SPECIES_STARMIE,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {15, 6, 22, 9, 28, 7},
    .lvl = 61,
    .species = SPECIES_LANTURN,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {11, 20, 15, 11, 12, 20},
    .lvl = 61,
    .species = SPECIES_STARMIE,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Route 126 SwimmerF
static const struct TrainerMon sParty_Isobel[] = {
    {
    .ivs = {11, 12, 19, 19, 21, 17},
    .lvl = 41,
    .species = SPECIES_GOLDUCK,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 127 TriathleteF
static const struct TrainerMon sParty_Donny[] = {
    {
    .ivs = {21, 14, 20, 14, 20, 6},
    .lvl = 40,
    .species = SPECIES_PELIPPER,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {7, 13, 4, 28, 4, 31},
    .lvl = 40,
    .species = SPECIES_STARYU,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 131 TriathleteF
static const struct TrainerMon sParty_Talia[] = {
    {
    .ivs = {8, 28, 15, 13, 15, 24},
    .lvl = 44,
    .species = SPECIES_GYARADOS,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 128 TriathleteF
static const struct TrainerMon sParty_Katelyn1[] = {
    {
    .ivs = {13, 23, 3, 15, 15, 6},
    .lvl = 42,
    .species = SPECIES_STARMIE,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 129 TriathleteF
static const struct TrainerMon sParty_Allison[] = {
    {
    .ivs = {17, 8, 20, 22, 11, 9},
    .lvl = 42,
    .species = SPECIES_PELIPPER,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {14, 13, 2, 29, 2, 13},
    .lvl = 42,
    .species = SPECIES_SEAKING,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Katelyn2[] = {
    {
    .ivs = {11, 15, 19, 15, 28, 14},
    .lvl = 44,
    .species = SPECIES_STARMIE,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Katelyn3[] = {
    {
    .ivs = {18, 23, 27, 8, 25, 14},
    .lvl = 56,
    .species = SPECIES_STARMIE,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Katelyn4[] = {
    {
    .ivs = {13, 20, 23, 15, 9, 30},
    .lvl = 63,
    .species = SPECIES_STARMIE,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Katelyn5[] = {
    {
    .ivs = {29, 13, 14, 20, 7, 12},
    .lvl = 77,
    .species = SPECIES_STARMIE,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Meteor Falls Dragon Tamer
static const struct TrainerMon sParty_Nicolas1[] = {
    {
    .ivs = {6, 8, 16, 11, 23, 18},
    .lvl = 50,
    .species = SPECIES_ALTARIA,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {21, 12, 17, 10, 30, 24},
    .lvl = 50,
    .species = SPECIES_ALTARIA,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Nicolas2[] = {
    {
    .ivs = {13, 19, 11, 19, 20, 14},
    .lvl = 54,
    .species = SPECIES_ALTARIA,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {24, 24, 17, 23, 22, 17},
    .lvl = 55,
    .species = SPECIES_ALTARIA,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Nicolas3[] = {
    {
    .ivs = {9, 20, 23, 7, 11, 31},
    .lvl = 56,
    .species = SPECIES_ALTARIA,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {21, 15, 8, 11, 8, 7},
    .lvl = 57,
    .species = SPECIES_FLYGON,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {12, 21, 23, 22, 23, 17},
    .lvl = 57,
    .species = SPECIES_ALTARIA,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Nicolas4[] = {
    {
    .ivs = {11, 18, 20, 1, 3, 20},
    .lvl = 51,
    .species = SPECIES_SHELGON,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {20, 14, 17, 26, 3, 8},
    .lvl = 59,
    .species = SPECIES_ALTARIA,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {21, 17, 15, 4, 16, 16},
    .lvl = 58,
    .species = SPECIES_FLYGON,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {10, 3, 22, 18, 15, 9},
    .lvl = 60,
    .species = SPECIES_ALTARIA,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Nicolas5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_REST}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_KINGS_ROCK,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_DYNAMIC_PUNCH, MOVE_EARTHQUAKE, MOVE_OUTRAGE, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_SALAMENCE,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 0, 0, 252},
    .moves = {MOVE_DRAGON_DANCE, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_EARTHQUAKE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SIGNAL_BEAM, MOVE_FIRE_BLAST}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_DOUBLE_EDGE, MOVE_SKY_ATTACK, MOVE_AERIAL_ACE, MOVE_THIEF}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_SALAC_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FLAIL, MOVE_HYDRO_PUMP, MOVE_ENDURE, MOVE_ICE_BEAM}
    }
};
// Route 134 Dragon Tamer
static const struct TrainerMon sParty_Aaron[] = {
    {
    .ivs = {15, 22, 20, 7, 12, 22},
    .lvl = 36,
    .species = SPECIES_BAGON,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_DRAGON_BREATH, MOVE_HEADBUTT, MOVE_FOCUS_ENERGY, MOVE_EMBER}
    },
    {
    .ivs = {15, 12, 19, 11, 13, 16},
    .lvl = 46,
    .species = SPECIES_SHELGON,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_DRAGON_BREATH, MOVE_HEADBUTT, MOVE_FOCUS_ENERGY, MOVE_FLAMETHROWER}
    },
    {
    .ivs = {12, 20, 15, 21, 6, 10},
    .lvl = 51,
    .species = SPECIES_SHELGON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DRAGON_BREATH, MOVE_HEADBUTT, MOVE_FOCUS_ENERGY, MOVE_FIRE_BLAST}
    }
};
//Route 118 East Bird Keeper 2
static const struct TrainerMon sParty_Perry[] = {
    {
    .ivs = {16, 7, 15, 6, 17, 17},
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 119 Bird Keeper 2
static const struct TrainerMon sParty_Hugh[] = {
    {
    .ivs = {22, 24, 23, 1, 9, 30},
    .lvl = 28,
    .species = SPECIES_PELIPPER,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {25, 6, 16, 13, 5, 11},
    .lvl = 28,
    .species = SPECIES_TROPIUS,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 119 Bird Keeper 1
static const struct TrainerMon sParty_Phil[] = {
    {
    .ivs = {15, 16, 13, 7, 22, 17},
    .lvl = 30,
    .species = SPECIES_SWELLOW,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Fortree Gym Bird Keeper 2
static const struct TrainerMon sParty_Jared[] = {
    {
    .ivs = {18, 28, 15, 10, 12, 15},
    .lvl = 34,
    .species = SPECIES_DODUO,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {23, 14, 8, 23, 21, 23},
    .lvl = 34,
    .species = SPECIES_TROPIUS,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Fortree Gym Bird Keeper 1
static const struct TrainerMon sParty_Humberto[] = {
    {
    .ivs = {26, 7, 27, 12, 25, 14},
    .lvl = 36,
    .species = SPECIES_SKARMORY,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 125 Bird Keeper
static const struct TrainerMon sParty_Presley[] = {
    {
    .ivs = {29, 18, 11, 6, 3, 12},
    .lvl = 40,
    .species = SPECIES_TROPIUS,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {14, 14, 13, 7, 5, 14},
    .lvl = 40,
    .species = SPECIES_XATU,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Fortree Gym Bird Keeper 3 (Double Battle with Flint)
static const struct TrainerMon sParty_Edwardo[] = {
    {
    .ivs = {19, 17, 21, 14, 3, 10},
    .lvl = 35,
    .species = SPECIES_VIBRAVA,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {23, 12, 22, 9, 19, 6},
    .lvl = 34,
    .species = SPECIES_MASQUERAIN,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 120 Bird Keeper 2
static const struct TrainerMon sParty_Colin[] = {
    {
    .ivs = {20, 16, 5, 6, 13, 10},
    .lvl = 31,
    .species = SPECIES_PELIPPER,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {11, 20, 24, 18, 28, 22},
    .lvl = 31,
    .species = SPECIES_XATU,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 120 Bird Keeper 1
static const struct TrainerMon sParty_Robert1[] = {
    {
    .ivs = {8, 9, 16, 19, 22, 18},
    .lvl = 34,
    .species = SPECIES_XATU,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Trick Room 6
static const struct TrainerMon sParty_Benny[] = {
    {
    .ivs = {19, 21, 18, 24, 22, 24},
    .lvl = 40,
    .species = SPECIES_SWELLOW,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {10, 17, 2, 22, 12, 16},
    .lvl = 40,
    .species = SPECIES_XATU,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
//Route 118 East Bird Keeper 1
static const struct TrainerMon sParty_Chester[] = {
    {
    .ivs = {5, 18, 27, 22, 17, 26},
    .lvl = 28,
    .species = SPECIES_TAILLOW,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {18, 19, 8, 8, 11, 18},
    .lvl = 28,
    .species = SPECIES_SWELLOW,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Robert2[] = {
    {
    .ivs = {18, 23, 7, 19, 20, 10},
    .lvl = 34,
    .species = SPECIES_XATU,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {24, 25, 19, 19, 6, 7},
    .lvl = 37,
    .species = SPECIES_SWELLOW,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Robert3[] = {
    {
    .ivs = {10, 13, 30, 6, 20, 21},
    .lvl = 44,
    .species = SPECIES_XATU,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {10, 17, 13, 19, 22, 15},
    .lvl = 44,
    .species = SPECIES_SWELLOW,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Robert4[] = {
    {
    .ivs = {17, 14, 19, 16, 14, 5},
    .lvl = 55,
    .species = SPECIES_XATU,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {15, 14, 27, 19, 26, 19},
    .lvl = 55,
    .species = SPECIES_NOCTOWL,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {10, 19, 17, 28, 28, 22},
    .lvl = 55,
    .species = SPECIES_PIDGEOT,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {12, 18, 5, 15, 5, 20},
    .lvl = 55,
    .species = SPECIES_SKARMORY,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {18, 22, 16, 7, 14, 15},
    .lvl = 55,
    .species = SPECIES_SWELLOW,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Robert5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_SALAMENCE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_HYDRO_PUMP, MOVE_FIRE_BLAST, MOVE_DRAGON_CLAW, MOVE_WISH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_XATU,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_GIGA_DRAIN, MOVE_WISH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_PIDGEOT,
    .heldItem = ITEM_SHARP_BEAK,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_EXTREME_SPEED, MOVE_SKY_ATTACK, MOVE_TOXIC, MOVE_STEEL_WING}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_CHESTO_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 0, 0, 252},
    .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_REST, MOVE_BODY_SLAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_GLIGAR,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_SWORDS_DANCE, MOVE_AERIAL_ACE, MOVE_EARTHQUAKE, MOVE_SLUDGE_BOMB}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_SLOT_1,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SKY_ATTACK, MOVE_FACADE, MOVE_DOUBLE_EDGE, MOVE_STEEL_WING}
    }
};
// Route 134 Bird Keeper
static const struct TrainerMon sParty_Alex[] = {
    {
    .ivs = {12, 8, 14, 16, 20, 26},
    .lvl = 47,
    .species = SPECIES_XATU,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {3, 19, 13, 21, 22, 11},
    .lvl = 47,
    .species = SPECIES_SWELLOW,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 133 Bird Keeper
static const struct TrainerMon sParty_Beck[] = {
    {
    .ivs = {17, 18, 23, 17, 26, 20},
    .lvl = 47,
    .species = SPECIES_TROPIUS,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 119 (Post Weather Insitute) Ninja Boy 1
static const struct TrainerMon sParty_Yasu[] = {
    {
    .ivs = {17, 10, 27, 8, 21, 20},
    .lvl = 30,
    .species = SPECIES_NINJASK,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 119 Ninja Boy
static const struct TrainerMon sParty_Takashi[] = {
    {
    .ivs = {13, 9, 22, 27, 13, 23},
    .lvl = 29,
    .species = SPECIES_NINJASK,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {27, 25, 22, 6, 7, 22},
    .lvl = 29,
    .species = SPECIES_KOFFING,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Victory Road CooltrainerF
static const struct TrainerMon sParty_Dianne[] = {
    {
    .ivs = {21, 16, 29, 10, 22, 21},
    .lvl = 50,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_SKILL_SWAP, MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_NONE}
    },
    {
    .ivs = {18, 29, 7, 22, 7, 12},
    .lvl = 50,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_SURF, MOVE_NONE}
    },
    {
    .ivs = {10, 15, 27, 14, 16, 18},
    .lvl = 50,
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_SIGNAL_BEAM, MOVE_ICE_BEAM, MOVE_HYDRO_PUMP, MOVE_NONE}
    }
};
// Abandoned Ship
static const struct TrainerMon sParty_Jani[] = {
    {
    .ivs = {8, 29, 11, 11, 30, 20},
    .lvl = 32,
    .species = SPECIES_SPHEAL,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 113 Ninja Boy 2
static const struct TrainerMon sParty_Lao1[] = {
    {
    .ivs = {19, 6, 4, 7, 18, 12},
    .lvl = 23,
    .species = SPECIES_KOFFING,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SMOG, MOVE_SELF_DESTRUCT}
    },
    {
    .ivs = {4, 15, 18, 11, 25, 17},
    .lvl = 24,
    .species = SPECIES_GULPIN,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_SLUDGE, MOVE_POUND, MOVE_ENCORE, MOVE_YAWN}
    },
    {
    .ivs = {22, 15, 15, 15, 13, 14},
    .lvl = 25,
    .species = SPECIES_KOFFING,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    }
};
// Route 113 Ninja Boy 1
static const struct TrainerMon sParty_Lung[] = {
    {
    .ivs = {4, 17, 18, 25, 30, 12},
    .lvl = 24,
    .species = SPECIES_NINCADA,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {19, 15, 14, 19, 28, 18},
    .lvl = 24,
    .species = SPECIES_NINJASK,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Lao2[] = {
    {
    .ivs = {25, 17, 25, 22, 23, 17},
    .lvl = 37,
    .species = SPECIES_SWALOT,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {31, 28, 11, 21, 21, 19},
    .lvl = 36,
    .species = SPECIES_CROBAT,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {10, 17, 13, 13, 25, 23},
    .lvl = 38,
    .species = SPECIES_WEEZING,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {17, 14, 16, 18, 28, 18},
    .lvl = 38,
    .species = SPECIES_WEEZING,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Lao3[] = {
    {
    .ivs = {13, 14, 14, 7, 17, 4},
    .lvl = 43,
    .species = SPECIES_SWALOT,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {16, 17, 18, 3, 2, 15},
    .lvl = 43,
    .species = SPECIES_CROBAT,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {17, 12, 17, 7, 15, 15},
    .lvl = 44,
    .species = SPECIES_WEEZING,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {22, 8, 22, 17, 30, 13},
    .lvl = 45,
    .species = SPECIES_WEEZING,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Lao4[] = {
    {
    .ivs = {5, 15, 9, 16, 17, 10},
    .lvl = 54,
    .species = SPECIES_SWALOT,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {27, 14, 11, 20, 18, 21},
    .lvl = 54,
    .species = SPECIES_CROBAT,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {16, 13, 26, 27, 10, 18},
    .lvl = 54,
    .species = SPECIES_WEEZING,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {22, 26, 26, 6, 17, 19},
    .lvl = 54,
    .species = SPECIES_WEEZING,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Lao5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_MUK,
    .heldItem = ITEM_BRIGHT_POWDER,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_TOXIC, MOVE_ACID_ARMOR}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_VENUSAUR,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_LEECH_SEED, MOVE_EARTHQUAKE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_NIDOKING,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SLUDGE_BOMB, MOVE_TAUNT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_WEEZING,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 152, 0, 0, 0, 100},
    .moves = {MOVE_SLUDGE_BOMB, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT, MOVE_DESTINY_BOND}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_PETAYA_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_ICE_BEAM, MOVE_HYDRO_PUMP, MOVE_GIGA_DRAIN, MOVE_ENDURE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_CROBAT,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_SLOT_1,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SLUDGE_BOMB, MOVE_AERIAL_ACE, MOVE_STEEL_WING, MOVE_BITE}
    }
    };
// Dewford Gym Battle Girl 3 (Top Right Corner)
static const struct TrainerMon sParty_Jocelyn[] = {
    {
    .ivs = {9, 24, 20, 18, 13, 6},
    .lvl = 15,
    .species = SPECIES_MEDITITE,
    .evs = {28, 28, 28, 28, 28, 28},
    },
     {
    .ivs = {23, 6, 19, 12, 13, 15},
    .lvl = 15,
    .species = SPECIES_SHROOMISH,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Dewford Gym Battle Girl 1 (Bottom Right/First)
static const struct TrainerMon sParty_Laura[] = {
    {
    .ivs = {15, 8, 30, 11, 19, 17},
    .lvl = 16,
    .species = SPECIES_MEDITITE,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Route 115 Battle Girl
static const struct TrainerMon sParty_Cyndy1[] = {
    {
    .ivs = {8, 29, 11, 6, 14, 13},
    .lvl = 27,
    .species = SPECIES_MEDITITE,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Trick Room 4
static const struct TrainerMon sParty_Cora[] = {
    {
    .ivs = {11, 17, 21, 21, 6, 19},
    .lvl = 32,
    .species = SPECIES_MACHOKE,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Trick Room 4
static const struct TrainerMon sParty_Paula[] = {
    {
    .ivs = {24, 17, 19, 16, 9, 7},
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Cyndy2[] = {
    {
    .ivs = {21, 9, 14, 13, 15, 17},
    .lvl = 32,
    .species = SPECIES_MEDITITE,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Cyndy3[] = {
    {
    .ivs = {19, 5, 27, 4, 15, 10},
    .lvl = 46,
    .species = SPECIES_MEDICHAM,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Cyndy4[] = {
    {
    .ivs = {13, 15, 28, 26, 20, 16},
    .lvl = 53,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {9, 26, 8, 8, 26, 6},
    .lvl = 53,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Cyndy5[] = {
    {
    .ivs = {21, 24, 5, 11, 14, 11},
    .lvl = 62,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {26, 8, 27, 18, 24, 20},
    .lvl = 62,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Route 113 Parasol Lady
static const struct TrainerMon sParty_Madeline1[] = {
    {
    .ivs = {26, 20, 13, 28, 27, 23},
    .lvl = 26,
    .species = SPECIES_NUMEL,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_EMBER, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};
// Route 120 Parasol Lady 1
static const struct TrainerMon sParty_Clarissa[] = {
    {
    .ivs = {16, 22, 12, 22, 17, 25},
    .lvl = 33,
    .species = SPECIES_ROSELIA,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {10, 18, 24, 20, 5, 9},
    .lvl = 33,
    .species = SPECIES_WAILMER,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 120 Parasol Lady 2
static const struct TrainerMon sParty_Angelica[] = {
    {
    .ivs = {6, 15, 26, 9, 18, 26},
    .lvl = 35,
    .species = SPECIES_CASTFORM,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_RAIN_DANCE, MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_WATER_PULSE}
    }
};

static const struct TrainerMon sParty_Madeline2[] = {
    {
    .ivs = {15, 16, 25, 9, 19, 3},
    .lvl = 31,
    .species = SPECIES_NUMEL,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_EMBER, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline3[] = {
    {
    .ivs = {24, 5, 13, 17, 28, 1},
    .lvl = 44,
    .species = SPECIES_CAMERUPT,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_EMBER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline4[] = {
    {
    .ivs = {14, 17, 30, 15, 10, 13},
    .lvl = 53,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_LEECH_SEED, MOVE_MEGA_DRAIN, MOVE_GRASS_WHISTLE, MOVE_SUNNY_DAY}
    },
    {
    .ivs = {12, 8, 10, 15, 21, 18},
    .lvl = 53,
    .species = SPECIES_CAMERUPT,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline5[] = {
    {
    .ivs = {17, 19, 8, 24, 27, 24},
    .lvl = 62,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY}
    },
    {
    .ivs = {27, 10, 29, 8, 13, 14},
    .lvl = 65,
    .species = SPECIES_CAMERUPT,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_EARTHQUAKE, MOVE_SUNNY_DAY}
    }
};
// Route 105 SwimmerF
static const struct TrainerMon sParty_Beverly[] = {
    {
    .ivs = {13, 9, 23, 22, 11, 15},
    .lvl = 30,
    .species = SPECIES_TENTACOOL,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {11, 15, 16, 20, 24, 18},
    .lvl = 30,
    .species = SPECIES_TENTACOOL,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 105 SwimmerF
static const struct TrainerMon sParty_Imani[] = {
    {
    .ivs = {23, 16, 10, 13, 13, 24},
    .lvl = 30,
    .species = SPECIES_CORSOLA,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 106 Surf SwimmerF
static const struct TrainerMon sParty_Kyla[] = {
    {
    .ivs = {26, 9, 3, 12, 8, 13},
    .lvl = 31,
    .species = SPECIES_WAILMER,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 107 SwimmerF
static const struct TrainerMon sParty_Denise[] = {
    {
    .ivs = {16, 21, 21, 21, 21, 27},
    .lvl = 30,
    .species = SPECIES_SPHEAL,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {17, 13, 9, 3, 27, 23},
    .lvl = 30,
    .species = SPECIES_GOLDEEN,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 107 SwimmerF
static const struct TrainerMon sParty_Beth[] = {
    {
    .ivs = {16, 10, 14, 23, 8, 16},
    .lvl = 30,
    .species = SPECIES_CORSOLA,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 108 SwimmerF
static const struct TrainerMon sParty_Tara[] = {
    {
    .ivs = {19, 10, 26, 26, 12, 16},
    .lvl = 29,
    .species = SPECIES_HORSEA,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {20, 13, 13, 11, 14, 16},
    .lvl = 29,
    .species = SPECIES_AZUMARILL,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 108 SwimmerF
static const struct TrainerMon sParty_Missy[] = {
    {
    .ivs = {22, 7, 8, 16, 15, 26},
    .lvl = 30,
    .species = SPECIES_GOLDEEN,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
//Route 109 Surf SwimmerF
static const struct TrainerMon sParty_Alice[] = {
    {
    .ivs = {14, 11, 16, 17, 5, 10},
    .lvl = 30,
    .species = SPECIES_GOLDEEN,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {18, 4, 15, 7, 15, 17},
    .lvl = 30,
    .species = SPECIES_PELIPPER,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {4, 14, 21, 6, 19, 2},
    .lvl = 30,
    .species = SPECIES_GOLDEEN,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 124 SwimmerF
static const struct TrainerMon sParty_Jenny1[] = {
    {
    .ivs = {12, 19, 28, 6, 19, 6},
    .lvl = 38,
    .species = SPECIES_AZUMARILL,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {24, 13, 16, 25, 13, 22},
    .lvl = 38,
    .species = SPECIES_WAILMER,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 124 SwimmerF
static const struct TrainerMon sParty_Grace[] = {
    {
    .ivs = {18, 10, 7, 13, 18, 18},
    .lvl = 38,
    .species = SPECIES_WHISCASH,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {9, 10, 16, 12, 15, 17},
    .lvl = 38,
    .species = SPECIES_WHISCASH,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 125 SwimmerF
static const struct TrainerMon sParty_Tanya[] = {
    {
    .ivs = {16, 18, 13, 1, 16, 14},
    .lvl = 41,
    .species = SPECIES_LUVDISC,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 125 SwimmerF
static const struct TrainerMon sParty_Sharon[] = {
    {
    .ivs = {16, 8, 15, 10, 10, 14},
    .lvl = 40,
    .species = SPECIES_SEAKING,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 126 SwimmerF
static const struct TrainerMon sParty_Nikki[] = {
    {
    .ivs = {11, 16, 13, 19, 12, 23},
    .lvl = 40,
    .species = SPECIES_AZUMARILL,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {22, 19, 22, 8, 24, 2},
    .lvl = 40,
    .species = SPECIES_SEALEO,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 126
static const struct TrainerMon sParty_Brenda[] = {
    {
    .ivs = {27, 5, 14, 5, 0, 16},
    .lvl = 41,
    .species = SPECIES_SEAKING,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 130 SwimmerF (Potential Double with Santiago)
static const struct TrainerMon sParty_Katie[] = {
    {
    .ivs = {19, 11, 15, 10, 12, 14},
    .lvl = 42,
    .species = SPECIES_SEAKING,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {11, 25, 19, 18, 4, 6},
    .lvl = 44,
    .species = SPECIES_WALREIN,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 131 SwimmerF
static const struct TrainerMon sParty_Susie[] = {
    {
    .ivs = {6, 15, 10, 23, 13, 18},
    .lvl = 47,
    .species = SPECIES_LUVDISC,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 131 SwimmerF
static const struct TrainerMon sParty_Kara[] = {
    {
    .ivs = {15, 13, 19, 27, 18, 21},
    .lvl = 44,
    .species = SPECIES_SEAKING,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 132 SwimmerF
static const struct TrainerMon sParty_Dana[] = {
    {
    .ivs = {9, 11, 25, 9, 23, 16},
    .lvl = 46,
    .species = SPECIES_AZUMARILL,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 126 SwimmerF
static const struct TrainerMon sParty_Sienna[] = {
    {
    .ivs = {19, 11, 25, 20, 19, 23},
    .lvl = 40,
    .species = SPECIES_LUDICOLO,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {24, 5, 19, 16, 5, 15},
    .lvl = 40,
    .species = SPECIES_PELIPPER,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 133 SwimmerF
static const struct TrainerMon sParty_Debra[] = {
    {
    .ivs = {9, 21, 28, 12, 21, 17},
    .lvl = 47,
    .species = SPECIES_SEAKING,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 133 SwimmerF
static const struct TrainerMon sParty_Linda[] = {
    {
    .ivs = {14, 4, 19, 10, 16, 17},
    .lvl = 47,
    .species = SPECIES_SEADRA,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {19, 10, 10, 7, 5, 15},
    .lvl = 47,
    .species = SPECIES_SEADRA,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Kaylee[] = {
    {
    .ivs = {8, 26, 25, 14, 23, 10},
    .lvl = 36,
    .species = SPECIES_LANTURN,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {18, 12, 19, 5, 23, 14},
    .lvl = 36,
    .species = SPECIES_PELIPPER,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 134 SwimmerF
static const struct TrainerMon sParty_Laurel[] = {
    {
    .ivs = {9, 22, 10, 30, 12, 19},
    .lvl = 47,
    .species = SPECIES_LUVDISC,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {10, 21, 10, 17, 21, 13},
    .lvl = 47,
    .species = SPECIES_LUVDISC,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 128 SwimmerF
static const struct TrainerMon sParty_Carlee[] = {
    {
    .ivs = {15, 5, 8, 16, 8, 15},
    .lvl = 42,
    .species = SPECIES_GOREBYSS,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Jenny2[] = {
    {
    .ivs = {16, 11, 16, 6, 17, 28},
    .lvl = 40,
    .species = SPECIES_AZUMARILL,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {16, 9, 12, 17, 6, 2},
    .lvl = 48,
    .species = SPECIES_WAILORD,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Jenny3[] = {
    {
    .ivs = {25, 15, 17, 16, 18, 10},
    .lvl = 51,
    .species = SPECIES_LUDICOLO,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {16, 11, 18, 21, 26, 22},
    .lvl = 51,
    .species = SPECIES_AZUMARILL,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {27, 3, 16, 22, 20, 23},
    .lvl = 51,
    .species = SPECIES_WAILORD,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Jenny4[] = {
    {
    .ivs = {23, 8, 18, 0, 20, 14},
    .lvl = 43,
    .species = SPECIES_WHISCASH,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {24, 15, 26, 24, 15, 4},
    .lvl = 51,
    .species = SPECIES_LUDICOLO,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {20, 12, 16, 4, 14, 16},
    .lvl = 51,
    .species = SPECIES_STARMIE,
    .evs = {84, 84, 84, 84, 84, 84},
    },

    {
    .ivs = {10, 10, 10, 9, 23, 18},
    .lvl = 45,
    .species = SPECIES_WAILORD,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Jenny5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_QUAGSIRE,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 0, 252, 252},
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_YAWN, MOVE_RAIN_DANCE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_BLASTOISE,
    .heldItem = ITEM_MYSTIC_WATER,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_HYDRO_CANNON, MOVE_RAIN_DANCE, MOVE_ICE_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_2,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_TEETER_DANCE, MOVE_LEECH_SEED, MOVE_RAIN_DANCE, MOVE_SURF}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_VAPOREON,
    .heldItem = ITEM_WIKI_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 0, 252, 252},
    .moves = {MOVE_ACID_ARMOR, MOVE_SURF, MOVE_ICE_BEAM, MOVE_BATON_PASS}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_MAGNET,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_STARMIE,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_THUNDERBOLT}
    }
};
//Route 111 Desert Picnicker 1
static const struct TrainerMon sParty_Heidi[] = {
    {
    .ivs = {16, 11, 20, 3, 13, 15},
    .lvl = 29,
    .species = SPECIES_SANDSHREW,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_DIG, MOVE_SAND_ATTACK, MOVE_POISON_STING, MOVE_SLASH}
    },
    {
    .ivs = {11, 13, 7, 8, 1, 12},
    .lvl = 29,
    .species = SPECIES_CACNEA,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_ABSORB, MOVE_MUD_SLAP, MOVE_PURSUIT, MOVE_SPIKES}
    }
};
//Route 111 Desert Picnicker 2
static const struct TrainerMon sParty_Becky[] = {
    {
    .ivs = {16, 14, 19, 9, 28, 8},
    .lvl = 29,
    .species = SPECIES_BALTOY,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_MUD_SLAP, MOVE_RAPID_SPIN, MOVE_PSYBEAM, MOVE_DIG}
    },
    {
    .ivs = {7, 22, 18, 22, 23, 24},
    .lvl = 29,
    .species = SPECIES_MARILL,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_ROLLOUT, MOVE_BUBBLE_BEAM, MOVE_TAIL_WHIP, MOVE_DEFENSE_CURL}
    }
};
// Route 112 South Section Picnicker 1
static const struct TrainerMon sParty_Carol[] = {
    {
    .ivs = {23, 21, 17, 15, 17, 22},
    .lvl = 23,
    .species = SPECIES_TAILLOW,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {20, 18, 21, 26, 27, 17},
    .lvl = 23,
    .species = SPECIES_LOMBRE,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 114 Picnicker 2
static const struct TrainerMon sParty_Nancy[] = {
    {
    .ivs = {16, 16, 14, 22, 23, 14},
    .lvl = 26,
    .species = SPECIES_MARILL,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {7, 19, 16, 22, 25, 24},
    .lvl = 26,
    .species = SPECIES_LOMBRE,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Trick House 3 Picknicker
static const struct TrainerMon sParty_Martha[] = {
    {
    .ivs = {15, 25, 13, 24, 9, 5},
    .lvl = 27,
    .species = SPECIES_SKITTY,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {20, 14, 13, 19, 14, 12},
    .lvl = 27,
    .species = SPECIES_SPOINK,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Jagged Pass Picnicker
static const struct TrainerMon sParty_Diana1[] = {
    {
    .ivs = {23, 17, 24, 2, 14, 11},
    .lvl = 27,
    .species = SPECIES_VULPIX,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {16, 23, 19, 15, 22, 18},
    .lvl = 27,
    .species = SPECIES_GLOOM,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {1, 25, 7, 26, 13, 15},
    .lvl = 27,
    .species = SPECIES_SWABLU,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Mt Pyre Interior 6F PsychicM
static const struct TrainerMon sParty_Cedric[] = {
    {
    .ivs = {21, 26, 9, 18, 10, 23},
    .lvl = 37,
    .species = SPECIES_WOBBUFFET,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_DESTINY_BOND, MOVE_SAFEGUARD, MOVE_COUNTER, MOVE_MIRROR_COAT}
    }
};
//Route 111 Mid Picnicker
static const struct TrainerMon sParty_Irene[] = {
    {
    .ivs = {23, 10, 15, 18, 12, 15},
    .lvl = 24,
    .species = SPECIES_SHROOMISH,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {23, 14, 17, 22, 29, 13},
    .lvl = 24,
    .species = SPECIES_MARILL,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Diana2[] = {
    {
    .ivs = {12, 16, 9, 17, 16, 17},
    .lvl = 30,
    .species = SPECIES_VULPIX,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {16, 10, 21, 16, 7, 20},
    .lvl = 30,
    .species = SPECIES_GLOOM,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {31, 16, 12, 23, 9, 30},
    .lvl = 30,
    .species = SPECIES_SWABLU,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Diana3[] = {
    {
    .ivs = {14, 13, 18, 4, 14, 9},
    .lvl = 41,
    .species = SPECIES_VULPIX,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {17, 27, 20, 14, 9, 19},
    .lvl = 41,
    .species = SPECIES_VILEPLUME,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {21, 19, 27, 4, 22, 20},
    .lvl = 41,
    .species = SPECIES_SWABLU,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Diana4[] = {
    {
    .ivs = {7, 16, 1, 20, 17, 12},
    .lvl = 50,
    .species = SPECIES_VULPIX,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {18, 25, 24, 24, 9, 3},
    .lvl = 50,
    .species = SPECIES_VILEPLUME,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {20, 20, 12, 3, 24, 7},
    .lvl = 50,
    .species = SPECIES_ALTARIA,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Diana5[] = {
   {
    .ivs = {4, 7, 23, 9, 16, 17},
    .lvl = 58,
    .species = SPECIES_NINETALES,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {0, 16, 3, 2, 9, 17},
    .lvl = 59,
    .species = SPECIES_VILEPLUME,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {14, 3, 20, 5, 2, 21},
    .lvl = 60,
    .species = SPECIES_ALTARIA,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Route 103 Twins
static const struct TrainerMon sParty_AmyAndLiv1[] = {
    {
    .ivs = {22, 18, 26, 15, 15, 15},
    .lvl = 18,
    .species = SPECIES_PLUSLE,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_THUNDER_SHOCK, MOVE_GROWL, MOVE_LIGHT_SCREEN, MOVE_QUICK_ATTACK}
    },
    {
    .ivs = {10, 9, 12, 24, 24, 13},
    .lvl = 18,
    .species = SPECIES_MINUN,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_THUNDER_SHOCK, MOVE_GROWL, MOVE_FLASH, MOVE_QUICK_ATTACK}
    }
};

static const struct TrainerMon sParty_AmyAndLiv2[] = {
    {
    .ivs = {16, 19, 24, 24, 10, 14},
    .lvl = 29,
    .species = SPECIES_PLUSLE,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {16, 16, 24, 24, 18, 10},
    .lvl = 29,
    .species = SPECIES_MINUN,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
//Route 104 North Twins
static const struct TrainerMon sParty_GinaAndMia1[] = {
    {
    .ivs = {19, 11, 6, 11, 5, 16},
    .lvl = 11,
    .species = SPECIES_SEEDOT,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {6, 14, 11, 16, 2, 16},
    .lvl = 11,
    .species = SPECIES_LOTAD,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Route 123 (via 118 from mauville) Twins
static const struct TrainerMon sParty_MiuAndYuki[] = {
    {
    .ivs = {19, 8, 11, 22, 30, 3},
    .lvl = 29,
    .species = SPECIES_BEAUTIFLY,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {20, 25, 5, 14, 20, 14},
    .lvl = 29,
    .species = SPECIES_DUSTOX,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_AmyAndLiv3[] = {
    {
    .ivs = {23, 21, 14, 7, 24, 21},
    .lvl = 40,
    .species = SPECIES_PLUSLE,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {23, 18, 12, 21, 14, 19},
    .lvl = 40,
    .species = SPECIES_MINUN,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_GinaAndMia2[] = {
    {
    .ivs = {15, 7, 17, 20, 10, 5},
    .lvl = 12,
    .species = SPECIES_DUSKULL,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_NIGHT_SHADE, MOVE_DISABLE, MOVE_NONE, MOVE_NONE}
    },
    {
    .ivs = {16, 16, 16, 14, 16, 12},
    .lvl = 12,
    .species = SPECIES_SHROOMISH,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_ABSORB, MOVE_LEECH_SEED, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AmyAndLiv4[] = {
    {
    .ivs = {19, 18, 16, 4, 13, 1},
    .lvl = 52,
    .species = SPECIES_PLUSLE,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {12, 16, 15, 21, 21, 11},
    .lvl = 52,
    .species = SPECIES_MINUN,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_AmyAndLiv5[] = {
    {
    .ivs = {4, 15, 10, 18, 24, 19},
    .lvl = 63,
    .species = SPECIES_PLUSLE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND}
    },
    {
    .ivs = {29, 20, 23, 22, 17, 6},
    .lvl = 63,
    .species = SPECIES_MINUN,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND}
    }
};

static const struct TrainerMon sParty_AmyAndLiv6[] = {
    {
    .ivs = {19, 26, 23, 19, 19, 21},
    .lvl = 72,
    .species = SPECIES_PLUSLE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDER, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND}
    },
    {
    .ivs = {25, 18, 14, 3, 20, 5},
    .lvl = 72,
    .species = SPECIES_MINUN,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDER, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND}
    }
};
// Route 109 Sailor 1
static const struct TrainerMon sParty_Huey[] = {
    {
    .ivs = {12, 5, 6, 25, 15, 25},
    .lvl = 16,
    .species = SPECIES_WINGULL,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {14, 21, 15, 16, 14, 14},
    .lvl = 16,
    .species = SPECIES_MACHOP,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Route 109 Sailor 2 (Potential Double Battle w Hailey or Ricky)
static const struct TrainerMon sParty_Edmond[] = {
    {
    .ivs = {24, 19, 11, 4, 21, 23},
    .lvl = 17,
    .species = SPECIES_SPHEAL,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Route 125 Sailor
static const struct TrainerMon sParty_Ernest1[] = {
    {
    .ivs = {16, 10, 21, 11, 17, 14},
    .lvl = 39,
    .species = SPECIES_PILOSWINE,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {14, 13, 10, 25, 24, 7},
    .lvl = 37,
    .species = SPECIES_SNORUNT,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {13, 12, 10, 17, 13, 23},
    .lvl = 39,
    .species = SPECIES_HARIYAMA,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 109 Seashore House Sailor
static const struct TrainerMon sParty_Dwayne[] = {
    {
    .ivs = {10, 19, 19, 22, 11, 16},
    .lvl = 15,
    .species = SPECIES_TENTACOOL,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {17, 16, 28, 13, 21, 20},
    .lvl = 15,
    .species = SPECIES_MACHOP,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {17, 16, 11, 10, 8, 25},
    .lvl = 15,
    .species = SPECIES_CLAMPERL,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// SS Tidal Storage Sailor (nat dex)
static const struct TrainerMon sParty_Phillip[] = {
    {
    .ivs = {19, 14, 13, 17, 6, 30},
    .lvl = 50,
    .species = SPECIES_MANKEY,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {3, 11, 16, 13, 16, 30},
    .lvl = 51,
    .species = SPECIES_POLIWRATH,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {10, 9, 13, 7, 18, 11},
    .lvl = 52,
    .species = SPECIES_PRIMEAPE,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// SS Tidal Storage Sailor (nat dex)
static const struct TrainerMon sParty_Leonard[] = {
    {
    .ivs = {4, 16, 21, 28, 9, 19},
    .lvl = 50,
    .species = SPECIES_POLIWHIRL,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {3, 17, 25, 16, 16, 19},
    .lvl = 52,
    .species = SPECIES_HITMONTOP,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {18, 23, 11, 22, 21, 15},
    .lvl = 53,
    .species = SPECIES_QWILFISH,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Abandoned Ship Sailor
static const struct TrainerMon sParty_Duncan[] = {
    {
    .ivs = {18, 10, 21, 10, 10, 20},
    .lvl = 30,
    .species = SPECIES_SPHEAL,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {24, 19, 15, 21, 29, 2},
    .lvl = 30,
    .species = SPECIES_MACHOKE,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Ernest2[] = {
    {
    .ivs = {18, 12, 19, 5, 20, 7},
    .lvl = 40,
    .species = SPECIES_HARIYAMA,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {12, 5, 11, 21, 13, 18},
    .lvl = 40,
    .species = SPECIES_MACHAMP,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Ernest3[] = {
    {
    .ivs = {9, 25, 20, 28, 25, 14},
    .lvl = 42,
    .species = SPECIES_PELIPPER,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {25, 10, 14, 7, 20, 8},
    .lvl = 42,
    .species = SPECIES_HARIYAMA,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {18, 29, 18, 18, 13, 18},
    .lvl = 42,
    .species = SPECIES_MACHAMP,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Ernest4[] = {
    {
    .ivs = {12, 8, 7, 8, 4, 17},
    .lvl = 50,
    .species = SPECIES_PELIPPER,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {8, 12, 16, 8, 12, 16},
    .lvl = 50,
    .species = SPECIES_HARIYAMA,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {9, 29, 19, 8, 10, 6},
    .lvl = 50,
    .species = SPECIES_MACHAMP,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Ernest5[] = {
    {
    .ivs = {27, 3, 19, 21, 14, 21},
    .lvl = 61,
    .species = SPECIES_PELIPPER,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {21, 18, 16, 6, 19, 17},
    .lvl = 61,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {21, 16, 1, 4, 27, 25},
    .lvl = 61,
    .species = SPECIES_MACHAMP,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Lavaridge Gym Hiker
static const struct TrainerMon sParty_Eli[] = {
    {
    .ivs = {8, 4, 8, 19, 24, 10},
    .lvl = 29,
    .species = SPECIES_GRAVELER,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
//Sootopolis Gym Pokefan 1 (Middle Level - Double Battle w Daphne)
static const struct TrainerMon sParty_Annika[] = {
    {
    .ivs = {15, 8, 10, 19, 18, 27},
    .lvl = 52,
    .species = SPECIES_FEEBAS,
    .heldItem = ITEM_BRIGHT_POWDER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_BLIZZARD, MOVE_RAIN_DANCE, MOVE_ATTRACT}
    },
    {
    .ivs = {12, 2, 12, 11, 1, 11},
    .lvl = 52,
    .species = SPECIES_FEEBAS,
    .heldItem = ITEM_BRIGHT_POWDER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_BLIZZARD, MOVE_RAIN_DANCE, MOVE_ATTRACT}
    }
};
// Route 123 (via 118 from mauville) CooltrainerF
static const struct TrainerMon sParty_Jazmyn[] = {
    {
    .ivs = {10, 19, 27, 5, 12, 11},
    .lvl = 30,
    .species = SPECIES_ABSOL,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 123 (via 123 with Cut) Ninja Boy
static const struct TrainerMon sParty_Jonas[] = {
    {
    .ivs = {21, 23, 9, 5, 10, 17},
    .lvl = 37,
    .species = SPECIES_WEEZING,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_TOXIC, MOVE_THUNDER, MOVE_SELF_DESTRUCT, MOVE_SLUDGE_BOMB}
    }
};
// Route 123 (via 123 with Cut) 
static const struct TrainerMon sParty_Kayley[] = {
    {
    .ivs = {3, 19, 25, 18, 22, 13},
    .lvl = 36,
    .species = SPECIES_CASTFORM,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_SUNNY_DAY, MOVE_WEATHER_BALL, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM}
    }
};
// Route 125 Expert
static const struct TrainerMon sParty_Auron[] = {
    {
    .ivs = {13, 11, 22, 29, 20, 19},
    .lvl = 40,
    .species = SPECIES_MANECTRIC,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {28, 28, 23, 10, 21, 12},
    .lvl = 40,
    .species = SPECIES_GLALIE,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {25, 18, 24, 10, 11, 20},
    .lvl = 40,
    .species = SPECIES_BANETTE,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 134 Sailor
static const struct TrainerMon sParty_Kelvin[] = {
    {
    .ivs = {14, 24, 10, 19, 10, 16},
    .lvl = 47,
    .species = SPECIES_MACHAMP,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {5, 7, 5, 16, 10, 14},
    .lvl = 47,
    .species = SPECIES_WALREIN,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 134 CooltrainerF
static const struct TrainerMon sParty_Marley[] = {
    {
    .ivs = {21, 4, 13, 14, 18, 7},
    .lvl = 48,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_CRUNCH, MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT}
    }
};
// Route 134 Battle Girl
static const struct TrainerMon sParty_Reyna[] = {
    {
    .ivs = {13, 14, 18, 15, 9, 22},
    .lvl = 47,
    .species = SPECIES_PINSIR,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {12, 12, 15, 12, 26, 21},
    .lvl = 47,
    .species = SPECIES_BRELOOM,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {10, 8, 12, 5, 24, 19},
    .lvl = 47,
    .species = SPECIES_HERACROSS,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 134 Sailor
static const struct TrainerMon sParty_Hudson[] = {
    {
    .ivs = {22, 16, 26, 15, 20, 8},
    .lvl = 47,
    .species = SPECIES_WAILORD,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {30, 16, 12, 25, 22, 14},
    .lvl = 47,
    .species = SPECIES_MACHAMP,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 133 Expert
static const struct TrainerMon sParty_Conor[] = {
    {
    .ivs = {17, 25, 19, 8, 15, 6},
    .lvl = 47,
    .species = SPECIES_HERACROSS,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {11, 21, 23, 15, 5, 14},
    .lvl = 47,
    .species = SPECIES_DONPHAN,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
//Route 110 Collector (Potential Double Battle with Joseph)
static const struct TrainerMon sParty_Edwin1[] = {
    {
    .ivs = {8, 9, 12, 18, 16, 26},
    .lvl = 18,
    .species = SPECIES_LOMBRE,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {13, 13, 17, 3, 19, 19},
    .lvl = 18,
    .species = SPECIES_NUZLEAF,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Route 115 Collector
static const struct TrainerMon sParty_Hector[] = {
    {
    .ivs = {17, 14, 7, 13, 15, 13},
    .lvl = 27,
    .species = SPECIES_ZANGOOSE,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Magma Admin Space Center (Double SC)
static const struct TrainerMon sParty_TabithaMossdeep[] = {
    {
    .ivs = {15, 23, 23, 15, 4, 17},
    .lvl = 45,
    .species = SPECIES_CROBAT,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_WING_ATTACK, MOVE_GIGA_DRAIN, MOVE_POISON_FANG, MOVE_CONFUSE_RAY}
    },
    {
    .ivs = {14, 15, 14, 17, 7, 17},
    .lvl = 45,
    .species = SPECIES_AGGRON,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_IRON_TAIL, MOVE_PROTECT}
    },
    {
    .ivs = {23, 7, 3, 7, 19, 6},
    .lvl = 46,
    .species = SPECIES_ZANGOOSE,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CRUSH_CLAW, MOVE_FAINT_ATTACK, MOVE_SUNNY_DAY,  MOVE_SWORDS_DANCE}
    }
};

static const struct TrainerMon sParty_Edwin2[] = {
    {
    .ivs = {20, 3, 24, 8, 9, 17},
    .lvl = 28,
    .species = SPECIES_LOMBRE,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {11, 23, 15, 18, 9, 10},
    .lvl = 28,
    .species = SPECIES_NUZLEAF,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Edwin3[] = {
    {
    .ivs = {28, 26, 17, 18, 19, 18},
    .lvl = 39,
    .species = SPECIES_LUDICOLO,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {13, 6, 17, 5, 17, 13},
    .lvl = 39,
    .species = SPECIES_SHIFTRY,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Edwin4[] = {
    {
    .ivs = {21, 30, 22, 11, 24, 11},
    .lvl = 46,
    .species = SPECIES_LUDICOLO,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {20, 14, 18, 9, 16, 10},
    .lvl = 46,
    .species = SPECIES_SHIFTRY,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Edwin5[] = {
    {
    .ivs = {13, 21, 14, 10, 28, 13},
    .lvl = 59,
    .species = SPECIES_LUDICOLO,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {15, 20, 15, 7, 21, 4},
    .lvl = 59,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {19, 7, 19, 20, 14, 14},
    .lvl = 59,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {19, 15, 15, 28, 8, 21},
    .lvl = 59,
    .species = SPECIES_SHIFTRY,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Victory Road Pre Champion
static const struct TrainerMon sParty_WallyVR1[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 51,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SING, MOVE_DOUBLE_EDGE, MOVE_CHARM, MOVE_FAINT_ATTACK}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 50,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_SURF, MOVE_DOUBLE_EDGE, MOVE_SUPERPOWER, MOVE_ICE_BEAM}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 51,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_SHARP_BEAK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_AERIAL_ACE, MOVE_EARTHQUAKE, MOVE_FIRE_BLAST, MOVE_DRAGON_DANCE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 50,
    .species = SPECIES_ROSELIA,
    .heldItem = ITEM_PERSIM_BERRY,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_PETAL_DANCE, MOVE_LEECH_SEED, MOVE_SLUDGE_BOMB, MOVE_TOXIC}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 51,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_FOCUS_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_LIGHT_SCREEN, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 52,
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_CALM_MIND, MOVE_DOUBLE_TEAM}
    }
};
// Rival 1
static const struct TrainerMon sParty_BrendanRoute103Mudkip[] = {
    {
    .ivs = {0, 0, 0, 0, 0, 0},
    .lvl = 5,
    .species = SPECIES_TREECKO,
    .evs = {14, 14, 14, 14, 14, 14},
    }
};
// Rival 3
static const struct TrainerMon sParty_BrendanRoute110Mudkip[] = {
    {
    .ivs = {18, 7, 15, 18, 22, 19},
    .lvl = 22,
    .species = SPECIES_SPOINK,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_CONFUSION, MOVE_TACKLE, MOVE_CONFUSE_RAY, MOVE_PSYCH_UP}
    },
    {
    .ivs = {17, 28, 20, 27, 3, 13},
    .lvl = 20,
    .species = SPECIES_TORKOAL,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_SMOG, MOVE_EMBER, MOVE_SMOKESCREEN, MOVE_FIRE_SPIN}
    },
    {
    .ivs = {14, 12, 8, 4, 23, 21},
    .lvl = 24,
    .species = SPECIES_GROVYLE,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_ABSORB, MOVE_QUICK_ATTACK, MOVE_FALSE_SWIPE, MOVE_RAZOR_LEAF}
    }
};
// Route 119 Rival 4 w Treecko
static const struct TrainerMon sParty_BrendanRoute119Mudkip[] = {
   {
    .ivs = {10, 21, 17, 31, 19, 27},
    .lvl = 36,
    .species = SPECIES_GRUMPIG,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_SHOCK_WAVE, MOVE_REST, MOVE_SLEEP_TALK, MOVE_PSYBEAM}
    },
    {
    .ivs = {14, 16, 11, 12, 22, 9},
    .lvl = 35,
    .species = SPECIES_KECLEON,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_THUNDERBOLT, MOVE_SUBSTITUTE, MOVE_SLASH, MOVE_PSYBEAM}
    },
    {
    .ivs = {25, 19, 6, 19, 12, 19},
    .lvl = 35,
    .species = SPECIES_TORKOAL,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_CURSE, MOVE_BODY_SLAM, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY}
    },
    {
    .ivs = {13, 26, 8, 20, 16, 16},
    .lvl = 37,
    .species = SPECIES_GROVYLE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_ROCK_TOMB, MOVE_RAZOR_LEAF, MOVE_GROWTH, MOVE_SLASH}
    }
};
// Rival 1
static const struct TrainerMon sParty_BrendanRoute103Treecko[] = {
    {
    .ivs = {0, 0, 0, 0, 0, 0},
    .lvl = 5,
    .species = SPECIES_TORCHIC,
    .evs = {14, 14, 14, 14, 14, 14},
    }
};
// Rival 3
static const struct TrainerMon sParty_BrendanRoute110Treecko[] = {
    {
    .ivs = {25, 18, 13, 22, 11, 21},
    .lvl = 22,
    .species = SPECIES_SPOINK,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_CONFUSION, MOVE_TACKLE, MOVE_CONFUSE_RAY, MOVE_PSYCH_UP}
    },
    {
    .ivs = {5, 30, 12, 8, 20, 16},
    .lvl = 20,
    .species = SPECIES_WAILMER,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_GROWL, MOVE_WATER_GUN, MOVE_WHIRLPOOL, MOVE_ASTONISH}
    },
    {
    .ivs = {16, 24, 12, 2, 19, 6},
    .lvl = 24,
    .species = SPECIES_COMBUSKEN,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_PECK, MOVE_FOCUS_ENERGY, MOVE_EMBER, MOVE_DOUBLE_KICK}
    }
};
// Route 119 Rival 4 w Torchic
static const struct TrainerMon sParty_BrendanRoute119Treecko[] = {
    {
    .ivs = {12, 1, 8, 23, 4, 22},
    .lvl = 36,
    .species = SPECIES_GRUMPIG,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_SHOCK_WAVE, MOVE_REST, MOVE_SLEEP_TALK, MOVE_PSYBEAM}
    },
    {
    .ivs = {15, 7, 30, 12, 23, 21},
    .lvl = 35,
    .species = SPECIES_KECLEON,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_THUNDERBOLT, MOVE_SUBSTITUTE, MOVE_SLASH, MOVE_PSYBEAM}
    },
    {
    .ivs = {5, 21, 15, 10, 19, 4},
    .lvl = 35,
    .species = SPECIES_WAILMER,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_WATER_PULSE, MOVE_ICE_BEAM, MOVE_GROWL, MOVE_ASTONISH}
    },
    {
    .ivs = {11, 11, 5, 17, 7, 9},
    .lvl = 37,
    .species = SPECIES_COMBUSKEN,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_FIRE_PUNCH, MOVE_ROLLING_KICK, MOVE_BULK_UP, MOVE_SUNNY_DAY}
    }
};
// Rival 1
static const struct TrainerMon sParty_BrendanRoute103Torchic[] = {
    {
    .ivs = {0, 0, 0, 0, 0, 0},
    .lvl = 5,
    .species = SPECIES_MUDKIP,
    .evs = {14, 14, 14, 14, 14, 14},
    }
};
// Rival 3
static const struct TrainerMon sParty_BrendanRoute110Torchic[] = {
    {
    .ivs = {23, 10, 25, 28, 20, 16},
    .lvl = 22,
    .species = SPECIES_SPOINK,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_CONFUSION, MOVE_TACKLE, MOVE_CONFUSE_RAY, MOVE_PSYCH_UP}
    },
    {
    .ivs = {12, 25, 15, 25, 19, 14},
    .lvl = 20,
    .species = SPECIES_SHROOMISH,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_TACKLE, MOVE_STUN_SPORE, MOVE_LEECH_SEED, MOVE_MEGA_DRAIN}
    },
    {
    .ivs = {13, 9, 25, 12, 11, 22},
    .lvl = 24,
    .species = SPECIES_MARSHTOMP,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_MUD_SHOT, MOVE_ROCK_TOMB, MOVE_WATER_GUN, MOVE_TACKLE}
    }
};
// Route 119 Rival 4 w Mudkip
static const struct TrainerMon sParty_BrendanRoute119Torchic[] = {
    {
    .ivs = {20, 24, 15, 12, 17, 14},
    .lvl = 36,
    .species = SPECIES_GRUMPIG,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_SHOCK_WAVE, MOVE_REST, MOVE_SLEEP_TALK, MOVE_PSYBEAM}
    },
    {
    .ivs = {12, 4, 17, 15, 8, 11},
    .lvl = 35,
    .species = SPECIES_KECLEON,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_THUNDERBOLT, MOVE_SUBSTITUTE, MOVE_SLASH, MOVE_PSYBEAM}
    },
    {
    .ivs = {22, 18, 6, 17, 7, 10},
    .lvl = 35,
    .species = SPECIES_BRELOOM,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_MEGA_DRAIN, MOVE_HEADBUTT, MOVE_MACH_PUNCH, MOVE_LEECH_SEED}
    },
    {
    .ivs = {18, 19, 11, 21, 8, 16},
    .lvl = 37,
    .species = SPECIES_MARSHTOMP,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_MUD_SHOT, MOVE_ROCK_TOMB, MOVE_TAKE_DOWN, MOVE_BUBBLE_BEAM}
    }
};
// Rival 1
static const struct TrainerMon sParty_MayRoute103Mudkip[] = {
    {
    .ivs = {0, 0, 0, 0, 0, 0},
    .lvl = 5,
    .species = SPECIES_TREECKO,
    .evs = {14, 14, 14, 14, 14, 14},
    }
};
// Rival 3
static const struct TrainerMon sParty_MayRoute110Mudkip[] = {
    {
    .ivs = {30, 19, 18, 26, 27, 21},
    .lvl = 22,
    .species = SPECIES_SPOINK,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_CONFUSION, MOVE_TACKLE, MOVE_CONFUSE_RAY, MOVE_PSYCH_UP}
    },
    {
    .ivs = {9, 9, 14, 15, 16, 17},
    .lvl = 20,
    .species = SPECIES_TORKOAL,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_SMOG, MOVE_EMBER, MOVE_SMOKESCREEN, MOVE_FIRE_SPIN}
    },
    {
    .ivs = {7, 20, 8, 19, 16, 11},
    .lvl = 24,
    .species = SPECIES_GROVYLE,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_ABSORB, MOVE_QUICK_ATTACK, MOVE_FALSE_SWIPE, MOVE_RAZOR_LEAF}
    }
};
// Route 119 Rival 4 w Treecko
static const struct TrainerMon sParty_MayRoute119Mudkip[] = {
    {
    .ivs = {21, 13, 4, 25, 4, 25},
    .lvl = 36,
    .species = SPECIES_GRUMPIG,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_SHOCK_WAVE, MOVE_REST, MOVE_SLEEP_TALK, MOVE_PSYBEAM}
    },
    {
    .ivs = {7, 17, 21, 19, 12, 17},
    .lvl = 35,
    .species = SPECIES_KECLEON,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_THUNDERBOLT, MOVE_SUBSTITUTE, MOVE_SLASH, MOVE_PSYBEAM}
    },
    {
    .ivs = {7, 24, 22, 11, 15, 14},
    .lvl = 35,
    .species = SPECIES_TORKOAL,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_CURSE, MOVE_BODY_SLAM, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY}
    },
    {
    .ivs = {6, 16, 19, 8, 22, 29},
    .lvl = 37,
    .species = SPECIES_GROVYLE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_ROCK_TOMB, MOVE_RAZOR_LEAF, MOVE_GROWTH, MOVE_SLASH}
    }
};
// Rival 1
static const struct TrainerMon sParty_MayRoute103Treecko[] = {
    {
    .ivs = {0, 0, 0, 0, 0, 0},
    .lvl = 5,
    .species = SPECIES_TORCHIC,
    .evs = {14, 14, 14, 14, 14, 14},
    }
};
// Rival 3
static const struct TrainerMon sParty_MayRoute110Treecko[] = {
    {
    .ivs = {24, 10, 28, 19, 14, 9},
    .lvl = 22,
    .species = SPECIES_SPOINK,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_CONFUSION, MOVE_TACKLE, MOVE_CONFUSE_RAY, MOVE_PSYCH_UP}
    },
    {
    .ivs = {16, 26, 29, 28, 19, 21},
    .lvl = 20,
    .species = SPECIES_WAILMER,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_GROWL, MOVE_WATER_GUN, MOVE_WHIRLPOOL, MOVE_ASTONISH}
    },
    {
    .ivs = {18, 21, 16, 16, 13, 3},
    .lvl = 24,
    .species = SPECIES_COMBUSKEN,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_PECK, MOVE_FOCUS_ENERGY, MOVE_EMBER, MOVE_DOUBLE_KICK}
    }
};
// Route 119 Rival 4 w Torchic
static const struct TrainerMon sParty_MayRoute119Treecko[] = {
    {
    .ivs = {5, 19, 3, 13, 9, 10},
    .lvl = 36,
    .species = SPECIES_GRUMPIG,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_SHOCK_WAVE, MOVE_REST, MOVE_SLEEP_TALK, MOVE_PSYBEAM}
    },
    {
    .ivs = {21, 20, 3, 4, 15, 1},
    .lvl = 35,
    .species = SPECIES_KECLEON,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_THUNDERBOLT, MOVE_SUBSTITUTE, MOVE_SLASH, MOVE_PSYBEAM}
    },
    {
    .ivs = {25, 15, 25, 19, 19, 7},
    .lvl = 35,
    .species = SPECIES_WAILMER,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_WATER_PULSE, MOVE_ICE_BEAM, MOVE_GROWL, MOVE_ASTONISH}
    },
    {
    .ivs = {12, 20, 27, 19, 19, 10},
    .lvl = 37,
    .species = SPECIES_COMBUSKEN,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_FIRE_PUNCH, MOVE_ROLLING_KICK, MOVE_BULK_UP, MOVE_SUNNY_DAY}
    }
};
// Rival 1 
static const struct TrainerMon sParty_MayRoute103Torchic[] = {
    {
    .ivs = {0, 0, 0, 0, 0, 0},
    .lvl = 5,
    .species = SPECIES_MUDKIP,
    .evs = {14, 14, 14, 14, 14, 14},
    }
};
// Rival 3
static const struct TrainerMon sParty_MayRoute110Torchic[] = {
    {
    .ivs = {11, 7, 20, 4, 10, 19},
    .lvl = 22,
    .species = SPECIES_SPOINK,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_CONFUSION, MOVE_TACKLE, MOVE_CONFUSE_RAY, MOVE_PSYCH_UP}
    },
    {
    .ivs = {14, 9, 14, 16, 25, 4},
    .lvl = 20,
    .species = SPECIES_SHROOMISH,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_TACKLE, MOVE_STUN_SPORE, MOVE_LEECH_SEED, MOVE_MEGA_DRAIN}
    },
    {
    .ivs = {17, 13, 17, 21, 15, 16},
    .lvl = 24,
    .species = SPECIES_MARSHTOMP,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_MUD_SHOT, MOVE_ROCK_TOMB, MOVE_WATER_GUN, MOVE_TACKLE}
    }
};
// Route 119 Rival 4 w Mudkip
static const struct TrainerMon sParty_MayRoute119Torchic[] = {
    {
    .ivs = {13, 20, 15, 20, 16, 18},
    .lvl = 36,
    .species = SPECIES_GRUMPIG,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_SHOCK_WAVE, MOVE_REST, MOVE_SLEEP_TALK, MOVE_PSYBEAM}
    },
    {
    .ivs = {11, 6, 15, 16, 4, 9},
    .lvl = 35,
    .species = SPECIES_KECLEON,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_THUNDERBOLT, MOVE_SUBSTITUTE, MOVE_SLASH, MOVE_PSYBEAM}
    },
    {
    .ivs = {13, 6, 15, 11, 9, 0},
    .lvl = 35,
    .species = SPECIES_BRELOOM,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_MEGA_DRAIN, MOVE_HEADBUTT, MOVE_MACH_PUNCH, MOVE_LEECH_SEED}
    },
    {
    .ivs = {8, 14, 17, 11, 20, 12},
    .lvl = 37,
    .species = SPECIES_MARSHTOMP,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_MUD_SHOT, MOVE_ROCK_TOMB, MOVE_TAKE_DOWN, MOVE_BUBBLE_BEAM}
    }
};
// Route 117 BreederM
static const struct TrainerMon sParty_Isaac1[] = {
    {
    .ivs = {11, 9, 18, 23, 10, 18},
    .lvl = 14,
    .species = SPECIES_SNORUNT,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {16, 16, 16, 16, 7, 16},
    .lvl = 14,
    .species = SPECIES_ZIGZAGOON,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {14, 16, 11, 16, 16, 14},
    .lvl = 14,
    .species = SPECIES_ARON,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {16, 16, 16, 16, 16, 16},
    .lvl = 14,
    .species = SPECIES_POOCHYENA,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {16, 12, 7, 15, 6, 16},
    .lvl = 14,
    .species = SPECIES_TAILLOW,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {15, 7, 7, 15, 16, 5},
    .lvl = 14,
    .species = SPECIES_MAKUHITA,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Route 123 (via 118 from mauville) Bug Catcher
static const struct TrainerMon sParty_Davis[] = {
    {
    .ivs = {22, 15, 5, 16, 10, 18},
    .lvl = 30,
    .species = SPECIES_PINSIR,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Victory Road CooltrainerM
static const struct TrainerMon sParty_Mitchell[] = {
    {
    .ivs = {18, 25, 30, 21, 19, 15},
    .lvl = 50,
    .species = SPECIES_LUNATONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_PSYCHIC}
    },
    {
    .ivs = {5, 22, 18, 19, 27, 7},
    .lvl = 50,
    .species = SPECIES_SOLROCK,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Isaac2[] = {
    {
    .ivs = {17, 12, 17, 13, 10, 7},
    .lvl = 24,
    .species = SPECIES_SNORUNT,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {2, 15, 19, 26, 26, 18},
    .lvl = 24,
    .species = SPECIES_LINOONE,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {13, 18, 8, 20, 13, 23},
    .lvl = 24,
    .species = SPECIES_ARON,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {11, 8, 24, 7, 19, 14},
    .lvl = 24,
    .species = SPECIES_MIGHTYENA,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {9, 28, 27, 13, 19, 27},
    .lvl = 24,
    .species = SPECIES_SWELLOW,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {22, 7, 30, 21, 7, 13},
    .lvl = 24,
    .species = SPECIES_MAKUHITA,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Isaac3[] = {
    {
    .ivs = {29, 21, 10, 10, 9, 17},
    .lvl = 35,
    .species = SPECIES_SNEASEL,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {14, 14, 3, 3, 16, 18},
    .lvl = 35,
    .species = SPECIES_LINOONE,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {15, 26, 18, 25, 13, 19},
    .lvl = 35,
    .species = SPECIES_ARON,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {17, 17, 18, 17, 13, 18},
    .lvl = 35,
    .species = SPECIES_MIGHTYENA,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {8, 17, 24, 10, 13, 21},
    .lvl = 35,
    .species = SPECIES_MURKROW,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {18, 6, 10, 21, 12, 9},
    .lvl = 35,
    .species = SPECIES_HARIYAMA,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Isaac4[] = {
    {
    .ivs = {9, 11, 4, 14, 11, 19},
    .lvl = 46,
    .species = SPECIES_SNEASEL,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {23, 17, 16, 16, 20, 6},
    .lvl = 46,
    .species = SPECIES_HOUNDOOM,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {18, 5, 20, 14, 19, 27},
    .lvl = 46,
    .species = SPECIES_CRAWDAUNT,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {12, 11, 9, 22, 14, 22},
    .lvl = 46,
    .species = SPECIES_MIGHTYENA,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {17, 18, 10, 15, 14, 27},
    .lvl = 46,
    .species = SPECIES_MURKROW,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {8, 13, 21, 24, 23, 30},
    .lvl = 46,
    .species = SPECIES_CACTURNE,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Isaac5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_MIGHTYENA,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_SUPER_FANG, MOVE_CRUNCH, MOVE_POISON_FANG, MOVE_YAWN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_SNEASEL,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_SWORDS_DANCE, MOVE_BLIZZARD, MOVE_FAINT_ATTACK, MOVE_SLASH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_SHARPEDO,
    .heldItem = ITEM_LIECHI_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_ENDURE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_UMBREON,
    .heldItem = ITEM_LEPPA_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 252, 0, 0, 0},
    .moves = {MOVE_MOONLIGHT, MOVE_DOUBLE_TEAM, MOVE_CURSE, MOVE_FAINT_ATTACK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_OVERHEAT, MOVE_SHADOW_BALL, MOVE_CRUNCH, MOVE_WILL_O_WISP}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_TYRANITAR,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_DRAGON_DANCE, MOVE_ROCK_SLIDE}
    }
};
// Route 117 BreederF
static const struct TrainerMon sParty_Lydia1[] = {
    {
    .ivs = {13, 24, 15, 20, 27, 20},
    .lvl = 14,
    .species = SPECIES_WINGULL,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {16, 16, 10, 16, 6, 10},
    .lvl = 14,
    .species = SPECIES_SHROOMISH,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {15, 7, 16, 15, 13, 16},
    .lvl = 14,
    .species = SPECIES_MARILL,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {16, 4, 12, 16, 16, 16},
    .lvl = 14,
    .species = SPECIES_ROSELIA,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {8, 16, 14, 11, 16, 16},
    .lvl = 14,
    .species = SPECIES_SKITTY,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {16, 16, 13, 9, 7, 16},
    .lvl = 14,
    .species = SPECIES_GOLDEEN,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Victory Road CooltrainerM
static const struct TrainerMon sParty_Halle[] = {
    {
    .ivs = {7, 23, 12, 14, 25, 18},
    .lvl = 49,
    .species = SPECIES_SABLEYE,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {18, 23, 26, 27, 8, 8},
    .lvl = 49,
    .species = SPECIES_ABSOL,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Abandoned Ship
static const struct TrainerMon sParty_Garrison[] = {
    {
    .ivs = {26, 8, 9, 22, 17, 31},
    .lvl = 31,
    .species = SPECIES_RELICANTH,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Lydia2[] = {
    {
    .ivs = {15, 19, 3, 4, 12, 19},
    .lvl = 29,
    .species = SPECIES_WINGULL,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {7, 10, 20, 17, 16, 24},
    .lvl = 29,
    .species = SPECIES_SHROOMISH,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {12, 18, 15, 20, 16, 19},
    .lvl = 29,
    .species = SPECIES_MARILL,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {4, 21, 5, 22, 13, 19},
    .lvl = 29,
    .species = SPECIES_ROSELIA,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {7, 21, 11, 22, 6, 22},
    .lvl = 29,
    .species = SPECIES_SKITTY,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {19, 14, 22, 10, 10, 19},
    .lvl = 29,
    .species = SPECIES_GOLDEEN,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Lydia3[] = {
    {
    .ivs = {5, 27, 13, 15, 15, 11},
    .lvl = 37,
    .species = SPECIES_PELIPPER,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {12, 21, 22, 8, 20, 9},
    .lvl = 37,
    .species = SPECIES_BRELOOM,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {17, 1, 25, 7, 21, 7},
    .lvl = 37,
    .species = SPECIES_AZUMARILL,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {6, 5, 24, 4, 12, 23},
    .lvl = 37,
    .species = SPECIES_ROSELIA,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {20, 30, 16, 14, 20, 13},
    .lvl = 37,
    .species = SPECIES_DELCATTY,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {9, 9, 11, 22, 14, 16},
    .lvl = 37,
    .species = SPECIES_SEAKING,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Lydia4[] = {
    {
    .ivs = {24, 7, 16, 13, 20, 10},
    .lvl = 51,
    .species = SPECIES_PELIPPER,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {16, 8, 21, 25, 20, 19},
    .lvl = 51,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {12, 11, 20, 11, 13, 13},
    .lvl = 51,
    .species = SPECIES_MARILL,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {15, 12, 21, 19, 9, 11},
    .lvl = 51,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {13, 21, 25, 10, 27, 14},
    .lvl = 51,
    .species = SPECIES_DELCATTY,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {30, 3, 24, 16, 15, 16},
    .lvl = 51,
    .species = SPECIES_GOLDEEN,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Lydia5[] = {
    {
    .ivs = {26, 17, 25, 26, 14, 10},
    .lvl = 60,
    .species = SPECIES_PELIPPER,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {14, 27, 12, 4, 26, 14},
    .lvl = 60,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {13, 13, 4, 16, 28, 20},
    .lvl = 60,
    .species = SPECIES_AZUMARILL,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {11, 7, 14, 7, 24, 13},
    .lvl = 60,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {8, 19, 6, 10, 2, 19},
    .lvl = 60,
    .species = SPECIES_DELCATTY,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {14, 9, 22, 14, 18, 4},
    .lvl = 60,
    .species = SPECIES_SEAKING,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Route 119 Pokemon RangerM
static const struct TrainerMon sParty_Jackson1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("SHROOMY"),
    .lvl = 29,
    .species = SPECIES_BRELOOM,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_FOCUS_PUNCH, MOVE_SWORDS_DANCE, MOVE_SPORE, MOVE_GIGA_DRAIN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("TORCHY"),
    .lvl = 29,
    .species = SPECIES_COMBUSKEN,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_BULK_UP, MOVE_HI_JUMP_KICK, MOVE_DOUBLE_KICK, MOVE_FLAMETHROWER}
    }
};
// Route 120 Pokemon RangerM
static const struct TrainerMon sParty_Lorenzo[] = {
    {
    .ivs = {20, 7, 12, 4, 8, 14},
    .lvl = 32,
    .species = SPECIES_SEEDOT,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {11, 25, 15, 14, 17, 15},
    .lvl = 32,
    .species = SPECIES_NUZLEAF,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {28, 16, 19, 27, 16, 22},
    .lvl = 32,
    .species = SPECIES_SHIFTRY,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Trick Room 6
static const struct TrainerMon sParty_Sebastian[] = {
    {
    .ivs = {14, 20, 22, 22, 7, 14},
    .lvl = 42,
    .species = SPECIES_CACTURNE,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Jackson2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("SHROOMY"),
    .lvl = 35,
    .species = SPECIES_BRELOOM,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_FOCUS_PUNCH, MOVE_SWORDS_DANCE, MOVE_SPORE, MOVE_GIGA_DRAIN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("TORCHY"),
    .lvl = 35,
    .species = SPECIES_BLAZIKEN,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_BULK_UP, MOVE_HI_JUMP_KICK, MOVE_DOUBLE_KICK, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_Jackson3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("SQUIDWARD"),
    .lvl = 41,
    .species = SPECIES_NOSEPASS,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_EARTHQUAKE, MOVE_THUNDERBOLT, MOVE_SUNNY_DAY, MOVE_REST}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("SHROOMY"),
    .lvl = 41,
    .species = SPECIES_BRELOOM,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_FOCUS_PUNCH, MOVE_SWORDS_DANCE, MOVE_SPORE, MOVE_GIGA_DRAIN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("TORCHY"),
    .lvl = 41,
    .species = SPECIES_BLAZIKEN,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_BULK_UP, MOVE_HI_JUMP_KICK, MOVE_SWORDS_DANCE, MOVE_OVERHEAT}
    }
};

static const struct TrainerMon sParty_Jackson4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("SQUIDWARD"),
    .lvl = 47,
    .species = SPECIES_NOSEPASS,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_EARTHQUAKE, MOVE_THUNDERBOLT, MOVE_SUNNY_DAY, MOVE_REST}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("SHROOMY"),
    .lvl = 47,
    .species = SPECIES_BRELOOM,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_FOCUS_PUNCH, MOVE_SWORDS_DANCE, MOVE_SPORE, MOVE_GIGA_DRAIN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("TORCHY"),
    .lvl = 47,
    .species = SPECIES_BLAZIKEN,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_BULK_UP, MOVE_HI_JUMP_KICK, MOVE_SWORDS_DANCE, MOVE_OVERHEAT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("YOKE"),
    .lvl = 47,
    .species = SPECIES_MACHAMP,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_BULK_UP, MOVE_CROSS_CHOP, MOVE_COUNTER, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Jackson5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("SQUIDWARD"),
    .lvl = 69,
    .species = SPECIES_NOSEPASS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_THUNDERBOLT, MOVE_SUNNY_DAY, MOVE_REST}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("SHROOMY"),
    .lvl = 69,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FOCUS_PUNCH, MOVE_SWORDS_DANCE, MOVE_SPORE, MOVE_GIGA_DRAIN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("TORCHY"),
    .lvl = 69,
    .species = SPECIES_BLAZIKEN,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BULK_UP, MOVE_HI_JUMP_KICK, MOVE_SWORDS_DANCE, MOVE_OVERHEAT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("YOKE"),
    .lvl = 69,
    .species = SPECIES_MACHAMP,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BULK_UP, MOVE_CROSS_CHOP, MOVE_COUNTER, MOVE_ROCK_SLIDE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("THICCEM"),
    .lvl = 69,
    .species = SPECIES_SLAKING,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_HYPER_BEAM, MOVE_REST, MOVE_YAWN, MOVE_FAKE_OUT}
    }
};
// Route 119 Pokemon RangerF 
static const struct TrainerMon sParty_Catherine1[] = {
    {
    .ivs = {10, 9, 3, 8, 20, 2},
    .lvl = 29,
    .species = SPECIES_HERACROSS,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 120 Pokemon RangerF
static const struct TrainerMon sParty_Jenna[] = {
    {
    .ivs = {28, 17, 23, 1, 15, 23},
    .lvl = 32,
    .species = SPECIES_LOTAD,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {20, 13, 4, 9, 7, 19},
    .lvl = 32,
    .species = SPECIES_LOMBRE,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {27, 21, 18, 22, 27, 17},
    .lvl = 32,
    .species = SPECIES_LUDICOLO,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Trick Room 6
static const struct TrainerMon sParty_Sophia[] = {
    {
    .ivs = {7, 22, 26, 23, 10, 22},
    .lvl = 40,
    .species = SPECIES_VIBRAVA,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {13, 18, 10, 11, 16, 9},
    .lvl = 40,
    .species = SPECIES_ROSELIA,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Catherine2[] = {
    {
    .ivs = {5, 23, 14, 22, 14, 18},
    .lvl = 41,
    .species = SPECIES_HERACROSS,
    .evs = {70, 70, 70, 70, 70, 70},
    },
};

static const struct TrainerMon sParty_Catherine3[] = {
    {
    .ivs = {17, 4, 6, 18, 8, 6},
    .lvl = 48,
    .species = SPECIES_HERACROSS,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {12, 19, 1, 26, 18, 7},
    .lvl = 48,
    .species = SPECIES_ROSELIA,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Catherine4[] = {
    {
    .ivs = {16, 11, 23, 17, 19, 12},
    .lvl = 56,
    .species = SPECIES_HERACROSS,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {18, 11, 10, 12, 15, 9},
    .lvl = 56,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Catherine5[] = {
    {
    .ivs = {5, 15, 17, 16, 19, 24},
    .lvl = 65,
    .species = SPECIES_HERACROSS,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {4, 18, 16, 27, 13, 18},
    .lvl = 65,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Jagged Pass Triathlete
static const struct TrainerMon sParty_Julio[] = {
    {
    .ivs = {16, 20, 12, 1, 17, 16},
    .lvl = 29,
    .species = SPECIES_MAGNEMITE,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Seafloor Cavern (Double with shelly)
static const struct TrainerMon sParty_GruntSeafloorCavern5[] = {
    {
    .ivs = {21, 26, 6, 23, 20, 6},
    .lvl = 46,
    .species = SPECIES_MIGHTYENA,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_CRUNCH, MOVE_TAKE_DOWN, MOVE_PROTECT, MOVE_SCARY_FACE}
    },
    {
    .ivs = {13, 7, 3, 27, 15, 17},
    .lvl = 45,
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_SLUDGE_BOMB}
    }, 
    {
    .ivs = {13, 15, 6, 10, 14, 14},
    .lvl = 45,
    .species = SPECIES_SNEASEL,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_FAINT_ATTACK, MOVE_BLIZZARD, MOVE_METAL_CLAW, MOVE_SLASH}
    }
};

static const struct TrainerMon sParty_GruntUnused[] = {
    {
    .ivs = {18, 17, 13, 23, 22, 31},
    .lvl = 33,
    .species = SPECIES_WAILMER,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {9, 21, 9, 4, 3, 6},
    .lvl = 33,
    .species = SPECIES_ZUBAT,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// UNUSED Mt Pyre Summit Aqua GruntF (Double Battle with GruntM 3)
static const struct TrainerMon sParty_GruntMtPyre4[] = {
    {
    .ivs = {24, 23, 4, 14, 21, 22},
    .lvl = 36,
    .species = SPECIES_MIGHTYENA,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {10, 21, 3, 9, 17, 28},
    .lvl = 36,
    .species = SPECIES_SEADRA,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Jagged Pass Magma Grunt
static const struct TrainerMon sParty_GruntJaggedPass[] = {
    {
    .ivs = {23, 7, 23, 13, 15, 17},
    .lvl = 28,
    .species = SPECIES_ZANGOOSE,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {17, 11, 21, 11, 24, 23},
    .lvl = 28,
    .species = SPECIES_NUMEL,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
//Rustboro Gym Hiker 1 (Potential Double Battle with Tommy)
static const struct TrainerMon sParty_Marc[] = {
    {
    .ivs = {12, 13, 28, 13, 15, 26},
    .lvl = 11,
    .species = SPECIES_ARON,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_METAL_CLAW, MOVE_TACKLE, MOVE_HARDEN, MOVE_NONE}
    },
    {
    .ivs = {16, 14, 14, 16, 5, 15},
    .lvl = 12,
    .species = SPECIES_GEODUDE,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_ROCK_THROW, MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_NONE}
    }
};
// Dewford Gym Sailor 1 (Double Battle w Lilith)
static const struct TrainerMon sParty_Brendan[] = {
    {
    .ivs = {10, 14, 15, 13, 20, 21},
    .lvl = 15,
    .species = SPECIES_MACHOP,
    .heldItem = ITEM_NONE,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_LOW_KICK, MOVE_LEER, MOVE_FOCUS_ENERGY, MOVE_FORESIGHT}
    },
    {
    .ivs = {15, 12, 19, 11, 14, 17},
    .lvl = 15,
    .species = SPECIES_CORPHISH,
    .heldItem = ITEM_NONE,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_ROCK_SMASH, MOVE_BUBBLE, MOVE_HARDEN, MOVE_VICE_GRIP}
    }
};
// Dewford Gym Battle Girl 2 (Double Battle w Brendan)
static const struct TrainerMon sParty_Lilith[] = {
    {
    .ivs = {29, 7, 15, 22, 24, 15},
    .lvl = 15,
    .species = SPECIES_MEDITITE,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {14, 13, 16, 25, 15, 7},
    .lvl = 15,
    .species = SPECIES_MEDITITE,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Dewford Gym Black Belt 2 (Top Middle)
static const struct TrainerMon sParty_Cristian[] = {
    {
    .ivs = {6, 11, 24, 11, 19, 21},
    .lvl = 14,
    .species = SPECIES_MACHOP,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {6, 12, 15, 13, 10, 16},
    .lvl = 16,
    .species = SPECIES_MAKUHITA,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {9, 17, 11, 17, 9, 29},
    .lvl = 14,
    .species = SPECIES_MACHOP,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Mossdeep Gym Hex Maniac 2 - Northwest (Double Battle w Hannah or Virgil)
static const struct TrainerMon sParty_Sylvia[] = {
    {
    .ivs = {6, 6, 16, 24, 20, 18},
    .lvl = 42,
    .species = SPECIES_MEDICHAM,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 126 SwimmerM
static const struct TrainerMon sParty_Leonardo[] = {
    {
    .ivs = {13, 29, 21, 12, 16, 25},
    .lvl = 40,
    .species = SPECIES_SHARPEDO,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 127 CooltrainerF 
static const struct TrainerMon sParty_Athena[] = {
    {
    .ivs = {20, 10, 23, 19, 14, 17},
    .lvl = 40,
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_SLUDGE_BOMB, MOVE_NONE}
    },
    {
    .ivs = {15, 24, 2, 25, 11, 8},
    .lvl = 40,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_THUNDER, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK, MOVE_NONE}
    },
    {
    .ivs = {18, 16, 7, 14, 23, 23},
    .lvl = 40,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_SURF, MOVE_HEADBUTT, MOVE_NONE, MOVE_NONE}
    }
};
// Route 128 SwimmerM
static const struct TrainerMon sParty_Harrison[] = {
    {
    .ivs = {14, 25, 23, 18, 14, 15},
    .lvl = 42,
    .species = SPECIES_HUNTAIL,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Mt Chimney GruntM (double)
static const struct TrainerMon sParty_GruntMtChimney2[] = {
    {
    .ivs = {16, 10, 11, 18, 17, 16},
    .lvl = 28,
    .species = SPECIES_GOLBAT,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 129 SwimmerM
static const struct TrainerMon sParty_Clarence[] = {
    {
    .ivs = {10, 11, 27, 13, 24, 5},
    .lvl = 44,
    .species = SPECIES_SHARPEDO,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Terry[] = {
    {
    .ivs = {8, 20, 9, 18, 10, 16},
    .lvl = 39,
    .species = SPECIES_GIRAFARIG,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Mossdeep Gym Gentleman 2 - Northwest (Double Battle w Virgil)
static const struct TrainerMon sParty_Nate[] = {
    {
    .ivs = {18, 14, 14, 28, 16, 25},
    .lvl = 43,
    .species = SPECIES_GRUMPIG,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Mossdeep Gym Hex Maniac - Southeast (Double Battle w Clifford or Nicholas)
static const struct TrainerMon sParty_Kathleen[] = {
    {
    .ivs = {8, 22, 14, 17, 10, 31},
    .lvl = 44,
    .species = SPECIES_ALAKAZAM,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Mossdeep Gym Gentleman 1 - Southeast (Double Battle w Macey or Kathleen)
static const struct TrainerMon sParty_Clifford[] = {
    {
    .ivs = {9, 9, 21, 20, 15, 17},
    .lvl = 44,
    .species = SPECIES_GIRAFARIG,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Mossdeep Gym PsychicM 3 - Entrance Room (Double Battle w Kathleen)
static const struct TrainerMon sParty_Nicholas[] = {
    {
    .ivs = {11, 19, 22, 23, 26, 22},
    .lvl = 44,
    .species = SPECIES_WOBBUFFET,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Space Center
static const struct TrainerMon sParty_GruntSpaceCenter3[] = {
    {
    .ivs = {20, 8, 6, 17, 2, 20},
    .lvl = 43,
    .species = SPECIES_GOLBAT,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {14, 0, 20, 22, 13, 5},
    .lvl = 43,
    .species = SPECIES_MIGHTYENA,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Space Center
static const struct TrainerMon sParty_GruntSpaceCenter4[] = {
    {
    .ivs = {13, 6, 20, 10, 9, 12},
    .lvl = 44,
    .species = SPECIES_RHYDON,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Space Center
static const struct TrainerMon sParty_GruntSpaceCenter5[] = {
    {
    .ivs = {8, 17, 17, 11, 16, 28},
    .lvl = 44,
    .species = SPECIES_NINETALES,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Space Center
static const struct TrainerMon sParty_GruntSpaceCenter6[] = {
    {
    .ivs = {27, 25, 10, 16, 22, 16},
    .lvl = 45,
    .species = SPECIES_MIGHTYENA,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Space Center
static const struct TrainerMon sParty_GruntSpaceCenter7[] = {
    {
    .ivs = {20, 21, 5, 13, 19, 7},
    .lvl = 44,
    .species = SPECIES_CLAYDOL,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Mossdeep Gym PsychicF 4 - Southeast (Double Battle w Clifford)
static const struct TrainerMon sParty_Macey[] = {
    {
    .ivs = {25, 6, 17, 24, 23, 5},
    .lvl = 44,
    .species = SPECIES_XATU,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Rival 2 Torchic & Lotad
static const struct TrainerMon sParty_BrendanRustboroTreecko[] = {
    {
    .ivs = {22, 22, 27, 10, 20, 18},
    .lvl = 15,
    .species = SPECIES_SPOINK,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_TACKLE, MOVE_CONFUSION, MOVE_ODOR_SLEUTH, MOVE_NONE}
    },
    {
    .ivs = {5, 4, 8, 27, 16, 9},
    .lvl = 16,
    .species = SPECIES_TORCHIC,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_GROWL, MOVE_PECK, MOVE_EMBER, MOVE_SAND_ATTACK}
    }
};
// Rival 2 Treecko & Wingull
static const struct TrainerMon sParty_BrendanRustboroMudkip[] = {
    {
    .ivs = {14, 16, 19, 23, 21, 7},
    .lvl = 15,
    .species = SPECIES_SPOINK,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_TACKLE, MOVE_CONFUSION, MOVE_ODOR_SLEUTH, MOVE_NONE}
    },
    {
    .ivs = {17, 18, 0, 10, 24, 8},
    .lvl = 16,
    .species = SPECIES_TREECKO,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_LEER, MOVE_ABSORB, MOVE_QUICK_ATTACK, MOVE_NONE}
    }
};
// Route 132 Expert
static const struct TrainerMon sParty_Paxton[] = {
    {
    .ivs = {24, 15, 21, 22, 12, 13},
    .lvl = 45,
    .species = SPECIES_SWELLOW,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {22, 19, 14, 7, 18, 22},
    .lvl = 45,
    .species = SPECIES_BRELOOM,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {12, 13, 22, 25, 27, 20},
    .lvl = 45,
    .species = SPECIES_CHIMECHO,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 124 TriathleteF
static const struct TrainerMon sParty_Isabella[] = {
    {
    .ivs = {14, 24, 23, 8, 9, 17},
    .lvl = 40,
    .species = SPECIES_STARMIE,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Weather Institute Aqua GruntF (2nd floor double)
static const struct TrainerMon sParty_GruntWeatherInst5[] = {
    {
    .ivs = {13, 17, 16, 8, 30, 10},
    .lvl = 29,
    .species = SPECIES_SNEASEL,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {4, 16, 21, 12, 18, 7},
    .lvl = 29,
    .species = SPECIES_WAILMER,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Magma Admin Mt Chimney 
static const struct TrainerMon sParty_TabithaMtChimney[] = {
    {
    .ivs = {27, 18, 8, 15, 22, 30},
    .lvl = 27,
    .species = SPECIES_CACNEA,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_LEECH_SEED, MOVE_PURSUIT, MOVE_PIN_MISSILE, MOVE_INGRAIN}
    },
    {
    .ivs = {23, 17, 14, 18, 23, 5},
    .lvl = 27,
    .species = SPECIES_LAIRON,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_METAL_CLAW, MOVE_ROCK_THROW, MOVE_MUD_SLAP, MOVE_HEADBUTT}
    },
    {
    .ivs = {15, 5, 15, 10, 23, 9},
    .lvl = 28,
    .species = SPECIES_ZANGOOSE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_SLASH, MOVE_PURSUIT, MOVE_METAL_CLAW, MOVE_QUICK_ATTACK}
    }
};
// Route 132 CooltrainerM
static const struct TrainerMon sParty_Jonathan[] = {
    {
    .ivs = {9, 19, 20, 10, 13, 14},
    .lvl = 45,
    .species = SPECIES_KECLEON,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {29, 23, 1, 7, 12, 9},
    .lvl = 45,
    .species = SPECIES_EXPLOUD,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {25, 20, 7, 18, 22, 16},
    .lvl = 45,
    .species = SPECIES_SABLEYE,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Rival 2 Mudkip & Slugma
static const struct TrainerMon sParty_BrendanRustboroTorchic[] = {
    {
    .ivs = {14, 16, 10, 25, 10, 22},
    .lvl = 15,
    .species = SPECIES_SPOINK,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_TACKLE, MOVE_CONFUSION, MOVE_ODOR_SLEUTH, MOVE_NONE}
    },
    {
    .ivs = {19, 11, 26, 16, 9, 14},
    .lvl = 16,
    .species = SPECIES_MUDKIP,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_TACKLE, MOVE_GROWL, MOVE_MUD_SLAP, MOVE_WATER_GUN}
    }
};
// Rival 2 Treecko & Wingull
static const struct TrainerMon sParty_MayRustboroMudkip[] = {
    {
    .ivs = {6, 18, 12, 15, 3, 14},
    .lvl = 15,
    .species = SPECIES_SPOINK,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_TACKLE, MOVE_CONFUSION, MOVE_ODOR_SLEUTH, MOVE_NONE}
    },
    {
    .ivs = {15, 24, 12, 13, 12, 12},
    .lvl = 16,
    .species = SPECIES_TREECKO,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_LEER, MOVE_ABSORB, MOVE_QUICK_ATTACK, MOVE_NONE}
    }
};
// Magma Leader Magma Hideout
static const struct TrainerMon sParty_MaxieMagmaHideout[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 39,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FLAMETHROWER, MOVE_CRUNCH, MOVE_SUNNY_DAY, MOVE_ROAR}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 40,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_LEAF_BLADE, MOVE_EXTRASENSORY, MOVE_FAINT_ATTACK, MOVE_SUNNY_DAY}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 40,
    .species = SPECIES_AGGRON,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_IRON_TAIL, MOVE_ROCK_THROW, MOVE_EARTHQUAKE, MOVE_IRON_DEFENSE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 41,
    .species = SPECIES_CROBAT,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FLY, MOVE_POISON_FANG, MOVE_GIGA_DRAIN, MOVE_HAZE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 42,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FIRE_BLAST, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_AMNESIA}
    }
};
// Magma Leader Mt Chimney 
static const struct TrainerMon sParty_MaxieMtChimney[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 28,
    .species = SPECIES_MIGHTYENA,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_BITE, MOVE_SAND_ATTACK, MOVE_TAKE_DOWN, MOVE_ROAR}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 28,
    .species = SPECIES_GOLBAT,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_WING_ATTACK, MOVE_CONFUSE_RAY, MOVE_BITE, MOVE_LEECH_LIFE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 27,
    .species = SPECIES_NUZLEAF,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_RAZOR_LEAF, MOVE_LEECH_SEED, MOVE_ROCK_TOMB, MOVE_GROWTH}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 30,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_MAGNITUDE, MOVE_FLAME_WHEEL, MOVE_ROCK_TOMB, MOVE_MUD_SLAP}
    }
};
//Route 102 Lass
static const struct TrainerMon sParty_Tiana[] = {
    {
    .ivs = {23, 16, 1, 8, 10, 17},
    .lvl = 6,
    .species = SPECIES_ZIGZAGOON,
    .evs = {14, 14, 14, 14, 14, 14},
    },
    {
    .ivs = {2, 16, 12, 9, 16, 13},
    .lvl = 7,
    .species = SPECIES_SHROOMISH,
    .evs = {14, 14, 14, 14, 14, 14},
    }
};
//Route 104 North Lass
static const struct TrainerMon sParty_Haley1[] = {
    {
    .ivs = {13, 16, 18, 24, 19, 2},
    .lvl = 10,
    .species = SPECIES_LOTAD,
    .evs = {14, 14, 14, 14, 14, 14},
    },
    {
    .ivs = {14, 6, 10, 16, 16, 9},
    .lvl = 11,
    .species = SPECIES_SHROOMISH,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Route 116 Cut Lass
static const struct TrainerMon sParty_Janice[] = {
    {
    .ivs = {10, 12, 3, 24, 21, 8},
    .lvl = 13,
    .species = SPECIES_VULPIX,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {16, 16, 16, 16, 16, 16},
    .lvl = 13,
    .species = SPECIES_MARILL,
    .evs = {28, 28, 28, 28, 28, 28},
    },
};
// Winstrate House
static const struct TrainerMon sParty_Vivi[] = {
    {
    .ivs = {18, 17, 7, 29, 19, 20},
    .lvl = 18,
    .species = SPECIES_MARILL,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {21, 29, 20, 17, 16, 12},
    .lvl = 18,
    .species = SPECIES_SHROOMISH,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {4, 26, 18, 16, 15, 26},
    .lvl = 18,
    .species = SPECIES_NUMEL,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};

static const struct TrainerMon sParty_Haley2[] = {
    {
    .ivs = {12, 13, 7, 11, 11, 15},
    .lvl = 28,
    .species = SPECIES_LOMBRE,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {27, 4, 8, 24, 17, 18},
    .lvl = 28,
    .species = SPECIES_SHROOMISH,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Haley3[] = {
    {
    .ivs = {10, 19, 3, 12, 19, 28},
    .lvl = 32,
    .species = SPECIES_LOMBRE,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {16, 15, 13, 4, 16, 6},
    .lvl = 32,
    .species = SPECIES_BRELOOM,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Haley4[] = {
    {
    .ivs = {6, 11, 7, 15, 22, 8},
    .lvl = 43,
    .species = SPECIES_LOMBRE,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {3, 24, 19, 14, 13, 26},
    .lvl = 43,
    .species = SPECIES_BRELOOM,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Haley5[] = {
    {
    .ivs = {17, 15, 12, 14, 7, 13},
    .lvl = 56,
    .species = SPECIES_SWELLOW,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {14, 17, 26, 18, 21, 4},
    .lvl = 57,
    .species = SPECIES_LUDICOLO,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {11, 10, 22, 15, 30, 13},
    .lvl = 57,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Trick House 1 (Cut) Lass 
static const struct TrainerMon sParty_Sally[] = {
    {
    .ivs = {17, 24, 19, 18, 6, 30},
    .lvl = 19,
    .species = SPECIES_ODDISH,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Trick House 1 (Cut) Lass
static const struct TrainerMon sParty_Robin[] = {
    {
    .ivs = {22, 5, 15, 13, 8, 20},
    .lvl = 17,
    .species = SPECIES_LOMBRE,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {2, 10, 25, 21, 16, 10},
    .lvl = 17,
    .species = SPECIES_ZIGZAGOON,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {17, 27, 21, 28, 10, 19},
    .lvl = 17,
    .species = SPECIES_SANDSHREW,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
//Sootopolis Gym Lass 1 (Lowest Level)
static const struct TrainerMon sParty_Andrea[] = {
    {
    .ivs = {20, 11, 24, 14, 22, 5},
    .lvl = 48,
    .species = SPECIES_GYARADOS,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
//Sootopolis Gym Lass 2 (Highest Level - Double Battle w Tiffany)
static const struct TrainerMon sParty_Crissy[] = {
    {
    .ivs = {19, 10, 28, 22, 14, 15},
    .lvl = 47,
    .species = SPECIES_SEAKING,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {10, 14, 5, 29, 6, 26},
    .lvl = 47,
    .species = SPECIES_WAILORD,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
//Route 102 Bug Catcher
static const struct TrainerMon sParty_Rick[] = {
    {
    .ivs = {11, 16, 23, 12, 20, 20},
    .lvl = 7,
    .species = SPECIES_WURMPLE,
    .evs = {14, 14, 14, 14, 14, 14},
    },
    {
    .ivs = {16, 16, 16, 10, 11, 3},
    .lvl = 7,
    .species = SPECIES_WURMPLE,
    .evs = {14, 14, 14, 14, 14, 14},
    }
};
//Petalburg Woods Bug Catcher 1
static const struct TrainerMon sParty_Lyle[] = {
    {
    .ivs = {17, 19, 17, 21, 9, 12},
    .lvl = 7,
    .species = SPECIES_CASCOON,
    .evs = {14, 14, 14, 14, 14, 14},
    },
    {
    .ivs = {16, 14, 16, 14, 16, 14},
    .lvl = 7,
    .species = SPECIES_SILCOON,
    .evs = {14, 14, 14, 14, 14, 14},
    },
    {
    .ivs = {9, 16, 3, 12, 16, 16},
    .lvl = 8,
    .species = SPECIES_CASCOON,
    .evs = {14, 14, 14, 14, 14, 14},
    },
    {
    .ivs = {16, 8, 9, 16, 16, 16},
    .lvl = 8,
    .species = SPECIES_SILCOON,
    .evs = {14, 14, 14, 14, 14, 14},
    }
};
// Route 116 Bug Catcher - Wurmple & Nincada
static const struct TrainerMon sParty_Jose[] = {
    {
    .ivs = {15, 6, 12, 14, 23, 26},
    .lvl = 10,
    .species = SPECIES_SILCOON,
    .evs = {14, 14, 14, 14, 14, 14},
    },
    {
    .ivs = {3, 16, 8, 14, 12, 11},
    .lvl = 10,
    .species = SPECIES_NINCADA,
    .evs = {14, 14, 14, 14, 14, 14},
    }
};
// Route 119 Bug Catcher 3
static const struct TrainerMon sParty_Doug[] = {
    {
    .ivs = {11, 10, 21, 27, 26, 13},
    .lvl = 30,
    .species = SPECIES_NINJASK,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {19, 23, 4, 18, 18, 19},
    .lvl = 30,
    .species = SPECIES_SHEDINJA,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 119 Bug Catcher 2
static const struct TrainerMon sParty_Greg[] = {
    {
    .ivs = {11, 11, 18, 3, 21, 12},
    .lvl = 29,
    .species = SPECIES_VOLBEAT,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {20, 15, 14, 24, 20, 29},
    .lvl = 29,
    .species = SPECIES_ILLUMISE,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 119 Bug Catcher 1
static const struct TrainerMon sParty_Kent[] = {
    {
    .ivs = {12, 5, 10, 27, 15, 25},
    .lvl = 27,
    .species = SPECIES_PINSIR,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
//Petalburg Woods Bug Catcher 2
static const struct TrainerMon sParty_James1[] = {
    {
    .ivs = {15, 23, 6, 30, 6, 19},
    .lvl = 8,
    .species = SPECIES_NINCADA,
    .evs = {14, 14, 14, 14, 14, 14},
    },
    {
    .ivs = {16, 8, 16, 16, 4, 16},
    .lvl = 9,
    .species = SPECIES_NINCADA,
    .evs = {14, 14, 14, 14, 14, 14},
    }
};

static const struct TrainerMon sParty_James2[] = {
    {
    .ivs = {13, 5, 20, 21, 13, 17},
    .lvl = 29,
    .species = SPECIES_NINCADA,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {22, 13, 1, 11, 17, 12},
    .lvl = 29,
    .species = SPECIES_NINJASK,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {8, 16, 6, 20, 16, 17},
    .lvl = 29,
    .species = SPECIES_SHEDINJA,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_James3[] = {
     {
    .ivs = {11, 10, 17, 26, 6, 23},
    .lvl = 33,
    .species = SPECIES_DUSTOX,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {29, 16, 16, 18, 23, 16},
    .lvl = 32,
    .species = SPECIES_NINJASK,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {26, 20, 29, 1, 15, 12},
    .lvl = 34,
    .species = SPECIES_SHEDINJA,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_James4[] = {
     {
    .ivs = {10, 21, 26, 18, 15, 8},
    .lvl = 51,
    .species = SPECIES_HERACROSS,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {19, 25, 27, 11, 15, 10},
    .lvl = 51,
    .species = SPECIES_NINJASK,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {14, 11, 14, 19, 6, 6},
    .lvl = 51,
    .species = SPECIES_SCYTHER,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_James5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_NINJASK,
    .heldItem = ITEM_STARF_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_BATON_PASS, MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_SILVER_WIND}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_YANMA,
    .heldItem = ITEM_LIECHI_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_ENDURE, MOVE_REVERSAL, MOVE_HYPNOSIS, MOVE_TWINEEDLE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_ARMALDO,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_TWINEEDLE, MOVE_ROCK_BLAST, MOVE_METAL_CLAW, MOVE_BRICK_BREAK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_BRIGHT_POWDER,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_ICE_BEAM, MOVE_HYDRO_PUMP, MOVE_SIGNAL_BEAM, MOVE_GIGA_DRAIN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_HERACROSS,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_BULK_UP, MOVE_MEGAHORN, MOVE_CROSS_CHOP, MOVE_EARTHQUAKE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_VENOMOTH,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SLEEP_POWDER, MOVE_SUBSTITUTE, MOVE_GIGA_DRAIN, MOVE_PSYCHIC}
    }
};
// Route 112 South Section Hiker 2
static const struct TrainerMon sParty_Brice[] = {
    {
    .ivs = {25, 14, 23, 14, 19, 21},
    .lvl = 23,
    .species = SPECIES_NUMEL,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {20, 10, 14, 9, 14, 17},
    .lvl = 23,
    .species = SPECIES_MACHOP,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 112 South Section Hiker 1
static const struct TrainerMon sParty_Trent1[] = {
    {
    .ivs = {24, 16, 22, 19, 18, 18},
    .lvl = 23,
    .species = SPECIES_GEODUDE,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {19, 25, 21, 10, 15, 24},
    .lvl = 24,
    .species = SPECIES_GEODUDE,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {12, 13, 13, 19, 15, 27},
    .lvl = 25,
    .species = SPECIES_GEODUDE,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 114 Hiker 2
static const struct TrainerMon sParty_Lenny[] = {
    {
    .ivs = {23, 6, 20, 22, 17, 20},
    .lvl = 26,
    .species = SPECIES_GEODUDE,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {26, 16, 7, 18, 14, 23},
    .lvl = 26,
    .species = SPECIES_MACHOP,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 114 Hiker 1
static const struct TrainerMon sParty_Lucas1[] = {
    {
    .ivs = {12, 13, 13, 13, 6, 29},
    .lvl = 26,
    .species = SPECIES_GEODUDE,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {24, 10, 14, 26, 21, 19},
    .lvl = 26,
    .species = SPECIES_NUMEL,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Trick House 3 Hiker
static const struct TrainerMon sParty_Alan[] = {
    {
    .ivs = {21, 5, 21, 13, 17, 14},
    .lvl = 26,
    .species = SPECIES_GEODUDE,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {18, 8, 17, 26, 12, 22},
    .lvl = 27,
    .species = SPECIES_NOSEPASS,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {13, 11, 18, 7, 12, 10},
    .lvl = 27,
    .species = SPECIES_GRAVELER,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 116 Hiker 1
static const struct TrainerMon sParty_Clark[] = {
    {
    .ivs = {11, 22, 11, 13, 9, 16},
    .lvl = 11,
    .species = SPECIES_GEODUDE,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {16, 10, 12, 16, 16, 10},
    .lvl = 10,
    .species = SPECIES_GEODUDE,
    .evs = {14, 14, 14, 14, 14, 14},
    }
};
// Jagged Pass Hiker
static const struct TrainerMon sParty_Eric[] = {
    {
    .ivs = {10, 8, 14, 13, 16, 14},
    .lvl = 29,
    .species = SPECIES_GRAVELER,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {6, 18, 18, 12, 16, 7},
    .lvl = 29,
    .species = SPECIES_BALTOY,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Flag Note: what is this? 114 
static const struct TrainerMon sParty_Lucas2[] = {
    {
    .ivs = {18, 6, 21, 11, 11, 21},
    .lvl = 11,
    .species = SPECIES_WAILMER,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_SPLASH, MOVE_WATER_GUN, MOVE_NONE, MOVE_NONE}
    }
};
// Verdanturf Tunnel? Unused??
static const struct TrainerMon sParty_Mike1[] = {
    {
    .ivs = {23, 7, 31, 24, 19, 18},
    .lvl = 12,
    .species = SPECIES_PELIPPER,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_GUST, MOVE_GROWL, MOVE_NONE, MOVE_NONE}
    },
    {
    .ivs = {11, 14, 16, 15, 16, 16},
    .lvl = 12,
    .species = SPECIES_POOCHYENA,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_BITE, MOVE_SCARY_FACE, MOVE_NONE, MOVE_NONE}
    }
};
// Flag note: what is this? Unused?
static const struct TrainerMon sParty_Mike2[] = {
    {
    .ivs = {13, 15, 15, 6, 17, 13},
    .lvl = 20,
    .species = SPECIES_GEODUDE,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {15, 9, 17, 4, 16, 24},
    .lvl = 20,
    .species = SPECIES_SABLEYE,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {21, 29, 12, 26, 18, 8},
    .lvl = 20,
    .species = SPECIES_RHYHORN,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};

static const struct TrainerMon sParty_Trent2[] = {
    {
    .ivs = {22, 12, 21, 24, 9, 10},
    .lvl = 26,
    .species = SPECIES_GEODUDE,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {14, 18, 16, 27, 15, 17},
    .lvl = 26,
    .species = SPECIES_GEODUDE,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {13, 2, 19, 9, 12, 17},
    .lvl = 26,
    .species = SPECIES_GEODUDE,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {23, 17, 26, 3, 17, 6},
    .lvl = 27,
    .species = SPECIES_GRAVELER,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};

static const struct TrainerMon sParty_Trent3[] = {
    {
    .ivs = {12, 10, 16, 15, 16, 20},
    .lvl = 28,
    .species = SPECIES_GEODUDE,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {22, 12, 26, 9, 17, 13},
    .lvl = 29,
    .species = SPECIES_GEODUDE,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {28, 21, 18, 23, 13, 15},
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {23, 8, 21, 19, 9, 17},
    .lvl = 32,
    .species = SPECIES_GRAVELER,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Trent4[] = {
    {
    .ivs = {17, 6, 11, 19, 4, 11},
    .lvl = 55,
    .species = SPECIES_PUPITAR,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {10, 12, 8, 5, 18, 23},
    .lvl = 56,
    .species = SPECIES_ARMALDO,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {15, 7, 8, 21, 15, 7},
    .lvl = 56,
    .species = SPECIES_GOLEM,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {6, 24, 10, 23, 14, 7},
    .lvl = 56,
    .species = SPECIES_GOLEM,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Trent5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_TYRANITAR,
    .heldItem = ITEM_CHESTO_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {100, 252, 152, 0, 0, 0},
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_REST}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_OMASTAR,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SANDSTORM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_FOCUS_BAND,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 0, 0, 252},
    .moves = {MOVE_EXPLOSION, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_GANLON_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 0, 252},
    .moves = {MOVE_RECOVER, MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_MIRROR_COAT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_SHUCKLE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 0, 252},
    .moves = {MOVE_TOXIC, MOVE_ENCORE, MOVE_WRAP, MOVE_REST}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_BRIGHT_POWDER,
    .ability = ABILITY_SLOT_1,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SKY_ATTACK, MOVE_ANCIENT_POWER, MOVE_IRON_TAIL, MOVE_EARTHQUAKE}
    }
};
// Mt Pyre Interior 2F Young Couple
static const struct TrainerMon sParty_DezAndLuke[] = {
    {
    .ivs = {14, 10, 23, 16, 20, 16},
    .lvl = 35,
    .species = SPECIES_DELCATTY,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {4, 11, 13, 22, 9, 18},
    .lvl = 35,
    .species = SPECIES_MANECTRIC,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// SS Tidal Young Couple (nat dex)
static const struct TrainerMon sParty_LeaAndJed[] = {
    {
    .ivs = {6, 4, 20, 20, 19, 31},
    .lvl = 52,
    .species = SPECIES_MILTANK,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {7, 13, 3, 15, 22, 20},
    .lvl = 52,
    .species = SPECIES_SLOWBRO,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Abandoned Ship
static const struct TrainerMon sParty_KiraAndDan1[] = {
    {
    .ivs = {13, 15, 17, 24, 17, 14},
    .lvl = 32,
    .species = SPECIES_VOLBEAT,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {21, 27, 5, 13, 12, 20},
    .lvl = 32,
    .species = SPECIES_ILLUMISE,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_KiraAndDan2[] = {
    {
    .ivs = {20, 12, 23, 12, 13, 9},
    .lvl = 35,
    .species = SPECIES_VOLBEAT,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {6, 12, 19, 12, 18, 6},
    .lvl = 35,
    .species = SPECIES_ILLUMISE,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_KiraAndDan3[] = {
    {
    .ivs = {15, 3, 15, 13, 5, 17},
    .lvl = 37,
    .species = SPECIES_VOLBEAT,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {15, 25, 17, 30, 5, 15},
    .lvl = 37,
    .species = SPECIES_ILLUMISE,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_KiraAndDan4[] = {
    {
    .ivs = {25, 12, 16, 20, 5, 23},
    .lvl = 45,
    .species = SPECIES_VOLBEAT,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {15, 17, 13, 6, 6, 12},
    .lvl = 45,
    .species = SPECIES_ILLUMISE,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_KiraAndDan5[] = {
    {
    .ivs = {19, 13, 13, 12, 15, 13},
    .lvl = 57,
    .species = SPECIES_VOLBEAT,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {19, 19, 16, 20, 22, 19},
    .lvl = 57,
    .species = SPECIES_ILLUMISE,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Route 109 Seashore House Beauty
static const struct TrainerMon sParty_Johanna[] = {
    {
    .ivs = {9, 8, 8, 16, 20, 16},
    .lvl = 18,
    .species = SPECIES_HORSEA,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {12, 7, 13, 19, 13, 20},
    .lvl = 18,
    .species = SPECIES_ODDISH,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Lavaridge Gym CooltrainerM
static const struct TrainerMon sParty_Gerald[] = {
    {
    .ivs = {4, 12, 8, 18, 17, 11},
    .lvl = 28,
    .species = SPECIES_KECLEON,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_FLAMETHROWER, MOVE_FURY_SWIPES, MOVE_FAINT_ATTACK, MOVE_BIND}
    }
};
// Mauville Gym Battle Girl
static const struct TrainerMon sParty_Vivian[] = {
    {
    .ivs = {9, 14, 19, 9, 7, 14},
    .lvl = 20,
    .species = SPECIES_MEDITITE,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_BIDE, MOVE_DETECT, MOVE_CONFUSION, MOVE_THUNDER_PUNCH}
    },
    {
    .ivs = {30, 31, 8, 10, 11, 20},
    .lvl = 20,
    .species = SPECIES_MEDITITE,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_THUNDER_PUNCH, MOVE_DETECT, MOVE_CONFUSION, MOVE_MEDITATE}
    }
};
// Lavaridge Gym Battle Girl
static const struct TrainerMon sParty_Danielle[] = {
    {
    .ivs = {13, 18, 31, 25, 10, 13},
    .lvl = 29,
    .species = SPECIES_MEDITITE,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_BIDE, MOVE_DETECT, MOVE_CONFUSION, MOVE_FIRE_PUNCH}
    }
};
// Route 119 (Post Weather Insitute) Ninja Boy 2
static const struct TrainerMon sParty_Hideo[] = {
    {
    .ivs = {21, 6, 12, 12, 18, 6},
    .lvl = 30,
    .species = SPECIES_KOFFING,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_TACKLE, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN}
    },
    {
    .ivs = {9, 16, 4, 21, 0, 16},
    .lvl = 30,
    .species = SPECIES_SWALOT,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_ENCORE, MOVE_YAWN, MOVE_SLUDGE, MOVE_BODY_SLAM}
    }
};
// Route 120 Ninja Boy 2
static const struct TrainerMon sParty_Keigo[] = {
    {
    .ivs = {13, 6, 13, 5, 4, 14},
    .lvl = 30,
    .species = SPECIES_SWALOT,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {17, 12, 6, 13, 15, 14},
    .lvl = 30,
    .species = SPECIES_NINJASK,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 120 Ninja Boy 1
static const struct TrainerMon sParty_Riley[] = {
    {
    .ivs = {7, 14, 17, 13, 20, 11},
    .lvl = 32,
    .species = SPECIES_NINJASK,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_LEECH_LIFE, MOVE_FURY_SWIPES, MOVE_DIG, MOVE_NONE}
    },
    {
    .ivs = {17, 17, 29, 17, 6, 12},
    .lvl = 32,
    .species = SPECIES_KOFFING,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_TACKLE, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN}
    }
};
// Fortree Gym Camper (Double Battle with Edwardo)
static const struct TrainerMon sParty_Flint[] = {
    {
    .ivs = {16, 8, 19, 10, 12, 22},
    .lvl = 34,
    .species = SPECIES_SWELLOW,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {4, 16, 11, 26, 7, 26},
    .lvl = 35,
    .species = SPECIES_XATU,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Fortree Gym Picknicker
static const struct TrainerMon sParty_Ashley[] = {
    {
    .ivs = {4, 4, 11, 24, 14, 17},
    .lvl = 34,
    .species = SPECIES_SWABLU,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {11, 4, 4, 4, 10, 28},
    .lvl = 34,
    .species = SPECIES_DODRIO,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Mauville
static const struct TrainerMon sParty_WallyMauville[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 18,
    .species = SPECIES_RALTS,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Rematch 1
static const struct TrainerMon sParty_WallyVR2[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 57,
    .species = SPECIES_MAWILE,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SWORDS_DANCE, MOVE_BATON_PASS, MOVE_METEOR_MASH, MOVE_BATON_PASS}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 58,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_SILK_SCARF,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DOUBLE_EDGE, MOVE_WISH, MOVE_FOLLOW_ME, MOVE_HEAL_BELL}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 58,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_MYSTIC_WATER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_DOUBLE_EDGE, MOVE_SUPERPOWER, MOVE_ICE_BEAM}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 58,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_SHARP_BEAK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_AERIAL_ACE, MOVE_EARTHQUAKE, MOVE_FIRE_BLAST, MOVE_DRAGON_DANCE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 57,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_WIKI_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_VOLT_TACKLE, MOVE_WISH, MOVE_MAGICAL_LEAF, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 59,
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_CALM_MIND}
    }
};
// Rematch 2
static const struct TrainerMon sParty_WallyVR3[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 63,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SKY_ATTACK, MOVE_EARTHQUAKE, MOVE_REST, MOVE_DRAGON_DANCE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 63,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_WISH, MOVE_FOLLOW_ME, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 62,
    .species = SPECIES_MAWILE,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SWORDS_DANCE, MOVE_CRUNCH, MOVE_METEOR_MASH, MOVE_BATON_PASS}
    },
    {   
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 63,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_SILK_SCARF,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DOUBLE_EDGE, MOVE_WISH, MOVE_FOLLOW_ME, MOVE_HEAL_BELL}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 63,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_BLACK_BELT,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_DOUBLE_EDGE, MOVE_SUPERPOWER, MOVE_ICE_BEAM}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 64,
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_CALM_MIND, MOVE_PROTECT}
    }
};
// Rematch 3
static const struct TrainerMon sParty_WallyVR4[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 69,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SKY_ATTACK, MOVE_EARTHQUAKE, MOVE_REST, MOVE_DRAGON_DANCE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 68,
    .species = SPECIES_MEGANIUM,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GRASS_WHISTLE, MOVE_LEECH_SEED, MOVE_EARTHQUAKE, MOVE_GIGA_DRAIN}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 68,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_WHITE_HERB,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_OVERHEAT, MOVE_HI_JUMP_KICK, MOVE_HYPNOSIS, MOVE_DOUBLE_EDGE}
    },
    {   
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 68,
    .species = SPECIES_GRANBULL,
    .heldItem = ITEM_SILK_SCARF,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DOUBLE_EDGE, MOVE_CRUNCH, MOVE_IRON_TAIL, MOVE_HEAL_BELL}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 69,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_BLACK_BELT,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_DOUBLE_EDGE, MOVE_SUPERPOWER, MOVE_ICE_BEAM}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 69,
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_CALM_MIND, MOVE_ICE_PUNCH}
    }
};
// Rematch 4
static const struct TrainerMon sParty_WallyVR5[] = {
    {   
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 74,
    .species = SPECIES_CLEFABLE,
    .heldItem = ITEM_WIKI_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BODY_SLAM, MOVE_METEOR_MASH, MOVE_FOLLOW_ME, MOVE_TOXIC}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 74,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SKY_ATTACK, MOVE_FACADE, MOVE_STEEL_WING, MOVE_NONE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 75,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_WHITE_HERB,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_IRON_TAIL, MOVE_DOUBLE_EDGE, MOVE_SUPERPOWER, MOVE_HYDRO_PUMP}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 75,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SKY_ATTACK, MOVE_HEAL_BELL, MOVE_REST, MOVE_TOXIC}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 75,
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_CALM_MIND, MOVE_FIRE_PUNCH}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 75,
    .species = SPECIES_MEGANIUM,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GRASS_WHISTLE, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_BODY_SLAM}
    }
};

// Lilycove Rival 5
static const struct TrainerMon sParty_BrendanLilycoveMudkip[] = {
    {
    .ivs = {18, 10, 15, 13, 7, 21},
    .lvl = 38,
    .species = SPECIES_KECLEON,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_THUNDERBOLT, MOVE_SUBSTITUTE, MOVE_SLASH, MOVE_PSYCHIC}
    },
    {
    .ivs = {6, 25, 24, 14, 17, 7},
    .lvl = 39,
    .species = SPECIES_GRUMPIG,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_SHOCK_WAVE, MOVE_REST, MOVE_SLEEP_TALK, MOVE_PSYCHIC}
    },
    {
    .ivs = {11, 3, 26, 7, 15, 10},
    .lvl = 38,
    .species = SPECIES_HERACROSS,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_BRICK_BREAK, MOVE_COUNTER, MOVE_TWINEEDLE, MOVE_TAKE_DOWN}
    },
    {
    .ivs = {8, 14, 19, 13, 14, 19},
    .lvl = 38,
    .species = SPECIES_TORKOAL,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_CURSE, MOVE_BODY_SLAM, MOVE_FLAMETHROWER, MOVE_AMNESIA}
    },
    {
    .ivs = {8, 21, 17, 6, 16, 9},
    .lvl = 40,
    .species = SPECIES_SCEPTILE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_GROWTH, MOVE_SLASH, MOVE_ROCK_TOMB, MOVE_LEAF_BLADE}
    }
};
// Lilycove Rival 5
static const struct TrainerMon sParty_BrendanLilycoveTreecko[] = {
   {
    .ivs = {6, 18, 9, 4, 13, 20},
    .lvl = 38,
    .species = SPECIES_KECLEON,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_THUNDERBOLT, MOVE_SUBSTITUTE, MOVE_SLASH, MOVE_PSYCHIC}
    },
    {
    .ivs = {12, 19, 17, 10, 28, 17},
    .lvl = 39,
    .species = SPECIES_GRUMPIG,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_SHOCK_WAVE, MOVE_REST, MOVE_SLEEP_TALK, MOVE_PSYCHIC}
    },
    {
    .ivs = {17, 6, 14, 20, 1, 21},
    .lvl = 38,
    .species = SPECIES_DONPHAN,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_EARTHQUAKE, MOVE_FLAIL, MOVE_TAKE_DOWN, MOVE_ROLLOUT}
    },
    {
    .ivs = {9, 27, 17, 11, 22, 21},
    .lvl = 38,
    .species = SPECIES_WAILORD,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_ASTONISH, MOVE_AMNESIA}
    },
    {
    .ivs = {15, 15, 16, 17, 9, 12},
    .lvl = 40,
    .species = SPECIES_BLAZIKEN,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_BLAZE_KICK, MOVE_ROLLING_KICK, MOVE_BULK_UP, MOVE_MACH_PUNCH}
    }
};
// Lilycove Rival 5
static const struct TrainerMon sParty_BrendanLilycoveTorchic[] = {
    {
    .ivs = {4, 14, 27, 30, 12, 13},
    .lvl = 38,
    .species = SPECIES_KECLEON,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_THUNDERBOLT, MOVE_SUBSTITUTE, MOVE_SLASH, MOVE_PSYCHIC}
    },
    {
    .ivs = {10, 17, 11, 15, 15, 1},
    .lvl = 39,
    .species = SPECIES_GRUMPIG,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_SHOCK_WAVE, MOVE_REST, MOVE_SLEEP_TALK, MOVE_PSYCHIC}
    },
    {
    .ivs = {6, 9, 24, 17, 9, 28},
    .lvl = 38,
    .species = SPECIES_PINSIR,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_SEISMIC_TOSS, MOVE_REVENGE, MOVE_TWINEEDLE, MOVE_BRICK_BREAK}
    },
    {
    .ivs = {20, 11, 11, 2, 9, 30},
    .lvl = 38,
    .species = SPECIES_BRELOOM,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_GIGA_DRAIN, MOVE_HEADBUTT, MOVE_COUNTER, MOVE_BRICK_BREAK}
    },
    {
    .ivs = {13, 18, 24, 23, 11, 16},
    .lvl = 40,
    .species = SPECIES_SWAMPERT,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_MUD_SHOT, MOVE_ROCK_TOMB, MOVE_TAKE_DOWN, MOVE_MUDDY_WATER}
    }
};
// Lilycove Rival 5
static const struct TrainerMon sParty_MayLilycoveMudkip[] = {
   {
    .ivs = {25, 23, 11, 19, 16, 21},
    .lvl = 38,
    .species = SPECIES_KECLEON,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_THUNDERBOLT, MOVE_SUBSTITUTE, MOVE_SLASH, MOVE_PSYCHIC}
    },
    {
    .ivs = {15, 15, 21, 16, 10, 20},
    .lvl = 39,
    .species = SPECIES_GRUMPIG,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_SHOCK_WAVE, MOVE_REST, MOVE_SLEEP_TALK, MOVE_PSYCHIC}
    },
    {
    .ivs = {19, 16, 16, 11, 17, 18},
    .lvl = 38,
    .species = SPECIES_HERACROSS,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_BRICK_BREAK, MOVE_COUNTER, MOVE_TWINEEDLE, MOVE_TAKE_DOWN}
    },
    {
    .ivs = {10, 27, 3, 6, 14, 28},
    .lvl = 38,
    .species = SPECIES_TORKOAL,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_CURSE, MOVE_BODY_SLAM, MOVE_FLAMETHROWER, MOVE_AMNESIA}
    },
    {
    .ivs = {17, 15, 19, 21, 19, 8},
    .lvl = 40,
    .species = SPECIES_SCEPTILE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_GROWTH, MOVE_SLASH, MOVE_ROCK_TOMB, MOVE_LEAF_BLADE}
    }
};
// Lilycove Rival 5
static const struct TrainerMon sParty_MayLilycoveTreecko[] = {
    {
    .ivs = {24, 25, 14, 18, 13, 2},
    .lvl = 38,
    .species = SPECIES_KECLEON,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_THUNDERBOLT, MOVE_SUBSTITUTE, MOVE_SLASH, MOVE_PSYCHIC}
    },
    {
    .ivs = {13, 14, 16, 16, 1, 8},
    .lvl = 39,
    .species = SPECIES_GRUMPIG,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_SHOCK_WAVE, MOVE_REST, MOVE_SLEEP_TALK, MOVE_PSYCHIC}
    },
    {
    .ivs = {24, 14, 13, 26, 21, 16},
    .lvl = 38,
    .species = SPECIES_DONPHAN,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_EARTHQUAKE, MOVE_FLAIL, MOVE_TAKE_DOWN, MOVE_ROLLOUT}
    },
    {
    .ivs = {16, 15, 30, 8, 22, 18},
    .lvl = 38,
    .species = SPECIES_WAILORD,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_ASTONISH, MOVE_AMNESIA}
    },
    {
    .ivs = {28, 22, 24, 14, 22, 16},
    .lvl = 40,
    .species = SPECIES_BLAZIKEN,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_BLAZE_KICK, MOVE_ROLLING_KICK, MOVE_BULK_UP, MOVE_MACH_PUNCH}
    }
};
// Lilycove Rival 5
static const struct TrainerMon sParty_MayLilycoveTorchic[] = {
   {
    .ivs = {23, 25, 17, 22, 17, 16},
    .lvl = 38,
    .species = SPECIES_KECLEON,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_THUNDERBOLT, MOVE_SUBSTITUTE, MOVE_SLASH, MOVE_PSYCHIC}
    },
    {
    .ivs = {22, 10, 8, 26, 12, 14},
    .lvl = 39,
    .species = SPECIES_GRUMPIG,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_SHOCK_WAVE, MOVE_REST, MOVE_SLEEP_TALK, MOVE_PSYCHIC}
    },
    {
    .ivs = {24, 25, 17, 11, 7, 28},
    .lvl = 38,
    .species = SPECIES_PINSIR,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_SEISMIC_TOSS, MOVE_REVENGE, MOVE_TWINEEDLE, MOVE_BRICK_BREAK}
    },
    {
    .ivs = {12, 7, 12, 18, 15, 12},
    .lvl = 38,
    .species = SPECIES_BRELOOM,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_GIGA_DRAIN, MOVE_HEADBUTT, MOVE_COUNTER, MOVE_BRICK_BREAK}
    },
    {
    .ivs = {6, 12, 10, 7, 13, 26},
    .lvl = 40,
    .species = SPECIES_SWAMPERT,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_MUD_SHOT, MOVE_ROCK_TOMB, MOVE_TAKE_DOWN, MOVE_MUDDY_WATER}
    }
};
// Route 127 Fisherman 1
static const struct TrainerMon sParty_Jonah[] = {
    {
    .ivs = {26, 11, 26, 9, 24, 25},
    .lvl = 38,
    .species = SPECIES_TENTACRUEL,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {15, 23, 13, 17, 22, 9},
    .lvl = 40,
    .species = SPECIES_WAILMER,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {16, 12, 22, 6, 17, 24},
    .lvl = 42,
    .species = SPECIES_SHARPEDO,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 127 Fisherman 3
static const struct TrainerMon sParty_Henry[] = {
    {
    .ivs = {29, 21, 16, 6, 7, 13},
    .lvl = 40,
    .species = SPECIES_CLAMPERL,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {17, 19, 15, 17, 2, 13},
    .lvl = 40,
    .species = SPECIES_SEAKING,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {24, 27, 11, 30, 9, 23},
    .lvl = 40,
    .species = SPECIES_WAILMER,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 127 Fisherman 2
static const struct TrainerMon sParty_Roger[] = {
    {
    .ivs = {19, 14, 29, 21, 31, 15},
    .lvl = 37,
    .species = SPECIES_MAGIKARP,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {18, 5, 13, 15, 4, 17},
    .lvl = 37,
    .species = SPECIES_GYARADOS,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {18, 24, 3, 16, 27, 19},
    .lvl = 37,
    .species = SPECIES_GYARADOS,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {3, 21, 14, 17, 14, 6},
    .lvl = 37,
    .species = SPECIES_GYARADOS,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {8, 17, 16, 10, 19, 17},
    .lvl = 37,
    .species = SPECIES_GYARADOS,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 128 CooltrainerF
static const struct TrainerMon sParty_Alexa[] = {
    {
    .ivs = {11, 13, 16, 11, 24, 22},
    .lvl = 42,
    .species = SPECIES_BELLOSSOM,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {20, 19, 18, 10, 25, 13},
    .lvl = 42,
    .species = SPECIES_VILEPLUME,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 128 CooltrainerM
static const struct TrainerMon sParty_Ruben[] = {
    {
    .ivs = {20, 12, 6, 24, 17, 26},
    .lvl = 42,
    .species = SPECIES_MASQUERAIN,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {24, 19, 16, 17, 9, 20},
    .lvl = 42,
    .species = SPECIES_NOSEPASS,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 127 Black Belt 
static const struct TrainerMon sParty_Koji1[] = {
    {
    .ivs = {19, 25, 26, 7, 21, 17},
    .lvl = 42,
    .species = SPECIES_BRELOOM,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 128 Fisherman 
static const struct TrainerMon sParty_Wayne[] = {
    {
    .ivs = {13, 10, 18, 14, 18, 17},
    .lvl = 40,
    .species = SPECIES_TENTACRUEL,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {20, 4, 3, 13, 7, 18},
    .lvl = 40,
    .species = SPECIES_TENTACRUEL,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {24, 17, 18, 9, 15, 19},
    .lvl = 42,
    .species = SPECIES_WAILORD,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 127 Bird Keeper
static const struct TrainerMon sParty_Aidan[] = {
    {
    .ivs = {5, 15, 10, 5, 11, 12},
    .lvl = 40,
    .species = SPECIES_TROPIUS,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {15, 14, 23, 10, 22, 12},
    .lvl = 40,
    .species = SPECIES_SKARMORY,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 129 SwimmerM note we need to give all these mons surf lol
static const struct TrainerMon sParty_Reed[] = {
    {
    .ivs = {16, 18, 19, 19, 18, 11},
    .lvl = 42,
    .species = SPECIES_LINOONE,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {18, 24, 28, 12, 11, 15},
    .lvl = 42,
    .species = SPECIES_ZANGOOSE,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {13, 12, 7, 13, 24, 19},
    .lvl = 42,
    .species = SPECIES_EXPLOUD,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 129 SwimmerF
static const struct TrainerMon sParty_Tisha[] = {
    {
    .ivs = {26, 4, 19, 22, 30, 15},
    .lvl = 44,
    .species = SPECIES_LANTURN,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 113 Twins
static const struct TrainerMon sParty_ToriAndTia[] = {
    {
    .ivs = {9, 19, 12, 5, 22, 14},
    .lvl = 26,
    .species = SPECIES_SPINDA,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {13, 14, 19, 25, 26, 15},
    .lvl = 26,
    .species = SPECIES_SNORUNT,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 125 Sr and Jr
static const struct TrainerMon sParty_KimAndIris[] = {
    {
    .ivs = {13, 11, 14, 16, 13, 16},
    .lvl = 40,
    .species = SPECIES_ALTARIA,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_SING, MOVE_DRAGON_BREATH, MOVE_SAFEGUARD, MOVE_AERIAL_ACE}
    },
    {
    .ivs = {18, 21, 4, 16, 29, 16},
    .lvl = 40,
    .species = SPECIES_CAMERUPT,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_REST, MOVE_EARTHQUAKE}
    }
};
// Route 114 Sr and Jr 
static const struct TrainerMon sParty_TyraAndIvy[] = {
    {
    .ivs = {18, 11, 21, 10, 12, 28},
    .lvl = 27,
    .species = SPECIES_ROSELIA,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_GROWTH, MOVE_STUN_SPORE, MOVE_MEGA_DRAIN, MOVE_LEECH_SEED}
    },
    {
    .ivs = {25, 13, 19, 5, 8, 10},
    .lvl = 27,
    .species = SPECIES_GRAVELER,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_DEFENSE_CURL, MOVE_MAGNITUDE, MOVE_TACKLE, MOVE_ROCK_THROW}
    }
};
//Route 109 Surf Couple
static const struct TrainerMon sParty_MelAndPaul[] = {
    {
    .ivs = {23, 27, 3, 12, 15, 14},
    .lvl = 30,
    .species = SPECIES_DUSTOX,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_SILVER_WIND, MOVE_PSYBEAM, MOVE_TOXIC, MOVE_PROTECT}
    },
    {
    .ivs = {14, 13, 20, 16, 14, 19},
    .lvl = 30,
    .species = SPECIES_BEAUTIFLY,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_GUST, MOVE_MEGA_DRAIN, MOVE_ATTRACT, MOVE_STUN_SPORE}
    }
};
// METEOR FALLS EXPERT
static const struct TrainerMon sParty_JohnAndJay1[] = {
    {
    .ivs = {10, 15, 21, 25, 10, 24},
    .lvl = 54,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_PROTECT}
    },
    {
    .ivs = {14, 17, 26, 24, 13, 16},
    .lvl = 54,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BRICK_BREAK, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay2[] = {
    {
    .ivs = {14, 15, 10, 14, 1, 9},
    .lvl = 56,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_PROTECT}
    },
    {
    .ivs = {23, 28, 4, 19, 9, 16},
    .lvl = 56,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BRICK_BREAK, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay3[] = {
    {
    .ivs = {21, 14, 9, 29, 14, 19},
    .lvl = 58,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_PROTECT}
    },
    {
    .ivs = {1, 13, 17, 11, 18, 27},
    .lvl = 58,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BRICK_BREAK, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay4[] = {
    {
    .ivs = {14, 23, 19, 13, 21, 16},
    .lvl = 60,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_PROTECT}
    },
    {
    .ivs = {20, 10, 2, 14, 7, 17},
    .lvl = 60,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BRICK_BREAK, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    },
    {
    .ivs = {4, 14, 6, 7, 17, 9},
    .lvl = 60,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BRICK_BREAK, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    },
    {
    .ivs = {10, 22, 21, 13, 19, 19},
    .lvl = 60,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_JohnAndJay5[] = {
    {
    .ivs = {17, 21, 20, 20, 16, 18},
    .lvl = 62,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_PROTECT}
    },
    {
    .ivs = {18, 12, 8, 26, 5, 20},
    .lvl = 62,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BRICK_BREAK, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    },
    {
    .ivs = {19, 15, 7, 16, 16, 24},
    .lvl = 62,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BRICK_BREAK, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    },
    {
    .ivs = {12, 22, 6, 29, 17, 27},
    .lvl = 62,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_PROTECT}
    }
};
// Route 131 Sis and Bro note linoone needs surf
static const struct TrainerMon sParty_ReliAndIan[] = {
    {
    .ivs = {25, 18, 17, 18, 21, 17},
    .lvl = 44,
    .species = SPECIES_LINOONE,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {15, 24, 18, 18, 13, 10},
    .lvl = 44,
    .species = SPECIES_LINOONE,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 124 Sis and Bro
static const struct TrainerMon sParty_LilaAndRoy1[] = {
    {
    .ivs = {24, 15, 6, 5, 1, 13},
    .lvl = 38,
    .species = SPECIES_CORSOLA,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {11, 20, 16, 9, 17, 9},
    .lvl = 38,
    .species = SPECIES_RELICANTH,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_LilaAndRoy2[] = {
    {
    .ivs = {15, 22, 18, 11, 21, 22},
    .lvl = 44,
    .species = SPECIES_CORSOLA,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {15, 7, 14, 26, 9, 20},
    .lvl = 44,
    .species = SPECIES_RELICANTH,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_LilaAndRoy3[] = {
    {
    .ivs = {17, 12, 19, 18, 21, 23},
    .lvl = 47,
    .species = SPECIES_CORSOLA,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {27, 9, 14, 16, 13, 18},
    .lvl = 47,
    .species = SPECIES_RELICANTH,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_LilaAndRoy4[] = {
    {
    .ivs = {17, 10, 11, 6, 17, 11},
    .lvl = 52,
    .species = SPECIES_CORSOLA,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {15, 19, 3, 19, 3, 12},
    .lvl = 51,
    .species = SPECIES_LANTURN,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {14, 14, 10, 22, 22, 21},
    .lvl = 52,
    .species = SPECIES_RELICANTH,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {12, 28, 11, 9, 20, 28},
    .lvl = 51,
    .species = SPECIES_SHARPEDO,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_LilaAndRoy5[] = {
   {
    .ivs = {16, 5, 19, 21, 15, 5},
    .lvl = 60,
    .species = SPECIES_CORSOLA,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {24, 19, 14, 16, 15, 14},
    .lvl = 59,
    .species = SPECIES_LANTURN,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {24, 13, 14, 14, 1, 19},
    .lvl = 59,
    .species = SPECIES_RELICANTH,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {20, 17, 13, 13, 16, 16},
    .lvl = 60,
    .species = SPECIES_SHARPEDO,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Route 107 Sis and Bro
static const struct TrainerMon sParty_LisaAndRay[] = {
    {
    .ivs = {0, 7, 24, 25, 20, 9},
    .lvl = 29,
    .species = SPECIES_GOLDEEN,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {12, 3, 11, 15, 28, 21},
    .lvl = 27,
    .species = SPECIES_TENTACOOL,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 119 Fisherman 
static const struct TrainerMon sParty_Chris[] = {
    {
    .ivs = {14, 15, 15, 12, 5, 17},
    .lvl = 27,
    .species = SPECIES_GYARADOS,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {21, 9, 12, 24, 14, 15},
    .lvl = 28,
    .species = SPECIES_TENTACOOL,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {23, 18, 21, 13, 15, 6},
    .lvl = 31,
    .species = SPECIES_FEEBAS,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {20, 17, 13, 21, 11, 23},
    .lvl = 28,
    .species = SPECIES_CARVANHA,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 116 Cut Rich Boy
static const struct TrainerMon sParty_Dawson[] = {
    {
    .ivs = {7, 1, 8, 8, 20, 19},
    .lvl = 12,
    .species = SPECIES_SPOINK,
    .heldItem = ITEM_NUGGET,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {16, 16, 16, 16, 16, 16},
    .lvl = 12,
    .species = SPECIES_POOCHYENA,
    .heldItem = ITEM_NONE,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Route 116 Cut Lady
static const struct TrainerMon sParty_Sarah[] = {
    {
    .ivs = {9, 15, 5, 22, 17, 8},
    .lvl = 12,
    .species = SPECIES_LOTAD,
    .heldItem = ITEM_NONE,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {16, 14, 3, 9, 13, 12},
    .lvl = 14,
    .species = SPECIES_IGGLYBUFF,
    .heldItem = ITEM_NUGGET,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
//Route 104 Fisherman
static const struct TrainerMon sParty_Darian[] = {
    {
    .ivs = {10, 21, 27, 12, 22, 9},
    .lvl = 11,
    .species = SPECIES_MAGIKARP,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {6, 16, 16, 16, 15, 9},
    .lvl = 12,
    .species = SPECIES_MARILL,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Route 109 TuberF 1 (Potential Double Battle with Edmond or Ricky)
static const struct TrainerMon sParty_Hailey[] = {
    {
    .ivs = {24, 12, 5, 21, 7, 19},
    .lvl = 16,
    .species = SPECIES_MARILL,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Route 109 TuberM 2 (Potential Double Battle with Lola)
static const struct TrainerMon sParty_Chandler[] = {
    {
    .ivs = {10, 6, 16, 19, 16, 24},
    .lvl = 15,
    .species = SPECIES_STARYU,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {12, 13, 22, 6, 13, 22},
    .lvl = 15,
    .species = SPECIES_CORPHISH,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
//Route 110 PokefanM 1 (Double Battle w Isabel)
static const struct TrainerMon sParty_Kaleb[] = {
    {
    .ivs = {10, 28, 14, 21, 14, 6},
    .lvl = 17,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_THUNDER_SHOCK, MOVE_HELPING_HAND, MOVE_LIGHT_SCREEN, MOVE_HELPING_HAND}
    },
    {
    .ivs = {21, 10, 24, 12, 8, 18},
    .lvl = 18,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_THUNDER_SHOCK, MOVE_GROWL, MOVE_DOUBLE_TEAM, MOVE_QUICK_ATTACK}
    }
};
//Route 110 Guitarist (Potential Double Battle with Edwin)
static const struct TrainerMon sParty_Joseph[] = {
    {
    .ivs = {21, 24, 15, 13, 21, 19},
    .lvl = 17,
    .species = SPECIES_ELECTRIKE,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {21, 19, 6, 17, 17, 23},
    .lvl = 17,
    .species = SPECIES_VOLTORB,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Route 110 Triathlete
static const struct TrainerMon sParty_Alyssa[] = {
    {
    .ivs = {21, 26, 10, 12, 14, 17},
    .lvl = 20,
    .species = SPECIES_MAGNEMITE,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Route 103 Cut Guitarist (Double Battle w Rhett)
static const struct TrainerMon sParty_Marcos[] = {
    {
    .ivs = {6, 14, 22, 17, 14, 20},
    .lvl = 19,
    .species = SPECIES_VOLTORB,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {14, 27, 15, 3, 22, 9},
    .lvl = 19,
    .species = SPECIES_WHISMUR,
    .evs = {28, 28, 28, 28, 28, 28},
    },
};
// Route 103 Cut Black Belt (Double Battle w Marcos)
static const struct TrainerMon sParty_Rhett[] = {
    {
    .ivs = {4, 15, 13, 13, 17, 19},
    .lvl = 20,
    .species = SPECIES_MAKUHITA,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
//Route 111 South Camper 
static const struct TrainerMon sParty_Tyron[] = {
    {
    .ivs = {10, 5, 14, 12, 11, 11},
    .lvl = 23,
    .species = SPECIES_SANDSHREW,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
//Route 111 South Aroma Lady
static const struct TrainerMon sParty_Celina[] = {
    {
    .ivs = {6, 21, 16, 24, 19, 11},
    .lvl = 23,
    .species = SPECIES_ROSELIA,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
//Route 111 South Picnicker
static const struct TrainerMon sParty_Bianca[] = {
    {
    .ivs = {19, 22, 26, 24, 17, 26},
    .lvl = 23,
    .species = SPECIES_SHROOMISH,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
//Route 111 Mid Kindler
static const struct TrainerMon sParty_Hayden[] = {
    {
    .ivs = {6, 22, 17, 12, 9, 15},
    .lvl = 24,
    .species = SPECIES_NUMEL,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 113 Picnicker
static const struct TrainerMon sParty_Sophie[] = {
    {
    .ivs = {16, 19, 20, 16, 17, 9},
    .lvl = 25,
    .species = SPECIES_MARILL,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {13, 14, 24, 15, 17, 20},
    .lvl = 25,
    .species = SPECIES_LOMBRE,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 113 Bird Keeper (optional double)
static const struct TrainerMon sParty_Coby[] = {
    {
    .ivs = {16, 19, 22, 14, 15, 8},
    .lvl = 24,
    .species = SPECIES_SKARMORY,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {10, 17, 22, 14, 28, 7},
    .lvl = 24,
    .species = SPECIES_SWELLOW,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 113 Camper
static const struct TrainerMon sParty_Lawrence[] = {
    {
    .ivs = {21, 26, 8, 26, 18, 23},
    .lvl = 25,
    .species = SPECIES_BALTOY,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {17, 10, 26, 17, 8, 26},
    .lvl = 25,
    .species = SPECIES_SANDSHREW,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 113 Pokemaniac
static const struct TrainerMon sParty_Wyatt[] = {
    {
    .ivs = {17, 5, 26, 18, 11, 6},
    .lvl = 25,
    .species = SPECIES_SNEASEL,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 114 Picnicker 3
static const struct TrainerMon sParty_Angelina[] = {
    {
    .ivs = {15, 20, 18, 16, 19, 17},
    .lvl = 26,
    .species = SPECIES_SWABLU,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {14, 5, 20, 3, 17, 20},
    .lvl = 26,
    .species = SPECIES_SURSKIT,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 114 Fisherman 2
static const struct TrainerMon sParty_Kai[] = {
    {
    .ivs = {18, 17, 19, 21, 1, 16},
    .lvl = 27,
    .species = SPECIES_BARBOACH,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 114 Picnicker 1
static const struct TrainerMon sParty_Charlotte[] = {
    {
    .ivs = {20, 12, 11, 23, 11, 18},
    .lvl = 26,
    .species = SPECIES_BRELOOM,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
//Route 118 Mauville Youngster
static const struct TrainerMon sParty_Deandre[] = {
    {
    .ivs = {16, 12, 23, 6, 19, 26},
    .lvl = 18,
    .species = SPECIES_ZIGZAGOON,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {18, 21, 19, 13, 19, 19},
    .lvl = 19,
    .species = SPECIES_ARON,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {27, 17, 23, 10, 12, 9},
    .lvl = 18,
    .species = SPECIES_ELECTRIKE,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Magma Hideout Entrance (Elevated Level)
static const struct TrainerMon sParty_GruntMagmaHideout1[] = {
    {
    .ivs = {8, 8, 14, 4, 14, 7},
    .lvl = 36,
    .species = SPECIES_GRAVELER,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Magma Hideout Entrance Magma GruntM
static const struct TrainerMon sParty_GruntMagmaHideout2[] = {
    {
    .ivs = {18, 20, 5, 11, 26, 28},
    .lvl = 36,
    .species = SPECIES_ZANGOOSE,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Magma Hideout 1F Magma GruntM
static const struct TrainerMon sParty_GruntMagmaHideout3[] = {
    {
    .ivs = {4, 17, 12, 19, 12, 20},
    .lvl = 36,
    .species = SPECIES_TORKOAL,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Magma Hideout 1F Magma GruntM (Double)
static const struct TrainerMon sParty_GruntMagmaHideout4[] = {
    {
    .ivs = {14, 23, 21, 16, 22, 19},
    .lvl = 35,
    .species = SPECIES_DONPHAN,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {16, 16, 17, 13, 16, 7},
    .lvl = 35,
    .species = SPECIES_GOLBAT,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Magma Hideout 1F Magma GruntM (Double)
static const struct TrainerMon sParty_GruntMagmaHideout5[] = {
    {
    .ivs = {15, 27, 18, 7, 8, 5},
    .lvl = 36,
    .species = SPECIES_MIGHTYENA,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {4, 25, 19, 9, 24, 17},
    .lvl = 34,
    .species = SPECIES_CACTURNE,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Magma Hideout 1F Magma GruntF
static const struct TrainerMon sParty_GruntMagmaHideout6[] = {
    {
    .ivs = {16, 21, 12, 4, 11, 4},
    .lvl = 36,
    .species = SPECIES_NINETALES,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Magma Hideout B1F Magma GruntM
static const struct TrainerMon sParty_GruntMagmaHideout7[] = {
    {
    .ivs = {30, 20, 22, 22, 16, 14},
    .lvl = 35,
    .species = SPECIES_RHYHORN,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {16, 8, 12, 16, 16, 15},
    .lvl = 36,
    .species = SPECIES_KOFFING,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Magma Hideout B1F Magma GruntM
static const struct TrainerMon sParty_GruntMagmaHideout8[] = {
    {
    .ivs = {23, 24, 22, 15, 21, 11},
    .lvl = 36,
    .species = SPECIES_LAIRON,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Magma Hideout B2F Magma GruntM
static const struct TrainerMon sParty_GruntMagmaHideout9[] = {
    {
    .ivs = {9, 19, 10, 8, 15, 16},
    .lvl = 36,
    .species = SPECIES_GRAVELER,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {16, 24, 5, 14, 16, 23},
    .lvl = 37,
    .species = SPECIES_MAGCARGO,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Magma Hideout B1F Magma GruntM
static const struct TrainerMon sParty_GruntMagmaHideout10[] = {
    {
    .ivs = {23, 19, 23, 4, 22, 18},
    .lvl = 37,
    .species = SPECIES_MIGHTYENA,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Magma Hideout B2F Magma GruntF
static const struct TrainerMon sParty_GruntMagmaHideout11[] = {
    {
    .ivs = {13, 15, 17, 25, 30, 16},
    .lvl = 36,
    .species = SPECIES_ZANGOOSE,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {13, 18, 11, 13, 17, 5},
    .lvl = 37,
    .species = SPECIES_BALTOY,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Magma Hideout B1F Magma GruntF
static const struct TrainerMon sParty_GruntMagmaHideout12[] = {
    {
    .ivs = {16, 8, 17, 11, 13, 16},
    .lvl = 35,
    .species = SPECIES_MURKROW,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {19, 11, 8, 17, 20, 23},
    .lvl = 35,
    .species = SPECIES_RHYHORN,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Magma Hideout B4F Magma GruntM (DOUBLE)
static const struct TrainerMon sParty_GruntMagmaHideout13[] = {
    {
    .ivs = {20, 11, 10, 16, 17, 12},
    .lvl = 36,
    .species = SPECIES_MAGCARGO,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {4, 11, 19, 8, 15, 1},
    .lvl = 36,
    .species = SPECIES_GOLBAT,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Magma Hideout B1F Magma GruntM
static const struct TrainerMon sParty_GruntMagmaHideout14[] = {
    {
    .ivs = {11, 7, 5, 21, 15, 27},
    .lvl = 37,
    .species = SPECIES_WEEZING,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Magma Hideout B4F Magma GruntM (DOUBLE)
static const struct TrainerMon sParty_GruntMagmaHideout15[] = {
    {
    .ivs = {5, 6, 30, 4, 18, 20},
    .lvl = 36,
    .species = SPECIES_MURKROW,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {18, 22, 25, 16, 20, 20},
    .lvl = 36,
    .species = SPECIES_LAIRON,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Magma Hideout B4F Magma GruntM
static const struct TrainerMon sParty_GruntMagmaHideout16[] = {
    {
    .ivs = {28, 8, 13, 7, 24, 22},
    .lvl = 38,
    .species = SPECIES_CLAYDOL,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Magma Admin Magma Hideout
static const struct TrainerMon sParty_TabithaMagmaHideout[] = {
    {
    .ivs = {13, 22, 26, 16, 9, 25},
    .lvl = 38,
    .species = SPECIES_CROBAT,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_WING_ATTACK, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_CONFUSE_RAY}
    },
    {
    .ivs = {1, 15, 4, 17, 5, 19},
    .lvl = 37,
    .species = SPECIES_LAIRON,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_IRON_TAIL, MOVE_ROCK_TOMB, MOVE_SANDSTORM, MOVE_MUD_SLAP}
    },
    {
    .ivs = {16, 12, 16, 22, 23, 16},
    .lvl = 37,
    .species = SPECIES_CACTURNE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_NEEDLE_ARM, MOVE_FAINT_ATTACK, MOVE_LEECH_SEED, MOVE_INGRAIN}
    },
    {
    .ivs = {14, 24, 15, 26, 14, 19},
    .lvl = 39,
    .species = SPECIES_ZANGOOSE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_CRUSH_CLAW, MOVE_FAINT_ATTACK, MOVE_SWORDS_DANCE, MOVE_METAL_CLAW}
    }
};
// Route 132 CooltrainerF
static const struct TrainerMon sParty_Darcy[] = {
    {
    .ivs = {22, 22, 13, 16, 11, 15},
    .lvl = 47,
    .species = SPECIES_ALTARIA,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {13, 7, 20, 25, 5, 16},
    .lvl = 47,
    .species = SPECIES_CACTURNE,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {12, 13, 18, 18, 8, 12},
    .lvl = 47,
    .species = SPECIES_CAMERUPT,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Magma Leader Space Center (Double SC)
static const struct TrainerMon sParty_MaxieMossdeep[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 46,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_CRUNCH}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 46,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_LEAF_BLADE, MOVE_EXTRASENSORY, MOVE_FAINT_ATTACK, MOVE_SUNNY_DAY}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 47,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_FOCUS_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_HEAT_WAVE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUNNY_DAY}
    }
};
// Route 103 Surf SwimmerM
static const struct TrainerMon sParty_Pete[] = {
    {
    .ivs = {16, 11, 18, 14, 18, 15},
    .lvl = 31,
    .species = SPECIES_TENTACRUEL,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 103 Surf SwimmerF 
static const struct TrainerMon sParty_Isabelle[] = {
    {
    .ivs = {26, 16, 14, 7, 17, 15},
    .lvl = 31,
    .species = SPECIES_AZUMARILL,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 105 Ruin Maniac
static const struct TrainerMon sParty_Andres1[] = {
    {
    .ivs = {18, 19, 16, 9, 23, 8},
    .lvl = 30,
    .species = SPECIES_BALTOY,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {22, 17, 14, 23, 26, 16},
    .lvl = 30,
    .species = SPECIES_TRAPINCH,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 105 Bird Keeper
static const struct TrainerMon sParty_Josue[] = {
    {
    .ivs = {20, 11, 16, 16, 21, 16},
    .lvl = 30,
    .species = SPECIES_SWABLU,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {23, 15, 19, 14, 16, 12},
    .lvl = 30,
    .species = SPECIES_SWELLOW,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 107 Triathlete
static const struct TrainerMon sParty_Camron[] = {
    {
    .ivs = {25, 22, 10, 19, 20, 15},
    .lvl = 30,
    .species = SPECIES_STARYU,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 108 Sailor (Double Battle w Carolina)
static const struct TrainerMon sParty_Cory1[] = {
    {
    .ivs = {25, 20, 12, 14, 18, 20},
    .lvl = 28,
    .species = SPECIES_HARIYAMA,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {25, 3, 8, 27, 20, 10},
    .lvl = 28,
    .species = SPECIES_MACHOKE,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {18, 6, 14, 14, 13, 11},
    .lvl = 28,
    .species = SPECIES_TENTACOOL,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 108 Cooltrainer F (Double Battle with Cory)
static const struct TrainerMon sParty_Carolina[] = {
    {
    .ivs = {23, 2, 6, 6, 15, 15},
    .lvl = 28,
    .species = SPECIES_MANECTRIC,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {8, 22, 13, 21, 18, 19},
    .lvl = 29,
    .species = SPECIES_SWELLOW,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {7, 17, 18, 12, 5, 12},
    .lvl = 28,
    .species = SPECIES_MANECTRIC,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
//Route 109 Surf Bird Keeper
static const struct TrainerMon sParty_Elijah[] = {
    {
    .ivs = {6, 14, 29, 15, 21, 13},
    .lvl = 29,
    .species = SPECIES_SKARMORY,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {7, 26, 20, 13, 6, 4},
    .lvl = 29,
    .species = SPECIES_SKARMORY,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
//Route 111 Desert Picnicker 3
static const struct TrainerMon sParty_Celia[] = {
    {
    .ivs = {10, 21, 9, 13, 8, 5},
    .lvl = 31,
    .species = SPECIES_RHYHORN,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_SCARY_FACE, MOVE_PROTECT, MOVE_MAGNITUDE, MOVE_ROCK_TOMB}
    },
    {
    .ivs = {28, 17, 19, 22, 13, 17},
    .lvl = 32,
    .species = SPECIES_SANDSLASH,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_METAL_CLAW, MOVE_DOUBLE_TEAM, MOVE_SLASH, MOVE_CUT}
    },
};
//Route 111 Desert Ruin Maniac 2
static const struct TrainerMon sParty_Bryan[] = {
    {
    .ivs = {23, 19, 21, 6, 11, 9},
    .lvl = 32,
    .species = SPECIES_CACTURNE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_GROWTH, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_FAINT_ATTACK}
    },
    {
    .ivs = {11, 11, 13, 23, 21, 30},
    .lvl = 33,
    .species = SPECIES_NOSEPASS,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_ROCK_SLIDE, MOVE_SPARK, MOVE_THUNDER_WAVE, MOVE_HEADBUTT}
    }
};
//Route 111 Desert Camper 3
static const struct TrainerMon sParty_Branden[] = {
    {
    .ivs = {4, 4, 13, 19, 16, 15},
    .lvl = 32,
    .species = SPECIES_GRAVELER,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_ROCK_TOMB, MOVE_PROTECT, MOVE_MAGNITUDE, MOVE_ROLLOUT}
    },
    {
    .ivs = {13, 7, 8, 11, 4, 18},
    .lvl = 32,
    .species = SPECIES_SANDSLASH,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_METAL_CLAW, MOVE_DOUBLE_TEAM, MOVE_SLASH, MOVE_CUT}
    }
};
// Route 112 North Section Kindler
static const struct TrainerMon sParty_Bryant[] = {
    {
    .ivs = {10, 21, 15, 29, 11, 20},
    .lvl = 24,
    .species = SPECIES_NUMEL,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {24, 12, 10, 22, 11, 13},
    .lvl = 24,
    .species = SPECIES_SLUGMA,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 112 North Section Aroma Lady
static const struct TrainerMon sParty_Shayla[] = {
    {
    .ivs = {21, 25, 20, 25, 10, 7},
    .lvl = 24,
    .species = SPECIES_SHROOMISH,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {23, 17, 13, 24, 16, 0},
    .lvl = 22,
    .species = SPECIES_ROSELIA,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 115 Surf Triathlete
static const struct TrainerMon sParty_Kyra[] = {
    {
    .ivs = {4, 31, 18, 18, 20, 9},
    .lvl = 30,
    .species = SPECIES_PONYTA,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {13, 23, 14, 13, 16, 16},
    .lvl = 33,
    .species = SPECIES_DODRIO,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 115 Surf Ninja Boy
static const struct TrainerMon sParty_Jaiden[] = {
    {
    .ivs = {11, 29, 14, 17, 19, 17},
    .lvl = 30,
    .species = SPECIES_NINJASK,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {4, 5, 5, 2, 17, 14},
    .lvl = 32,
    .species = SPECIES_SHEDINJA,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 115 Surf Psychic (Double Battle w Helene)
static const struct TrainerMon sParty_Alix[] = {
    {
    .ivs = {7, 15, 18, 14, 4, 9},
    .lvl = 32,
    .species = SPECIES_KADABRA,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {18, 18, 21, 13, 20, 13},
    .lvl = 32,
    .species = SPECIES_GARDEVOIR,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 115 Surf Battle Girl (Double Battle w Alix)
static const struct TrainerMon sParty_Helene[] = {
    {
    .ivs = {24, 6, 14, 1, 5, 9},
    .lvl = 33,
    .species = SPECIES_MEDITITE,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {23, 13, 21, 2, 9, 14},
    .lvl = 30,
    .species = SPECIES_HARIYAMA,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 115 Psychic
static const struct TrainerMon sParty_Marlene[] = {
    {
    .ivs = {8, 20, 13, 6, 12, 1},
    .lvl = 28,
    .species = SPECIES_KIRLIA,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {21, 5, 16, 17, 28, 10},
    .lvl = 28,
    .species = SPECIES_SPOINK,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 116 Hiker 2
static const struct TrainerMon sParty_Devan[] = {
    {
    .ivs = {10, 17, 29, 16, 7, 23},
    .lvl = 10,
    .species = SPECIES_GEODUDE,
    .evs = {14, 14, 14, 14, 14, 14},
    },
    {
    .ivs = {16, 16, 16, 16, 16, 16},
    .lvl = 11,
    .species = SPECIES_GEODUDE,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Route 116 Youngster 2
static const struct TrainerMon sParty_Johnson[] = {
    {
    .ivs = {23, 11, 19, 14, 18, 21},
    .lvl = 10,
    .species = SPECIES_POOCHYENA,
    .evs = {14, 14, 14, 14, 14, 14},
    },
    {
    .ivs = {16, 16, 15, 14, 2, 16},
    .lvl = 10,
    .species = SPECIES_LOTAD,
    .evs = {14, 14, 14, 14, 14, 14},
    }
};
// Route 117 TriathleteF 2
static const struct TrainerMon sParty_Melina[] = {
    {
    .ivs = {11, 12, 14, 2, 12, 10},
    .lvl = 21,
    .species = SPECIES_PONYTA,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 117 Psychic
static const struct TrainerMon sParty_Brandi[] = {
    {
    .ivs = {13, 15, 19, 14, 18, 23},
    .lvl = 22,
    .species = SPECIES_KIRLIA,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 117 Battle Girl
static const struct TrainerMon sParty_Aisha[] = {
    {
    .ivs = {14, 5, 15, 13, 27, 5},
    .lvl = 21,
    .species = SPECIES_MEDITITE,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 132 ExpertF
static const struct TrainerMon sParty_Makayla[] = {
    {
    .ivs = {25, 26, 11, 5, 27, 16},
    .lvl = 45,
    .species = SPECIES_ROSELIA,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {17, 5, 15, 6, 25, 16},
    .lvl = 45,
    .species = SPECIES_GLALIE,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {11, 25, 27, 13, 12, 10},
    .lvl = 45,
    .species = SPECIES_MEDICHAM,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Route 119 (Post Weather Insitute) Guitarist
static const struct TrainerMon sParty_Fabian[] = {
    {
    .ivs = {11, 15, 18, 6, 14, 1},
    .lvl = 31,
    .species = SPECIES_MANECTRIC,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 119 Kindler
static const struct TrainerMon sParty_Dayton[] = {
    {
    .ivs = {26, 17, 4, 10, 20, 25},
    .lvl = 27,
    .species = SPECIES_SLUGMA,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {18, 11, 8, 17, 20, 5},
    .lvl = 27,
    .species = SPECIES_NUMEL,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 119 Parasol Lady
static const struct TrainerMon sParty_Rachel[] = {
    {
    .ivs = {14, 10, 20, 19, 24, 5},
    .lvl = 28,
    .species = SPECIES_GOLDEEN,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 120 CooltrainerM
static const struct TrainerMon sParty_Leonel[] = {
    {
    .ivs = {13, 24, 11, 6, 21, 17},
    .lvl = 35,
    .species = SPECIES_MANECTRIC,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_THUNDER, MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_NONE}
    }
};
// Route 120 Battle Girl
static const struct TrainerMon sParty_Callie[] = {
    {
    .ivs = {18, 5, 17, 25, 6, 17},
    .lvl = 32,
    .species = SPECIES_MEDITITE,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {7, 14, 17, 5, 3, 30},
    .lvl = 32,
    .species = SPECIES_HARIYAMA,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 121 Bug Maniac
static const struct TrainerMon sParty_Cale[] = {
    {
    .ivs = {18, 7, 22, 22, 6, 7},
    .lvl = 37,
    .species = SPECIES_TRAPINCH,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {29, 10, 20, 13, 17, 17},
    .lvl = 37,
    .species = SPECIES_VIBRAVA,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Route 121 BreederM
static const struct TrainerMon sParty_Myles[] = {
    {
    .ivs = {25, 20, 27, 15, 19, 30},
    .lvl = 30,
    .species = SPECIES_RAICHU,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {20, 23, 29, 11, 23, 18},
    .lvl = 30,
    .species = SPECIES_SEAKING,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {31, 26, 19, 16, 23, 27},
    .lvl = 30,
    .species = SPECIES_NOSEPASS,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {19, 18, 26, 19, 15, 18},
    .lvl = 30,
    .species = SPECIES_WIGGLYTUFF,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {22, 18, 15, 21, 21, 12},
    .lvl = 30,
    .species = SPECIES_BELLOSSOM,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 121 BreederF
static const struct TrainerMon sParty_Pat[] = {
    {
    .ivs = {15, 19, 9, 12, 4, 6},
    .lvl = 30,
    .species = SPECIES_LINOONE,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {7, 1, 14, 21, 28, 13},
    .lvl = 30,
    .species = SPECIES_VILEPLUME,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {19, 9, 28, 21, 2, 20},
    .lvl = 30,
    .species = SPECIES_MANECTRIC,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {22, 18, 15, 15, 4, 7},
    .lvl = 30,
    .species = SPECIES_AZUMARILL,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {7, 25, 27, 13, 28, 18},
    .lvl = 30,
    .species = SPECIES_SWALOT,
    .evs = {42, 42, 42, 42, 42, 42},
    }
};
// Route 121 CooltrainerF
static const struct TrainerMon sParty_Cristin1[] = {
    {
    .ivs = {29, 13, 16, 21, 16, 16},
    .lvl = 35,
    .species = SPECIES_DONPHAN,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {26, 13, 5, 13, 9, 12},
    .lvl = 35,
    .species = SPECIES_GOLDUCK,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Rival 2 Torchic & Lotad
static const struct TrainerMon sParty_MayRustboroTreecko[] = {
    {
    .ivs = {17, 16, 26, 19, 22, 25},
    .lvl = 15,
    .species = SPECIES_SPOINK,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_TACKLE, MOVE_CONFUSION, MOVE_ODOR_SLEUTH, MOVE_NONE}
    },
    {
    .ivs = {26, 11, 12, 22, 17, 19},
    .lvl = 16,
    .species = SPECIES_TORCHIC,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_GROWL, MOVE_PECK, MOVE_EMBER, MOVE_SAND_ATTACK}
    }
};
// Rival 2 Mudkip & Torkoal
static const struct TrainerMon sParty_MayRustboroTorchic[] = {
    {
    .ivs = {6, 11, 30, 23, 5, 21},
    .lvl = 15,
    .species = SPECIES_SPOINK,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_TACKLE, MOVE_CONFUSION, MOVE_ODOR_SLEUTH, MOVE_NONE}
    },
    {
    .ivs = {18, 18, 14, 21, 9, 22},
    .lvl = 16,
    .species = SPECIES_MUDKIP,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_TACKLE, MOVE_GROWL, MOVE_MUD_SLAP, MOVE_WATER_GUN}
    }
};
// Rematch 1 after beating Wattson 
static const struct TrainerMon sParty_Roxanne2[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 25,
    .species = SPECIES_LILEEP,
    .heldItem = ITEM_NONE,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_SANDSTORM, MOVE_INGRAIN, MOVE_ROCK_TOMB, MOVE_MEGA_DRAIN}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 25,
    .species = SPECIES_ANORITH,
    .heldItem = ITEM_NONE,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_ROCK_TOMB, MOVE_METAL_CLAW, MOVE_CUT, MOVE_ROCK_SMASH}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 24,
    .species = SPECIES_CORSOLA,
    .heldItem = ITEM_NONE,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_ROCK_TOMB, MOVE_BUBBLE_BEAM, MOVE_RECOVER, MOVE_AMNESIA}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 26,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_ROCK_SLIDE, MOVE_SPARK, MOVE_THUNDER_WAVE, MOVE_SPARK}
    }
};
// Roxanne Rematch 2 After Becoming Champion
static const struct TrainerMon sParty_Roxanne3[] = {
    
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_RELICANTH,
    .heldItem = ITEM_HARD_STONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROCK_SLIDE, MOVE_SANDSTORM, MOVE_DOUBLE_EDGE, MOVE_SURF}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_ARMALDO,
    .heldItem = ITEM_KINGS_ROCK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROCK_TOMB, MOVE_METAL_CLAW, MOVE_CUT, MOVE_ROCK_SMASH}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_RHYDON,
    .heldItem = ITEM_SOFT_SAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SANDSTORM, MOVE_ROCK_SMASH}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_APICOT_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SANDSTORM, MOVE_INGRAIN, MOVE_RECOVER, MOVE_GIGA_DRAIN}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SMELLING_SALT, MOVE_PROTECT, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE}
    }
};
// Roxanne Rematch 3
static const struct TrainerMon sParty_Roxanne4[] = {
     {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_TYRANITAR,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROCK_SLIDE, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_PROTECT}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_SCOPE_LENS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE, MOVE_SKY_ATTACK, MOVE_PROTECT}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_DONPHAN,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUBSTITUTE, MOVE_REST}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_INGRAIN, MOVE_ANCIENT_POWER, MOVE_GIGA_DRAIN, MOVE_PROTECT}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_STEELIX,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROCK_SLIDE, MOVE_EXPLOSION, MOVE_CRUNCH, MOVE_EARTHQUAKE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_MAGNET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROCK_SLIDE, MOVE_PROTECT, MOVE_THUNDER, MOVE_ICE_PUNCH}
    }
};
// Roxanne Rematch 4
static const struct TrainerMon sParty_Roxanne5[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_TYRANITAR,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_PURSUIT, MOVE_AERIAL_ACE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUBSTITUTE, MOVE_FIRE_BLAST}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_SOFT_SAND,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE, MOVE_SKY_ATTACK, MOVE_TAUNT}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {252, 0, 252, 0, 0, 0},
    .moves = {MOVE_INGRAIN, MOVE_ANCIENT_POWER, MOVE_GIGA_DRAIN, MOVE_PROTECT}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_ARMALDO,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE, MOVE_TWINEEDLE, MOVE_ROCK_BLAST}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_BRIGHT_POWDER,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_ROCK_SLIDE, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_DOUBLE_TEAM}
    }
};
// Rematch 1 & After Beating Flannery (same as 1_2)
static const struct TrainerMon sParty_Brawly2[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 31,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_EXTRASENSORY, MOVE_THUNDER_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 30,
    .species = SPECIES_MACHOKE,
    .heldItem = ITEM_NONE,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_TOMB, MOVE_SEISMIC_TOSS, MOVE_REVENGE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_MACH_PUNCH, MOVE_MEGA_DRAIN, MOVE_BULK_UP, MOVE_STUN_SPORE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 32,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_VITAL_THROW, MOVE_REVERSAL, MOVE_BULK_UP, MOVE_FAINT_ATTACK}
    }
};
// Brawly Rematch 2 - After Becoming Champion
static const struct TrainerMon sParty_Brawly3[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_HITMONCHAN,
    .heldItem = ITEM_BLACK_BELT,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DYNAMIC_PUNCH, MOVE_ROCK_SLIDE, MOVE_AGILITY, MOVE_BULK_UP}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_BRELOOM,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FOCUS_PUNCH, MOVE_LEECH_SEED, MOVE_STUN_SPORE, MOVE_SUBSTITUTE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_POLIWRATH,
    .heldItem = ITEM_MYSTIC_WATER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_HYPNOSIS, MOVE_FOCUS_PUNCH, MOVE_ICE_BEAM}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_PRIMEAPE,
    .heldItem = ITEM_HARD_STONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CROSS_CHOP, MOVE_BULK_UP, MOVE_ROCK_SLIDE, MOVE_FAINT_ATTACK}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_REST, MOVE_SLEEP_TALK, MOVE_CROSS_CHOP, MOVE_WHIRLWIND}
    }
};
// Brawly Rematch 3
static const struct TrainerMon sParty_Brawly4[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_POLIWRATH,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BELLY_DRUM, MOVE_BRICK_BREAK, MOVE_SUBSTITUTE, MOVE_EARTHQUAKE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_MAGMAR,
    .heldItem = ITEM_WHITE_HERB,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_OVERHEAT, MOVE_THUNDER_PUNCH, MOVE_CROSS_CHOP, MOVE_FOLLOW_ME}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_BLACK_BELT,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FAKE_OUT, MOVE_HI_JUMP_KICK, MOVE_BULK_UP, MOVE_ROCK_SLIDE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_ELECTABUZZ,
    .heldItem = ITEM_MAGNET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CROSS_CHOP, MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_BRELOOM,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_MACH_PUNCH, MOVE_SWORDS_DANCE, MOVE_SPORE, MOVE_FACADE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BODY_SLAM, MOVE_ROCK_SLIDE, MOVE_CROSS_CHOP, MOVE_EARTHQUAKE}
    }
};
// Brawly Rematch 4
static const struct TrainerMon sParty_Brawly5[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {252, 0, 0, 0, 0, 252},
    .moves = {MOVE_FAKE_OUT, MOVE_MACH_PUNCH, MOVE_PURSUIT, MOVE_BULK_UP}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_BRELOOM,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_FOCUS_PUNCH, MOVE_GIGA_DRAIN, MOVE_SPORE, MOVE_SUBSTITUTE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_BLAZIKEN,
    .heldItem = ITEM_WHITE_HERB,
    .evs = {0, 252, 0, 0, 252, 0},
    .moves = {MOVE_OVERHEAT, MOVE_THUNDER_PUNCH, MOVE_HI_JUMP_KICK, MOVE_ROCK_SLIDE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_MEGA_KICK, MOVE_HI_JUMP_KICK, MOVE_BRICK_BREAK, MOVE_ROCK_SLIDE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_HERACROSS,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_MEGAHORN, MOVE_SWORDS_DANCE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_FOCUS_PUNCH, MOVE_REVENGE, MOVE_ROCK_SLIDE, MOVE_TOXIC}
    }
};
// Wattson Rematch 1 after New Mauville
static const struct TrainerMon sParty_Wattson2[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 34,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_THUNDERBOLT, MOVE_MAGICAL_LEAF, MOVE_CHARM, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 34,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_THUNDERBOLT, MOVE_WISH, MOVE_ENCORE, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 33,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_THUNDERBOLT, MOVE_SURF, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 33,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_SHOCK_WAVE, MOVE_THUNDER_WAVE, MOVE_REFLECT, MOVE_TRI_ATTACK}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 35,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_MAGNET,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_THUNDERBOLT, MOVE_CRUNCH, MOVE_CHARGE, MOVE_THUNDER_WAVE}
    }
};
// Wattson Rematch 2 
static const struct TrainerMon sParty_Wattson3[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_MYSTIC_WATER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_ENCORE, MOVE_FOCUS_PUNCH, MOVE_SURF}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_WIKI_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_RAIN_DANCE, MOVE_DIVE, MOVE_THUNDER_WAVE, MOVE_CONFUSE_RAY}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_JOLTEON,
    .heldItem = ITEM_SPELL_TAG,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_AGILITY, MOVE_THUNDER, MOVE_BATON_PASS, MOVE_SHADOW_BALL}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_ELECTABUZZ,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH, MOVE_THUNDER, MOVE_PSYCHIC}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_MAGNET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CRUNCH, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_ROAR}
    }
};
// Wattson Rematch 3
static const struct TrainerMon sParty_Wattson4[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_PETAYA_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_MAGICAL_LEAF, MOVE_THUNDER_WAVE, MOVE_SUBSTITUTE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_WISH, MOVE_THUNDER_WAVE, MOVE_FOLLOW_ME}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_BRIGHT_POWDER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDER, MOVE_SURF, MOVE_CONFUSE_RAY, MOVE_RAIN_DANCE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDER_WAVE, MOVE_REFLECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_PORYGON2,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_HYPER_BEAM, MOVE_IRON_TAIL, MOVE_AERIAL_ACE, MOVE_THIEF}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_MAGNET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CRUNCH, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_ROAR}
    }
};
// Wattson Rematch 4
static const struct TrainerMon sParty_Wattson5[] = {
     {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_MYSTIC_WATER,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_VOLT_TACKLE, MOVE_SURF, MOVE_THUNDER_WAVE, MOVE_WISH}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_THUNDER, MOVE_SURF, MOVE_THUNDER_WAVE, MOVE_RAIN_DANCE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_JOLTEON,
    .heldItem = ITEM_SPELL_TAG,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_AGILITY, MOVE_THUNDER, MOVE_BATON_PASS, MOVE_SHADOW_BALL}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_PORYGON2,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {0, 0, 252, 0, 252, 0},
    .moves = {MOVE_THUNDER, MOVE_ICE_BEAM, MOVE_THUNDER_WAVE, MOVE_RECOVER}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_ELECTABUZZ,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_THUNDER, MOVE_CROSS_CHOP, MOVE_RAIN_DANCE, MOVE_ICE_PUNCH}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_MAGNET,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_CRUNCH, MOVE_SHADOW_BALL, MOVE_THUNDER, MOVE_RAIN_DANCE}
    }
};
// Flannery Rematch 1 after Magma Hideout
static const struct TrainerMon sParty_Flannery2[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 39,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_WILL_O_WISP, MOVE_SUNNY_DAY}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 38,
    .species = SPECIES_CASTFORM,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_WEATHER_BALL, MOVE_SUNNY_DAY, MOVE_HEADBUTT, MOVE_ICE_BEAM}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 39,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_OVERHEAT, MOVE_ROCK_SLIDE, MOVE_YAWN, MOVE_ATTRACT}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 38,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_OVERHEAT, MOVE_DOUBLE_KICK, MOVE_IRON_TAIL, MOVE_DOUBLE_EDGE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 40,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_BODY_SLAM, MOVE_SLUDGE_BOMB}
    }
};
// Flannery Rematch 2
static const struct TrainerMon sParty_Flannery3[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FIRE_BLAST, MOVE_ROCK_SLIDE, MOVE_AMNESIA, MOVE_SUNNY_DAY}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_BELLOSSOM,
    .heldItem = ITEM_MIRACLE_SEED,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SYNTHESIS, MOVE_SOLAR_BEAM, MOVE_SLEEP_POWDER, MOVE_SUNNY_DAY}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_CHARIZARD,
    .heldItem = ITEM_HARD_STONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_OVERHEAT, MOVE_SWORDS_DANCE, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_MAGMAR,
    .heldItem = ITEM_CHARCOAL,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FIRE_BLAST, MOVE_PSYCHIC, MOVE_THUNDER_PUNCH, MOVE_CONFUSE_RAY}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ERUPTION, MOVE_ROCK_SLIDE, MOVE_YAWN, MOVE_REST}
    }
};
// Flannery Rematch 3
static const struct TrainerMon sParty_Flannery4[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_CHARIZARD,
    .heldItem = ITEM_CHARCOAL,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SUNNY_DAY, MOVE_HEAT_WAVE, MOVE_DRAGON_CLAW, MOVE_ROCK_SLIDE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ERUPTION, MOVE_PROTECT, MOVE_EXPLOSION, MOVE_EARTHQUAKE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_JUMPLUFF,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SLEEP_POWDER, MOVE_SYNTHESIS, MOVE_LEECH_SEED, MOVE_PROTECT}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_WHITE_HERB,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_REST}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_FOCUS_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FIRE_BLAST, MOVE_HI_JUMP_KICK, MOVE_BATON_PASS, MOVE_AGILITY}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ERUPTION, MOVE_ROCK_SLIDE, MOVE_YAWN, MOVE_REST}
    }
};
// Flannery Rematch 4
static const struct TrainerMon sParty_Flannery5[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_CHARCOAL,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_FIRE_BLAST, MOVE_EXTREME_SPEED, MOVE_SUNNY_DAY, MOVE_ROAR}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {0, 0, 252, 0, 252, 0},
    .moves = {MOVE_HEAT_WAVE, MOVE_SUBSTITUTE, MOVE_REFRESH, MOVE_ROCK_SLIDE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_SCOPE_LENS,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_LEAF_BLADE, MOVE_FAINT_ATTACK, MOVE_SYNTHESIS, MOVE_SUNNY_DAY}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_BLAZIKEN,
    .heldItem = ITEM_BLACK_BELT,
    .evs = {0, 252, 0, 0, 252, 0},
    .moves = {MOVE_BLAZE_KICK, MOVE_HI_JUMP_KICK, MOVE_THUNDER_PUNCH, MOVE_BOUNCE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_TYPHLOSION,
    .heldItem = ITEM_LIECHI_BERRY,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_ERUPTION, MOVE_ENDURE, MOVE_REVERSAL, MOVE_THUNDER_PUNCH}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_CURSE, MOVE_ROCK_SLIDE}
    }
};
// Norman Rematch 1 after getting all 8 gym badges
static const struct TrainerMon sParty_Norman2[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 50,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_HELPING_HAND, MOVE_WISH, MOVE_BLIZZARD, MOVE_FAKE_OUT}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 50,
    .species = SPECIES_EXPLOUD,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_OVERHEAT, MOVE_TEETER_DANCE, MOVE_HYPER_VOICE, MOVE_WATER_PULSE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 50,
    .species = SPECIES_ZANGOOSE,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_SLASH, MOVE_SWORDS_DANCE, MOVE_CUT, MOVE_BRICK_BREAK}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 50,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_HEADBUTT, MOVE_BELLY_DRUM, MOVE_FACADE, MOVE_IRON_TAIL}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 50,
    .species = SPECIES_GIRAFARIG,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_SKILL_SWAP, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_EARTHQUAKE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 50,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_EARTHQUAKE, MOVE_REST, MOVE_FACADE, MOVE_FAINT_ATTACK}
    }
};
// Norman Rematch 2
static const struct TrainerMon sParty_Norman3[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_AIPOM,
    .heldItem = ITEM_WIKI_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_AGILITY, MOVE_BATON_PASS, MOVE_BEAT_UP, MOVE_SUBSTITUTE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_STANTLER,
    .heldItem = ITEM_SILK_SCARF,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DREAM_EATER, MOVE_HYPNOSIS, MOVE_REFLECT, MOVE_DOUBLE_EDGE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_PORYGON2,
    .heldItem = ITEM_SHARP_BEAK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_RECOVER, MOVE_CURSE, MOVE_TRI_ATTACK, MOVE_AERIAL_ACE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_EXPLOUD,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TEETER_DANCE, MOVE_HYPER_VOICE, MOVE_OVERHEAT, MOVE_BRICK_BREAK}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_GIRAFARIG,
    .heldItem = ITEM_TWISTED_SPOON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_PSYCHIC, MOVE_WISH, MOVE_CALM_MIND}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_FACADE, MOVE_FOCUS_PUNCH, MOVE_COUNTER}
    }
};
// Norman Rematch 3
static const struct TrainerMon sParty_Norman4[] = {
     {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_TAUROS,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DOUBLE_EDGE, MOVE_PURSUIT, MOVE_IRON_TAIL, MOVE_EARTHQUAKE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60, 
    .species = SPECIES_GRANBULL,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_HEAL_BELL, MOVE_PROTECT, MOVE_CRUNCH, MOVE_BODY_SLAM}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_URSARING,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_REST, MOVE_SLEEP_TALK, MOVE_BODY_SLAM, MOVE_CRUNCH}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_BLISSEY,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_REST, MOVE_THUNDER_WAVE, MOVE_WATER_PULSE, MOVE_BLIZZARD}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_GIRAFARIG, 
    .heldItem = ITEM_TWISTED_SPOON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDER_WAVE, MOVE_PSYCHIC, MOVE_WISH, MOVE_THUNDERBOLT}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_SLAKING, 
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_HYPER_BEAM, MOVE_DOUBLE_EDGE, MOVE_BRICK_BREAK}
    }
};
// Norman Rematch 4
static const struct TrainerMon sParty_Norman5[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_BLIZZARD, MOVE_THUNDER, MOVE_CRUSH_CLAW, MOVE_ROCK_SLIDE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_BLISSEY,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {252, 0, 252, 0, 0, 0},
    .moves = {MOVE_SEISMIC_TOSS, MOVE_HEAL_BELL, MOVE_SKILL_SWAP, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_TAUROS,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_PURSUIT}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_SMEARGLE,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {252, 0, 0, 252, 0, 0},
    .moves = {MOVE_BELLY_DRUM, MOVE_SUBSTITUTE, MOVE_SPORE, MOVE_BATON_PASS}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_SNORLAX,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {252, 0, 252, 0, 0, 0},
    .moves = {MOVE_CURSE, MOVE_REST, MOVE_BODY_SLAM, MOVE_FOCUS_PUNCH}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_ZANGOOSE,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_BRICK_BREAK, MOVE_IRON_TAIL, MOVE_RETURN, MOVE_CUT}
    }
};
// Winona Rematch 1 after Rayquaza Event
static const struct TrainerMon sParty_Winona2[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 48,
    .species = SPECIES_CROBAT,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_AERIAL_ACE, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_DOUBLE_EDGE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 49,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_PROTECT, MOVE_TOXIC}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 49,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_ROCK_SMASH, MOVE_GIGA_DRAIN, MOVE_EARTHQUAKE, MOVE_WHIRLWIND}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 49,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_SKY_ATTACK, MOVE_STEEL_WING, MOVE_FACADE, MOVE_WHIRLWIND}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 48,
    .species = SPECIES_DODRIO,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_DRILL_PECK, MOVE_TRI_ATTACK, MOVE_ENDEAVOR, MOVE_PURSUIT}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 50,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_EARTHQUAKE, MOVE_FLAMETHROWER, MOVE_DRAGON_DANCE, MOVE_SKY_ATTACK}
    }
};
// Winona Rematch 2
static const struct TrainerMon sParty_Winona3[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_XATU,
    .heldItem = ITEM_MIRACLE_SEED,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GIGA_DRAIN, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_CALM_MIND}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_MYSTIC_WATER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_STUN_SPORE, MOVE_HYDRO_PUMP, MOVE_GIGA_DRAIN, MOVE_SHADOW_BALL}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_MURKROW,
    .heldItem = ITEM_SHARP_BEAK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SKY_ATTACK, MOVE_DOUBLE_EDGE, MOVE_FAINT_ATTACK, MOVE_STEEL_WING}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_PIDGEOT,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SKY_ATTACK, MOVE_EXTREME_SPEED, MOVE_PROTECT, MOVE_PURSUIT}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_MANTINE,
    .heldItem = ITEM_WIKI_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BLIZZARD, MOVE_HYDRO_PUMP, MOVE_HAZE, MOVE_CONFUSE_RAY}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SKY_ATTACK, MOVE_DOUBLE_EDGE, MOVE_IRON_TAIL, MOVE_EARTHQUAKE}
    }
};
// Winona Rematch 3
static const struct TrainerMon sParty_Winona4[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_CROBAT,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SLEEP_TALK, MOVE_REST, MOVE_AERIAL_ACE, MOVE_CONFUSE_RAY}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SPIKES, MOVE_PROTECT, MOVE_TOXIC, MOVE_WHIRLWIND}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_SOFT_SAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_FACADE, MOVE_STEEL_WING}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_KINGS_ROCK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDER_WAVE, MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_THUNDERBOLT}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_FOCUS_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SKY_ATTACK, MOVE_STEEL_WING, MOVE_AGILITY, MOVE_BATON_PASS}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SKY_ATTACK, MOVE_DOUBLE_EDGE, MOVE_IRON_TAIL, MOVE_EARTHQUAKE}
    }
};
// Winona Rematch 4
static const struct TrainerMon sParty_Winona5[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_THUNDER_WAVE, MOVE_EARTHQUAKE, MOVE_DYNAMIC_PUNCH, MOVE_THUNDERBOLT}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_YANMA,
    .heldItem = ITEM_LIECHI_BERRY,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_SUBSTITUTE, MOVE_REVERSAL, MOVE_PROTECT, MOVE_TWINEEDLE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_CHARIZARD,
    .heldItem = ITEM_FOCUS_BAND,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_FIRE_BLAST, MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_STARF_BERRY,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_SUBSTITUTE, MOVE_ENDEAVOR, MOVE_QUICK_ATTACK, MOVE_BATON_PASS}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_SOFT_SAND,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_GIGA_DRAIN, MOVE_SYNTHESIS}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_SKY_ATTACK, MOVE_DRAGON_DANCE, MOVE_PURSUIT, MOVE_EARTHQUAKE}
    }
};
// Tate & Liza Rematch 1 After 8 badges
static const struct TrainerMon sParty_TateAndLiza2[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 50,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_HYPNOSIS, MOVE_CALM_MIND}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 50,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_PSYCHIC, MOVE_SOLAR_BEAM, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 50,
    .species = SPECIES_WOBBUFFET,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_ENCORE, MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_DESTINY_BOND}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 50,
    .species = SPECIES_STARMIE,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_THUNDERBOLT}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 50,
    .species = SPECIES_XATU,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_SUNNY_DAY, MOVE_GIGA_DRAIN}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 50,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    }
};
// Tate & Liza Rematch 2
static const struct TrainerMon sParty_TateAndLiza3[] = {
   {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_BLACK_BELT,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SUNNY_DAY, MOVE_FIRE_PUNCH, MOVE_FAKE_OUT, MOVE_HI_JUMP_KICK}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_SOFT_SAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SKILL_SWAP, MOVE_FACADE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_TWISTED_SPOON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_THUNDERBOLT}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_EXEGGUTOR,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SYNTHESIS, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_SLEEP_POWDER}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_HYPNOSIS, MOVE_CALM_MIND}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_WHITE_HERB,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCH_UP, MOVE_SOLAR_BEAM, MOVE_OVERHEAT, MOVE_SUNNY_DAY}
    }
};
// Tate & Liza Rematch 3
static const struct TrainerMon sParty_TateAndLiza4[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_SLOWKING,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDER_WAVE, MOVE_FLAMETHROWER, MOVE_REST, MOVE_PSYCHIC}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_SLOWBRO,
    .heldItem = ITEM_SOFT_SAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDER_WAVE, MOVE_CALM_MIND, MOVE_SURF, MOVE_PSYCHIC}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_GRUMPIG,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_FOCUS_PUNCH}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_ALAKAZAM,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_TRICK, MOVE_THUNDER_PUNCH, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_HYPNOSIS, MOVE_LIGHT_SCREEN}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_WHITE_HERB,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_OVERHEAT, MOVE_CURSE}
    }
};
// Tate & Liza Rematch 4
static const struct TrainerMon sParty_TateAndLiza5[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {0, 0, 252, 0, 0, 252},
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_SKILL_SWAP, MOVE_LIGHT_SCREEN}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_UMBREON,
    .heldItem = ITEM_APICOT_BERRY,
    .evs = {252, 0, 0, 0, 0, 252},
    .moves = {MOVE_SUBSTITUTE, MOVE_BATON_PASS, MOVE_DOUBLE_TEAM, MOVE_TOXIC}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_ESPEON,
    .heldItem = ITEM_STARF_BERRY,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_BATON_PASS, MOVE_CALM_MIND, MOVE_SHADOW_BALL, MOVE_PSYCHIC}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_BATON_PASS, MOVE_COSMIC_POWER}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_PSYCHIC, MOVE_FLAMETHROWER, MOVE_CALM_MIND, MOVE_BATON_PASS}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_METAGROSS,
    .heldItem = ITEM_WIKI_BERRY,
    .evs = {0, 252, 0, 0, 252, 0},
    .moves = {MOVE_PSYCHIC, MOVE_METEOR_MASH, MOVE_ICE_PUNCH, MOVE_ROCK_SLIDE}
    }
};
// Placeholder, Not Used
static const struct TrainerMon sParty_Juan2[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 50,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_WATER_PULSE, MOVE_ATTRACT, MOVE_SWEET_KISS, MOVE_FLAIL}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 50,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_AMNESIA, MOVE_EARTHQUAKE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 50,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_ENCORE, MOVE_BODY_SLAM, MOVE_AURORA_BEAM, MOVE_WATER_PULSE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 50,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_WATER_PULSE, MOVE_CRABHAMMER, MOVE_TAUNT, MOVE_LEER}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 50,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};
// Juan Rematch 1 - After Becoming Champion
static const struct TrainerMon sParty_Juan3[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_HUNTAIL,
    .heldItem = ITEM_FOCUS_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CRUNCH, MOVE_DRAGON_DANCE, MOVE_BATON_PASS, MOVE_HYDRO_PUMP}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_GOREBYSS,
    .heldItem = ITEM_MYSTIC_WATER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_ICE_BEAM, MOVE_SHADOW_BALL}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_QUAGSIRE,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_RAIN_DANCE, MOVE_MUDDY_WATER, MOVE_YAWN, MOVE_EARTHQUAKE}
    },
    
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_ENCORE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_RELICANTH,
    .heldItem = ITEM_HARD_STONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE, MOVE_RAIN_DANCE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 55,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};
// Juan Rematch 2
static const struct TrainerMon sParty_Juan4[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_MANTINE,
    .heldItem = ITEM_FOCUS_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_RAIN_DANCE, MOVE_SURF, MOVE_CONFUSE_RAY, MOVE_AERIAL_ACE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_YAWN, MOVE_ICY_WIND, MOVE_EARTHQUAKE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CRABHAMMER, MOVE_SLUDGE_BOMB, MOVE_BLIZZARD, MOVE_CRUNCH}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_WHITE_HERB,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SUPERPOWER, MOVE_DOUBLE_EDGE, MOVE_IRON_TAIL, MOVE_HYDRO_PUMP}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE, MOVE_BLIZZARD, MOVE_FLAIL}
    }
};
// Juan Rematch 3 (FINAL)
static const struct TrainerMon sParty_Juan5[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_POLITOED,
    .heldItem = ITEM_WIKI_BERRY,
    .evs = {252, 0, 0, 252, 0, 0},
    .moves = {MOVE_WHIRLPOOL, MOVE_PERISH_SONG, MOVE_HYPNOSIS, MOVE_PROTECT}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_CASTFORM,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_RAIN_DANCE, MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_HYDRO_PUMP}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_YAWN, MOVE_ROCK_SLIDE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_SCOPE_LENS,
    .evs = {0, 252, 0, 0, 252, 0},
    .moves = {MOVE_CRABHAMMER, MOVE_RAIN_DANCE, MOVE_ANCIENT_POWER, MOVE_CRUNCH}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_BLASTOISE,
    .heldItem = ITEM_MYSTIC_WATER,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_RAIN_DANCE, MOVE_YAWN, MOVE_HYDRO_CANNON, MOVE_EARTHQUAKE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 65,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {252, 0, 0, 252, 0, 0},
    .moves = {MOVE_OCTAZOOKA, MOVE_REST, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM}
    }
};
// Mauville Gym Bug Maniac
static const struct TrainerMon sParty_Angelo[] = {
    {
    .ivs = {18, 15, 19, 15, 11, 15},
    .lvl = 20,
    .species = SPECIES_ILLUMISE,
    .heldItem = ITEM_NONE,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_SHOCK_WAVE, MOVE_MOONLIGHT, MOVE_CHARM, MOVE_NONE}
    },
    {
    .ivs = {20, 9, 18, 15, 27, 19},
    .lvl = 19,
    .species = SPECIES_VOLBEAT,
    .heldItem = ITEM_NONE,
    .evs = {28, 28, 28, 28, 28, 28},
    .moves = {MOVE_SHOCK_WAVE, MOVE_QUICK_ATTACK, MOVE_CONFUSE_RAY, MOVE_NONE}
    }
};
// Fortree Gym Bird Keeper 4
static const struct TrainerMon sParty_Darius[] = {
    {
    .ivs = {22, 13, 18, 20, 6, 14},
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {31, 8, 17, 13, 26, 12},
    .lvl = 34,
    .species = SPECIES_TROPIUS,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};
// Champion
static const struct TrainerMon sParty_Steven1[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 57,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_LIECHI_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TOXIC, MOVE_SKY_ATTACK, MOVE_STEEL_WING, MOVE_WHIRLWIND}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 57,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_EARTHQUAKE, MOVE_LIGHT_SCREEN, MOVE_EXPLOSION}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 57,
    .species = SPECIES_AGGRON,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDER_WAVE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_IRON_TAIL}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 57,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ANCIENT_POWER, MOVE_LEECH_SEED, MOVE_RECOVER, MOVE_CURSE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 57,
    .species = SPECIES_ARMALDO,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROCK_BLAST, MOVE_TWINEEDLE, MOVE_IRON_TAIL, MOVE_FACADE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 60,
    .species = SPECIES_METAGROSS,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_METEOR_MASH, MOVE_AGILITY}
    }
}; 
// Post Game Boss
static const struct TrainerMon sParty_Steven2[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 76,
    .species = SPECIES_ARMALDO,
    .heldItem = ITEM_SCOPE_LENS,
    .evs = {0, 252, 252, 0, 0, 0},
    .moves = {MOVE_ROCK_BLAST, MOVE_TWINEEDLE, MOVE_FACADE, MOVE_EARTHQUAKE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 75,
    .species = SPECIES_TYRANITAR,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {0, 252, 252, 0, 0, 0},
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_THUNDERBOLT}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 77,
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SKY_ATTACK, MOVE_DOUBLE_EDGE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 76,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {252, 0, 0, 0, 0, 252},
    .moves = {MOVE_REST, MOVE_CURSE, MOVE_SLEEP_TALK, MOVE_ANCIENT_POWER}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 76,
    .species = SPECIES_STEELIX,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_CRUNCH}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 78,
    .species = SPECIES_METAGROSS,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_METEOR_MASH, MOVE_FIRE_PUNCH}
    }
};

static const struct TrainerMon sParty_Anabel[] = {
    {
    .ivs = {29, 21, 3, 17, 12, 16},
    .lvl = 7,
    .species = SPECIES_BELDUM,
    .evs = {14, 14, 14, 14, 14, 14},
    }
};

static const struct TrainerMon sParty_Tucker[] = {
    {
    .ivs = {25, 14, 12, 8, 11, 5},
    .lvl = 7,
    .species = SPECIES_BELDUM,
    .evs = {14, 14, 14, 14, 14, 14},
    }
};

static const struct TrainerMon sParty_Spenser[] = {
    {
    .ivs = {7, 6, 14, 25, 19, 24},
    .lvl = 7,
    .species = SPECIES_BELDUM,
    .evs = {14, 14, 14, 14, 14, 14},
    }
};

static const struct TrainerMon sParty_Greta[] = {
    {
    .ivs = {16, 17, 16, 15, 18, 26},
    .lvl = 7,
    .species = SPECIES_BELDUM,
    .evs = {14, 14, 14, 14, 14, 14},
    }
};

static const struct TrainerMon sParty_Noland[] = {
    {
    .ivs = {1, 26, 17, 20, 15, 12},
    .lvl = 7,
    .species = SPECIES_BELDUM,
    .evs = {14, 14, 14, 14, 14, 14},
    }
};

static const struct TrainerMon sParty_Lucy[] = {
    {
    .ivs = {19, 14, 6, 27, 19, 8},
    .lvl = 7,
    .species = SPECIES_BELDUM,
    .evs = {14, 14, 14, 14, 14, 14},
    }
};

static const struct TrainerMon sParty_Brandon[] = {
    {
    .ivs = {5, 9, 16, 24, 25, 6},
    .lvl = 7,
    .species = SPECIES_BELDUM,
    .evs = {14, 14, 14, 14, 14, 14},
    }
};

static const struct TrainerMon sParty_Andres2[] = {
    {
    .ivs = {14, 12, 23, 17, 24, 17},
    .lvl = 33,
    .species = SPECIES_SANDSLASH,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {22, 5, 28, 19, 13, 9},
    .lvl = 33,
    .species = SPECIES_WHISCASH,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {15, 4, 19, 11, 5, 13},
    .lvl = 34,
    .species = SPECIES_VIBRAVA,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Andres3[] = {
    {
    .ivs = {20, 8, 24, 15, 30, 18},
    .lvl = 37,
    .species = SPECIES_SANDSLASH,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {19, 12, 22, 19, 16, 9},
    .lvl = 44,
    .species = SPECIES_CLAYDOL,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {12, 22, 22, 6, 9, 7},
    .lvl = 44,
    .species = SPECIES_FLYGON,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Andres4[] = {
    {
    .ivs = {9, 26, 24, 10, 17, 17},
    .lvl = 52,
    .species = SPECIES_SANDSLASH,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {20, 5, 7, 15, 15, 25},
    .lvl = 52,
    .species = SPECIES_SWAMPERT,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {7, 9, 8, 15, 25, 21},
    .lvl = 54,
    .species = SPECIES_FLYGON,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Andres5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_GLIGAR,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SLOT_2,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_EARTHQUAKE, MOVE_SANDSTORM, MOVE_SLUDGE_BOMB, MOVE_ROCK_TOMB}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_DUGTRIO,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_EARTHQUAKE, MOVE_TRI_ATTACK, MOVE_ROCK_SLIDE, MOVE_AERIAL_ACE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_STEELIX,
    .heldItem = ITEM_SALAC_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {150, 152, 0, 0, 0, 202},
    .moves = {MOVE_TORMENT, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_EXPLOSION}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_SWAMPERT,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 100, 0, 0, 100, 52},
    .moves = {MOVE_MIRROR_COAT, MOVE_EARTHQUAKE, MOVE_MUDDY_WATER, MOVE_COUNTER}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 126, 0, 252, 126, 0},
    .moves = {MOVE_EARTHQUAKE, MOVE_GIGA_DRAIN, MOVE_FIRE_BLAST, MOVE_ROCK_SLIDE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_MAROWAK,
    .heldItem = ITEM_THICK_CLUB,
    .ability = ABILITY_SLOT_1,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE, MOVE_DYNAMIC_PUNCH}
    }
};

static const struct TrainerMon sParty_Cory2[] = {
    {
    .ivs = {16, 20, 5, 18, 20, 17},
    .lvl = 32,
    .species = SPECIES_HARIYAMA,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {19, 17, 21, 16, 13, 20},
    .lvl = 32,
    .species = SPECIES_MACHOKE,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {3, 6, 23, 13, 18, 14},
    .lvl = 32,
    .species = SPECIES_TENTACRUEL,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Cory3[] = {
    {
    .ivs = {18, 11, 22, 14, 26, 17},
    .lvl = 39,
    .species = SPECIES_HARIYAMA,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {7, 23, 8, 5, 18, 18},
    .lvl = 39,
    .species = SPECIES_MACHOKE,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {13, 17, 24, 21, 15, 13},
    .lvl = 39,
    .species = SPECIES_TENTACRUEL,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Cory4[] = {
    {
    .ivs = {22, 1, 21, 9, 9, 11},
    .lvl = 49,
    .species = SPECIES_HARIYAMA,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {15, 1, 18, 11, 6, 16},
    .lvl = 49,
    .species = SPECIES_MACHAMP,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {16, 23, 20, 10, 31, 23},
    .lvl = 50,
    .species = SPECIES_TENTACRUEL,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Cory5[] = {
    {
    .ivs = {9, 26, 21, 29, 12, 29},
    .lvl = 58,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {25, 6, 21, 8, 15, 23},
    .lvl = 57,
    .species = SPECIES_MACHAMP,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {27, 18, 10, 20, 25, 3},
    .lvl = 59,
    .species = SPECIES_TENTACRUEL,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Pablo2[] = {
    {
    .ivs = {16, 18, 16, 20, 22, 7},
    .lvl = 42,
    .species = SPECIES_SEALEO,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {17, 30, 4, 12, 9, 15},
    .lvl = 42,
    .species = SPECIES_STARMIE,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Pablo3[] = {
    {
    .ivs = {20, 10, 11, 20, 14, 24},
    .lvl = 44,
    .species = SPECIES_WALREIN,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {3, 21, 4, 25, 11, 13},
    .lvl = 44,
    .species = SPECIES_PILOSWINE,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Pablo4[] = {
    {
    .ivs = {18, 4, 9, 0, 18, 24},
    .lvl = 58,
    .species = SPECIES_PILOSWINE,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {11, 20, 20, 18, 7, 17},
    .lvl = 58,
    .species = SPECIES_SNEASEL,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {4, 6, 20, 18, 19, 15},
    .lvl = 60,
    .species = SPECIES_WALREIN,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Pablo5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_CLOYSTER,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 0, 252},
    .moves = {MOVE_SPIKES, MOVE_EXPLOSION, MOVE_SURF, MOVE_TOXIC}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_HAIL, MOVE_BLIZZARD, MOVE_SURF, MOVE_ENCORE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_JYNX,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_LOVELY_KISS, MOVE_DREAM_EATER, MOVE_BLIZZARD, MOVE_HAIL}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_SURF, MOVE_HAIL, MOVE_BLIZZARD, MOVE_THUNDERBOLT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_SNEASEL,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_BLIZZARD, MOVE_SLASH, MOVE_FAINT_ATTACK, MOVE_METAL_CLAW}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_PILOSWINE,
    .heldItem = ITEM_CHESTO_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_BLIZZARD, MOVE_HAIL, MOVE_REST}
    }

};

static const struct TrainerMon sParty_Koji2[] = {
    {
    .ivs = {18, 23, 25, 16, 17, 28},
    .lvl = 44,
    .species = SPECIES_BRELOOM,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {14, 8, 2, 8, 22, 8},
    .lvl = 39,
    .species = SPECIES_MACHOKE,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Koji3[] = {
    {
    .ivs = {11, 28, 21, 27, 16, 14},
    .lvl = 46,
    .species = SPECIES_BRELOOM,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {5, 22, 24, 16, 12, 10},
    .lvl = 42,
    .species = SPECIES_MACHOKE,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {15, 19, 10, 13, 13, 12},
    .lvl = 44,
    .species = SPECIES_MACHAMP,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Koji4[] = {
    {
    .ivs = {8, 2, 4, 27, 14, 23},
    .lvl = 47,
    .species = SPECIES_BRELOOM,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {17, 7, 16, 14, 17, 26},
    .lvl = 44,
    .species = SPECIES_MACHAMP,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {26, 19, 3, 31, 9, 16},
    .lvl = 46,
    .species = SPECIES_MACHAMP,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Koji5[] = {
    {
    .ivs = {16, 11, 15, 9, 7, 12},
    .lvl = 57,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {15, 25, 14, 17, 9, 15},
    .lvl = 58,
    .species = SPECIES_MACHAMP,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {27, 2, 15, 3, 20, 3},
    .lvl = 59,
    .species = SPECIES_MACHAMP,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Cristin2[] = {
    {
    .ivs = {8, 15, 10, 9, 20, 1},
    .lvl = 38,
    .species = SPECIES_DONPHAN,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {15, 14, 23, 16, 26, 30},
    .lvl = 38,
    .species = SPECIES_SLAKING,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Cristin3[] = {
    {
    .ivs = {18, 12, 26, 11, 13, 9},
    .lvl = 47,
    .species = SPECIES_LINOONE,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {18, 12, 15, 6, 24, 3},
    .lvl = 47,
    .species = SPECIES_DONPHAN,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {12, 11, 15, 8, 15, 15},
    .lvl = 47,
    .species = SPECIES_SLAKING,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Cristin4[] = {
    {
    .ivs = {10, 26, 7, 11, 9, 25},
    .lvl = 59,
    .species = SPECIES_SLAKING,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {8, 18, 17, 26, 24, 11},
    .lvl = 59,
    .species = SPECIES_EXPLOUD,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {16, 4, 25, 4, 4, 25},
    .lvl = 59,
    .species = SPECIES_SNORLAX,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Cristin5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_TAUROS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_SUBSTITUTE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_MILTANK,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_MEGA_KICK, MOVE_IRON_TAIL, MOVE_ROCK_SLIDE, MOVE_DYNAMIC_PUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_GRANBULL,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_THUNDER_WAVE, MOVE_SMELLING_SALT, MOVE_CRUNCH, MOVE_BULK_UP}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_SNORLAX,
    .heldItem = ITEM_CHESTO_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_ROCK_SLIDE, MOVE_SLEEP_TALK, MOVE_REST, MOVE_BODY_SLAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_STANTLER,
    .heldItem = ITEM_LIECHI_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_FACADE, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_PORYGON2,
    .heldItem = ITEM_SALAC_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SUBSTITUTE, MOVE_RECYCLE, MOVE_TRI_ATTACK, MOVE_THUNDER_WAVE}
    }
};

static const struct TrainerMon sParty_Fernando2[] = {
    {
    .ivs = {18, 20, 21, 24, 14, 17},
    .lvl = 37,
    .species = SPECIES_ELECTRODE,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {2, 22, 16, 9, 22, 23},
    .lvl = 37,
    .species = SPECIES_MANECTRIC,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {9, 9, 8, 19, 8, 24},
    .lvl = 40,
    .species = SPECIES_LOUDRED,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Fernando3[] = {
    {
    .ivs = {22, 10, 26, 16, 4, 18},
    .lvl = 41,
    .species = SPECIES_ELECTRODE,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {27, 26, 18, 18, 22, 24},
    .lvl = 42,
    .species = SPECIES_MANECTRIC,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {24, 20, 29, 1, 23, 20},
    .lvl = 42,
    .species = SPECIES_EXPLOUD,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Fernando4[] = {
    {
    .ivs = {9, 14, 23, 21, 20, 19},
    .lvl = 44,
    .species = SPECIES_ELECTRODE,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {21, 22, 19, 7, 19, 5},
    .lvl = 46,
    .species = SPECIES_MANECTRIC,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {16, 15, 13, 20, 5, 13},
    .lvl = 48,
    .species = SPECIES_EXPLOUD,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Fernando5[] = {
    {
    .ivs = {11, 10, 27, 17, 21, 16},
    .lvl = 60,
    .species = SPECIES_ELECTRODE,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {18, 12, 0, 2, 15, 8},
    .lvl = 62,
    .species = SPECIES_MANECTRIC,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {17, 12, 18, 9, 17, 21},
    .lvl = 64,
    .species = SPECIES_EXPLOUD,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Sawyer2[] = {
    {
    .ivs = {5, 25, 22, 21, 29, 18},
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    .evs = {42, 42, 42, 42, 42, 42},
    },
    {
    .ivs = {14, 7, 12, 20, 24, 10},
    .lvl = 31,
    .species = SPECIES_NUMEL,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Sawyer3[] = {
    {
    .ivs = {24, 9, 28, 12, 20, 15},
    .lvl = 40,
    .species = SPECIES_MACHOKE,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {19, 11, 18, 8, 16, 22},
    .lvl = 40,
    .species = SPECIES_NUMEL,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {28, 5, 11, 18, 10, 8},
    .lvl = 40,
    .species = SPECIES_GRAVELER,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Sawyer4[] = {
    {
    .ivs = {15, 10, 9, 4, 16, 1},
    .lvl = 48,
    .species = SPECIES_MACHOKE,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {15, 20, 18, 13, 29, 26},
    .lvl = 48,
    .species = SPECIES_CAMERUPT,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {22, 20, 8, 17, 8, 26},
    .lvl = 48,
    .species = SPECIES_GRAVELER,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Sawyer5[] = {
    {
    .ivs = {14, 11, 18, 10, 11, 15},
    .lvl = 59,
    .species = SPECIES_MACHAMP,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {25, 20, 13, 20, 16, 23},
    .lvl = 60,
    .species = SPECIES_CAMERUPT,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {24, 19, 16, 13, 23, 17},
    .lvl = 61,
    .species = SPECIES_GOLEM,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Gabrielle2[] = {
    {
    .ivs = {10, 10, 11, 20, 19, 19},
    .lvl = 34,
    .species = SPECIES_SHUPPET,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {11, 20, 5, 16, 19, 5},
    .lvl = 34,
    .species = SPECIES_DUSKULL,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {24, 21, 8, 7, 23, 13},
    .lvl = 34,
    .species = SPECIES_NATU,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {22, 28, 10, 20, 21, 12},
    .lvl = 34,
    .species = SPECIES_CHIMECHO,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Gabrielle3[] = {
    {
    .ivs = {23, 19, 24, 25, 29, 10},
    .lvl = 41,
    .species = SPECIES_SHUPPET,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {11, 17, 3, 16, 5, 7},
    .lvl = 41,
    .species = SPECIES_DUSCLOPS,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {7, 12, 11, 27, 9, 10},
    .lvl = 41,
    .species = SPECIES_XATU,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {14, 13, 21, 16, 6, 17},
    .lvl = 41,
    .species = SPECIES_CHIMECHO,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Gabrielle4[] = {
    {
    .ivs = {8, 20, 15, 13, 14, 5},
    .lvl = 49,
    .species = SPECIES_BANETTE,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {11, 25, 12, 10, 11, 26},
    .lvl = 49,
    .species = SPECIES_DUSCLOPS,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {11, 15, 25, 21, 1, 12},
    .lvl = 49,
    .species = SPECIES_XATU,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {15, 16, 31, 28, 12, 16},
    .lvl = 49,
    .species = SPECIES_CHIMECHO,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Gabrielle5[] = {
    {
    .ivs = {9, 16, 19, 15, 30, 19},
    .lvl = 57,
    .species = SPECIES_BANETTE,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {23, 19, 19, 9, 23, 7},
    .lvl = 57,
    .species = SPECIES_DUSCLOPS,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {6, 14, 12, 20, 15, 9},
    .lvl = 57,
    .species = SPECIES_XATU,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {13, 16, 6, 12, 5, 23},
    .lvl = 57,
    .species = SPECIES_CHIMECHO,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};

static const struct TrainerMon sParty_Thalia2[] = {
    {
    .ivs = {13, 17, 7, 19, 20, 8},
    .lvl = 36,
    .species = SPECIES_ROSELIA,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {9, 3, 4, 10, 14, 23},
    .lvl = 36,
    .species = SPECIES_SWABLU,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {19, 13, 25, 4, 15, 24},
    .lvl = 36,
    .species = SPECIES_SEADRA,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Thalia3[] = {
    {
    .ivs = {15, 18, 26, 27, 16, 9},
    .lvl = 38,
    .species = SPECIES_ROSELIA,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {25, 8, 14, 18, 12, 14},
    .lvl = 38,
    .species = SPECIES_ALTARIA,
    .evs = {56, 56, 56, 56, 56, 56},
    },
    {
    .ivs = {7, 6, 31, 2, 6, 13},
    .lvl = 38,
    .species = SPECIES_SEADRA,
    .evs = {56, 56, 56, 56, 56, 56},
    }
};

static const struct TrainerMon sParty_Thalia4[] = {
    {
    .ivs = {14, 9, 6, 13, 15, 15},
    .lvl = 47,
    .species = SPECIES_ROSELIA,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {14, 14, 4, 19, 6, 7},
    .lvl = 48,
    .species = SPECIES_ALTARIA,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {16, 16, 11, 15, 18, 27},
    .lvl = 47,
    .species = SPECIES_SEADRA,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Thalia5[] = {
    {
    .ivs = {10, 2, 24, 9, 22, 5},
    .lvl = 57,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {30, 21, 12, 23, 20, 16},
    .lvl = 59,
    .species = SPECIES_ALTARIA,
    .evs = {84, 84, 84, 84, 84, 84},
    },
    {
    .ivs = {18, 12, 11, 11, 13, 22},
    .lvl = 60,
    .species = SPECIES_KINGDRA,
    .evs = {84, 84, 84, 84, 84, 84},
    }
};
// Trick Room 7
static const struct TrainerMon sParty_Mariela[] = {
    {
    .ivs = {5, 17, 1, 3, 25, 10},
    .lvl = 45,
    .species = SPECIES_CHIMECHO,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Trick Room 7
static const struct TrainerMon sParty_Alvaro[] = {
    {
    .ivs = {11, 10, 5, 3, 18, 19},
    .lvl = 44,
    .species = SPECIES_DUSCLOPS,
    .evs = {70, 70, 70, 70, 70, 70},
    },
    {
    .ivs = {15, 21, 28, 5, 13, 28},
    .lvl = 43,
    .species = SPECIES_ALAKAZAM,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};
// Trick Room 7
static const struct TrainerMon sParty_Everett[] = {
    {
    .ivs = {18, 16, 28, 17, 15, 5},
    .lvl = 43,
    .species = SPECIES_WOBBUFFET,
    .evs = {70, 70, 70, 70, 70, 70},
    }
};

static const struct TrainerMon sParty_Red[] = {
    {
    .ivs = {17, 20, 15, 30, 13, 11},
    .lvl = 7,
    .species = SPECIES_CHARMANDER,
    .evs = {14, 14, 14, 14, 14, 14},
    }
};

static const struct TrainerMon sParty_Leaf[] = {
    {
    .ivs = {9, 19, 8, 29, 16, 26},
    .lvl = 7,
    .species = SPECIES_BULBASAUR,
    .evs = {14, 14, 14, 14, 14, 14},
    }
};

static const struct TrainerMon sParty_BrendanLinkPlaceholder[] = {
    {
    .ivs = {8, 18, 12, 17, 26, 8},
    .lvl = 7,
    .species = SPECIES_GROUDON,
    .evs = {14, 14, 14, 14, 14, 14},
    }
};

static const struct TrainerMon sParty_MayLinkPlaceholder[] = {
    {
    .ivs = {24, 18, 14, 21, 5, 18},
    .lvl = 7,
    .species = SPECIES_KYOGRE,
    .evs = {14, 14, 14, 14, 14, 14},
    }
};
// Dewford Gym (added) Black Belt 3 (Top Left)
static const struct TrainerMon sParty_Kenji[] = {
    {
    .ivs = {9, 14, 12, 29, 9, 14},
    .lvl = 14,
    .species = SPECIES_MAKUHITA,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {7, 15, 11, 16, 15, 16},
    .lvl = 16,
    .species = SPECIES_MACHOP,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};

// Route 106 Fisherman 3 (added) 
static const struct TrainerMon sParty_Tully[] = {
    {
    .ivs = {7, 31, 6, 5, 9, 20},
    .lvl = 13,
    .species = SPECIES_GOLDEEN,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {16, 16, 16, 16, 11, 16},
    .lvl = 13,
    .species = SPECIES_TENTACOOL,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Granite Cave Hiker 1 (added) 
static const struct TrainerMon sParty_Daniel[] = {
    {
    .ivs = {18, 8, 10, 17, 9, 16},
    .lvl = 17,
    .species = SPECIES_GEODUDE,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Granite Cave Hiker 2 (added) 
static const struct TrainerMon sParty_Tobin[] = {
    {
    .ivs = {8, 11, 8, 13, 24, 3},
    .lvl = 15,
    .species = SPECIES_GEODUDE,
    .evs = {28, 28, 28, 28, 28, 28},
    },
    {
    .ivs = {23, 20, 12, 21, 18, 13},
    .lvl = 15,
    .species = SPECIES_MACHOP,
    .evs = {28, 28, 28, 28, 28, 28},
    }
};
// Petalburg (added)
static const struct TrainerMon sParty_WallyPetalburg[] = {
    {
    .ivs = {17, 19, 16, 23, 14, 9},
    .lvl = 30,
    .species = SPECIES_SWABLU,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_AIR_CUTTER, MOVE_SING, MOVE_FLY, MOVE_TAKE_DOWN}
    },
    {
    .ivs = {22, 11, 18, 6, 16, 30},
    .lvl = 30,
    .species = SPECIES_DELCATTY,
    .evs = {42, 42, 42, 42, 42, 42},
    .moves = {MOVE_CHARM, MOVE_FAINT_ATTACK, MOVE_TAKE_DOWN, MOVE_SING}
    },
    {
    .ivs = {11, 24, 14, 10, 18, 9},
    .lvl = 31,
    .species = SPECIES_KIRLIA,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_PSYCHIC, MOVE_DOUBLE_TEAM, MOVE_SHOCK_WAVE, MOVE_CALM_MIND}
    }
};

// Dewford Gym Leader if beat Wattson prior
static const struct TrainerMon sParty_Brawly1_2[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 24,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_CONFUSION, MOVE_THUNDER_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 25,
    .species = SPECIES_MACHOKE,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_TOMB, MOVE_SEISMIC_TOSS, MOVE_REVENGE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 25,
    .species = SPECIES_BRELOOM,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_MACH_PUNCH, MOVE_MEGA_DRAIN, MOVE_BULK_UP, MOVE_STUN_SPORE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 26,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_VITAL_THROW, MOVE_REVERSAL, MOVE_BULK_UP, MOVE_FAINT_ATTACK}
    }
};

// Dewford Gym Leader if beat Flannery prior
static const struct TrainerMon sParty_Brawly1_3[] = {
   {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 31,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_EXTRASENSORY, MOVE_THUNDER_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 31,
    .species = SPECIES_MACHOKE,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_TOMB, MOVE_SEISMIC_TOSS, MOVE_REVENGE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_MACH_PUNCH, MOVE_MEGA_DRAIN, MOVE_BULK_UP, MOVE_STUN_SPORE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 32,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_VITAL_THROW, MOVE_REVERSAL, MOVE_BULK_UP, MOVE_FAINT_ATTACK}
    }
};

// Magma Admin (Magma Hideout)
static const struct TrainerMon sParty_Courtney1[] = {
    {
    .ivs = {23, 8, 20, 23, 24, 18},
    .lvl = 39,
    .species = SPECIES_MURKROW,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_WING_ATTACK, MOVE_FAINT_ATTACK, MOVE_ICY_WIND, MOVE_STEEL_WING}
    },
    {
    .ivs = {6, 10, 13, 15, 10, 13},
    .lvl = 39,
    .species = SPECIES_ROSELIA,
    .heldItem = ITEM_PERSIM_BERRY,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_PETAL_DANCE, MOVE_SLUDGE_BOMB, MOVE_GRASS_WHISTLE, MOVE_SYNTHESIS}
    },
    {
    .ivs = {22, 11, 21, 14, 12, 6},
    .lvl = 39,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_PSYCHIC, MOVE_ANCIENT_POWER, MOVE_LIGHT_SCREEN, MOVE_REFLECT}
    },
    {
    .ivs = {31, 9, 17, 25, 7, 18},
    .lvl = 40,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_NONE,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_SHADOW_BALL}
    }
};

// Magma Admin (Space Center)
static const struct TrainerMon sParty_Courtney2[] = {
     {
    .ivs = {7, 18, 11, 22, 22, 23},
    .lvl = 44,
    .species = SPECIES_MURKROW,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DRILL_PECK, MOVE_FAINT_ATTACK, MOVE_ICY_WIND, MOVE_STEEL_WING}
    },
    {
    .ivs = {19, 12, 12, 16, 15, 15},
    .lvl = 45,
    .species = SPECIES_ROSELIA,
    .heldItem = ITEM_PERSIM_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PETAL_DANCE, MOVE_SLUDGE_BOMB, MOVE_GRASS_WHISTLE, MOVE_SYNTHESIS}
    },
    {
    .ivs = {21, 20, 15, 22, 13, 17},
    .lvl = 44,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_EARTHQUAKE, MOVE_LIGHT_SCREEN, MOVE_SUNNY_DAY}
    },
    {
    .ivs = {18, 26, 30, 18, 15, 19},
    .lvl = 46,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_SHADOW_BALL}
    }
};

// Archie Double Battle (Mt Pyre)
static const struct TrainerMon sParty_ArchieMtPyre[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 40,
    .species = SPECIES_WAILORD,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_REST, MOVE_SLEEP_TALK, MOVE_SURF, MOVE_WHIRLPOOL}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 40,
    .species = SPECIES_CROBAT,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_CONFUSE_RAY, MOVE_SLUDGE_BOMB, MOVE_TOXIC, MOVE_FLY}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 41,
    .species = SPECIES_SHARPEDO,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {70, 70, 70, 70, 70, 70},
    .moves = {MOVE_SLASH, MOVE_CRUNCH, MOVE_WATERFALL, MOVE_EARTHQUAKE}
    }
};
// Matt Double Battle (Mt Pyre)
static const struct TrainerMon sParty_MattMyPyre[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 38,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_RAIN_DANCE, MOVE_THUNDER, MOVE_LIGHT_SCREEN, MOVE_MIRROR_COAT}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 38,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_NONE,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_ICE_BEAM, MOVE_ROCK_SMASH}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 39,
    .species = SPECIES_HUNTAIL,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {56, 56, 56, 56, 56, 56},
    .moves = {MOVE_BODY_SLAM, MOVE_CURSE, MOVE_CRUNCH, MOVE_SURF}
    }
};

// Archie Marine Cave (Post Game)
static const struct TrainerMon sParty_ArchieMarineCave[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 68,
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_PETAYA_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_RAIN_DANCE, MOVE_SURF, MOVE_GIGA_DRAIN, MOVE_BLIZZARD}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 69,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SCOPE_LENS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BULK_UP, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CROSS_CHOP}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 69,
    .species = SPECIES_WAILORD,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_WATER_SPOUT, MOVE_RAIN_DANCE, MOVE_EARTHQUAKE, MOVE_ICE_BEAM}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 68,
    .species = SPECIES_MUK,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDER, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_MINIMIZE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 68,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_REST, MOVE_EARTHQUAKE, MOVE_THUNDER_WAVE, MOVE_HYDRO_PUMP}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 69,
    .species = SPECIES_SHARPEDO,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_SURF, MOVE_FACADE}
    }
};

// Maxie Terra Cave (Post Game)
static const struct TrainerMon sParty_MaxieTerraCave[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 67,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SUNNY_DAY, MOVE_FIRE_BLAST, MOVE_BODY_SLAM, MOVE_REST}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 68,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_SCOPE_LENS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_LEAF_BLADE, MOVE_EXPLOSION, MOVE_FAINT_ATTACK, MOVE_EXTRASENSORY}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 68,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_WHITE_HERB,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SOLAR_BEAM, MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_CRUNCH}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 67,
    .species = SPECIES_WEEZING,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EXPLOSION, MOVE_SUNNY_DAY, MOVE_SHADOW_BALL, MOVE_FIRE_BLAST}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 67,
    .species = SPECIES_STEELIX,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 69,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ERUPTION, MOVE_EARTHQUAKE, MOVE_HEAT_WAVE, MOVE_ROCK_SLIDE}
    }
};

// Zinnia (Post Game)
static const struct TrainerMon sParty_Zinnia[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 72,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_REST, MOVE_SKY_ATTACK, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 72,
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_FIRE_PUNCH, MOVE_HEAL_BELL}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 72,
    .species = SPECIES_SCEPTILE,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_LEECH_SEED, MOVE_DRAGON_CLAW, MOVE_LEAF_BLADE, MOVE_DOUBLE_TEAM}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 72,
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_SIGNAL_BEAM, MOVE_CRUNCH}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 72,
    .species = SPECIES_CHARIZARD,
    .heldItem = ITEM_PETAYA_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ENDURE, MOVE_DRAGON_DANCE, MOVE_DRAGON_CLAW, MOVE_HEAT_WAVE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 72,
    .species = SPECIES_SALAMENCE,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_WISH, MOVE_TOXIC, MOVE_DRAGON_CLAW, MOVE_FIRE_BLAST}
    }
};

// Elite Four Sydney Rematch
static const struct TrainerMon sParty_Sidney2[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 69,
    .species = SPECIES_NINJASK,
    .heldItem = ITEM_PETAYA_BERRY,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_BATON_PASS, MOVE_AERIAL_ACE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 70,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_LIECHI_BERRY,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_LEAF_BLADE, MOVE_FAINT_ATTACK, MOVE_AERIAL_ACE, MOVE_EXTRASENSORY}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 70,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_CHARCOAL,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_CRUNCH, MOVE_FIRE_BLAST, MOVE_REST, MOVE_REVERSAL}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 70,
    .species = SPECIES_SHARPEDO,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_WATERFALL, MOVE_ICE_BEAM, MOVE_CRUNCH, MOVE_DOUBLE_EDGE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 69,
    .species = SPECIES_ZANGOOSE,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_ENDURE, MOVE_PURSUIT, MOVE_FLAIL, MOVE_AERIAL_ACE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 71,
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_CRUNCH, MOVE_FACADE, MOVE_ROCK_SLIDE, MOVE_AERIAL_ACE}
    }
};
//Elite Four Phoebe Rematch
static const struct TrainerMon sParty_Phoebe2[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 70,
    .species = SPECIES_MISDREAVUS,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {252, 0, 252, 0, 0, 0},
    .moves = {MOVE_PERISH_SONG, MOVE_PROTECT, MOVE_PAIN_SPLIT, MOVE_DESTINY_BOND}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 70,
    .species = SPECIES_WOBBUFFET,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {252, 0, 252, 0, 0, 0},
    .moves = {MOVE_COUNTER, MOVE_ENCORE, MOVE_MIRROR_COAT, MOVE_DESTINY_BOND}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 71,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_WHITE_HERB,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_OVERHEAT, MOVE_WILL_O_WISP, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 71,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_HI_JUMP_KICK, MOVE_MEGA_KICK, MOVE_REVERSAL, MOVE_ROCK_SLIDE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 72,
    .species = SPECIES_GENGAR,
    .heldItem = ITEM_SPELL_TAG,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_EXPLOSION, MOVE_FIRE_PUNCH}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 72,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {252, 0, 0, 0, 0, 252},
    .moves = {MOVE_SHADOW_BALL, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_PAIN_SPLIT}
    }
};
// Elite Four Glacia Rematch
static const struct TrainerMon sParty_Glacia2[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 74,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_SURF, MOVE_BLIZZARD, MOVE_THUNDERBOLT, MOVE_HAIL}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 74,
    .species = SPECIES_PILOSWINE,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {0, 252, 0, 0, 252, 0},
    .moves = {MOVE_EARTHQUAKE, MOVE_BLIZZARD, MOVE_ROCK_SLIDE, MOVE_HAIL}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 73,
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_NEVER_MELT_ICE,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_BLIZZARD, MOVE_WATER_PULSE, MOVE_SHADOW_BALL, MOVE_EXPLOSION}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 74,
    .species = SPECIES_JYNX,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_PSYCHIC, MOVE_BLIZZARD, MOVE_LOVELY_KISS, MOVE_CALM_MIND}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 73,
    .species = SPECIES_CASTFORM,
    .heldItem = ITEM_MYSTIC_WATER,
    .evs = {0, 0, 0, 0, 252, 252},
    .moves = {MOVE_BLIZZARD, MOVE_WATER_PULSE, MOVE_HAIL, MOVE_THUNDERBOLT}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 74,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {252, 0, 0, 0, 0, 252},
    .moves = {MOVE_REST, MOVE_BLIZZARD, MOVE_SLEEP_TALK, MOVE_SHEER_COLD}
    }
};
// Elite Four Drake Rematch
static const struct TrainerMon sParty_Drake2[] = {
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 74,
    .species = SPECIES_FERALIGATR,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE, MOVE_CRUNCH}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 75,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_BLACK_BELT,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_THUNDERBOLT, MOVE_DYNAMIC_PUNCH, MOVE_FLAMETHROWER, MOVE_EARTHQUAKE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 74,
    .species = SPECIES_CHARIZARD,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_FIRE_BLAST, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 74,
    .species = SPECIES_SCEPTILE,
    .heldItem = ITEM_PETAYA_BERRY,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_LEAF_BLADE, MOVE_DRAGON_CLAW, MOVE_THUNDER_PUNCH, MOVE_ENDURE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 75,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_OCTAZOOKA, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_DOUBLE_EDGE}
    },
    {
    .ivs = {31, 31, 31, 31, 31, 31},
    .lvl = 77,
    .species = SPECIES_SALAMENCE,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_IRON_TAIL, MOVE_DRAGON_DANCE, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE}
    }
};

// Smith
static const struct TrainerMon sParty_Smith[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 100,
    .species = SPECIES_KYOGRE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 252, 0},
    .shiny = TRUE,
    .moves = {MOVE_SURF, MOVE_BLIZZARD, MOVE_EARTHQUAKE, MOVE_CALM_MIND}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 100,
    .species = SPECIES_ZAPDOS,
    .heldItem = ITEM_MAGNET,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 252, 252, 0},
    .shiny = TRUE,
    .moves = {MOVE_THUNDER, MOVE_SKY_ATTACK, MOVE_THUNDER_WAVE, MOVE_PROTECT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 100,
    .species = SPECIES_STARMIE,
    .heldItem = ITEM_SALAC_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 252, 252, 0},
    .shiny = TRUE,
    .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_THUNDER, MOVE_RECOVER}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 100,
    .species = SPECIES_RAIKOU,
    .heldItem = ITEM_MAGNET,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 252, 252, 0},
    .shiny = TRUE,
    .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_CALM_MIND, MOVE_SUBSTITUTE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 100,
    .species = SPECIES_SUICUNE,
    .heldItem = ITEM_CHESTO_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 252, 0, 0},
    .shiny = TRUE,
    .moves = {MOVE_SURF, MOVE_CALM_MIND, MOVE_REST, MOVE_ICE_BEAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 100,
    .species = SPECIES_GENGAR,
    .heldItem = ITEM_SPELL_TAG,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 252, 252, 0},
    .shiny = TRUE,
    .moves = {MOVE_SHADOW_BALL, MOVE_ICE_PUNCH, MOVE_THUNDER, MOVE_GIGA_DRAIN}
    }
};

// Craig / cRz Shadows
static const struct TrainerMon sParty_Craig[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("MEGANIUM"),
    .lvl = 100,
    .species = SPECIES_MEGANIUM,
    .heldItem = ITEM_AGUAV_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 132, 0, 72, 52},
    .shiny = TRUE,
    .moves = {MOVE_GRASS_WHISTLE, MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_REFLECT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("AERODACTYL"),
    .lvl = 100,
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_SLOT_1,
    .evs = {76, 252, 0, 180, 0, 0},
    .shiny = TRUE,
    .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_AERIAL_ACE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("MILOTIC"),
    .lvl = 100,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 252, 0, 4, 0},
    .shiny = TRUE,
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RECOVER, MOVE_HYPNOSIS}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("RAYQUAZA"),
    .lvl = 100,
    .species = SPECIES_RAYQUAZA,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {40, 0, 0, 216, 252, 0},
    .shiny = TRUE,
    .moves = {MOVE_CRUNCH, MOVE_DRAGON_CLAW, MOVE_THUNDERBOLT, MOVE_BRICK_BREAK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("JOLTEON"),
    .lvl = 100,
    .species = SPECIES_JOLTEON,
    .heldItem = ITEM_MAGNET,
    .ability = ABILITY_SLOT_1,
    .evs = {76, 0, 0, 252, 180, 0},
    .shiny = TRUE,
    .moves = {MOVE_THUNDERBOLT, MOVE_HELPING_HAND, MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("FURBALL"),
    .lvl = 100,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 12, 152, 32, 60},
    .shiny = TRUE,
    .moves = {MOVE_OVERHEAT, MOVE_HELPING_HAND, MOVE_EXTREME_SPEED, MOVE_PROTECT}
    }
};

// Weebra
static const struct TrainerMon sParty_Weebra[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("JIRACHI"),
    .lvl = 100,
    .species = SPECIES_JIRACHI,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 252, 252, 0},
    .shiny = TRUE,
    .moves = {MOVE_RAIN_DANCE, MOVE_THUNDER, MOVE_SECRET_POWER, MOVE_ICE_PUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("LUDICOLO"),
    .lvl = 100,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 252, 252, 0},
    .shiny = TRUE,
    .moves = {MOVE_FAKE_OUT, MOVE_TEETER_DANCE, MOVE_SURF, MOVE_GIGA_DRAIN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("GENGAR"),
    .lvl = 100,
    .species = SPECIES_GENGAR,
    .heldItem = ITEM_BRIGHT_POWDER,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 252, 252, 0},
    .shiny = TRUE,
    .moves = {MOVE_THUNDER, MOVE_SHADOW_BALL, MOVE_ICE_PUNCH, MOVE_MEAN_LOOK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("METAGROSS"),
    .lvl = 100,
    .species = SPECIES_METAGROSS,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .shiny = TRUE,
    .moves = {MOVE_EXPLOSION, MOVE_BRICK_BREAK, MOVE_METEOR_MASH, MOVE_EARTHQUAKE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("LATIOS"),
    .lvl = 100,
    .species = SPECIES_LATIOS,
    .heldItem = ITEM_SOUL_DEW,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 252, 252, 0},
    .shiny = TRUE,
    .moves = {MOVE_PSYCHIC, MOVE_THUNDER, MOVE_REFLECT, MOVE_DRAGON_CLAW}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("CINDERELLA"),
    .lvl = 100,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_KINGS_ROCK,
    .ability = ABILITY_SLOT_1,
    .evs = {84, 84, 84, 84, 84, 84},
    .shiny = TRUE,
    .moves = {MOVE_FAKE_OUT, MOVE_TRIPLE_KICK, MOVE_BULK_UP, MOVE_ROCK_SLIDE}
    }
};

// Battle Frontier HP EV trainer
static const struct TrainerMon sParty_Eva[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_CLEFAIRY,
    .evs = {14, 14, 14, 14, 14, 14}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_CLEFAIRY,
    .evs = {14, 14, 14, 14, 14, 14}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_CLEFAIRY,
    .evs = {14, 14, 14, 14, 14, 14}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_CLEFAIRY,
    .evs = {14, 14, 14, 14, 14, 14}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_CLEFAIRY,
    .evs = {14, 14, 14, 14, 14, 14}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_VAPOREON,
    .evs = {14, 14, 14, 14, 14, 14}
    }
};

// Battle Frontier Attack EV trainer
static const struct TrainerMon sParty_Evin[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_NUZLEAF,
    .evs = {14, 14, 14, 14, 14, 14}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_NUZLEAF,
    .evs = {14, 14, 14, 14, 14, 14}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_NUZLEAF,
    .evs = {14, 14, 14, 14, 14, 14}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_NUZLEAF,
    .evs = {14, 14, 14, 14, 14, 14}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_NUZLEAF,
    .evs = {14, 14, 14, 14, 14, 14}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_FLAREON,
    .evs = {14, 14, 14, 14, 14, 14}
    }
};

// Battle Frontier Defense EV trainer
static const struct TrainerMon sParty_Eve[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_SILCOON,
    .evs = {14, 14, 14, 14, 14, 14}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_CASCOON,
    .evs = {14, 14, 14, 14, 14, 14}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_SILCOON,
    .evs = {14, 14, 14, 14, 14, 14}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_CASCOON,
    .evs = {14, 14, 14, 14, 14, 14}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_SILCOON,
    .evs = {14, 14, 14, 14, 14, 14}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_EEVEE,
    .evs = {14, 14, 14, 14, 14, 14}
    }
};

// Battle Frontier Speed EV trainer
static const struct TrainerMon sParty_Evangelos[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_PIKACHU,
    .evs = {14, 14, 14, 14, 14, 14}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_PIKACHU,
    .evs = {14, 14, 14, 14, 14, 14}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_PIKACHU,
    .evs = {14, 14, 14, 14, 14, 14}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_PIKACHU,
    .evs = {14, 14, 14, 14, 14, 14}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_PIKACHU,
    .evs = {14, 14, 14, 14, 14, 14}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_JOLTEON,
    .evs = {14, 14, 14, 14, 14, 14}
    }
};

// Battle Frontier Sp Attack EV trainer
static const struct TrainerMon sParty_Evvi[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_FLAAFFY,
    .evs = {14, 14, 14, 14, 14, 14}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_FLAAFFY,
    .evs = {14, 14, 14, 14, 14, 14}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_FLAAFFY,
    .evs = {14, 14, 14, 14, 14, 14}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_FLAAFFY,
    .evs = {14, 14, 14, 14, 14, 14}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_FLAAFFY,
    .evs = {14, 14, 14, 14, 14, 14}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_ESPEON,
    .evs = {14, 14, 14, 14, 14, 14}
    }
};

// Battle Frontier Sp Defense EV trainer
static const struct TrainerMon sParty_Evern[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_TOGETIC,
    .evs = {14, 14, 14, 14, 14, 14}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_TOGETIC,
    .evs = {14, 14, 14, 14, 14, 14}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_TOGETIC,
    .evs = {14, 14, 14, 14, 14, 14}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_TOGETIC,
    .evs = {14, 14, 14, 14, 14, 14}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_TOGETIC,
    .evs = {14, 14, 14, 14, 14, 14}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_UMBREON,
    .evs = {14, 14, 14, 14, 14, 14}
    }
};