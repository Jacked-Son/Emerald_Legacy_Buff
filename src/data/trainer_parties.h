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
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_GRAVELER,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Aqua Hideout Entrance GruntM
static const struct TrainerMon sParty_GruntAquaHideout1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_ELECTRODE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Aqua Hideout B1F 3 GruntM
static const struct TrainerMon sParty_GruntAquaHideout2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_WAILMER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_SEADRA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Aqua Hideout B1F 6 GruntM
static const struct TrainerMon sParty_GruntAquaHideout3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_WAILMER,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Aqua Hideout Submarine Room 1 GruntM
static const struct TrainerMon sParty_GruntAquaHideout4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_SNEASEL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_SEVIPER,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_ELECTRODE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_GOLBAT,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Mt Pyre Interior 3F BreederF
static const struct TrainerMon sParty_Gabrielle1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_SHUPPET,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_DUSKULL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_NATU,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_CHIMECHO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Petalburg Woods Team Aqua Grunt 
static const struct TrainerMon sParty_GruntPetalburgWoods[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 11,
    .species = SPECIES_POOCHYENA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 11,
    .species = SPECIES_CARVANHA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 121 CooltrainerM
static const struct TrainerMon sParty_Marcel[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_HERACROSS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_GIRAFARIG,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 123 (via 122 from Mt Pyre) Bird Keeper
static const struct TrainerMon sParty_Alberto[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_PELIPPER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_XATU,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 123 (via 122 from Mt Pyre) Collector
static const struct TrainerMon sParty_Ed[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_ZANGOOSE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_SEVIPER,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_MUK,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 124 SwimmerM
static const struct TrainerMon sParty_Declan[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Rusturf Tunnel Aqua Grunt
static const struct TrainerMon sParty_GruntRusturfTunnel[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 12,
    .species = SPECIES_POOCHYENA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 13,
    .species = SPECIES_CARVANHA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Weather Institute Aqua Grunt (1st floor)
static const struct TrainerMon sParty_GruntWeatherInst1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_GOLBAT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_TENTACOOL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Weather Institute Aqua Grunt (2nd floor double battle)
static const struct TrainerMon sParty_GruntWeatherInst2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_MIGHTYENA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_TENTACOOL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Weather Institute Aqua Grunt (2nd floor)
static const struct TrainerMon sParty_GruntWeatherInst3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_GRIMER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_VOLTORB,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_GRIMER,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Slateport Museum Grunt 1
static const struct TrainerMon sParty_GruntMuseum1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 18,
    .species = SPECIES_CARVANHA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 19,
    .species = SPECIES_ZUBAT,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Slateport Museum Grunt 2
static const struct TrainerMon sParty_GruntMuseum2[] = {
     {
    .ivs = BEST_IV_SPREAD,
    .lvl = 19,
    .species = SPECIES_POOCHYENA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 20,
    .species = SPECIES_TENTACOOL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Space Center
static const struct TrainerMon sParty_GruntSpaceCenter1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_CAMERUPT,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Mt Pyre Summit Magma Grunt 1
static const struct TrainerMon sParty_GruntMtPyre1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_CROBAT,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Mt Pyre Summit Aqua Grunt 1
static const struct TrainerMon sParty_GruntMtPyre2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_SHARPEDO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// UNUSED Mt Pyre Summit Aqua GruntM 3 (Double Battle w GruntF)
static const struct TrainerMon sParty_GruntMtPyre3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_TENTACRUEL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_SEVIPER,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Weather Institute Aqua GruntF (1st floor)
static const struct TrainerMon sParty_GruntWeatherInst4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_SEVIPER,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Aqua Hideout B1F 3 GruntF
static const struct TrainerMon sParty_GruntAquaHideout5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_MUK,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Aqua Hideout Submarine Room 4 GruntF (Double)
static const struct TrainerMon sParty_GruntAquaHideout6[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_TENTACRUEL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_GOLBAT,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 123 (via 122 from Mt Pyre) Expert
static const struct TrainerMon sParty_Fredrick[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_MACHOKE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Aqua Hideout Aqua Admin 
static const struct TrainerMon sParty_Matt[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_ELECTRODE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_RAIN_DANCE, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_MIRROR_COAT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_CRAWDAUNT,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_ICE_BEAM, MOVE_BRICK_BREAK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_MACHAMP,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BODY_SLAM, MOVE_SUBMISSION, MOVE_ROCK_TOMB, MOVE_FOCUS_ENERGY}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 42,
    .species = SPECIES_HUNTAIL,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BODY_SLAM, MOVE_CURSE, MOVE_CRUNCH, MOVE_SURF}
    }
};
// Mt Pyre Interior 2f Blackbelt
static const struct TrainerMon sParty_Zander[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Weather Institute Aqua Admin 
static const struct TrainerMon sParty_ShellyWeatherInstitute[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 34,
    .species = SPECIES_MIGHTYENA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BITE, MOVE_TAKE_DOWN, MOVE_DIG, MOVE_SCARY_FACE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_SEVIPER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_POISON_FANG, MOVE_IRON_TAIL, MOVE_GLARE, MOVE_CRUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_GOREBYSS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DOUBLE_EDGE, MOVE_PSYCHIC, MOVE_WATER_PULSE, MOVE_AMNESIA}
    }
};
// Aqua Admin Seafloor Cavern
static const struct TrainerMon sParty_ShellySeafloorCavern[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_SEVIPER,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_POISON_TAIL, MOVE_POISON_FANG, MOVE_IRON_TAIL, MOVE_GLARE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_CASTFORM,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_WEATHER_BALL, MOVE_RAIN_DANCE, MOVE_HEADBUTT, MOVE_AURORA_BEAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
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
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_MIGHTYENA,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SUPER_FANG, MOVE_CRUNCH, MOVE_TAKE_DOWN, MOVE_ROAR}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_WAILORD,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_WATER_SPOUT, MOVE_AMNESIA, MOVE_SURF, MOVE_REST}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_VITAL_THROW, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_CROBAT,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_AIR_CUTTER, MOVE_BITE, MOVE_SLUDGE_BOMB, MOVE_HAZE}
    },
    {
    .ivs = BEST_IV_SPREAD,
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
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_GRUMPIG,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 103 Aroma Lady
static const struct TrainerMon sParty_Daisy[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 18,
    .species = SPECIES_SHROOMISH,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 18,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 118 Mauville Aroma Lady
static const struct TrainerMon sParty_Rose1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 19,
    .species = SPECIES_ODDISH,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 18,
    .species = SPECIES_SHROOMISH,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 20,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Victory Road CooltrainerM
static const struct TrainerMon sParty_Felix[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_ROLLING_KICK, MOVE_NONE, MOVE_NONE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_SWALOT,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SLUDGE_BOMB, MOVE_YAWN, MOVE_BODY_SLAM, MOVE_NONE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_CLAYDOL,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SKILL_SWAP, MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_NONE}
    }
};
// Route 123 (via 118 from mauville) Aroma Lady
static const struct TrainerMon sParty_Violet[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_GLOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Rose2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_GLOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Rose3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_GLOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Rose4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_VILEPLUME,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 50,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 50,
    .species = SPECIES_VICTREEBEL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 50,
    .species = SPECIES_JUMPLUFF,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Rose5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_JUMPLUFF,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 252, 0, 0},
    .moves = {MOVE_SLEEP_POWDER, MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_ENCORE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_VICTREEBEL,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_ENCORE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_EXEGGUTOR,
    .heldItem = ITEM_CHESTO_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_SLEEP_POWDER, MOVE_DREAM_EATER, MOVE_REST, MOVE_EGG_BOMB}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_SCEPTILE,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 252, 0, 252, 0},
    .moves = {MOVE_LEAF_BLADE, MOVE_SLASH, MOVE_CUT, MOVE_ENDURE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_LEPPA_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {202, 202, 0, 0, 0, 100},
    .moves = {MOVE_LEECH_SEED, MOVE_CURSE, MOVE_ANCIENT_POWER, MOVE_RECOVER}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_ROSELIA,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_GRASS_WHISTLE, MOVE_GIGA_DRAIN, MOVE_INGRAIN, MOVE_SLUDGE_BOMB}
    }
};
//Route 111 Desert Ruin Maniac 1
static const struct TrainerMon sParty_Dusty1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_SANDSLASH,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_SLASH}
    }
};
// Route 120 Ruin Maniac
static const struct TrainerMon sParty_Chip[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_BALTOY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYBEAM, MOVE_SELF_DESTRUCT, MOVE_SANDSTORM, MOVE_ANCIENT_POWER}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_SANDSHREW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 34,
    .species = SPECIES_SANDSLASH,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_ROCK_TOMB}
    }
};
// Route 105 Ruin Maniac
static const struct TrainerMon sParty_Foster[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_SANDSLASH,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_SANDSLASH,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 34,
    .species = SPECIES_SANDSLASH,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_SANDSLASH,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_SANDSLASH,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 61,
    .species = SPECIES_DUGTRIO,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 62,
    .species = SPECIES_SANDSLASH,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};
//Route 111 Mid Interviewer
static const struct TrainerMon sParty_GabbyAndTy1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_MAGNEMITE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_WHISMUR,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 118 East Interviewer
static const struct TrainerMon sParty_GabbyAndTy2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_MAGNEMITE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_LOUDRED,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 120 Interviewer
static const struct TrainerMon sParty_GabbyAndTy3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_MAGNETON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_LOUDRED,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_GabbyAndTy4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_MAGNETON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_LOUDRED,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_GabbyAndTy5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_MAGNETON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_LOUDRED,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_GabbyAndTy6[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_MAGNETON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SONIC_BOOM, MOVE_THUNDER_WAVE, MOVE_METAL_SOUND, MOVE_THUNDERBOLT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_EXPLOUD,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ASTONISH, MOVE_STOMP, MOVE_SUPERSONIC, MOVE_HYPER_VOICE}
    }
};
// Route 109 TuberF 2 (Potential Double Battle with Chandler)
static const struct TrainerMon sParty_Lola1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 14,
    .species = SPECIES_AZURILL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 16,
    .species = SPECIES_MARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 109 Surf TuberF 1
static const struct TrainerMon sParty_Austina[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_AZUMARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 109 Surf TuberF 2
static const struct TrainerMon sParty_Gwen[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_AZUMARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Lola2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_MARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_AZUMARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Lola3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_AZUMARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_AZUMARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Lola4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_AZUMARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_AZUMARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Lola5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 57,
    .species = SPECIES_AZUMARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 57,
    .species = SPECIES_AZUMARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 109 TuberM 1 (Potential Double Battle with Edmond or Hailey)
static const struct TrainerMon sParty_Ricky1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 16,
    .species = SPECIES_ZIGZAGOON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SAND_ATTACK, MOVE_HEADBUTT, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};
// Route 109 Seashore House TuberM
static const struct TrainerMon sParty_Simon[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 14,
    .species = SPECIES_CORPHISH,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 16,
    .species = SPECIES_PSYDUCK,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Abandoned Ship TuberM
static const struct TrainerMon sParty_Charlie[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_HEADBUTT, MOVE_SHADOW_BALL, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Ricky2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Ricky3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Ricky4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Ricky5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 65,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};
//Petalburg Gym CooltrainerM Speed Room
static const struct TrainerMon sParty_Randall[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_QUICK_ATTACK, MOVE_AGILITY, MOVE_WING_ATTACK, MOVE_FACADE}
    }
};
//Petalburg Gym CooltrainerM Confusion Room
static const struct TrainerMon sParty_Parker[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TEETER_DANCE, MOVE_DIZZY_PUNCH, MOVE_FAINT_ATTACK, MOVE_NONE}
    }
};
//Petalburg Gym CooltrainerM Recovery Room
static const struct TrainerMon sParty_George[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_SLAKOTH,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SLACK_OFF, MOVE_COUNTER, MOVE_SHADOW_BALL, MOVE_NONE}
    }
};
//Petalburg Gym CooltrainerM Berke
static const struct TrainerMon sParty_Berke[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_VIGOROTH,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FOCUS_ENERGY, MOVE_SLASH, MOVE_FAINT_ATTACK, MOVE_NONE}
    }
};
// Route 123 (via 122 from Mt Pyre) CooltrainerM
static const struct TrainerMon sParty_Braxton[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 34,
    .species = SPECIES_SWELLOW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FOCUS_ENERGY, MOVE_QUICK_ATTACK, MOVE_WING_ATTACK, MOVE_ENDEAVOR}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_TRAPINCH,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BITE, MOVE_DIG, MOVE_FAINT_ATTACK, MOVE_SAND_TOMB}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_WAILMER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROLLOUT, MOVE_WHIRLPOOL, MOVE_ASTONISH, MOVE_WATER_PULSE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_MAGNETON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_SUPERSONIC, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_SHIFTRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GIGA_DRAIN, MOVE_FAINT_ATTACK, MOVE_DOUBLE_TEAM, MOVE_SWAGGER}
    }
};
// Trick House 8
static const struct TrainerMon sParty_Vincent[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 55,
    .species = SPECIES_BANETTE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 54,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 55,
    .species = SPECIES_SHARPEDO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Trick House 8
static const struct TrainerMon sParty_Leroy[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_MAWILE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 55,
    .species = SPECIES_STARMIE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_FLYGON,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 111 Northern End
static const struct TrainerMon sParty_Wilton1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 22,
    .species = SPECIES_ELECTRIKE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 23,
    .species = SPECIES_WAILMER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 22,
    .species = SPECIES_MAKUHITA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Victory Road CooltrainerM
static const struct TrainerMon sParty_Edgar[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_CACTURNE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_AGGRON,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Victory Road CooltrainerM
static const struct TrainerMon sParty_Albert[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_MAGNETON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_MUK,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Victory Road CooltrainerM
static const struct TrainerMon sParty_Samuel[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_SWELLOW,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 50,
    .species = SPECIES_MAWILE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_ALAKAZAM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Victory Road CooltrainerM Winstrate
static const struct TrainerMon sParty_Vito[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 50,
    .species = SPECIES_SWELLOW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_STEEL_WING, MOVE_ENDEAVOR, MOVE_AERIAL_ACE, MOVE_FACADE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_ALAKAZAM,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SHOCK_WAVE, MOVE_RECOVER, MOVE_CALM_MIND, MOVE_PSYCHIC}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 50,
    .species = SPECIES_MANECTRIC,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SHADOW_BALL, MOVE_CHARGE, MOVE_THUNDERBOLT, MOVE_CRUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_SHIFTRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FAINT_ATTACK, MOVE_FAKE_OUT, MOVE_LEAF_BLADE, MOVE_EXTRASENSORY}
    }
};
// Victory Road CooltrainerM
static const struct TrainerMon sParty_Owen[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 50,
    .species = SPECIES_KECLEON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_GOLEM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_WAILORD,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Wilton2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_ELECTRIKE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_WAILMER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Wilton3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_MANECTRIC,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_WAILMER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Wilton4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 52,
    .species = SPECIES_MANECTRIC,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 52,
    .species = SPECIES_WAILORD,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 52,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Wilton5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_MANECTRIC,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 57,
    .species = SPECIES_WAILORD,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 133 CooltrainerM
static const struct TrainerMon sParty_Warren[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_GOLEM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_LAIRON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_SHIFTRY,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Petalburg Gym CooltrainerF Accuracy Room
static const struct TrainerMon sParty_Mary[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FAINT_ATTACK, MOVE_SHOCK_WAVE, MOVE_SWIFT, MOVE_NONE}
    }
};
//Petalburg Gym CooltrainerF Defense Room
static const struct TrainerMon sParty_Alexia[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_WIGGLYTUFF,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DEFENSE_CURL, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_NONE}
    }
};
//Petalburg Gym CooltrainerF Strength Room
static const struct TrainerMon sParty_Jody[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_ZANGOOSE,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SWORDS_DANCE, MOVE_SLASH, MOVE_NONE, MOVE_NONE}
    }
};
// Route 123 (via 122 from Mt Pyre) CooltrainerF
static const struct TrainerMon sParty_Wendy[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_MAWILE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BATON_PASS, MOVE_FAINT_ATTACK, MOVE_FAKE_TEARS, MOVE_BITE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_MEGA_DRAIN, MOVE_MAGICAL_LEAF, MOVE_GRASS_WHISTLE, MOVE_LEECH_SEED}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_PELIPPER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FLY, MOVE_WATER_PULSE, MOVE_MIST, MOVE_NONE}
    }
};
// Trick House 8
static const struct TrainerMon sParty_Keira[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_AGGRON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_MANECTRIC,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_MILOTIC,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 111 Northern End
static const struct TrainerMon sParty_Brooke1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 23,
    .species = SPECIES_WINGULL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 23,
    .species = SPECIES_NUMEL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 23,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 120 CooltrainerF
static const struct TrainerMon sParty_Jennifer[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_SWALOT,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Victory Road CooltrainerF
static const struct TrainerMon sParty_Hope[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Victory Road CooltrainerF
static const struct TrainerMon sParty_Shannon[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 52,
    .species = SPECIES_CLAYDOL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Victory Road CooltrainerF
static const struct TrainerMon sParty_Michelle[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 50,
    .species = SPECIES_TORKOAL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 50,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 50,
    .species = SPECIES_LUDICOLO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Victory Road CooltrainerF
static const struct TrainerMon sParty_Caroline[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 50,
    .species = SPECIES_SKARMORY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 50,
    .species = SPECIES_SABLEYE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Victory Road CooltrainerF
static const struct TrainerMon sParty_Julie[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_SANDSLASH,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_NINETALES,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_TROPIUS,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Brooke2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_PELIPPER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_NUMEL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Brooke3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_PELIPPER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_NUMEL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Brooke4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_PELIPPER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_NUMEL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 50,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Brooke5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 61,
    .species = SPECIES_PELIPPER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 62,
    .species = SPECIES_CAMERUPT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 62,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Trick Room 7
static const struct TrainerMon sParty_Patricia[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_BANETTE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_LUNATONE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 123 (via 122 from Mt Pyre) Hex Maniac
static const struct TrainerMon sParty_Kindra[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_DUSKULL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_SHUPPET,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 121 Hex Maniac
static const struct TrainerMon sParty_Tammy[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_DUSKULL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_SHUPPET,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Mt Pyre Interior 6F Hex Maniac
static const struct TrainerMon sParty_Valerie1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_SABLEYE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Mt Pyre Interior 4F Hex Maniac
static const struct TrainerMon sParty_Tasha[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_SHUPPET,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Valerie2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_SABLEYE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_GRUMPIG,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Valerie3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_GRUMPIG,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_SABLEYE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Valerie4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_GRUMPIG,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_SABLEYE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Valerie5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {152, 0, 126, 0, 102, 126},
    .moves = {MOVE_SHADOW_PUNCH, MOVE_CALM_MIND, MOVE_PAIN_SPLIT, MOVE_THUNDER_PUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_SABLEYE,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_MOONLIGHT, MOVE_WILL_O_WISP, MOVE_FIRE_PUNCH, MOVE_SHADOW_BALL}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_SALAC_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 100, 0, 0, 152, 0},
    .moves = {MOVE_ENDURE, MOVE_DESTINY_BOND, MOVE_SHADOW_BALL, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_MISDREAVUS,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_WILL_O_WISP, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_THUNDERBOLT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_SHEDINJA,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_AERIAL_ACE, MOVE_SILVER_WIND, MOVE_FAINT_ATTACK, MOVE_SHADOW_BALL}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_GENGAR,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_FIRE_PUNCH, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_WILL_O_WISP}
    }
};
//Route 104 Lady
static const struct TrainerMon sParty_Cindy1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 10,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Sootopolis Gym Lady 1 (Middle Level - Double Battle w Annika)
static const struct TrainerMon sParty_Daphne[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_BRIGHT_POWDER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ATTRACT, MOVE_LOVELY_KISS, MOVE_RAIN_DANCE, MOVE_WATER_PULSE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_BRIGHT_POWDER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ATTRACT, MOVE_LOVELY_KISS, MOVE_RAIN_DANCE, MOVE_WATER_PULSE}
    }
};
// Space Center
static const struct TrainerMon sParty_GruntSpaceCenter2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_MIGHTYENA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_GOLEM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_MAGCARGO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Cindy2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 13,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_NONE, MOVE_NONE}
    }
};
//Sootopolis Gym Lady 2 (Highest Level - Double Battle w Bridget)
static const struct TrainerMon sParty_Brianna[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_SEAKING,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// SS Tidal Aroma Lady (nat dex)
static const struct TrainerMon sParty_Naomi[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 56,
    .species = SPECIES_SUNFLORA,
    .heldItem = ITEM_SUN_STONE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 56,
    .species = SPECIES_SKIPLOOM,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
};

static const struct TrainerMon sParty_Cindy3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DOUBLE_SLAP, MOVE_SING, MOVE_FAINT_ATTACK, MOVE_CHARM}
    }
};

static const struct TrainerMon sParty_Cindy4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DOUBLE_SLAP, MOVE_SING, MOVE_FAINT_ATTACK, MOVE_CHARM}
    }
};

static const struct TrainerMon sParty_Cindy5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 54,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DOUBLE_EDGE, MOVE_SING, MOVE_FAINT_ATTACK, MOVE_THUNDER_WAVE}
    }
};

static const struct TrainerMon sParty_Cindy6[] = {
    {
    .ivs = BEST_IV_SPREAD,
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
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_AZUMARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Mt Chimney  Beauty 2
static const struct TrainerMon sParty_Sheila[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Mt Chimney Beauty 3
static const struct TrainerMon sParty_Shirley[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_SPOINK,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 121 Beauty
static const struct TrainerMon sParty_Jessica1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_KECLEON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FAINT_ATTACK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_SEVIPER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};
//Sootopolis Gym Beauty 1 (Lowest Level)
static const struct TrainerMon sParty_Connie[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_WALREIN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Sootopolis Gym Beauty 4 (Highest Level - Double Battle w Brianna)
static const struct TrainerMon sParty_Bridget[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_AZUMARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Sootopolis Gym Beauty 3 (Highest Level - Double Battle w Bethany)
static const struct TrainerMon sParty_Olivia[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_CLAMPERL,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_IRON_DEFENSE, MOVE_WHIRLPOOL, MOVE_RAIN_DANCE, MOVE_WATER_PULSE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_CRAWDAUNT,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TAUNT, MOVE_CRABHAMMER, MOVE_WATER_PULSE, MOVE_NONE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_LUDICOLO,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_UPROAR, MOVE_FURY_SWIPES, MOVE_FAKE_OUT, MOVE_WATER_PULSE}
    }
};
//Sootopolis Gym Beauty 2 (Highest Level - Double Battle w Crissy)
static const struct TrainerMon sParty_Tiffany[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_SHARPEDO,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_SHARPEDO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Jessica2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_KECLEON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FAINT_ATTACK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_SEVIPER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Jessica3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 44,
    .species = SPECIES_KECLEON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FAINT_ATTACK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 44,
    .species = SPECIES_SEVIPER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Jessica4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_KECLEON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FAINT_ATTACK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_SEVIPER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Jessica5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 59,
    .species = SPECIES_KECLEON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FAINT_ATTACK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 59,
    .species = SPECIES_ARBOK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GLARE, MOVE_SLUDGE_BOMB, MOVE_BITE, MOVE_STOCKPILE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 59,
    .species = SPECIES_SEVIPER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};
//Route 104 North Rich Boy
static const struct TrainerMon sParty_Winston1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 10,
    .species = SPECIES_SLAKOTH,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 133 ExpertF
static const struct TrainerMon sParty_Mollie[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// SS Tidal Rich Boy (nat dex)
static const struct TrainerMon sParty_Garret[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_CHANSEY,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_PERSIAN,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Winston2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_VIGOROTH,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Winston3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_VIGOROTH,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_VIGOROTH,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Winston4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BODY_SLAM, MOVE_THUNDERBOLT, MOVE_YAWN, MOVE_DYNAMIC_PUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FACADE, MOVE_YAWN, MOVE_ENCORE, MOVE_EARTHQUAKE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_YAWN, MOVE_SLACK_OFF}
    }
};

static const struct TrainerMon sParty_Winston5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FURY_SWIPES, MOVE_EARTHQUAKE, MOVE_YAWN, MOVE_DYNAMIC_PUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FACADE, MOVE_REST, MOVE_ENCORE, MOVE_EARTHQUAKE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_HYPER_BEAM, MOVE_SHADOW_BALL, MOVE_YAWN, MOVE_SLACK_OFF}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_HYPER_BEAM, MOVE_FAINT_ATTACK, MOVE_YAWN, MOVE_THUNDERBOLT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SLASH, MOVE_BLIZZARD, MOVE_YAWN, MOVE_THUNDERBOLT}
    }
};
// Route 114 Pokemaniac
static const struct TrainerMon sParty_Steve1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 25,
    .species = SPECIES_SEVIPER,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Abandoned Ship Beauty
static const struct TrainerMon sParty_Thalia1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_SWABLU,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Mt Pyre Interior 2F Pokemaniac
static const struct TrainerMon sParty_Mark[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_RHYHORN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Mt Chimney GruntF (double)
static const struct TrainerMon sParty_GruntMtChimney1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_VULPIX,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Steve2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_SEVIPER,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Steve3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_SEVIPER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 42,
    .species = SPECIES_RHYHORN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Steve4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_SEVIPER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 50,
    .species = SPECIES_RHYHORN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Steve5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 61,
    .species = SPECIES_SEVIPER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 62,
    .species = SPECIES_RHYDON,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 105 SwimmerM
static const struct TrainerMon sParty_Luis[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_CARVANHA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 105 SwimmerM
static const struct TrainerMon sParty_Dominik[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_TENTACOOL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 106 Surf SwimmerM
static const struct TrainerMon sParty_Douglas[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_TENTACOOL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_TENTACOOL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 107 SwimmerM
static const struct TrainerMon sParty_Darrin[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_TENTACOOL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_PELIPPER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_TENTACOOL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 107 SwimmerM
static const struct TrainerMon sParty_Tony1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_CARVANHA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 108 SwimmerM
static const struct TrainerMon sParty_Jerome[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_TENTACRUEL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 108 SwimmerM
static const struct TrainerMon sParty_Matthew[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_CARVANHA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 109 Surf SwimmerM
static const struct TrainerMon sParty_David[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_TENTACOOL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_CARVANHA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 124 SwimmerM
static const struct TrainerMon sParty_Spencer[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_SEAKING,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_PELIPPER,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 124 SwimmerM
static const struct TrainerMon sParty_Roland[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_LANTURN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 125 SwimmerM
static const struct TrainerMon sParty_Nolen[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_TENTACRUEL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 125 SwimmerM
static const struct TrainerMon sParty_Stan[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_SEADRA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 126 SwimmerM
static const struct TrainerMon sParty_Barry[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 126 SwimmerM
static const struct TrainerMon sParty_Dean[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_SHARPEDO,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_CRAWDAUNT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_CARVANHA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 130 SwimmerM
static const struct TrainerMon sParty_Rodney[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 131 SwimmerM
static const struct TrainerMon sParty_Richard[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_PELIPPER,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 131 SwimmerM 
static const struct TrainerMon sParty_Herman[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_PELIPPER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_TENTACRUEL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 130 SwimmerM (Potential Double Battle with Katie)
static const struct TrainerMon sParty_Santiago[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_TENTACRUEL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_WAILORD,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 132 SwimmerM
static const struct TrainerMon sParty_Gilbert[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_SHARPEDO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 133 SwimmerM
static const struct TrainerMon sParty_Franklin[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_WALREIN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 131 SwimmerM
static const struct TrainerMon sParty_Kevin[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_RELICANTH,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 134 SwimmerM
static const struct TrainerMon sParty_Jack[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Dudley[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_TENTACOOL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_WINGULL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_TENTACRUEL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 124 SwimmerM
static const struct TrainerMon sParty_Chad[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_TENTACRUEL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_WAILMER,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Tony2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_SHARPEDO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Tony3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_SHARPEDO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Tony4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_STARMIE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_SHARPEDO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Tony5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 59,
    .species = SPECIES_WAILORD,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 60,
    .species = SPECIES_STARMIE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 59,
    .species = SPECIES_CRAWDAUNT,
    .evs = {84, 84, 84, 84, 84, 84}
    },    
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 60,
    .species = SPECIES_SHARPEDO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Dewford Gym Black Belt 1 (Bottom Left)
static const struct TrainerMon sParty_Takao[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 16,
    .species = SPECIES_MACHOP,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 16,
    .species = SPECIES_MACHOP,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 134 Black Belt
static const struct TrainerMon sParty_Hitoshi[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_HERACROSS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_MACHAMP,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 132 Black Belt
static const struct TrainerMon sParty_Kiyo[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
};
// Route 115 Surf Black Belt
static const struct TrainerMon sParty_Koichi[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 26,
    .species = SPECIES_MACHOP,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 115 Black Belt
static const struct TrainerMon sParty_Nob1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_MACHOKE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Nob2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_MACHOKE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Nob3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_MACHAMP,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Nob4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_HITMONCHAN,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_PRIMEAPE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_MACHAMP,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Nob5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_PRIMEAPE,
    .heldItem = ITEM_KINGS_ROCK,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_ROCK_SLIDE, MOVE_CROSS_CHOP, MOVE_TAUNT, MOVE_EARTHQUAKE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_BLAZIKEN,
    .heldItem = ITEM_SALAC_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 0, 252, 0},
    .moves = {MOVE_BLAZE_KICK, MOVE_REVERSAL, MOVE_EARTHQUAKE, MOVE_ENDURE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_HITMONLEE,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_EARTHQUAKE, MOVE_HI_JUMP_KICK, MOVE_ROCK_SLIDE, MOVE_MEGA_KICK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_POLIWRATH,
    .heldItem = ITEM_WIKI_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 252, 0, 0},
    .moves = {MOVE_BELLY_DRUM, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_THIEF}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_HERACROSS,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_BULK_UP, MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_BRICK_BREAK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_REST, MOVE_SLEEP_TALK, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK}
    }
};
// Trick Room 4
static const struct TrainerMon sParty_Yuji[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 111 Northern End (Mach Bike)
static const struct TrainerMon sParty_Daisuke[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 25,
    .species = SPECIES_MACHOP,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Mt Pyre Interior 5F Black Belt
static const struct TrainerMon sParty_Atsushi[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Mauville Gym Guitarist 1
static const struct TrainerMon sParty_Kirk[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 22,
    .species = SPECIES_VOLTORB,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROLLOUT, MOVE_SHOCK_WAVE, MOVE_SCREECH, MOVE_SELF_DESTRUCT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 22,
    .species = SPECIES_ELECTRIKE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_QUICK_ATTACK, MOVE_HOWL, MOVE_SHOCK_WAVE, MOVE_LEER}
    }
};
// Aqua Hideout B1F 3 GruntF
static const struct TrainerMon sParty_GruntAquaHideout7[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_ELECTRODE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_GOLBAT,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Aqua Hideout Submarine Room 4 GruntM (Double)
static const struct TrainerMon sParty_GruntAquaHideout8[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_MURKROW,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Mauville Gym Guitarist 2
static const struct TrainerMon sParty_Shawn[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 21,
    .species = SPECIES_VOLTORB,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 20,
    .species = SPECIES_MAGNEMITE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 123 (via 122 from Mt Pyre) Guitarist
static const struct TrainerMon sParty_Fernando1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_ELECTRODE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_LOUDRED,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 118 Mauville Guitarist
static const struct TrainerMon sParty_Dalton1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 20,
    .species = SPECIES_MAGNEMITE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 21,
    .species = SPECIES_WHISMUR,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Dalton2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_RAICHU,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_MAGNETON,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Dalton3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_PLUSLE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_MANECTRIC,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_MAGNETON,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Dalton4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 56,
    .species = SPECIES_MINUN,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 56,
    .species = SPECIES_ELECTRODE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 57,
    .species = SPECIES_ELECTABUZZ,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Dalton5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_SILK_SCARF,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_HIDDEN_POWER, MOVE_VOLT_TACKLE, MOVE_EXPLOSION, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_OVERHEAT, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_ELECTABUZZ,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 150, 0, 100, 0},
    .moves = {MOVE_TRICK, MOVE_VOLT_TACKLE, MOVE_MAGICAL_LEAF, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_JOLTEON,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_PIKACHU,
    .heldItem = ITEM_LIGHT_BALL,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_SURF, MOVE_VOLT_TACKLE, MOVE_HIDDEN_POWER, MOVE_ENCORE}
    }
};
// Lavaridge Gym Kindler 3
static const struct TrainerMon sParty_Cole[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_NUMEL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Lavaridge Gym Kindler 1
static const struct TrainerMon sParty_Jeff[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_SLUGMA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_SLUGMA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Lavaridge Gym Kindler 4
static const struct TrainerMon sParty_Axle[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_NUMEL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Lavaridge Gym Kindler 2
static const struct TrainerMon sParty_Jace[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_VULPIX,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Lavaridge Gym Kindler 5
static const struct TrainerMon sParty_Keegan[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_SLUGMA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 114 Kindler
static const struct TrainerMon sParty_Bernie1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_SLUGMA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_WINGULL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Bernie2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_MAGCARGO,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 232,
    .species = SPECIES_HOUNDOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Bernie3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_MAGCARGO,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_RAPIDASH,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_HOUNDOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Bernie4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_MAGCARGO,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 54,
    .species = SPECIES_NINETALES,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 55,
    .species = SPECIES_HOUNDOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Bernie5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_FLAREON,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_SUNNY_DAY, MOVE_FIRE_BLAST, MOVE_CHARM, MOVE_WISH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_SLOT_1,
    .evs = {152, 252, 0, 100, 0, 0},
    .moves = {MOVE_OVERHEAT, MOVE_EXTREME_SPEED, MOVE_IRON_TAIL, MOVE_CRUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_MAGMAR,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_SUNNY_DAY, MOVE_OVERHEAT, MOVE_THUNDER_PUNCH, MOVE_PSYCHIC}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_CHARIZARD,
    .heldItem = ITEM_WIKI_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 0, 252, 0},
    .moves = {MOVE_BELLY_DRUM, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_OVERHEAT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 252, 252, 0, 0},
    .moves = {MOVE_WILL_O_WISP, MOVE_SUNNY_DAY, MOVE_CONFUSE_RAY, MOVE_FLAMETHROWER}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 252, 0, 252, 0},
    .moves = {MOVE_FIRE_BLAST, MOVE_ROCK_SLIDE, MOVE_YAWN, MOVE_SUNNY_DAY}
    }
};
// Route 111 Desert Camper
static const struct TrainerMon sParty_Drew[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_SANDSLASH,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DIG, MOVE_SAND_ATTACK, MOVE_POISON_STING, MOVE_SLASH}
    }
};
//Route 111 Desert Camper 1 
static const struct TrainerMon sParty_Beau[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_BALTOY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_SANDSHREW,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_TRAPINCH,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 112 South Section Camper 1
static const struct TrainerMon sParty_Larry[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_NUZLEAF,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 114 Camper 
static const struct TrainerMon sParty_Shane[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 26,
    .species = SPECIES_SANDSHREW,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 26,
    .species = SPECIES_NUZLEAF,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Trick House 3 Camper
static const struct TrainerMon sParty_Justin[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_MACHOKE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Jagged Pass Camper
static const struct TrainerMon sParty_Ethan1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_SWELLOW,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Jagged Pass Picnicker 2
static const struct TrainerMon sParty_Autumn[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 111 Mid Camper
static const struct TrainerMon sParty_Travis[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_SANDSHREW,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Ethan2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_SWELLOW,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Ethan3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_SWELLOW,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Ethan4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_SANDSHREW,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_SWELLOW,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Ethan5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 59,
    .species = SPECIES_SWELLOW,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 59,
    .species = SPECIES_SANDSLASH,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 59,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 119 Bug Maniac 3
static const struct TrainerMon sParty_Brent[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_MASQUERAIN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 119 Bug Maniac 1
static const struct TrainerMon sParty_Donald[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_WURMPLE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_SILCOON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_BEAUTIFLY,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 119 Bug Maniac Taylor
static const struct TrainerMon sParty_Taylor[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_WURMPLE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_CASCOON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_DUSTOX,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 120 Bug Maniac
static const struct TrainerMon sParty_Jeffrey1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_SURSKIT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_MASQUERAIN,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_SURSKIT,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 117 Bug Maniac
static const struct TrainerMon sParty_Derek[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 19,
    .species = SPECIES_DUSTOX,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 19,
    .species = SPECIES_BEAUTIFLY,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Jeffrey2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 34,
    .species = SPECIES_MASQUERAIN,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 34,
    .species = SPECIES_MASQUERAIN,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 34,
    .species = SPECIES_MASQUERAIN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Jeffrey3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 42,
    .species = SPECIES_MASQUERAIN,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 42,
    .species = SPECIES_MASQUERAIN,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 42,
    .species = SPECIES_MASQUERAIN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Jeffrey4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 50,
    .species = SPECIES_MASQUERAIN,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 50,
    .species = SPECIES_DUSTOX,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 50,
    .species = SPECIES_MASQUERAIN,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 50,
    .species = SPECIES_MASQUERAIN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Jeffrey5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 62,
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 62,
    .species = SPECIES_DUSTOX,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 62,
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 62,
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_SILVER_POWDER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 62,
    .species = SPECIES_BEAUTIFLY,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 110 PsychicM
static const struct TrainerMon sParty_Edward[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 18,
    .species = SPECIES_KADABRA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_HIDDEN_POWER, MOVE_CONFUSION, MOVE_NONE, MOVE_NONE}
    }
};
// Mossdeep Gym PsychicM 1 - Entrance Room (Double Battle w Maura)
static const struct TrainerMon sParty_Preston[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_GARDEVOIR,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Mossdeep Gym PsychicM 4 - Northwest (Double Battle w Nate or Sylvia)
static const struct TrainerMon sParty_Virgil[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_KADABRA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Mossdeep Gym PsychicM 2 - West Central (Double Battle w Samantha)
static const struct TrainerMon sParty_Blake[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_GIRAFARIG,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Mt Pyre Interior 3F PsychicM
static const struct TrainerMon sParty_William[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_RALTS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_KIRLIA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_GARDEVOIR,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Trick Room 7
static const struct TrainerMon sParty_Joshua[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_ALAKAZAM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_SOLROCK,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 123 (via 122 with Cut) Psychic
static const struct TrainerMon sParty_Cameron1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_SOLROCK,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Cameron2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_KADABRA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_SOLROCK,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Cameron3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_KADABRA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_SOLROCK,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Cameron4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 54,
    .species = SPECIES_KADABRA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 54,
    .species = SPECIES_SOLROCK,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Cameron5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 65,
    .species = SPECIES_SOLROCK,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 65,
    .species = SPECIES_ALAKAZAM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Cycling Road fPsychic
static const struct TrainerMon sParty_Jaclyn[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 21,
    .species = SPECIES_KADABRA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};
// Mossdeep Gym PsychicF 4 - Northwest (Double Battle w Sylvia)
static const struct TrainerMon sParty_Hannah[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 44,
    .species = SPECIES_ABSOL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Mossdeep Gym PsychicF 2 - West Central (Double Battle w Blake)
static const struct TrainerMon sParty_Samantha[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 44,
    .species = SPECIES_XATU,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Mossdeep Gym PsychicF 1 - Entrance Room (Double Battle w Preston)
static const struct TrainerMon sParty_Maura[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_KADABRA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Mt Pyre Interior 3F PsychicF
static const struct TrainerMon sParty_Kayla[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_WOBBUFFET,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 34,
    .species = SPECIES_XATU,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_KADABRA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Trick Room 7
static const struct TrainerMon sParty_Alexis[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_GARDEVOIR,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_XATU,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 123 (via 122 from Mt Pyre) Psychic
static const struct TrainerMon sParty_Jacki1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_KADABRA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_LUNATONE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Jacki2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_KADABRA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_LUNATONE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Jacki3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_KADABRA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_LUNATONE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Jacki4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 56,
    .species = SPECIES_ALAKAZAM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 56,
    .species = SPECIES_GIRAFARIG,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 56,
    .species = SPECIES_LUNATONE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Jacki5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_ALAKAZAM,
    .heldItem = ITEM_KINGS_ROCK,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_PSYCHIC, MOVE_ICE_PUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {152, 0, 100, 0, 252, 0},
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_FIRE_PUNCH, MOVE_DYNAMIC_PUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_WOBBUFFET,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 252, 0, 0, 0},
    .moves = {MOVE_ENCORE, MOVE_DESTINY_BOND, MOVE_COUNTER, MOVE_MIRROR_COAT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_SLOWBRO,
    .heldItem = ITEM_WIKI_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 252, 0, 0},
    .moves = {MOVE_SKILL_SWAP, MOVE_PSYCHIC, MOVE_THUNDER_WAVE, MOVE_SURF}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {100, 0, 152, 0, 252, 0},
    .moves = {MOVE_IMPRISON, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_REST, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_ICE_BEAM}
    }
};
// Route 121 Gentleman
static const struct TrainerMon sParty_Walter1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_MANECTRIC,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// SS Tidal Gentleman (nat dex)
static const struct TrainerMon sParty_Micah[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_GROWLITHE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 55,
    .species = SPECIES_ARCANINE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// SS Tidal Gentleman (nat dex)
static const struct TrainerMon sParty_Thomas[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 55,
    .species = SPECIES_TAUROS,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Walter2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_MANECTRIC,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Walter3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_MANECTRIC,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_ROAR}
    }
};

static const struct TrainerMon sParty_Walter4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_MANECTRIC,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Walter5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 59,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 59,
    .species = SPECIES_GOLDUCK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FURY_SWIPES, MOVE_DISABLE, MOVE_CONFUSION, MOVE_PSYCH_UP}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 59,
    .species = SPECIES_MANECTRIC,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_ROAR}
    }
};
// Elite Four Sydney
static const struct TrainerMon sParty_Sidney[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_MIGHTYENA,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CRUNCH, MOVE_SUPER_FANG, MOVE_YAWN, MOVE_SCARY_FACE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_MURKROW,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SKY_ATTACK, MOVE_PURSUIT, MOVE_STEEL_WING, MOVE_HAZE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_LEAF_BLADE, MOVE_FAINT_ATTACK, MOVE_AERIAL_ACE, MOVE_EXTRASENSORY}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_SCOPE_LENS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CRABHAMMER, MOVE_SWORDS_DANCE, MOVE_CRUNCH, MOVE_SLUDGE_BOMB}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 54,
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_FIGY_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CRUNCH, MOVE_IRON_TAIL, MOVE_ROCK_SLIDE, MOVE_AERIAL_ACE}
    }
};
//Elite Four Phoebe
static const struct TrainerMon sParty_Phoebe[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 54,
    .species = SPECIES_SABLEYE,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_MOONLIGHT, MOVE_CRUNCH, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 54,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_REVENGE, MOVE_DESTINY_BOND}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 54,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_WHITE_HERB,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_OVERHEAT, MOVE_WILL_O_WISP, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 54,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_HI_JUMP_KICK, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 55,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SHADOW_BALL, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE}
    }
};
// Elite Four Glacia
static const struct TrainerMon sParty_Glacia[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 55,
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BLIZZARD, MOVE_WATER_PULSE, MOVE_SHADOW_BALL, MOVE_HAIL}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 55,
    .species = SPECIES_SNEASEL,
    .heldItem = ITEM_SCOPE_LENS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FAINT_ATTACK, MOVE_BLIZZARD, MOVE_SWORDS_DANCE, MOVE_SLASH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 55,
    .species = SPECIES_CASTFORM,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_WEATHER_BALL, MOVE_HYDRO_PUMP, MOVE_HAIL, MOVE_THUNDERBOLT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 55,
    .species = SPECIES_PILOSWINE,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_BLIZZARD, MOVE_ROCK_SLIDE, MOVE_REST}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 56,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_BLIZZARD, MOVE_HAIL, MOVE_SHEER_COLD}
    }
};
// Elite Four Drake
static const struct TrainerMon sParty_Drake[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 56,
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_FLAMETHROWER, MOVE_SIGNAL_BEAM, MOVE_CRUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 56,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_SHARP_BEAK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SKY_ATTACK, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE, MOVE_DOUBLE_EDGE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 56,
    .species = SPECIES_HUNTAIL,
    .heldItem = ITEM_PETAYA_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_HYDRO_PUMP, MOVE_CONFUSE_RAY}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 56,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_REST, MOVE_SLEEP_TALK, MOVE_SURF, MOVE_DRAGON_BREATH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 57,
    .species = SPECIES_SALAMENCE,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_CLAW, MOVE_ROCK_SLIDE, MOVE_CRUNCH}
    }
};
//Rustboro Gym Leader
static const struct TrainerMon sParty_Roxanne1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 13,
    .species = SPECIES_ANORITH,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SCRATCH, MOVE_HARDEN, MOVE_CUT, MOVE_NONE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 13,
    .species = SPECIES_LILEEP,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ASTONISH, MOVE_CONSTRICT, MOVE_HARDEN, MOVE_ABSORB}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 14,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROCK_THROW, MOVE_HARDEN, MOVE_HEADBUTT, MOVE_ROCK_TOMB}
    }
};
// Dewford Gym Leader
static const struct TrainerMon sParty_Brawly1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 18,
    .species = SPECIES_MAKUHITA,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_VITAL_THROW, MOVE_REVERSAL, MOVE_BULK_UP, MOVE_FAINT_ATTACK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 18,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CONFUSION, MOVE_THUNDER_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 19,
    .species = SPECIES_BRELOOM,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TACKLE, MOVE_MEGA_DRAIN, MOVE_BULK_UP, MOVE_STUN_SPORE}
    }
};
// Mauville Gym Leader
static const struct TrainerMon sParty_Wattson1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_CHINCHOU,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SHOCK_WAVE, MOVE_BUBBLE_BEAM, MOVE_ICY_WIND, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDER_SHOCK, MOVE_THUNDER_WAVE, MOVE_SUPERSONIC, MOVE_SONIC_BOOM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SPARK, MOVE_CHARM, MOVE_QUICK_ATTACK, MOVE_MAGICAL_LEAF}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 25,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_QUICK_ATTACK, MOVE_BITE, MOVE_SHOCK_WAVE, MOVE_HOWL}
    }
};

static const struct TrainerMon sParty_Flannery1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 31,
    .species = SPECIES_VULPIX,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_OVERHEAT, MOVE_WILL_O_WISP, MOVE_ROAR, MOVE_SUNNY_DAY}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 31,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_OVERHEAT, MOVE_ROCK_THROW, MOVE_LIGHT_SCREEN, MOVE_SUNNY_DAY}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 31,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_OVERHEAT, MOVE_MAGNITUDE, MOVE_SUNNY_DAY, MOVE_ATTRACT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_BODY_SLAM, MOVE_ATTRACT}
    }
};
//Petalburg Gym Leader
static const struct TrainerMon sParty_Norman1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_VIGOROTH,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SLASH, MOVE_FACADE, MOVE_ENCORE, MOVE_FAINT_ATTACK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_GIRAFARIG,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FACADE, MOVE_PSYBEAM, MOVE_BITE, MOVE_SHOCK_WAVE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PURSUIT, MOVE_BELLY_DRUM, MOVE_FACADE, MOVE_DIG}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 34,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_COUNTER, MOVE_YAWN, MOVE_FACADE, MOVE_FAINT_ATTACK}
    }
};
// Fortree Gym Leader
static const struct TrainerMon sParty_Winona1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_AERIAL_ACE, MOVE_MAGICAL_LEAF, MOVE_EARTHQUAKE, MOVE_WHIRLWIND}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_AERIAL_ACE, MOVE_STEEL_WING, MOVE_TAKE_DOWN, MOVE_WHIRLWIND}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_WATER_PULSE, MOVE_SHOCK_WAVE, MOVE_ICE_BEAM, MOVE_AERIAL_ACE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_WHIRLWIND, MOVE_MUD_SLAP, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_FLAMETHROWER, MOVE_DRAGON_DANCE, MOVE_AERIAL_ACE}
    }
};
// Mossdeep Gym Leader
static const struct TrainerMon sParty_TateAndLiza1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 44,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 44,
    .species = SPECIES_XATU,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_SUNNY_DAY, MOVE_GIGA_DRAIN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 44,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EXTRASENSORY, MOVE_HI_JUMP_KICK, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 44,
    .species = SPECIES_CHIMECHO,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_WISH, MOVE_HEAL_BELL }
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_HYPNOSIS, MOVE_CALM_MIND}
    },
    {
    .ivs = BEST_IV_SPREAD,
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
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_WATER_PULSE, MOVE_ATTRACT, MOVE_SWEET_KISS, MOVE_FLAIL}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_AMNESIA, MOVE_EARTHQUAKE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_SEALEO,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ENCORE, MOVE_BODY_SLAM, MOVE_AURORA_BEAM, MOVE_WATER_PULSE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_WATER_PULSE, MOVE_CRABHAMMER, MOVE_TAUNT, MOVE_LEER}
    },
    {
    .ivs = BEST_IV_SPREAD,
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
    .ivs = BEST_IV_SPREAD,
    .lvl = 14,
    .species = SPECIES_MEDITITE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 14,
    .species = SPECIES_RALTS,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Trick House 2
static const struct TrainerMon sParty_Ted[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_KIRLIA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Trick House 2
static const struct TrainerMon sParty_Paul[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 20,
    .species = SPECIES_NUMEL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 21,
    .species = SPECIES_ODDISH,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 20,
    .species = SPECIES_GULPIN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Jerry2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_KIRLIA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_MEDITITE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Jerry3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_KIRLIA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_MEDITITE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Jerry4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 44,
    .species = SPECIES_GARDEVOIR,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 44,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Jerry5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 61,
    .species = SPECIES_GARDEVOIR,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 61,
    .species = SPECIES_BANETTE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 61,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 116 School Kid
static const struct TrainerMon sParty_Karen1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 12,
    .species = SPECIES_SHROOMISH,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Trick House 2 
static const struct TrainerMon sParty_Georgia[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 20,
    .species = SPECIES_SURSKIT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 22,
    .species = SPECIES_BEAUTIFLY,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Karen2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_LOUDRED,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Karen3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_LOUDRED,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Karen4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_LOUDRED,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Karen5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 60,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 60,
    .species = SPECIES_WHISCASH,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 60,
    .species = SPECIES_TROPIUS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 60,
    .species = SPECIES_EXPLOUD,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 121 Sr and Jr
static const struct TrainerMon sParty_KateAndJoy[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_SPINDA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_HYPNOSIS, MOVE_PSYBEAM, MOVE_DIZZY_PUNCH, MOVE_TEETER_DANCE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_SLAKING,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_YAWN, MOVE_SLACK_OFF, MOVE_FAINT_ATTACK, MOVE_FURY_SWIPES }
    }
};
// Route 117 Sr and Jr
static const struct TrainerMon sParty_AnnaAndMeg1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 19,
    .species = SPECIES_ZIGZAGOON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_NONE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 19,
    .species = SPECIES_MAKUHITA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 54,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_SHADOW_BALL}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 54,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_SHADOW_BALL}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 66,
    .species = SPECIES_MACHAMP,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_REVENGE, MOVE_SEISMIC_TOSS, MOVE_ROCK_SLIDE, MOVE_FIRE_PUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 66,
    .species = SPECIES_FURRET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EXTREME_SPEED, MOVE_IRON_TAIL, MOVE_DIG, MOVE_FOCUS_ENERGY}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BODY_SLAM, MOVE_FOCUS_ENERGY, MOVE_BRICK_BREAK, MOVE_NONE}
    }
};
//Winstrate House
static const struct TrainerMon sParty_Victor[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 19,
    .species = SPECIES_TAILLOW,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 19,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 103 Pokefan
static const struct TrainerMon sParty_Miguel1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 20,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// SS Tidal Pokefan Colton (all gen 2 baby from nat dex)
static const struct TrainerMon sParty_Colton[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 56,
    .species = SPECIES_TOGEPI,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 55,
    .species = SPECIES_SMOOCHUM,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 56,
    .species = SPECIES_CLEFFA,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 57,
    .species = SPECIES_MAGBY,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 56,
    .species = SPECIES_ELEKID,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_TYROGUE,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Miguel2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Miguel3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Miguel4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_CHANSEY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Miguel5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 60,
    .species = SPECIES_BLISSEY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 60,
    .species = SPECIES_BLISSEY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 60,
    .species = SPECIES_PERSIAN,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 60,
    .species = SPECIES_BLISSEY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 61,
    .species = SPECIES_DELCATTY,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Winstrate House
static const struct TrainerMon sParty_Victoria[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 21,
    .species = SPECIES_ROSELIA,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_POISON_STING, MOVE_STUN_SPORE, MOVE_MEGA_DRAIN, MOVE_LEECH_SEED}
    }
};
// Route 121 PokefanF
static const struct TrainerMon sParty_Vanessa[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_PIKACHU,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Sootopolis Gym Pokefan 2 (Highest Level - Double Battle w Olivia)
static const struct TrainerMon sParty_Bethany[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_AZURILL,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_MARILL,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 110 PokefanF 1
static const struct TrainerMon sParty_Isabel1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 17,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDER_SHOCK, MOVE_GROWL, MOVE_LIGHT_SCREEN, MOVE_FLASH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 18,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDER_SHOCK, MOVE_HELPING_HAND, MOVE_LIGHT_SCREEN, MOVE_QUICK_ATTACK}
    }
};

static const struct TrainerMon sParty_Isabel2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Isabel3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Isabel4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Isabel5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 59,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 57,
    .species = SPECIES_ILLUMISE,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 57,
    .species = SPECIES_VOLBEAT,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 59,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 115 Surf Expert 
static const struct TrainerMon sParty_Timothy1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 34,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Timothy2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ARM_THRUST, MOVE_KNOCK_OFF, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Timothy3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 44,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ARM_THRUST, MOVE_KNOCK_OFF, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Timothy4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ARM_THRUST, MOVE_BELLY_DRUM, MOVE_SAND_ATTACK, MOVE_DIG}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Timothy5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 60,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 60,
    .species = SPECIES_PINSIR,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 61,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Winstrate House
static const struct TrainerMon sParty_Vicky[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 23,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_HI_JUMP_KICK, MOVE_MEDITATE, MOVE_CONFUSION, MOVE_CALM_MIND}
    }
};
// Mt Chimney ExpertF
static const struct TrainerMon sParty_Shelby1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Shelby2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_MEDITITE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Shelby3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Shelby4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Shelby5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 61,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 60,
    .species = SPECIES_BANETTE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 61,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 102 Youngster 1
static const struct TrainerMon sParty_Calvin1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_POOCHYENA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 104 Youngster
static const struct TrainerMon sParty_Billy[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 8,
    .species = SPECIES_ZIGZAGOON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 10,
    .species = SPECIES_SEEDOT,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Rustboro Gym Youngster 1 (One by himself)
static const struct TrainerMon sParty_Josh[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 11,
    .species = SPECIES_GEODUDE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_NONE, MOVE_NONE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 11,
    .species = SPECIES_ARON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TACKLE, MOVE_HARDEN, MOVE_NONE, MOVE_NONE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 12,
    .species = SPECIES_GEODUDE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_NONE, MOVE_NONE}
    }
};
//Rustboro Gym Youngster 2 (Potential Double Battle with Marc)
static const struct TrainerMon sParty_Tommy[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 11,
    .species = SPECIES_GEODUDE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_NONE, MOVE_NONE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 12,
    .species = SPECIES_ARON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_METAL_CLAW, MOVE_TACKLE, MOVE_HARDEN, MOVE_NONE}
    },
};
// Route 116 Youngster 1
static const struct TrainerMon sParty_Joey[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 12,
    .species = SPECIES_MACHOP,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 12,
    .species = SPECIES_VULPIX,
    .evs = {84, 84, 84, 84, 84, 84}
    },
};
// Mauville Gym Youngster
static const struct TrainerMon sParty_Ben[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 20,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_GROWL, MOVE_THUNDERBOLT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 19,
    .species = SPECIES_GULPIN,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_AMNESIA, MOVE_SLUDGE, MOVE_YAWN, MOVE_POUND}
    }
};
// Victory Road CooltrainerM (Iconic Double Battle w Katelynn)
static const struct TrainerMon sParty_Quincy[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_SLAKING,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ATTRACT, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_DUSCLOPS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SKILL_SWAP, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_TOXIC}
    }
};
// Victory Road CooltrainerF (Iconic Double Battle w Quincy)
static const struct TrainerMon sParty_Katelynn[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_GARDEVOIR,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SKILL_SWAP, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_CALM_MIND}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_SLAKING,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK}
    }
};
// Route 113 Youngster 1
static const struct TrainerMon sParty_Jaylen[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 25,
    .species = SPECIES_TRAPINCH,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 113 Youngster 2
static const struct TrainerMon sParty_Dillon[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 26,
    .species = SPECIES_ARON,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Calvin2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_MIGHTYENA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Calvin3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_SWELLOW,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_MIGHTYENA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Calvin4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 34,
    .species = SPECIES_SWELLOW,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_MIGHTYENA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Calvin5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 54,
    .species = SPECIES_SWELLOW,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 54,
    .species = SPECIES_PIDGEOT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 54,
    .species = SPECIES_RATICATE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 52,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_MIGHTYENA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Trick House 1 (Cut) Youngster
static const struct TrainerMon sParty_Eddie[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 18,
    .species = SPECIES_NINCADA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 18,
    .species = SPECIES_NUZLEAF,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 102 Youngster 2
static const struct TrainerMon sParty_Allen[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_ZIGZAGOON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 6,
    .species = SPECIES_TAILLOW,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 110 Youngster 1
static const struct TrainerMon sParty_Timmy[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 18,
    .species = SPECIES_ARON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 18,
    .species = SPECIES_GULPIN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

// Gym Leader
static const struct TrainerMon sParty_Wallace1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 50,
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_PETAYA_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 50,
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_SILVER_POWDER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_HYDRO_PUMP, MOVE_SIGNAL_BEAM, MOVE_STUN_SPORE, MOVE_BLIZZARD}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 50,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_SURF, MOVE_RAIN_DANCE, MOVE_YAWN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 50,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_MYSTIC_WATER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GIGA_DRAIN, MOVE_WATER_PULSE, MOVE_LEECH_SEED, MOVE_DOUBLE_TEAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
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
    .ivs = BEST_IV_SPREAD,
    .lvl = 77,
    .species = SPECIES_WAILORD,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_SPOUT, MOVE_DOUBLE_EDGE, MOVE_BLIZZARD}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 75,
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP, MOVE_TOXIC, MOVE_ICE_BEAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 76,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_MIRACLE_SEED,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_GIGA_DRAIN, MOVE_SURF, MOVE_ICE_BEAM, MOVE_RAIN_DANCE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 76,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_FOCUS_BAND,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_EARTHQUAKE, MOVE_SURF, MOVE_YAWN, MOVE_ICY_WIND}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 76,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {0, 252, 0, 0, 0, 252},
    .moves = {MOVE_BOUNCE, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_SURF}
    },
    {
    .ivs = BEST_IV_SPREAD,
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
    .ivs = BEST_IV_SPREAD,
    .lvl = 17,
    .species = SPECIES_BARBOACH,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 17,
    .species = SPECIES_TENTACOOL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 21,
    .species = SPECIES_MAGIKARP,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 104 North Fisherman
static const struct TrainerMon sParty_Ivan[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 8,
    .species = SPECIES_MAGIKARP,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 10,
    .species = SPECIES_GOLDEEN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 114 Fisherman 3
static const struct TrainerMon sParty_Claude[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 25,
    .species = SPECIES_BARBOACH,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 25,
    .species = SPECIES_GOLDEEN,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 25,
    .species = SPECIES_BARBOACH,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 106 Fisherman 2
static const struct TrainerMon sParty_Elliot1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 14,
    .species = SPECIES_TENTACOOL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 14,
    .species = SPECIES_CORPHISH,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 106 Fisherman 1
static const struct TrainerMon sParty_Ned[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 13,
    .species = SPECIES_HORSEA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 13,
    .species = SPECIES_TENTACOOL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 13,
    .species = SPECIES_HORSEA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
};
// Route 110 Fisherman
static const struct TrainerMon sParty_Dale[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 18,
    .species = SPECIES_WAILMER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 17,
    .species = SPECIES_TENTACOOL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 18,
    .species = SPECIES_WAILMER,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 114 Fisherman 1
static const struct TrainerMon sParty_Nolan[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 22,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 118 East Fisherman
static const struct TrainerMon sParty_Barny[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_BARBOACH,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_CARVANHA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 118 Mauville Fisherman
static const struct TrainerMon sParty_Wade[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 21,
    .species = SPECIES_BARBOACH,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 109 Surf Fisherman 1
static const struct TrainerMon sParty_Carter[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_WAILMER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_TENTACRUEL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Elliot2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 26,
    .species = SPECIES_TENTACOOL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_CORPHISH,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Elliot3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_TENTACOOL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_CRAWDAUNT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Elliot4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 34,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_CRAWDAUNT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_TENTACRUEL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 34,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Elliot5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 62,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 62,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 62,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 62,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 62,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 62,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 132 Fisherman
static const struct TrainerMon sParty_Ronald[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 21,
    .species = SPECIES_MAGIKARP,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Cycling Road mTriathlete
static const struct TrainerMon sParty_Jacob[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 20,
    .species = SPECIES_TAILLOW,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 22,
    .species = SPECIES_VOLTORB,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 20,
    .species = SPECIES_PONYTA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Cycling Road mTriathlete
static const struct TrainerMon sParty_Anthony[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 20,
    .species = SPECIES_PLUSLE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 20,
    .species = SPECIES_DODUO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Cycling Road mTriathlete 
static const struct TrainerMon sParty_Benjamin1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 22,
    .species = SPECIES_MAGNEMITE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Benjamin2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_MAGNETON,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Benjamin3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_MAWILE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_AGGRON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_MAGNETON,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Benjamin4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 56,
    .species = SPECIES_SCYTHER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 57,
    .species = SPECIES_MAWILE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 57,
    .species = SPECIES_AGGRON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_MAGNETON,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Benjamin5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_FORRETRESS,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_EXPLOSION, MOVE_SPIKES, MOVE_TOXIC, MOVE_PROTECT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_MAWILE,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_METAL_CLAW, MOVE_CRUNCH, MOVE_SLUDGE_BOMB, MOVE_ROCK_SLIDE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 0, 252},
    .moves = {MOVE_TOXIC, MOVE_WHIRLWIND, MOVE_FLY, MOVE_TORMENT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_CHESTO_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 252, 0, 252, 0},
    .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_REST, MOVE_TRI_ATTACK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_METAGROSS,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_METEOR_MASH, MOVE_BRICK_BREAK, MOVE_ROCK_SLIDE, MOVE_EXPLOSION}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_SCIZOR,
    .heldItem = ITEM_SALAC_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_TWINEEDLE, MOVE_REVERSAL, MOVE_ENDURE, MOVE_BATON_PASS}
    }
};
// Cycling Road fTriathlete
static const struct TrainerMon sParty_Abigail1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 23,
    .species = SPECIES_MAGNEMITE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Cycling Road fTriathlete
static const struct TrainerMon sParty_Jasmine[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 20,
    .species = SPECIES_DODUO,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 22,
    .species = SPECIES_PONYTA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 20,
    .species = SPECIES_VOLTORB,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Abigail2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_MAGNEMITE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Abigail3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_MAGNETON,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Abigail4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_MAGNETON,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Abigail5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 61,
    .species = SPECIES_AIPOM,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 62,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 59,
    .species = SPECIES_MAGNETON,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 117 Triathlete
static const struct TrainerMon sParty_Dylan1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 19,
    .species = SPECIES_DODUO,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 19,
    .species = SPECIES_PONYTA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Dylan2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_DODUO,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 34,
    .species = SPECIES_PONYTA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Dylan3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 34,
    .species = SPECIES_DODUO,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_PONYTA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Dylan4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_DODRIO,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_PONYTA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Dylan5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_DODRIO,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_RAPIDASH,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 117 TriathleteF
static const struct TrainerMon sParty_Maria1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 21,
    .species = SPECIES_DODUO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Maria2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_DODUO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Maria3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 34,
    .species = SPECIES_DODUO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Maria4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 55,
    .species = SPECIES_DODRIO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Maria5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 64,
    .species = SPECIES_DODRIO,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 64,
    .species = SPECIES_RAPIDASH,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 127 TriathleteM
static const struct TrainerMon sParty_Camden[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_STARMIE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_LUVDISC,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Abandoned Ship
static const struct TrainerMon sParty_Demetrius[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_MAGCARGO,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_MANECTRIC,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 128 TriatheleteM
static const struct TrainerMon sParty_Isaiah1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_STARMIE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 126 Triathlete
static const struct TrainerMon sParty_Pablo1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_LANTURN,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_STARMIE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 129 TriathleteM
static const struct TrainerMon sParty_Chase[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 44,
    .species = SPECIES_RELICANTH,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Isaiah2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_STARMIE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Isaiah3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_STARMIE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Isaiah4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_STARMIE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Isaiah5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 62,
    .species = SPECIES_KINGLER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 62,
    .species = SPECIES_STARMIE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 62,
    .species = SPECIES_LANTURN,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 62,
    .species = SPECIES_STARMIE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 126 SwimmerF
static const struct TrainerMon sParty_Isobel[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 42,
    .species = SPECIES_GOLDUCK,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 127 TriathleteF
static const struct TrainerMon sParty_Donny[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_PELIPPER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_STARYU,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 131 TriathleteF
static const struct TrainerMon sParty_Talia[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 128 TriathleteF
static const struct TrainerMon sParty_Katelyn1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_STARMIE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 129 TriathleteF
static const struct TrainerMon sParty_Allison[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_PELIPPER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_SEAKING,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Katelyn2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_STARMIE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Katelyn3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 57,
    .species = SPECIES_STARMIE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Katelyn4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 64,
    .species = SPECIES_STARMIE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Katelyn5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 75,
    .species = SPECIES_STARMIE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Meteor Falls Dragon Tamer
static const struct TrainerMon sParty_Nicolas1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_ALTARIA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_ALTARIA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Nicolas2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 55,
    .species = SPECIES_ALTARIA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 56,
    .species = SPECIES_ALTARIA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Nicolas3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 57,
    .species = SPECIES_ALTARIA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_FLYGON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_ALTARIA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Nicolas4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 52,
    .species = SPECIES_SHELGON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 60,
    .species = SPECIES_ALTARIA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 59,
    .species = SPECIES_FLYGON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 61,
    .species = SPECIES_ALTARIA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Nicolas5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_REST}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_KINGS_ROCK,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_DYNAMIC_PUNCH, MOVE_EARTHQUAKE, MOVE_OUTRAGE, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_SALAMENCE,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 0, 0, 252},
    .moves = {MOVE_DRAGON_DANCE, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_EARTHQUAKE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SIGNAL_BEAM, MOVE_FIRE_BLAST}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_DOUBLE_EDGE, MOVE_SKY_ATTACK, MOVE_AERIAL_ACE, MOVE_THIEF}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_SALAC_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_FLAIL, MOVE_HYDRO_PUMP, MOVE_ENDURE, MOVE_ICE_BEAM}
    }
};
// Route 134 Dragon Tamer
static const struct TrainerMon sParty_Aaron[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_BAGON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DRAGON_BREATH, MOVE_HEADBUTT, MOVE_FOCUS_ENERGY, MOVE_EMBER}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_SHELGON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DRAGON_BREATH, MOVE_HEADBUTT, MOVE_FOCUS_ENERGY, MOVE_FLAMETHROWER}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 52,
    .species = SPECIES_SHELGON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DRAGON_BREATH, MOVE_HEADBUTT, MOVE_FOCUS_ENERGY, MOVE_FIRE_BLAST}
    }
};
//Route 118 East Bird Keeper 2
static const struct TrainerMon sParty_Perry[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 119 Bird Keeper 2
static const struct TrainerMon sParty_Hugh[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_PELIPPER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_TROPIUS,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 119 Bird Keeper 1
static const struct TrainerMon sParty_Phil[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_SWELLOW,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Fortree Gym Bird Keeper 2
static const struct TrainerMon sParty_Jared[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_DODUO,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_TROPIUS,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Fortree Gym Bird Keeper 1
static const struct TrainerMon sParty_Humberto[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_SKARMORY,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 125 Bird Keeper
static const struct TrainerMon sParty_Presley[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_TROPIUS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_XATU,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Fortree Gym Bird Keeper 3 (Double Battle with Flint)
static const struct TrainerMon sParty_Edwardo[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_VIBRAVA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_MASQUERAIN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 120 Bird Keeper 2
static const struct TrainerMon sParty_Colin[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_XATU,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 120 Bird Keeper 1
static const struct TrainerMon sParty_Robert1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_XATU,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Trick Room 6
static const struct TrainerMon sParty_Benny[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_SWELLOW,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_XATU,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 118 East Bird Keeper 1
static const struct TrainerMon sParty_Chester[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_TAILLOW,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_SWELLOW,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Robert2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_XATU,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_SWELLOW,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Robert3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_XATU,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_SWELLOW,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Robert4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 56,
    .species = SPECIES_XATU,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 56,
    .species = SPECIES_NOCTOWL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 56,
    .species = SPECIES_PIDGEOT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 56,
    .species = SPECIES_SKARMORY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 56,
    .species = SPECIES_SWELLOW,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Robert5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_SALAMENCE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_HYDRO_PUMP, MOVE_FIRE_BLAST, MOVE_DRAGON_CLAW, MOVE_WISH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_XATU,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_GIGA_DRAIN, MOVE_WISH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_PIDGEOT,
    .heldItem = ITEM_SHARP_BEAK,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_EXTREME_SPEED, MOVE_SKY_ATTACK, MOVE_TOXIC, MOVE_STEEL_WING}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_CHESTO_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 0, 0, 252},
    .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_REST, MOVE_BODY_SLAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_GLIGAR,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_SWORDS_DANCE, MOVE_AERIAL_ACE, MOVE_EARTHQUAKE, MOVE_SLUDGE_BOMB}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_SKY_ATTACK, MOVE_FACADE, MOVE_DOUBLE_EDGE, MOVE_STEEL_WING}
    }
};
// Route 134 Bird Keeper
static const struct TrainerMon sParty_Alex[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_XATU,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_SWELLOW,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 133 Bird Keeper
static const struct TrainerMon sParty_Beck[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_TROPIUS,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 119 (Post Weather Insitute) Ninja Boy 1
static const struct TrainerMon sParty_Yasu[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_NINJASK,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 119 Ninja Boy
static const struct TrainerMon sParty_Takashi[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_NINJASK,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_KOFFING,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Victory Road CooltrainerF
static const struct TrainerMon sParty_Dianne[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SKILL_SWAP, MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_NONE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_SURF, MOVE_NONE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SIGNAL_BEAM, MOVE_ICE_BEAM, MOVE_HYDRO_PUMP, MOVE_NONE}
    }
};
// Abandoned Ship
static const struct TrainerMon sParty_Jani[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 113 Ninja Boy 2
static const struct TrainerMon sParty_Lao1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 23,
    .species = SPECIES_KOFFING,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SMOG, MOVE_SELF_DESTRUCT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_GULPIN,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SLUDGE, MOVE_POUND, MOVE_ENCORE, MOVE_YAWN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 25,
    .species = SPECIES_KOFFING,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    }
};
// Route 113 Ninja Boy 1
static const struct TrainerMon sParty_Lung[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_NINCADA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_NINJASK,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Lao2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_SWALOT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_CROBAT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_WEEZING,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_WEEZING,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Lao3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 44,
    .species = SPECIES_SWALOT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 44,
    .species = SPECIES_CROBAT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_WEEZING,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_WEEZING,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Lao4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 55,
    .species = SPECIES_SWALOT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 55,
    .species = SPECIES_CROBAT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 55,
    .species = SPECIES_WEEZING,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 55,
    .species = SPECIES_WEEZING,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Lao5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_MUK,
    .heldItem = ITEM_BRIGHT_POWDER,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_TOXIC, MOVE_ACID_ARMOR}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_VENUSAUR,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_LEECH_SEED, MOVE_EARTHQUAKE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_NIDOKING,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SLUDGE_BOMB, MOVE_TAUNT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_WEEZING,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 152, 0, 0, 0, 100},
    .moves = {MOVE_SLUDGE_BOMB, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT, MOVE_DESTINY_BOND}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_PETAYA_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_ICE_BEAM, MOVE_HYDRO_PUMP, MOVE_GIGA_DRAIN, MOVE_ENDURE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_CROBAT,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_SLUDGE_BOMB, MOVE_AERIAL_ACE, MOVE_STEEL_WING, MOVE_BITE}
    }
    };
// Dewford Gym Battle Girl 3 (Top Right Corner)
static const struct TrainerMon sParty_Jocelyn[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 15,
    .species = SPECIES_MEDITITE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
     {
    .ivs = BEST_IV_SPREAD,
    .lvl = 15,
    .species = SPECIES_SHROOMISH,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Dewford Gym Battle Girl 1 (Bottom Right/First)
static const struct TrainerMon sParty_Laura[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 16,
    .species = SPECIES_MEDITITE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 115 Battle Girl
static const struct TrainerMon sParty_Cyndy1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_MEDITITE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Trick Room 4
static const struct TrainerMon sParty_Cora[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Trick Room 4
static const struct TrainerMon sParty_Paula[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Cyndy2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_MEDITITE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Cyndy3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Cyndy4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 54,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 54,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Cyndy5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 113 Parasol Lady
static const struct TrainerMon sParty_Madeline1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 26,
    .species = SPECIES_NUMEL,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EMBER, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};
// Route 120 Parasol Lady 1
static const struct TrainerMon sParty_Clarissa[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 34,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 34,
    .species = SPECIES_WAILMER,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 120 Parasol Lady 2
static const struct TrainerMon sParty_Angelica[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_CASTFORM,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_RAIN_DANCE, MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_WATER_PULSE}
    }
};

static const struct TrainerMon sParty_Madeline2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_NUMEL,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EMBER, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_CAMERUPT,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EMBER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 54,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_LEECH_SEED, MOVE_MEGA_DRAIN, MOVE_GRASS_WHISTLE, MOVE_SUNNY_DAY}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 54,
    .species = SPECIES_CAMERUPT,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 66,
    .species = SPECIES_CAMERUPT,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_EARTHQUAKE, MOVE_SUNNY_DAY}
    }
};
// Route 105 SwimmerF
static const struct TrainerMon sParty_Beverly[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_TENTACOOL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_TENTACOOL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 105 SwimmerF
static const struct TrainerMon sParty_Imani[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_CORSOLA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 106 Surf SwimmerF
static const struct TrainerMon sParty_Kyla[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_WAILMER,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 107 SwimmerF
static const struct TrainerMon sParty_Denise[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_SPHEAL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_GOLDEEN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 107 SwimmerF
static const struct TrainerMon sParty_Beth[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_CORSOLA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 108 SwimmerF
static const struct TrainerMon sParty_Tara[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_HORSEA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_AZUMARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 108 SwimmerF
static const struct TrainerMon sParty_Missy[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_GOLDEEN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 109 Surf SwimmerF
static const struct TrainerMon sParty_Alice[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_GOLDEEN,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_PELIPPER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_GOLDEEN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 124 SwimmerF
static const struct TrainerMon sParty_Jenny1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_AZUMARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_WAILMER,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 124 SwimmerF
static const struct TrainerMon sParty_Grace[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_WHISCASH,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_WHISCASH,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 125 SwimmerF
static const struct TrainerMon sParty_Tanya[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 42,
    .species = SPECIES_LUVDISC,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 125 SwimmerF
static const struct TrainerMon sParty_Sharon[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_SEAKING,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 126 SwimmerF
static const struct TrainerMon sParty_Nikki[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_AZUMARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_SEALEO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 126
static const struct TrainerMon sParty_Brenda[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 42,
    .species = SPECIES_SEAKING,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 130 SwimmerF (Potential Double with Santiago)
static const struct TrainerMon sParty_Katie[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_SEAKING,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_WALREIN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 131 SwimmerF
static const struct TrainerMon sParty_Susie[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_LUVDISC,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 131 SwimmerF
static const struct TrainerMon sParty_Kara[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_SEAKING,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 132 SwimmerF
static const struct TrainerMon sParty_Dana[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_AZUMARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 126 SwimmerF
static const struct TrainerMon sParty_Sienna[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_LUDICOLO,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_PELIPPER,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 133 SwimmerF
static const struct TrainerMon sParty_Debra[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_SEAKING,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 133 SwimmerF
static const struct TrainerMon sParty_Linda[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_SEADRA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_SEADRA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Kaylee[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_LANTURN,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_PELIPPER,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 134 SwimmerF
static const struct TrainerMon sParty_Laurel[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_LUVDISC,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_LUVDISC,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 128 SwimmerF
static const struct TrainerMon sParty_Carlee[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_GOREBYSS,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Jenny2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_AZUMARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_WAILORD,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Jenny3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 52,
    .species = SPECIES_LUDICOLO,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 52,
    .species = SPECIES_AZUMARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 52,
    .species = SPECIES_WAILORD,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Jenny4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 44,
    .species = SPECIES_WHISCASH,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 52,
    .species = SPECIES_LUDICOLO,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 52,
    .species = SPECIES_STARMIE,
    .evs = {84, 84, 84, 84, 84, 84}
    },

    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_WAILORD,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Jenny5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_QUAGSIRE,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 0, 252, 252},
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_YAWN, MOVE_RAIN_DANCE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_BLASTOISE,
    .heldItem = ITEM_MYSTIC_WATER,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_HYDRO_CANNON, MOVE_RAIN_DANCE, MOVE_ICE_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_2,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_TEETER_DANCE, MOVE_LEECH_SEED, MOVE_RAIN_DANCE, MOVE_SURF}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_VAPOREON,
    .heldItem = ITEM_WIKI_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 0, 252, 252},
    .moves = {MOVE_ACID_ARMOR, MOVE_SURF, MOVE_ICE_BEAM, MOVE_BATON_PASS}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_MAGNET,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_STARMIE,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_THUNDERBOLT}
    }
};
//Route 111 Desert Picnicker 1
static const struct TrainerMon sParty_Heidi[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_SANDSHREW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DIG, MOVE_SAND_ATTACK, MOVE_POISON_STING, MOVE_SLASH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_CACNEA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ABSORB, MOVE_MUD_SLAP, MOVE_PURSUIT, MOVE_SPIKES}
    }
};
//Route 111 Desert Picnicker 2
static const struct TrainerMon sParty_Becky[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_BALTOY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_MUD_SLAP, MOVE_RAPID_SPIN, MOVE_PSYBEAM, MOVE_DIG}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_MARILL,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROLLOUT, MOVE_BUBBLE_BEAM, MOVE_TAIL_WHIP, MOVE_DEFENSE_CURL}
    }
};
// Route 112 South Section Picnicker 1
static const struct TrainerMon sParty_Carol[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 23,
    .species = SPECIES_TAILLOW,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 23,
    .species = SPECIES_LOMBRE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 114 Picnicker 2
static const struct TrainerMon sParty_Nancy[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 26,
    .species = SPECIES_MARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 26,
    .species = SPECIES_LOMBRE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Trick House 3 Picknicker
static const struct TrainerMon sParty_Martha[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_SKITTY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_SPOINK,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Jagged Pass Picnicker
static const struct TrainerMon sParty_Diana1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_VULPIX,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_GLOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_SWABLU,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Mt Pyre Interior 6F PsychicM
static const struct TrainerMon sParty_Cedric[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_WOBBUFFET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DESTINY_BOND, MOVE_SAFEGUARD, MOVE_COUNTER, MOVE_MIRROR_COAT}
    }
};
//Route 111 Mid Picnicker
static const struct TrainerMon sParty_Irene[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_SHROOMISH,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_MARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Diana2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_VULPIX,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_GLOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_SWABLU,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Diana3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 42,
    .species = SPECIES_VULPIX,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 42,
    .species = SPECIES_VILEPLUME,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 42,
    .species = SPECIES_SWABLU,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Diana4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_VULPIX,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_VILEPLUME,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_ALTARIA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Diana5[] = {
   {
    .ivs = BEST_IV_SPREAD,
    .lvl = 59,
    .species = SPECIES_NINETALES,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 60,
    .species = SPECIES_VILEPLUME,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 61,
    .species = SPECIES_ALTARIA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 103 Twins
static const struct TrainerMon sParty_AmyAndLiv1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 18,
    .species = SPECIES_PLUSLE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDER_SHOCK, MOVE_GROWL, MOVE_LIGHT_SCREEN, MOVE_QUICK_ATTACK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 18,
    .species = SPECIES_MINUN,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDER_SHOCK, MOVE_GROWL, MOVE_FLASH, MOVE_QUICK_ATTACK}
    }
};

static const struct TrainerMon sParty_AmyAndLiv2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_PLUSLE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_MINUN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 104 North Twins
static const struct TrainerMon sParty_GinaAndMia1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 9,
    .species = SPECIES_SEEDOT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 9,
    .species = SPECIES_LOTAD,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 123 (via 118 from mauville) Twins
static const struct TrainerMon sParty_MiuAndYuki[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_BEAUTIFLY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_DUSTOX,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_AmyAndLiv3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_PLUSLE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_MINUN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_GinaAndMia2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 12,
    .species = SPECIES_DUSKULL,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_NIGHT_SHADE, MOVE_DISABLE, MOVE_NONE, MOVE_NONE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 12,
    .species = SPECIES_SHROOMISH,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ABSORB, MOVE_LEECH_SEED, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AmyAndLiv4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_PLUSLE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_MINUN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_AmyAndLiv5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 64,
    .species = SPECIES_PLUSLE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 64,
    .species = SPECIES_MINUN,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND}
    }
};

static const struct TrainerMon sParty_AmyAndLiv6[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 70,
    .species = SPECIES_PLUSLE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDER, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 70,
    .species = SPECIES_MINUN,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDER, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND}
    }
};
// Route 109 Sailor 1
static const struct TrainerMon sParty_Huey[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 16,
    .species = SPECIES_WINGULL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 16,
    .species = SPECIES_MACHOP,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 109 Sailor 2 (Potential Double Battle w Hailey or Ricky)
static const struct TrainerMon sParty_Edmond[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 17,
    .species = SPECIES_SPHEAL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 125 Sailor
static const struct TrainerMon sParty_Ernest1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_PILOSWINE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_SNORUNT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 109 Seashore House Sailor
static const struct TrainerMon sParty_Dwayne[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 15,
    .species = SPECIES_TENTACOOL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 15,
    .species = SPECIES_MACHOP,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 15,
    .species = SPECIES_CLAMPERL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// SS Tidal Storage Sailor (nat dex)
static const struct TrainerMon sParty_Phillip[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_MANKEY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 52,
    .species = SPECIES_POLIWRATH,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_PRIMEAPE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// SS Tidal Storage Sailor (nat dex)
static const struct TrainerMon sParty_Leonard[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_POLIWHIRL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_HITMONTOP,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 54,
    .species = SPECIES_QWILFISH,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Abandoned Ship Sailor
static const struct TrainerMon sParty_Duncan[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_SPHEAL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_MACHOKE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Ernest2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_MACHAMP,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Ernest3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_PELIPPER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_MACHAMP,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Ernest4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_PELIPPER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_MACHAMP,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Ernest5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 62,
    .species = SPECIES_PELIPPER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 62,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 62,
    .species = SPECIES_MACHAMP,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Lavaridge Gym Hiker
static const struct TrainerMon sParty_Eli[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_GRAVELER,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Sootopolis Gym Pokefan 1 (Middle Level - Double Battle w Daphne)
static const struct TrainerMon sParty_Annika[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_FEEBAS,
    .heldItem = ITEM_BRIGHT_POWDER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_BLIZZARD, MOVE_RAIN_DANCE, MOVE_ATTRACT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_FEEBAS,
    .heldItem = ITEM_BRIGHT_POWDER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_BLIZZARD, MOVE_RAIN_DANCE, MOVE_ATTRACT}
    }
};
// Route 123 (via 118 from mauville) CooltrainerF
static const struct TrainerMon sParty_Jazmyn[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_ABSOL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 123 (via 123 with Cut) Ninja Boy
static const struct TrainerMon sParty_Jonas[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_WEEZING,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TOXIC, MOVE_THUNDER, MOVE_SELF_DESTRUCT, MOVE_SLUDGE_BOMB}
    }
};
// Route 123 (via 123 with Cut) 
static const struct TrainerMon sParty_Kayley[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_CASTFORM,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SUNNY_DAY, MOVE_WEATHER_BALL, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM}
    }
};
// Route 125 Expert
static const struct TrainerMon sParty_Auron[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_MANECTRIC,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_GLALIE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_BANETTE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 134 Sailor
static const struct TrainerMon sParty_Kelvin[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_MACHAMP,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_WALREIN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 134 CooltrainerF
static const struct TrainerMon sParty_Marley[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CRUNCH, MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT}
    }
};
// Route 134 Battle Girl
static const struct TrainerMon sParty_Reyna[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_PINSIR,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_HERACROSS,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 134 Sailor
static const struct TrainerMon sParty_Hudson[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_WAILORD,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_MACHAMP,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 133 Expert
static const struct TrainerMon sParty_Conor[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_HERACROSS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_DONPHAN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 110 Collector (Potential Double Battle with Joseph)
static const struct TrainerMon sParty_Edwin1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 18,
    .species = SPECIES_LOMBRE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 18,
    .species = SPECIES_NUZLEAF,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 115 Collector
static const struct TrainerMon sParty_Hector[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_ZANGOOSE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Magma Admin Space Center (Double SC)
static const struct TrainerMon sParty_TabithaMossdeep[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_CROBAT,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_WING_ATTACK, MOVE_GIGA_DRAIN, MOVE_POISON_FANG, MOVE_CONFUSE_RAY}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_AGGRON,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_IRON_TAIL, MOVE_PROTECT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_ZANGOOSE,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CRUSH_CLAW, MOVE_FAINT_ATTACK, MOVE_SUNNY_DAY,  MOVE_SWORDS_DANCE}
    }
};

static const struct TrainerMon sParty_Edwin2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_LOMBRE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_NUZLEAF,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Edwin3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_LUDICOLO,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_SHIFTRY,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Edwin4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_LUDICOLO,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_SHIFTRY,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Edwin5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 59,
    .species = SPECIES_LUDICOLO,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 59,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 59,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 59,
    .species = SPECIES_SHIFTRY,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Victory Road Pre Champion
static const struct TrainerMon sParty_WallyVR1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 52,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SING, MOVE_DOUBLE_EDGE, MOVE_CHARM, MOVE_FAINT_ATTACK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_DOUBLE_EDGE, MOVE_SUPERPOWER, MOVE_ICE_BEAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 52,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_SHARP_BEAK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_AERIAL_ACE, MOVE_EARTHQUAKE, MOVE_FIRE_BLAST, MOVE_DRAGON_DANCE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_ROSELIA,
    .heldItem = ITEM_PERSIM_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PETAL_DANCE, MOVE_LEECH_SEED, MOVE_SLUDGE_BOMB, MOVE_TOXIC}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 52,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_FOCUS_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_LIGHT_SCREEN, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_CALM_MIND, MOVE_DOUBLE_TEAM}
    }
};
// Rival 1
static const struct TrainerMon sParty_BrendanRoute103Mudkip[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 5,
    .species = SPECIES_TREECKO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Rival 3
static const struct TrainerMon sParty_BrendanRoute110Mudkip[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 22,
    .species = SPECIES_SPOINK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CONFUSION, MOVE_TACKLE, MOVE_CONFUSE_RAY, MOVE_PSYCH_UP}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 20,
    .species = SPECIES_TORKOAL,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SMOG, MOVE_EMBER, MOVE_SMOKESCREEN, MOVE_FIRE_SPIN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_GROVYLE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ABSORB, MOVE_QUICK_ATTACK, MOVE_FALSE_SWIPE, MOVE_RAZOR_LEAF}
    }
};
// Route 119 Rival 4 w Treecko
static const struct TrainerMon sParty_BrendanRoute119Mudkip[] = {
   {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_GRUMPIG,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SHOCK_WAVE, MOVE_REST, MOVE_SLEEP_TALK, MOVE_PSYBEAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_KECLEON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_SUBSTITUTE, MOVE_SLASH, MOVE_PSYBEAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_TORKOAL,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CURSE, MOVE_BODY_SLAM, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_GROVYLE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROCK_TOMB, MOVE_RAZOR_LEAF, MOVE_GROWTH, MOVE_SLASH}
    }
};
// Rival 1
static const struct TrainerMon sParty_BrendanRoute103Treecko[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 5,
    .species = SPECIES_TORCHIC,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Rival 3
static const struct TrainerMon sParty_BrendanRoute110Treecko[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 22,
    .species = SPECIES_SPOINK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CONFUSION, MOVE_TACKLE, MOVE_CONFUSE_RAY, MOVE_PSYCH_UP}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 20,
    .species = SPECIES_WAILMER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GROWL, MOVE_WATER_GUN, MOVE_WHIRLPOOL, MOVE_ASTONISH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_COMBUSKEN,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PECK, MOVE_FOCUS_ENERGY, MOVE_EMBER, MOVE_DOUBLE_KICK}
    }
};
// Route 119 Rival 4 w Torchic
static const struct TrainerMon sParty_BrendanRoute119Treecko[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_GRUMPIG,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SHOCK_WAVE, MOVE_REST, MOVE_SLEEP_TALK, MOVE_PSYBEAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_KECLEON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_SUBSTITUTE, MOVE_SLASH, MOVE_PSYBEAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_WAILMER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_WATER_PULSE, MOVE_ICE_BEAM, MOVE_GROWL, MOVE_ASTONISH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_COMBUSKEN,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FIRE_PUNCH, MOVE_ROLLING_KICK, MOVE_BULK_UP, MOVE_SUNNY_DAY}
    }
};
// Rival 1
static const struct TrainerMon sParty_BrendanRoute103Torchic[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 5,
    .species = SPECIES_MUDKIP,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Rival 3
static const struct TrainerMon sParty_BrendanRoute110Torchic[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 22,
    .species = SPECIES_SPOINK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CONFUSION, MOVE_TACKLE, MOVE_CONFUSE_RAY, MOVE_PSYCH_UP}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 20,
    .species = SPECIES_SHROOMISH,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TACKLE, MOVE_STUN_SPORE, MOVE_LEECH_SEED, MOVE_MEGA_DRAIN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_MARSHTOMP,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_MUD_SHOT, MOVE_ROCK_TOMB, MOVE_WATER_GUN, MOVE_TACKLE}
    }
};
// Route 119 Rival 4 w Mudkip
static const struct TrainerMon sParty_BrendanRoute119Torchic[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_GRUMPIG,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SHOCK_WAVE, MOVE_REST, MOVE_SLEEP_TALK, MOVE_PSYBEAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_KECLEON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_SUBSTITUTE, MOVE_SLASH, MOVE_PSYBEAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_MEGA_DRAIN, MOVE_HEADBUTT, MOVE_MACH_PUNCH, MOVE_LEECH_SEED}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_MARSHTOMP,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_MUD_SHOT, MOVE_ROCK_TOMB, MOVE_TAKE_DOWN, MOVE_BUBBLE_BEAM}
    }
};
// Rival 1
static const struct TrainerMon sParty_MayRoute103Mudkip[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 5,
    .species = SPECIES_TREECKO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Rival 3
static const struct TrainerMon sParty_MayRoute110Mudkip[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 22,
    .species = SPECIES_SPOINK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CONFUSION, MOVE_TACKLE, MOVE_CONFUSE_RAY, MOVE_PSYCH_UP}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 20,
    .species = SPECIES_TORKOAL,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SMOG, MOVE_EMBER, MOVE_SMOKESCREEN, MOVE_FIRE_SPIN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_GROVYLE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ABSORB, MOVE_QUICK_ATTACK, MOVE_FALSE_SWIPE, MOVE_RAZOR_LEAF}
    }
};
// Route 119 Rival 4 w Treecko
static const struct TrainerMon sParty_MayRoute119Mudkip[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_GRUMPIG,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SHOCK_WAVE, MOVE_REST, MOVE_SLEEP_TALK, MOVE_PSYBEAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_KECLEON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_SUBSTITUTE, MOVE_SLASH, MOVE_PSYBEAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_TORKOAL,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CURSE, MOVE_BODY_SLAM, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_GROVYLE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROCK_TOMB, MOVE_RAZOR_LEAF, MOVE_GROWTH, MOVE_SLASH}
    }
};
// Rival 1
static const struct TrainerMon sParty_MayRoute103Treecko[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 5,
    .species = SPECIES_TORCHIC,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Rival 3
static const struct TrainerMon sParty_MayRoute110Treecko[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 22,
    .species = SPECIES_SPOINK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CONFUSION, MOVE_TACKLE, MOVE_CONFUSE_RAY, MOVE_PSYCH_UP}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 20,
    .species = SPECIES_WAILMER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GROWL, MOVE_WATER_GUN, MOVE_WHIRLPOOL, MOVE_ASTONISH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_COMBUSKEN,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PECK, MOVE_FOCUS_ENERGY, MOVE_EMBER, MOVE_DOUBLE_KICK}
    }
};
// Route 119 Rival 4 w Torchic
static const struct TrainerMon sParty_MayRoute119Treecko[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_GRUMPIG,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SHOCK_WAVE, MOVE_REST, MOVE_SLEEP_TALK, MOVE_PSYBEAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_KECLEON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_SUBSTITUTE, MOVE_SLASH, MOVE_PSYBEAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_WAILMER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_WATER_PULSE, MOVE_ICE_BEAM, MOVE_GROWL, MOVE_ASTONISH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_COMBUSKEN,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FIRE_PUNCH, MOVE_ROLLING_KICK, MOVE_BULK_UP, MOVE_SUNNY_DAY}
    }
};
// Rival 1 
static const struct TrainerMon sParty_MayRoute103Torchic[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 5,
    .species = SPECIES_MUDKIP,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Rival 3
static const struct TrainerMon sParty_MayRoute110Torchic[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 22,
    .species = SPECIES_SPOINK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CONFUSION, MOVE_TACKLE, MOVE_CONFUSE_RAY, MOVE_PSYCH_UP}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 20,
    .species = SPECIES_SHROOMISH,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TACKLE, MOVE_STUN_SPORE, MOVE_LEECH_SEED, MOVE_MEGA_DRAIN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_MARSHTOMP,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_MUD_SHOT, MOVE_ROCK_TOMB, MOVE_WATER_GUN, MOVE_TACKLE}
    }
};
// Route 119 Rival 4 w Mudkip
static const struct TrainerMon sParty_MayRoute119Torchic[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_GRUMPIG,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SHOCK_WAVE, MOVE_REST, MOVE_SLEEP_TALK, MOVE_PSYBEAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_KECLEON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_SUBSTITUTE, MOVE_SLASH, MOVE_PSYBEAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_MEGA_DRAIN, MOVE_HEADBUTT, MOVE_MACH_PUNCH, MOVE_LEECH_SEED}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_MARSHTOMP,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_MUD_SHOT, MOVE_ROCK_TOMB, MOVE_TAKE_DOWN, MOVE_BUBBLE_BEAM}
    }
};
// Route 117 BreederM
static const struct TrainerMon sParty_Isaac1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 14,
    .species = SPECIES_SNORUNT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 14,
    .species = SPECIES_ZIGZAGOON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 14,
    .species = SPECIES_ARON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 14,
    .species = SPECIES_POOCHYENA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 14,
    .species = SPECIES_TAILLOW,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 14,
    .species = SPECIES_MAKUHITA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 123 (via 118 from mauville) Bug Catcher
static const struct TrainerMon sParty_Davis[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_PINSIR,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Victory Road CooltrainerM
static const struct TrainerMon sParty_Mitchell[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_LUNATONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_PSYCHIC}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_SOLROCK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Isaac2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_SNORUNT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_ARON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_MIGHTYENA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_SWELLOW,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_MAKUHITA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Isaac3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_SNEASEL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_ARON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_MIGHTYENA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_MURKROW,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Isaac4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_SNEASEL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_HOUNDOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_CRAWDAUNT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_MIGHTYENA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_MURKROW,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_CACTURNE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Isaac5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_MIGHTYENA,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_SUPER_FANG, MOVE_CRUNCH, MOVE_POISON_FANG, MOVE_YAWN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_SNEASEL,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_SWORDS_DANCE, MOVE_BLIZZARD, MOVE_FAINT_ATTACK, MOVE_SLASH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_SHARPEDO,
    .heldItem = ITEM_LIECHI_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_ENDURE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_UMBREON,
    .heldItem = ITEM_LEPPA_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 252, 0, 0, 0},
    .moves = {MOVE_MOONLIGHT, MOVE_DOUBLE_TEAM, MOVE_CURSE, MOVE_FAINT_ATTACK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_OVERHEAT, MOVE_SHADOW_BALL, MOVE_CRUNCH, MOVE_WILL_O_WISP}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_TYRANITAR,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_DRAGON_DANCE, MOVE_ROCK_SLIDE}
    }
};
// Route 117 BreederF
static const struct TrainerMon sParty_Lydia1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 14,
    .species = SPECIES_WINGULL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 14,
    .species = SPECIES_SHROOMISH,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 14,
    .species = SPECIES_MARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 14,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 14,
    .species = SPECIES_SKITTY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 14,
    .species = SPECIES_GOLDEEN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Victory Road CooltrainerM
static const struct TrainerMon sParty_Halle[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 50,
    .species = SPECIES_SABLEYE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 50,
    .species = SPECIES_ABSOL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Abandoned Ship
static const struct TrainerMon sParty_Garrison[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_RELICANTH,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Lydia2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_WINGULL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_SHROOMISH,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_MARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_SKITTY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_GOLDEEN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Lydia3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_PELIPPER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_AZUMARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_DELCATTY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_SEAKING,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Lydia4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 52,
    .species = SPECIES_PELIPPER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 52,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 52,
    .species = SPECIES_MARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 52,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 52,
    .species = SPECIES_DELCATTY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 52,
    .species = SPECIES_GOLDEEN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Lydia5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 61,
    .species = SPECIES_PELIPPER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 61,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 61,
    .species = SPECIES_AZUMARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 61,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 61,
    .species = SPECIES_DELCATTY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 61,
    .species = SPECIES_SEAKING,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 119 Pokemon RangerM
static const struct TrainerMon sParty_Jackson1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("SHROOMY"),
    .lvl = 30,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FOCUS_PUNCH, MOVE_SWORDS_DANCE, MOVE_SPORE, MOVE_GIGA_DRAIN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("TORCHY"),
    .lvl = 30,
    .species = SPECIES_COMBUSKEN,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BULK_UP, MOVE_HI_JUMP_KICK, MOVE_DOUBLE_KICK, MOVE_FLAMETHROWER}
    }
};
// Route 120 Pokemon RangerM
static const struct TrainerMon sParty_Lorenzo[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_SEEDOT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_NUZLEAF,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_SHIFTRY,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Trick Room 6
static const struct TrainerMon sParty_Sebastian[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_CACTURNE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Jackson2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("SHROOMY"),
    .lvl = 36,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FOCUS_PUNCH, MOVE_SWORDS_DANCE, MOVE_SPORE, MOVE_GIGA_DRAIN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("TORCHY"),
    .lvl = 36,
    .species = SPECIES_BLAZIKEN,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BULK_UP, MOVE_HI_JUMP_KICK, MOVE_DOUBLE_KICK, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_Jackson3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("SQUIDWARD"),
    .lvl = 42,
    .species = SPECIES_NOSEPASS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_THUNDERBOLT, MOVE_SUNNY_DAY, MOVE_REST}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("SHROOMY"),
    .lvl = 42,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FOCUS_PUNCH, MOVE_SWORDS_DANCE, MOVE_SPORE, MOVE_GIGA_DRAIN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("TORCHY"),
    .lvl = 42,
    .species = SPECIES_BLAZIKEN,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BULK_UP, MOVE_HI_JUMP_KICK, MOVE_SWORDS_DANCE, MOVE_OVERHEAT}
    }
};

static const struct TrainerMon sParty_Jackson4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("SQUIDWARD"),
    .lvl = 48,
    .species = SPECIES_NOSEPASS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_THUNDERBOLT, MOVE_SUNNY_DAY, MOVE_REST}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("SHROOMY"),
    .lvl = 48,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FOCUS_PUNCH, MOVE_SWORDS_DANCE, MOVE_SPORE, MOVE_GIGA_DRAIN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("TORCHY"),
    .lvl = 48,
    .species = SPECIES_BLAZIKEN,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BULK_UP, MOVE_HI_JUMP_KICK, MOVE_SWORDS_DANCE, MOVE_OVERHEAT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("YOKE"),
    .lvl = 48,
    .species = SPECIES_MACHAMP,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BULK_UP, MOVE_CROSS_CHOP, MOVE_COUNTER, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Jackson5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("SQUIDWARD"),
    .lvl = 70,
    .species = SPECIES_NOSEPASS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_THUNDERBOLT, MOVE_SUNNY_DAY, MOVE_REST}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("SHROOMY"),
    .lvl = 70,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FOCUS_PUNCH, MOVE_SWORDS_DANCE, MOVE_SPORE, MOVE_GIGA_DRAIN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("TORCHY"),
    .lvl = 70,
    .species = SPECIES_BLAZIKEN,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BULK_UP, MOVE_HI_JUMP_KICK, MOVE_SWORDS_DANCE, MOVE_OVERHEAT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("YOKE"),
    .lvl = 70,
    .species = SPECIES_MACHAMP,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BULK_UP, MOVE_CROSS_CHOP, MOVE_COUNTER, MOVE_ROCK_SLIDE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .nickname = _("THICCEM"),
    .lvl = 70,
    .species = SPECIES_SLAKING,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_HYPER_BEAM, MOVE_REST, MOVE_YAWN, MOVE_FAKE_OUT}
    }
};
// Route 119 Pokemon RangerF 
static const struct TrainerMon sParty_Catherine1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_HERACROSS,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 120 Pokemon RangerF
static const struct TrainerMon sParty_Jenna[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_LOTAD,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_LOMBRE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_LUDICOLO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Trick Room 6
static const struct TrainerMon sParty_Sophia[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_VIBRAVA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Catherine2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 42,
    .species = SPECIES_HERACROSS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
};

static const struct TrainerMon sParty_Catherine3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_HERACROSS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Catherine4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 57,
    .species = SPECIES_HERACROSS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 57,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Catherine5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 66,
    .species = SPECIES_HERACROSS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 66,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Jagged Pass Triathlete
static const struct TrainerMon sParty_Julio[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_MAGNEMITE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Seafloor Cavern (Double with shelly)
static const struct TrainerMon sParty_GruntSeafloorCavern5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_MIGHTYENA,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CRUNCH, MOVE_TAKE_DOWN, MOVE_PROTECT, MOVE_SCARY_FACE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_SLUDGE_BOMB}
    }, 
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_SNEASEL,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FAINT_ATTACK, MOVE_BLIZZARD, MOVE_METAL_CLAW, MOVE_SLASH}
    }
};

static const struct TrainerMon sParty_GruntUnused[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 34,
    .species = SPECIES_WAILMER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 34,
    .species = SPECIES_ZUBAT,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// UNUSED Mt Pyre Summit Aqua GruntF (Double Battle with GruntM 3)
static const struct TrainerMon sParty_GruntMtPyre4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_MIGHTYENA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_SEADRA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Jagged Pass Magma Grunt
static const struct TrainerMon sParty_GruntJaggedPass[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_ZANGOOSE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_NUMEL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Rustboro Gym Hiker 1 (Potential Double Battle with Tommy)
static const struct TrainerMon sParty_Marc[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 11,
    .species = SPECIES_ARON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 12,
    .species = SPECIES_GEODUDE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Dewford Gym Sailor 1 (Double Battle w Lilith)
static const struct TrainerMon sParty_Brendan[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 15,
    .species = SPECIES_MACHOP,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_LOW_KICK, MOVE_LEER, MOVE_FOCUS_ENERGY, MOVE_FORESIGHT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 15,
    .species = SPECIES_CORPHISH,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROCK_SMASH, MOVE_BUBBLE, MOVE_HARDEN, MOVE_VICE_GRIP}
    }
};
// Dewford Gym Battle Girl 2 (Double Battle w Brendan)
static const struct TrainerMon sParty_Lilith[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 15,
    .species = SPECIES_MEDITITE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 15,
    .species = SPECIES_MEDITITE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Dewford Gym Black Belt 2 (Top Middle)
static const struct TrainerMon sParty_Cristian[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 14,
    .species = SPECIES_MACHOP,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 16,
    .species = SPECIES_MAKUHITA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 14,
    .species = SPECIES_MACHOP,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Mossdeep Gym Hex Maniac 2 - Northwest (Double Battle w Hannah or Virgil)
static const struct TrainerMon sParty_Sylvia[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 126 SwimmerM
static const struct TrainerMon sParty_Leonardo[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_SHARPEDO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 127 CooltrainerF 
static const struct TrainerMon sParty_Athena[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_SLUDGE_BOMB, MOVE_NONE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDER, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK, MOVE_NONE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_HEADBUTT, MOVE_NONE, MOVE_NONE}
    }
};
// Route 128 SwimmerM
static const struct TrainerMon sParty_Harrison[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_HUNTAIL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Mt Chimney GruntM (double)
static const struct TrainerMon sParty_GruntMtChimney2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_GOLBAT,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 129 SwimmerM
static const struct TrainerMon sParty_Clarence[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_SHARPEDO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Terry[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_GIRAFARIG,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Mossdeep Gym Gentleman 2 - Northwest (Double Battle w Virgil)
static const struct TrainerMon sParty_Nate[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 44,
    .species = SPECIES_GRUMPIG,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Mossdeep Gym Hex Maniac - Southeast (Double Battle w Clifford or Nicholas)
static const struct TrainerMon sParty_Kathleen[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_ALAKAZAM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Mossdeep Gym Gentleman 1 - Southeast (Double Battle w Macey or Kathleen)
static const struct TrainerMon sParty_Clifford[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_GIRAFARIG,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Mossdeep Gym PsychicM 3 - Entrance Room (Double Battle w Kathleen)
static const struct TrainerMon sParty_Nicholas[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_WOBBUFFET,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Space Center
static const struct TrainerMon sParty_GruntSpaceCenter3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 44,
    .species = SPECIES_GOLBAT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 44,
    .species = SPECIES_MIGHTYENA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Space Center
static const struct TrainerMon sParty_GruntSpaceCenter4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_RHYDON,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Space Center
static const struct TrainerMon sParty_GruntSpaceCenter5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_NINETALES,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Space Center
static const struct TrainerMon sParty_GruntSpaceCenter6[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_MIGHTYENA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Space Center
static const struct TrainerMon sParty_GruntSpaceCenter7[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_CLAYDOL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Mossdeep Gym PsychicF 4 - Southeast (Double Battle w Clifford)
static const struct TrainerMon sParty_Macey[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_XATU,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Rival 2 Torchic & Lotad
static const struct TrainerMon sParty_BrendanRustboroTreecko[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 15,
    .species = SPECIES_SPOINK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TACKLE, MOVE_CONFUSION, MOVE_ODOR_SLEUTH, MOVE_NONE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 17,
    .species = SPECIES_TORCHIC,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GROWL, MOVE_PECK, MOVE_EMBER, MOVE_SAND_ATTACK}
    }
};
// Rival 2 Treecko & Wingull
static const struct TrainerMon sParty_BrendanRustboroMudkip[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 15,
    .species = SPECIES_SPOINK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TACKLE, MOVE_CONFUSION, MOVE_ODOR_SLEUTH, MOVE_NONE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 17,
    .species = SPECIES_TREECKO,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_LEER, MOVE_ABSORB, MOVE_QUICK_ATTACK, MOVE_NONE}
    }
};
// Route 132 Expert
static const struct TrainerMon sParty_Paxton[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_SWELLOW,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_CHIMECHO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 124 TriathleteF
static const struct TrainerMon sParty_Isabella[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_STARMIE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Weather Institute Aqua GruntF (2nd floor double)
static const struct TrainerMon sParty_GruntWeatherInst5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_SNEASEL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_WAILMER,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Magma Admin Mt Chimney 
static const struct TrainerMon sParty_TabithaMtChimney[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_CACNEA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_LEECH_SEED, MOVE_PURSUIT, MOVE_PIN_MISSILE, MOVE_INGRAIN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_LAIRON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_METAL_CLAW, MOVE_ROCK_THROW, MOVE_MUD_SLAP, MOVE_HEADBUTT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_ZANGOOSE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SLASH, MOVE_PURSUIT, MOVE_METAL_CLAW, MOVE_QUICK_ATTACK}
    }
};
// Route 132 CooltrainerM
static const struct TrainerMon sParty_Jonathan[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_KECLEON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_EXPLOUD,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_SABLEYE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Rival 2 Mudkip & Slugma
static const struct TrainerMon sParty_BrendanRustboroTorchic[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 15,
    .species = SPECIES_SPOINK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TACKLE, MOVE_CONFUSION, MOVE_ODOR_SLEUTH, MOVE_NONE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 17,
    .species = SPECIES_MUDKIP,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TACKLE, MOVE_GROWL, MOVE_MUD_SLAP, MOVE_WATER_GUN}
    }
};
// Rival 2 Treecko & Wingull
static const struct TrainerMon sParty_MayRustboroMudkip[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 15,
    .species = SPECIES_SPOINK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TACKLE, MOVE_CONFUSION, MOVE_ODOR_SLEUTH, MOVE_NONE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 17,
    .species = SPECIES_TREECKO,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_LEER, MOVE_ABSORB, MOVE_QUICK_ATTACK, MOVE_NONE}
    }
};
// Magma Leader Magma Hideout
static const struct TrainerMon sParty_MaxieMagmaHideout[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FLAMETHROWER, MOVE_CRUNCH, MOVE_SUNNY_DAY, MOVE_ROAR}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_LEAF_BLADE, MOVE_EXTRASENSORY, MOVE_FAINT_ATTACK, MOVE_SUNNY_DAY}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_AGGRON,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_IRON_TAIL, MOVE_ROCK_THROW, MOVE_EARTHQUAKE, MOVE_IRON_DEFENSE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_CROBAT,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FLY, MOVE_POISON_FANG, MOVE_GIGA_DRAIN, MOVE_HAZE}
    },
    {
    .ivs = BEST_IV_SPREAD,
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
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_MIGHTYENA,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BITE, MOVE_SAND_ATTACK, MOVE_TAKE_DOWN, MOVE_ROAR}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_GOLBAT,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_WING_ATTACK, MOVE_CONFUSE_RAY, MOVE_BITE, MOVE_LEECH_LIFE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_NUZLEAF,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_RAZOR_LEAF, MOVE_LEECH_SEED, MOVE_ROCK_TOMB, MOVE_GROWTH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_MAGNITUDE, MOVE_FLAME_WHEEL, MOVE_ROCK_TOMB, MOVE_MUD_SLAP}
    }
};
//Route 102 Lass
static const struct TrainerMon sParty_Tiana[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_ZIGZAGOON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_SHROOMISH,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 104 North Lass
static const struct TrainerMon sParty_Haley1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 9,
    .species = SPECIES_LOTAD,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 9,
    .species = SPECIES_SHROOMISH,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 116 Cut Lass
static const struct TrainerMon sParty_Janice[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 13,
    .species = SPECIES_VULPIX,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 13,
    .species = SPECIES_MARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
};
// Winstrate House
static const struct TrainerMon sParty_Vivi[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 18,
    .species = SPECIES_MARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 18,
    .species = SPECIES_SHROOMISH,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 18,
    .species = SPECIES_NUMEL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Haley2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_LOMBRE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_SHROOMISH,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Haley3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_LOMBRE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Haley4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 44,
    .species = SPECIES_LOMBRE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 44,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Haley5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 57,
    .species = SPECIES_SWELLOW,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_LUDICOLO,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Trick House 1 (Cut) Lass 
static const struct TrainerMon sParty_Sally[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 19,
    .species = SPECIES_ODDISH,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Trick House 1 (Cut) Lass
static const struct TrainerMon sParty_Robin[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 17,
    .species = SPECIES_LOMBRE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 17,
    .species = SPECIES_ZIGZAGOON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 17,
    .species = SPECIES_SANDSHREW,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Sootopolis Gym Lass 1 (Lowest Level)
static const struct TrainerMon sParty_Andrea[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Sootopolis Gym Lass 2 (Highest Level - Double Battle w Tiffany)
static const struct TrainerMon sParty_Crissy[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_SEAKING,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_WAILORD,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 102 Bug Catcher
static const struct TrainerMon sParty_Rick[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_WURMPLE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_WURMPLE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Petalburg Woods Bug Catcher 1
static const struct TrainerMon sParty_Lyle[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_CASCOON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_SILCOON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 8,
    .species = SPECIES_CASCOON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 8,
    .species = SPECIES_SILCOON,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 116 Bug Catcher - Wurmple & Nincada
static const struct TrainerMon sParty_Jose[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 10,
    .species = SPECIES_SILCOON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 10,
    .species = SPECIES_NINCADA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 119 Bug Catcher 3
static const struct TrainerMon sParty_Doug[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_NINJASK,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_SHEDINJA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 119 Bug Catcher 2
static const struct TrainerMon sParty_Greg[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_VOLBEAT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_ILLUMISE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 119 Bug Catcher 1
static const struct TrainerMon sParty_Kent[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_PINSIR,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Petalburg Woods Bug Catcher 2
static const struct TrainerMon sParty_James1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 8,
    .species = SPECIES_NINCADA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 9,
    .species = SPECIES_NINCADA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_James2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_NINCADA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_NINJASK,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_SHEDINJA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_James3[] = {
     {
    .ivs = BEST_IV_SPREAD,
    .lvl = 34,
    .species = SPECIES_DUSTOX,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_NINJASK,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_SHEDINJA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_James4[] = {
     {
    .ivs = BEST_IV_SPREAD,
    .lvl = 52,
    .species = SPECIES_HERACROSS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 52,
    .species = SPECIES_NINJASK,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 52,
    .species = SPECIES_SCYTHER,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_James5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_NINJASK,
    .heldItem = ITEM_STARF_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_BATON_PASS, MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_SILVER_WIND}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_YANMA,
    .heldItem = ITEM_LIECHI_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_ENDURE, MOVE_REVERSAL, MOVE_HYPNOSIS, MOVE_TWINEEDLE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_ARMALDO,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_TWINEEDLE, MOVE_ROCK_BLAST, MOVE_METAL_CLAW, MOVE_BRICK_BREAK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_BRIGHT_POWDER,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_ICE_BEAM, MOVE_HYDRO_PUMP, MOVE_SIGNAL_BEAM, MOVE_GIGA_DRAIN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_HERACROSS,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_BULK_UP, MOVE_MEGAHORN, MOVE_CROSS_CHOP, MOVE_EARTHQUAKE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_VENOMOTH,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {126, 0, 0, 252, 126, 0},
    .moves = {MOVE_SLEEP_POWDER, MOVE_SUBSTITUTE, MOVE_GIGA_DRAIN, MOVE_PSYCHIC}
    }
};
// Route 112 South Section Hiker 2
static const struct TrainerMon sParty_Brice[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 23,
    .species = SPECIES_NUMEL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 23,
    .species = SPECIES_MACHOP,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 112 South Section Hiker 1
static const struct TrainerMon sParty_Trent1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 23,
    .species = SPECIES_GEODUDE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_GEODUDE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 25,
    .species = SPECIES_GEODUDE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 114 Hiker 2
static const struct TrainerMon sParty_Lenny[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 26,
    .species = SPECIES_GEODUDE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 26,
    .species = SPECIES_MACHOP,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 114 Hiker 1
static const struct TrainerMon sParty_Lucas1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 26,
    .species = SPECIES_GEODUDE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 26,
    .species = SPECIES_NUMEL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Trick House 3 Hiker
static const struct TrainerMon sParty_Alan[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 26,
    .species = SPECIES_GEODUDE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_NOSEPASS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_GRAVELER,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 116 Hiker 1
static const struct TrainerMon sParty_Clark[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 11,
    .species = SPECIES_GEODUDE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 10,
    .species = SPECIES_GEODUDE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Jagged Pass Hiker
static const struct TrainerMon sParty_Eric[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_GRAVELER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_BALTOY,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Flag Note: what is this? 114 
static const struct TrainerMon sParty_Lucas2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 11,
    .species = SPECIES_WAILMER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SPLASH, MOVE_WATER_GUN, MOVE_NONE, MOVE_NONE}
    }
};
// Verdanturf Tunnel? Unused??
static const struct TrainerMon sParty_Mike1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 12,
    .species = SPECIES_PELIPPER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GUST, MOVE_GROWL, MOVE_NONE, MOVE_NONE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 12,
    .species = SPECIES_POOCHYENA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BITE, MOVE_SCARY_FACE, MOVE_NONE, MOVE_NONE}
    }
};
// Flag note: what is this? Unused?
static const struct TrainerMon sParty_Mike2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 20,
    .species = SPECIES_GEODUDE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 20,
    .species = SPECIES_SABLEYE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 20,
    .species = SPECIES_RHYHORN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Trent2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 26,
    .species = SPECIES_GEODUDE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 26,
    .species = SPECIES_GEODUDE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 26,
    .species = SPECIES_GEODUDE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_GRAVELER,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Trent3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_GEODUDE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_GEODUDE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Trent4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 56,
    .species = SPECIES_PUPITAR,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 57,
    .species = SPECIES_ARMALDO,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 57,
    .species = SPECIES_GOLEM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 57,
    .species = SPECIES_GOLEM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Trent5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_TYRANITAR,
    .heldItem = ITEM_CHESTO_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {100, 252, 152, 0, 0, 0},
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_REST}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_OMASTAR,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SANDSTORM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_FOCUS_BAND,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 0, 0, 252},
    .moves = {MOVE_EXPLOSION, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_GANLON_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 0, 252},
    .moves = {MOVE_RECOVER, MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_MIRROR_COAT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_SHUCKLE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 0, 252},
    .moves = {MOVE_TOXIC, MOVE_ENCORE, MOVE_WRAP, MOVE_REST}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_BRIGHT_POWDER,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_SKY_ATTACK, MOVE_ANCIENT_POWER, MOVE_IRON_TAIL, MOVE_EARTHQUAKE}
    }
};
// Mt Pyre Interior 2F Young Couple
static const struct TrainerMon sParty_DezAndLuke[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_DELCATTY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_MANECTRIC,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// SS Tidal Young Couple (nat dex)
static const struct TrainerMon sParty_LeaAndJed[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_MILTANK,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_SLOWBRO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Abandoned Ship
static const struct TrainerMon sParty_KiraAndDan1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_VOLBEAT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_ILLUMISE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_KiraAndDan2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_VOLBEAT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_ILLUMISE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_KiraAndDan3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_VOLBEAT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_ILLUMISE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_KiraAndDan4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_VOLBEAT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_ILLUMISE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_KiraAndDan5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_VOLBEAT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_ILLUMISE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 109 Seashore House Beauty
static const struct TrainerMon sParty_Johanna[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 18,
    .species = SPECIES_HORSEA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 18,
    .species = SPECIES_ODDISH,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Lavaridge Gym CooltrainerM
static const struct TrainerMon sParty_Gerald[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_KECLEON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FLAMETHROWER, MOVE_FURY_SWIPES, MOVE_FAINT_ATTACK, MOVE_BIND}
    }
};
// Mauville Gym Battle Girl
static const struct TrainerMon sParty_Vivian[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 20,
    .species = SPECIES_MEDITITE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BIDE, MOVE_DETECT, MOVE_CONFUSION, MOVE_THUNDER_PUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 20,
    .species = SPECIES_MEDITITE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDER_PUNCH, MOVE_DETECT, MOVE_CONFUSION, MOVE_MEDITATE}
    }
};
// Lavaridge Gym Battle Girl
static const struct TrainerMon sParty_Danielle[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_MEDITITE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BIDE, MOVE_DETECT, MOVE_CONFUSION, MOVE_FIRE_PUNCH}
    }
};
// Route 119 (Post Weather Insitute) Ninja Boy 2
static const struct TrainerMon sParty_Hideo[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_KOFFING,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TACKLE, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_SWALOT,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ENCORE, MOVE_YAWN, MOVE_SLUDGE, MOVE_BODY_SLAM}
    }
};
// Route 120 Ninja Boy 2
static const struct TrainerMon sParty_Keigo[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_SWALOT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_NINJASK,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 120 Ninja Boy 1
static const struct TrainerMon sParty_Riley[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_NINJASK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_LEECH_LIFE, MOVE_FURY_SWIPES, MOVE_DIG, MOVE_NONE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_KOFFING,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TACKLE, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN}
    }
};
// Fortree Gym Camper (Double Battle with Edwardo)
static const struct TrainerMon sParty_Flint[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_SWELLOW,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_XATU,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Fortree Gym Picknicker
static const struct TrainerMon sParty_Ashley[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_SWABLU,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_DODRIO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Mauville
static const struct TrainerMon sParty_WallyMauville[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 18,
    .species = SPECIES_RALTS,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Rematch 1
static const struct TrainerMon sParty_WallyVR2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_MAWILE,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SWORDS_DANCE, MOVE_BATON_PASS, MOVE_METEOR_MASH, MOVE_BATON_PASS}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 59,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_SILK_SCARF,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DOUBLE_EDGE, MOVE_WISH, MOVE_FOLLOW_ME, MOVE_HEAL_BELL}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 59,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_MYSTIC_WATER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_DOUBLE_EDGE, MOVE_SUPERPOWER, MOVE_ICE_BEAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 59,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_SHARP_BEAK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_AERIAL_ACE, MOVE_EARTHQUAKE, MOVE_FIRE_BLAST, MOVE_DRAGON_DANCE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_WIKI_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_VOLT_TACKLE, MOVE_WISH, MOVE_MAGICAL_LEAF, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 60,
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_CALM_MIND}
    }
};
// Rematch 2
static const struct TrainerMon sParty_WallyVR3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 64,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SKY_ATTACK, MOVE_EARTHQUAKE, MOVE_REST, MOVE_DRAGON_DANCE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 64,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_WISH, MOVE_FOLLOW_ME, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_MAWILE,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SWORDS_DANCE, MOVE_CRUNCH, MOVE_METEOR_MASH, MOVE_BATON_PASS}
    },
    {   
    .ivs = BEST_IV_SPREAD,
    .lvl = 64,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_SILK_SCARF,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DOUBLE_EDGE, MOVE_WISH, MOVE_FOLLOW_ME, MOVE_HEAL_BELL}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 64,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_BLACK_BELT,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_DOUBLE_EDGE, MOVE_SUPERPOWER, MOVE_ICE_BEAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 65,
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_CALM_MIND, MOVE_PROTECT}
    }
};
// Rematch 3
static const struct TrainerMon sParty_WallyVR4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 70,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SKY_ATTACK, MOVE_EARTHQUAKE, MOVE_REST, MOVE_DRAGON_DANCE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 69,
    .species = SPECIES_MEGANIUM,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GRASS_WHISTLE, MOVE_LEECH_SEED, MOVE_EARTHQUAKE, MOVE_GIGA_DRAIN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 69,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_WHITE_HERB,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_OVERHEAT, MOVE_HI_JUMP_KICK, MOVE_HYPNOSIS, MOVE_DOUBLE_EDGE}
    },
    {   
    .ivs = BEST_IV_SPREAD,
    .lvl = 69,
    .species = SPECIES_GRANBULL,
    .heldItem = ITEM_SILK_SCARF,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DOUBLE_EDGE, MOVE_CRUNCH, MOVE_IRON_TAIL, MOVE_HEAL_BELL}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 70,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_BLACK_BELT,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_DOUBLE_EDGE, MOVE_SUPERPOWER, MOVE_ICE_BEAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 70,
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_CALM_MIND, MOVE_ICE_PUNCH}
    }
};
// Rematch 4
static const struct TrainerMon sParty_WallyVR5[] = {
    {   
    .ivs = BEST_IV_SPREAD,
    .lvl = 72,
    .species = SPECIES_CLEFABLE,
    .heldItem = ITEM_WIKI_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BODY_SLAM, MOVE_METEOR_MASH, MOVE_FOLLOW_ME, MOVE_TOXIC}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 72,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SKY_ATTACK, MOVE_FACADE, MOVE_STEEL_WING, MOVE_NONE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 73,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_WHITE_HERB,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_IRON_TAIL, MOVE_DOUBLE_EDGE, MOVE_SUPERPOWER, MOVE_HYDRO_PUMP}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 73,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SKY_ATTACK, MOVE_HEAL_BELL, MOVE_REST, MOVE_TOXIC}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 73,
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_CALM_MIND, MOVE_FIRE_PUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 73,
    .species = SPECIES_MEGANIUM,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GRASS_WHISTLE, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_BODY_SLAM}
    }
};

// Lilycove Rival 5
static const struct TrainerMon sParty_BrendanLilycoveMudkip[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_KECLEON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_SUBSTITUTE, MOVE_SLASH, MOVE_PSYCHIC}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_GRUMPIG,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SHOCK_WAVE, MOVE_REST, MOVE_SLEEP_TALK, MOVE_PSYCHIC}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_HERACROSS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BRICK_BREAK, MOVE_COUNTER, MOVE_TWINEEDLE, MOVE_TAKE_DOWN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_TORKOAL,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CURSE, MOVE_BODY_SLAM, MOVE_FLAMETHROWER, MOVE_AMNESIA}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_SCEPTILE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GROWTH, MOVE_SLASH, MOVE_ROCK_TOMB, MOVE_LEAF_BLADE}
    }
};
// Lilycove Rival 5
static const struct TrainerMon sParty_BrendanLilycoveTreecko[] = {
   {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_KECLEON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_SUBSTITUTE, MOVE_SLASH, MOVE_PSYCHIC}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_GRUMPIG,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SHOCK_WAVE, MOVE_REST, MOVE_SLEEP_TALK, MOVE_PSYCHIC}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_DONPHAN,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_FLAIL, MOVE_TAKE_DOWN, MOVE_ROLLOUT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_WAILORD,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_ASTONISH, MOVE_AMNESIA}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_BLAZIKEN,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BLAZE_KICK, MOVE_ROLLING_KICK, MOVE_BULK_UP, MOVE_MACH_PUNCH}
    }
};
// Lilycove Rival 5
static const struct TrainerMon sParty_BrendanLilycoveTorchic[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_KECLEON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_SUBSTITUTE, MOVE_SLASH, MOVE_PSYCHIC}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_GRUMPIG,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SHOCK_WAVE, MOVE_REST, MOVE_SLEEP_TALK, MOVE_PSYCHIC}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_PINSIR,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SEISMIC_TOSS, MOVE_REVENGE, MOVE_TWINEEDLE, MOVE_BRICK_BREAK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GIGA_DRAIN, MOVE_HEADBUTT, MOVE_COUNTER, MOVE_BRICK_BREAK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_SWAMPERT,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_MUD_SHOT, MOVE_ROCK_TOMB, MOVE_TAKE_DOWN, MOVE_MUDDY_WATER}
    }
};
// Lilycove Rival 5
static const struct TrainerMon sParty_MayLilycoveMudkip[] = {
   {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_KECLEON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_SUBSTITUTE, MOVE_SLASH, MOVE_PSYCHIC}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_GRUMPIG,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SHOCK_WAVE, MOVE_REST, MOVE_SLEEP_TALK, MOVE_PSYCHIC}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_HERACROSS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BRICK_BREAK, MOVE_COUNTER, MOVE_TWINEEDLE, MOVE_TAKE_DOWN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_TORKOAL,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CURSE, MOVE_BODY_SLAM, MOVE_FLAMETHROWER, MOVE_AMNESIA}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_SCEPTILE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GROWTH, MOVE_SLASH, MOVE_ROCK_TOMB, MOVE_LEAF_BLADE}
    }
};
// Lilycove Rival 5
static const struct TrainerMon sParty_MayLilycoveTreecko[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_KECLEON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_SUBSTITUTE, MOVE_SLASH, MOVE_PSYCHIC}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_GRUMPIG,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SHOCK_WAVE, MOVE_REST, MOVE_SLEEP_TALK, MOVE_PSYCHIC}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_DONPHAN,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_FLAIL, MOVE_TAKE_DOWN, MOVE_ROLLOUT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_WAILORD,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_ASTONISH, MOVE_AMNESIA}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_BLAZIKEN,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BLAZE_KICK, MOVE_ROLLING_KICK, MOVE_BULK_UP, MOVE_MACH_PUNCH}
    }
};
// Lilycove Rival 5
static const struct TrainerMon sParty_MayLilycoveTorchic[] = {
   {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_KECLEON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_SUBSTITUTE, MOVE_SLASH, MOVE_PSYCHIC}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_GRUMPIG,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SHOCK_WAVE, MOVE_REST, MOVE_SLEEP_TALK, MOVE_PSYCHIC}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_PINSIR,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SEISMIC_TOSS, MOVE_REVENGE, MOVE_TWINEEDLE, MOVE_BRICK_BREAK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GIGA_DRAIN, MOVE_HEADBUTT, MOVE_COUNTER, MOVE_BRICK_BREAK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_SWAMPERT,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_MUD_SHOT, MOVE_ROCK_TOMB, MOVE_TAKE_DOWN, MOVE_MUDDY_WATER}
    }
};
// Route 127 Fisherman 1
static const struct TrainerMon sParty_Jonah[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_TENTACRUEL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_WAILMER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_SHARPEDO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 127 Fisherman 3
static const struct TrainerMon sParty_Henry[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_CLAMPERL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_SEAKING,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_WAILMER,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 127 Fisherman 2
static const struct TrainerMon sParty_Roger[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_MAGIKARP,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 128 CooltrainerF
static const struct TrainerMon sParty_Alexa[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_BELLOSSOM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_VILEPLUME,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 128 CooltrainerM
static const struct TrainerMon sParty_Ruben[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_MASQUERAIN,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_NOSEPASS,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 127 Black Belt 
static const struct TrainerMon sParty_Koji1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 128 Fisherman 
static const struct TrainerMon sParty_Wayne[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_TENTACRUEL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_TENTACRUEL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_WAILORD,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 127 Bird Keeper
static const struct TrainerMon sParty_Aidan[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_TROPIUS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_SKARMORY,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 129 SwimmerM note we need to give all these mons surf lol
static const struct TrainerMon sParty_Reed[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_ZANGOOSE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_EXPLOUD,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 129 SwimmerF
static const struct TrainerMon sParty_Tisha[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_LANTURN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 113 Twins
static const struct TrainerMon sParty_ToriAndTia[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 26,
    .species = SPECIES_SPINDA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 26,
    .species = SPECIES_SNORUNT,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 125 Sr and Jr
static const struct TrainerMon sParty_KimAndIris[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_ALTARIA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SING, MOVE_DRAGON_BREATH, MOVE_SAFEGUARD, MOVE_AERIAL_ACE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_CAMERUPT,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_REST, MOVE_EARTHQUAKE}
    }
};
// Route 114 Sr and Jr 
static const struct TrainerMon sParty_TyraAndIvy[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GROWTH, MOVE_STUN_SPORE, MOVE_MEGA_DRAIN, MOVE_LEECH_SEED}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_GRAVELER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DEFENSE_CURL, MOVE_MAGNITUDE, MOVE_TACKLE, MOVE_ROCK_THROW}
    }
};
//Route 109 Surf Couple
static const struct TrainerMon sParty_MelAndPaul[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_DUSTOX,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SILVER_WIND, MOVE_PSYBEAM, MOVE_TOXIC, MOVE_PROTECT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_BEAUTIFLY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GUST, MOVE_MEGA_DRAIN, MOVE_ATTRACT, MOVE_STUN_SPORE}
    }
};
// METEOR FALLS EXPERT
static const struct TrainerMon sParty_JohnAndJay1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 55,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_PROTECT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 55,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BRICK_BREAK, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 57,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_PROTECT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 57,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BRICK_BREAK, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 59,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_PROTECT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 59,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BRICK_BREAK, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 61,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_PROTECT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 61,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BRICK_BREAK, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 61,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BRICK_BREAK, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 61,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_JohnAndJay5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_PROTECT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BRICK_BREAK, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BRICK_BREAK, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_PROTECT}
    }
};
// Route 131 Sis and Bro note linoone needs surf
static const struct TrainerMon sParty_ReliAndIan[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 124 Sis and Bro
static const struct TrainerMon sParty_LilaAndRoy1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_CORSOLA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_RELICANTH,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_LilaAndRoy2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_CORSOLA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_RELICANTH,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_LilaAndRoy3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_CORSOLA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_RELICANTH,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_LilaAndRoy4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_CORSOLA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 52,
    .species = SPECIES_LANTURN,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_RELICANTH,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 52,
    .species = SPECIES_SHARPEDO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_LilaAndRoy5[] = {
   {
    .ivs = BEST_IV_SPREAD,
    .lvl = 61,
    .species = SPECIES_CORSOLA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 60,
    .species = SPECIES_LANTURN,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 60,
    .species = SPECIES_RELICANTH,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 61,
    .species = SPECIES_SHARPEDO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 107 Sis and Bro
static const struct TrainerMon sParty_LisaAndRay[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_GOLDEEN,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_TENTACOOL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 119 Fisherman 
static const struct TrainerMon sParty_Chris[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_GYARADOS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_TENTACOOL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_FEEBAS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_CARVANHA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 116 Cut Rich Boy
static const struct TrainerMon sParty_Dawson[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 12,
    .species = SPECIES_SPOINK,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 12,
    .species = SPECIES_POOCHYENA,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 116 Cut Lady
static const struct TrainerMon sParty_Sarah[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 12,
    .species = SPECIES_LOTAD,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 14,
    .species = SPECIES_IGGLYBUFF,
    .heldItem = ITEM_NUGGET,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 104 Fisherman
static const struct TrainerMon sParty_Darian[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 10,
    .species = SPECIES_MAGIKARP,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 11,
    .species = SPECIES_GOLDEEN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 109 TuberF 1 (Potential Double Battle with Edmond or Ricky)
static const struct TrainerMon sParty_Hailey[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 16,
    .species = SPECIES_MARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 109 TuberM 2 (Potential Double Battle with Lola)
static const struct TrainerMon sParty_Chandler[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 15,
    .species = SPECIES_STARYU,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 15,
    .species = SPECIES_CORPHISH,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 110 PokefanM 1 (Double Battle w Isabel)
static const struct TrainerMon sParty_Kaleb[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 17,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDER_SHOCK, MOVE_HELPING_HAND, MOVE_LIGHT_SCREEN, MOVE_HELPING_HAND}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 18,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDER_SHOCK, MOVE_GROWL, MOVE_DOUBLE_TEAM, MOVE_QUICK_ATTACK}
    }
};
//Route 110 Guitarist (Potential Double Battle with Edwin)
static const struct TrainerMon sParty_Joseph[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 17,
    .species = SPECIES_ELECTRIKE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 17,
    .species = SPECIES_VOLTORB,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 110 Triathlete
static const struct TrainerMon sParty_Alyssa[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 20,
    .species = SPECIES_MAGNEMITE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 103 Cut Guitarist (Double Battle w Rhett)
static const struct TrainerMon sParty_Marcos[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 19,
    .species = SPECIES_VOLTORB,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 19,
    .species = SPECIES_WHISMUR,
    .evs = {84, 84, 84, 84, 84, 84}
    },
};
// Route 103 Cut Black Belt (Double Battle w Marcos)
static const struct TrainerMon sParty_Rhett[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 20,
    .species = SPECIES_MAKUHITA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 111 South Camper 
static const struct TrainerMon sParty_Tyron[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 23,
    .species = SPECIES_SANDSHREW,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 111 South Aroma Lady
static const struct TrainerMon sParty_Celina[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 23,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 111 South Picnicker
static const struct TrainerMon sParty_Bianca[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 23,
    .species = SPECIES_SHROOMISH,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 111 Mid Kindler
static const struct TrainerMon sParty_Hayden[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_NUMEL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 113 Picnicker
static const struct TrainerMon sParty_Sophie[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 25,
    .species = SPECIES_MARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 25,
    .species = SPECIES_LOMBRE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 113 Bird Keeper (optional double)
static const struct TrainerMon sParty_Coby[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_SKARMORY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_SWELLOW,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 113 Camper
static const struct TrainerMon sParty_Lawrence[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 25,
    .species = SPECIES_BALTOY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 25,
    .species = SPECIES_SANDSHREW,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 113 Pokemaniac
static const struct TrainerMon sParty_Wyatt[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 25,
    .species = SPECIES_SNEASEL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 114 Picnicker 3
static const struct TrainerMon sParty_Angelina[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 26,
    .species = SPECIES_SWABLU,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 26,
    .species = SPECIES_SURSKIT,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 114 Fisherman 2
static const struct TrainerMon sParty_Kai[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_BARBOACH,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 114 Picnicker 1
static const struct TrainerMon sParty_Charlotte[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 26,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 118 Mauville Youngster
static const struct TrainerMon sParty_Deandre[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 18,
    .species = SPECIES_ZIGZAGOON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 19,
    .species = SPECIES_ARON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 18,
    .species = SPECIES_ELECTRIKE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Magma Hideout Entrance (Elevated Level)
static const struct TrainerMon sParty_GruntMagmaHideout1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_GRAVELER,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Magma Hideout Entrance Magma GruntM
static const struct TrainerMon sParty_GruntMagmaHideout2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_ZANGOOSE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Magma Hideout 1F Magma GruntM
static const struct TrainerMon sParty_GruntMagmaHideout3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_TORKOAL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Magma Hideout 1F Magma GruntM (Double)
static const struct TrainerMon sParty_GruntMagmaHideout4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_DONPHAN,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_GOLBAT,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Magma Hideout 1F Magma GruntM (Double)
static const struct TrainerMon sParty_GruntMagmaHideout5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_MIGHTYENA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_CACTURNE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Magma Hideout 1F Magma GruntF
static const struct TrainerMon sParty_GruntMagmaHideout6[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_NINETALES,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Magma Hideout B1F Magma GruntM
static const struct TrainerMon sParty_GruntMagmaHideout7[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_RHYHORN,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_KOFFING,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Magma Hideout B1F Magma GruntM
static const struct TrainerMon sParty_GruntMagmaHideout8[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_LAIRON,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Magma Hideout B2F Magma GruntM
static const struct TrainerMon sParty_GruntMagmaHideout9[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_GRAVELER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_MAGCARGO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Magma Hideout B1F Magma GruntM
static const struct TrainerMon sParty_GruntMagmaHideout10[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_MIGHTYENA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Magma Hideout B2F Magma GruntF
static const struct TrainerMon sParty_GruntMagmaHideout11[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_ZANGOOSE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_BALTOY,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Magma Hideout B1F Magma GruntF
static const struct TrainerMon sParty_GruntMagmaHideout12[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_MURKROW,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_RHYHORN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Magma Hideout B4F Magma GruntM (DOUBLE)
static const struct TrainerMon sParty_GruntMagmaHideout13[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_MAGCARGO,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_GOLBAT,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Magma Hideout B1F Magma GruntM
static const struct TrainerMon sParty_GruntMagmaHideout14[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_WEEZING,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Magma Hideout B4F Magma GruntM (DOUBLE)
static const struct TrainerMon sParty_GruntMagmaHideout15[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_MURKROW,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_LAIRON,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Magma Hideout B4F Magma GruntM
static const struct TrainerMon sParty_GruntMagmaHideout16[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_CLAYDOL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Magma Admin Magma Hideout
static const struct TrainerMon sParty_TabithaMagmaHideout[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_CROBAT,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_WING_ATTACK, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_CONFUSE_RAY}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_LAIRON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_IRON_TAIL, MOVE_ROCK_TOMB, MOVE_SANDSTORM, MOVE_MUD_SLAP}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_CACTURNE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_NEEDLE_ARM, MOVE_FAINT_ATTACK, MOVE_LEECH_SEED, MOVE_INGRAIN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_ZANGOOSE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CRUSH_CLAW, MOVE_FAINT_ATTACK, MOVE_SWORDS_DANCE, MOVE_METAL_CLAW}
    }
};
// Route 132 CooltrainerF
static const struct TrainerMon sParty_Darcy[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_ALTARIA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_CACTURNE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_CAMERUPT,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Magma Leader Space Center (Double SC)
static const struct TrainerMon sParty_MaxieMossdeep[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_CRUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_LEAF_BLADE, MOVE_EXTRASENSORY, MOVE_FAINT_ATTACK, MOVE_SUNNY_DAY}
    },
    {
    .ivs = BEST_IV_SPREAD,
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
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_TENTACRUEL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 103 Surf SwimmerF 
static const struct TrainerMon sParty_Isabelle[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_AZUMARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 105 Ruin Maniac
static const struct TrainerMon sParty_Andres1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_BALTOY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_TRAPINCH,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 105 Bird Keeper
static const struct TrainerMon sParty_Josue[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_SWABLU,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_SWELLOW,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 107 Triathlete
static const struct TrainerMon sParty_Camron[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_STARYU,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 108 Sailor (Double Battle w Carolina)
static const struct TrainerMon sParty_Cory1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_MACHOKE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_TENTACOOL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 108 Cooltrainer F (Double Battle with Cory)
static const struct TrainerMon sParty_Carolina[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_MANECTRIC,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_SWELLOW,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_MANECTRIC,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 109 Surf Bird Keeper
static const struct TrainerMon sParty_Elijah[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_SKARMORY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 29,
    .species = SPECIES_SKARMORY,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
//Route 111 Desert Picnicker 3
static const struct TrainerMon sParty_Celia[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_RHYHORN,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SCARY_FACE, MOVE_PROTECT, MOVE_MAGNITUDE, MOVE_ROCK_TOMB}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_SANDSLASH,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_METAL_CLAW, MOVE_DOUBLE_TEAM, MOVE_SLASH, MOVE_CUT}
    },
};
//Route 111 Desert Ruin Maniac 2
static const struct TrainerMon sParty_Bryan[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_CACTURNE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GROWTH, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_FAINT_ATTACK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 34,
    .species = SPECIES_NOSEPASS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROCK_SLIDE, MOVE_SPARK, MOVE_THUNDER_WAVE, MOVE_HEADBUTT}
    }
};
//Route 111 Desert Camper 3
static const struct TrainerMon sParty_Branden[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROCK_TOMB, MOVE_PROTECT, MOVE_MAGNITUDE, MOVE_ROLLOUT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_SANDSLASH,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_METAL_CLAW, MOVE_DOUBLE_TEAM, MOVE_SLASH, MOVE_CUT}
    }
};
// Route 112 North Section Kindler
static const struct TrainerMon sParty_Bryant[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_NUMEL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_SLUGMA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 112 North Section Aroma Lady
static const struct TrainerMon sParty_Shayla[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 24,
    .species = SPECIES_SHROOMISH,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 22,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 115 Surf Triathlete
static const struct TrainerMon sParty_Kyra[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_PONYTA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 34,
    .species = SPECIES_DODRIO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 115 Surf Ninja Boy
static const struct TrainerMon sParty_Jaiden[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_NINJASK,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_SHEDINJA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 115 Surf Psychic (Double Battle w Helene)
static const struct TrainerMon sParty_Alix[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_KADABRA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_GARDEVOIR,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 115 Surf Battle Girl (Double Battle w Alix)
static const struct TrainerMon sParty_Helene[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 34,
    .species = SPECIES_MEDITITE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 115 Psychic
static const struct TrainerMon sParty_Marlene[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_KIRLIA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_SPOINK,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 116 Hiker 2
static const struct TrainerMon sParty_Devan[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 10,
    .species = SPECIES_GEODUDE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 11,
    .species = SPECIES_GEODUDE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 116 Youngster 2
static const struct TrainerMon sParty_Johnson[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 10,
    .species = SPECIES_POOCHYENA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 10,
    .species = SPECIES_LOTAD,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 117 TriathleteF 2
static const struct TrainerMon sParty_Melina[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 21,
    .species = SPECIES_PONYTA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 117 Psychic
static const struct TrainerMon sParty_Brandi[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 22,
    .species = SPECIES_KIRLIA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 117 Battle Girl
static const struct TrainerMon sParty_Aisha[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 21,
    .species = SPECIES_MEDITITE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 132 ExpertF
static const struct TrainerMon sParty_Makayla[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_GLALIE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_MEDICHAM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 119 (Post Weather Insitute) Guitarist
static const struct TrainerMon sParty_Fabian[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_MANECTRIC,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 119 Kindler
static const struct TrainerMon sParty_Dayton[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_SLUGMA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_NUMEL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 119 Parasol Lady
static const struct TrainerMon sParty_Rachel[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_GOLDEEN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 120 CooltrainerM
static const struct TrainerMon sParty_Leonel[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_MANECTRIC,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDER, MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_NONE}
    }
};
// Route 120 Battle Girl
static const struct TrainerMon sParty_Callie[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_MEDITITE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 121 Bug Maniac
static const struct TrainerMon sParty_Cale[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_TRAPINCH,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_VIBRAVA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 121 BreederM
static const struct TrainerMon sParty_Myles[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_RAICHU,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_SEAKING,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_NOSEPASS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_WIGGLYTUFF,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_BELLOSSOM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 121 BreederF
static const struct TrainerMon sParty_Pat[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_VILEPLUME,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_MANECTRIC,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_AZUMARILL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_SWALOT,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Route 121 CooltrainerF
static const struct TrainerMon sParty_Cristin1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_DONPHAN,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_GOLDUCK,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Rival 2 Torchic & Lotad
static const struct TrainerMon sParty_MayRustboroTreecko[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 15,
    .species = SPECIES_SPOINK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TACKLE, MOVE_CONFUSION, MOVE_ODOR_SLEUTH, MOVE_NONE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 17,
    .species = SPECIES_TORCHIC,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GROWL, MOVE_PECK, MOVE_EMBER, MOVE_SAND_ATTACK}
    }
};
// Rival 2 Mudkip & Torkoal
static const struct TrainerMon sParty_MayRustboroTorchic[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 15,
    .species = SPECIES_SPOINK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TACKLE, MOVE_CONFUSION, MOVE_ODOR_SLEUTH, MOVE_NONE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 17,
    .species = SPECIES_MUDKIP,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TACKLE, MOVE_GROWL, MOVE_MUD_SLAP, MOVE_WATER_GUN}
    }
};
// Rematch 1 after beating Wattson 
static const struct TrainerMon sParty_Roxanne2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_LILEEP,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SANDSTORM, MOVE_INGRAIN, MOVE_ROCK_TOMB, MOVE_MEGA_DRAIN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 27,
    .species = SPECIES_ANORITH,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROCK_TOMB, MOVE_METAL_CLAW, MOVE_CUT, MOVE_ROCK_SMASH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 26,
    .species = SPECIES_CORSOLA,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROCK_TOMB, MOVE_BUBBLE_BEAM, MOVE_RECOVER, MOVE_AMNESIA}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 28,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_ORAN_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROCK_SLIDE, MOVE_SPARK, MOVE_THUNDER_WAVE, MOVE_SPARK}
    }
};
// Roxanne Rematch 2 After Becoming Champion
static const struct TrainerMon sParty_Roxanne3[] = {
    
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_RELICANTH,
    .heldItem = ITEM_HARD_STONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROCK_SLIDE, MOVE_SANDSTORM, MOVE_DOUBLE_EDGE, MOVE_SURF}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_ARMALDO,
    .heldItem = ITEM_KINGS_ROCK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROCK_TOMB, MOVE_METAL_CLAW, MOVE_CUT, MOVE_ROCK_SMASH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_RHYDON,
    .heldItem = ITEM_SOFT_SAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SANDSTORM, MOVE_ROCK_SMASH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_APICOT_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SANDSTORM, MOVE_INGRAIN, MOVE_RECOVER, MOVE_GIGA_DRAIN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SMELLING_SALT, MOVE_PROTECT, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE}
    }
};
// Roxanne Rematch 3
static const struct TrainerMon sParty_Roxanne4[] = {
     {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_TYRANITAR,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROCK_SLIDE, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_PROTECT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_SCOPE_LENS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE, MOVE_SKY_ATTACK, MOVE_PROTECT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_DONPHAN,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUBSTITUTE, MOVE_REST}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_INGRAIN, MOVE_ANCIENT_POWER, MOVE_GIGA_DRAIN, MOVE_PROTECT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_STEELIX,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROCK_SLIDE, MOVE_EXPLOSION, MOVE_CRUNCH, MOVE_EARTHQUAKE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_MAGNET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROCK_SLIDE, MOVE_PROTECT, MOVE_THUNDER, MOVE_ICE_PUNCH}
    }
};
// Roxanne Rematch 4
static const struct TrainerMon sParty_Roxanne5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_TYRANITAR,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_PURSUIT, MOVE_AERIAL_ACE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUBSTITUTE, MOVE_FIRE_BLAST}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_SOFT_SAND,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE, MOVE_SKY_ATTACK, MOVE_TAUNT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {252, 0, 252, 0, 0, 0},
    .moves = {MOVE_INGRAIN, MOVE_ANCIENT_POWER, MOVE_GIGA_DRAIN, MOVE_PROTECT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_ARMALDO,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE, MOVE_TWINEEDLE, MOVE_ROCK_BLAST}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_BRIGHT_POWDER,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_ROCK_SLIDE, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_DOUBLE_TEAM}
    }
};
// Rematch 1 & After Beating Flannery (same as 1_2)
static const struct TrainerMon sParty_Brawly2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 34,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EXTRASENSORY, MOVE_THUNDER_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_TOMB, MOVE_SEISMIC_TOSS, MOVE_REVENGE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 34,
    .species = SPECIES_BRELOOM,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_MACH_PUNCH, MOVE_MEGA_DRAIN, MOVE_BULK_UP, MOVE_STUN_SPORE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_VITAL_THROW, MOVE_REVERSAL, MOVE_BULK_UP, MOVE_FAINT_ATTACK}
    }
};
// Brawly Rematch 2 - After Becoming Champion
static const struct TrainerMon sParty_Brawly3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_HITMONCHAN,
    .heldItem = ITEM_BLACK_BELT,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DYNAMIC_PUNCH, MOVE_ROCK_SLIDE, MOVE_AGILITY, MOVE_BULK_UP}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_BRELOOM,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FOCUS_PUNCH, MOVE_LEECH_SEED, MOVE_STUN_SPORE, MOVE_SUBSTITUTE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_POLIWRATH,
    .heldItem = ITEM_MYSTIC_WATER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_HYPNOSIS, MOVE_FOCUS_PUNCH, MOVE_ICE_BEAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_PRIMEAPE,
    .heldItem = ITEM_HARD_STONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CROSS_CHOP, MOVE_BULK_UP, MOVE_ROCK_SLIDE, MOVE_FAINT_ATTACK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_REST, MOVE_SLEEP_TALK, MOVE_CROSS_CHOP, MOVE_WHIRLWIND}
    }
};
// Brawly Rematch 3
static const struct TrainerMon sParty_Brawly4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_POLIWRATH,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BELLY_DRUM, MOVE_BRICK_BREAK, MOVE_SUBSTITUTE, MOVE_EARTHQUAKE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_MAGMAR,
    .heldItem = ITEM_WHITE_HERB,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_OVERHEAT, MOVE_THUNDER_PUNCH, MOVE_CROSS_CHOP, MOVE_FOLLOW_ME}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_BLACK_BELT,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FAKE_OUT, MOVE_HI_JUMP_KICK, MOVE_BULK_UP, MOVE_ROCK_SLIDE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_ELECTABUZZ,
    .heldItem = ITEM_MAGNET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CROSS_CHOP, MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_BRELOOM,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_MACH_PUNCH, MOVE_SWORDS_DANCE, MOVE_SPORE, MOVE_FACADE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BODY_SLAM, MOVE_ROCK_SLIDE, MOVE_CROSS_CHOP, MOVE_EARTHQUAKE}
    }
};
// Brawly Rematch 4
static const struct TrainerMon sParty_Brawly5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {252, 0, 0, 0, 0, 252},
    .moves = {MOVE_FAKE_OUT, MOVE_MACH_PUNCH, MOVE_PURSUIT, MOVE_BULK_UP}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_BRELOOM,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_FOCUS_PUNCH, MOVE_GIGA_DRAIN, MOVE_SPORE, MOVE_SUBSTITUTE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_BLAZIKEN,
    .heldItem = ITEM_WHITE_HERB,
    .evs = {0, 252, 0, 0, 252, 0},
    .moves = {MOVE_OVERHEAT, MOVE_THUNDER_PUNCH, MOVE_HI_JUMP_KICK, MOVE_ROCK_SLIDE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_MEGA_KICK, MOVE_HI_JUMP_KICK, MOVE_BRICK_BREAK, MOVE_ROCK_SLIDE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_HERACROSS,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_MEGAHORN, MOVE_SWORDS_DANCE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_FOCUS_PUNCH, MOVE_REVENGE, MOVE_ROCK_SLIDE, MOVE_TOXIC}
    }
};
// Wattson Rematch 1 after New Mauville
static const struct TrainerMon sParty_Wattson2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_MAGICAL_LEAF, MOVE_CHARM, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_WISH, MOVE_ENCORE, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_SURF, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 36,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SHOCK_WAVE, MOVE_THUNDER_WAVE, MOVE_REFLECT, MOVE_TRI_ATTACK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_MAGNET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_CRUNCH, MOVE_CHARGE, MOVE_THUNDER_WAVE}
    }
};
// Wattson Rematch 2 
static const struct TrainerMon sParty_Wattson3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_MYSTIC_WATER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_ENCORE, MOVE_FOCUS_PUNCH, MOVE_SURF}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_WIKI_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_RAIN_DANCE, MOVE_DIVE, MOVE_THUNDER_WAVE, MOVE_CONFUSE_RAY}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_JOLTEON,
    .heldItem = ITEM_SPELL_TAG,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_AGILITY, MOVE_THUNDER, MOVE_BATON_PASS, MOVE_SHADOW_BALL}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_ELECTABUZZ,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH, MOVE_THUNDER, MOVE_PSYCHIC}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_MAGNET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CRUNCH, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_ROAR}
    }
};
// Wattson Rematch 3
static const struct TrainerMon sParty_Wattson4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_PETAYA_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_MAGICAL_LEAF, MOVE_THUNDER_WAVE, MOVE_SUBSTITUTE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_WISH, MOVE_THUNDER_WAVE, MOVE_FOLLOW_ME}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_BRIGHT_POWDER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDER, MOVE_SURF, MOVE_CONFUSE_RAY, MOVE_RAIN_DANCE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDER_WAVE, MOVE_REFLECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_PORYGON2,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_HYPER_BEAM, MOVE_IRON_TAIL, MOVE_AERIAL_ACE, MOVE_THIEF}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_MAGNET,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CRUNCH, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_ROAR}
    }
};
// Wattson Rematch 4
static const struct TrainerMon sParty_Wattson5[] = {
     {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_MYSTIC_WATER,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_VOLT_TACKLE, MOVE_SURF, MOVE_THUNDER_WAVE, MOVE_WISH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_THUNDER, MOVE_SURF, MOVE_THUNDER_WAVE, MOVE_RAIN_DANCE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_JOLTEON,
    .heldItem = ITEM_SPELL_TAG,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_AGILITY, MOVE_THUNDER, MOVE_BATON_PASS, MOVE_SHADOW_BALL}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_PORYGON2,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {0, 0, 252, 0, 252, 0},
    .moves = {MOVE_THUNDER, MOVE_ICE_BEAM, MOVE_THUNDER_WAVE, MOVE_RECOVER}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_ELECTABUZZ,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_THUNDER, MOVE_CROSS_CHOP, MOVE_RAIN_DANCE, MOVE_ICE_PUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_MAGNET,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_CRUNCH, MOVE_SHADOW_BALL, MOVE_THUNDER, MOVE_RAIN_DANCE}
    }
};
// Flannery Rematch 1 after Magma Hideout
static const struct TrainerMon sParty_Flannery2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 42,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_WILL_O_WISP, MOVE_SUNNY_DAY}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_CASTFORM,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_WEATHER_BALL, MOVE_SUNNY_DAY, MOVE_HEADBUTT, MOVE_ICE_BEAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 42,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_OVERHEAT, MOVE_ROCK_SLIDE, MOVE_YAWN, MOVE_ATTRACT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_OVERHEAT, MOVE_DOUBLE_KICK, MOVE_IRON_TAIL, MOVE_DOUBLE_EDGE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_BODY_SLAM, MOVE_SLUDGE_BOMB}
    }
};
// Flannery Rematch 2
static const struct TrainerMon sParty_Flannery3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FIRE_BLAST, MOVE_ROCK_SLIDE, MOVE_AMNESIA, MOVE_SUNNY_DAY}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_BELLOSSOM,
    .heldItem = ITEM_MIRACLE_SEED,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SYNTHESIS, MOVE_SOLAR_BEAM, MOVE_SLEEP_POWDER, MOVE_SUNNY_DAY}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_CHARIZARD,
    .heldItem = ITEM_HARD_STONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_OVERHEAT, MOVE_SWORDS_DANCE, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_MAGMAR,
    .heldItem = ITEM_CHARCOAL,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FIRE_BLAST, MOVE_PSYCHIC, MOVE_THUNDER_PUNCH, MOVE_CONFUSE_RAY}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ERUPTION, MOVE_ROCK_SLIDE, MOVE_YAWN, MOVE_REST}
    }
};
// Flannery Rematch 3
static const struct TrainerMon sParty_Flannery4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_CHARIZARD,
    .heldItem = ITEM_CHARCOAL,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SUNNY_DAY, MOVE_HEAT_WAVE, MOVE_DRAGON_CLAW, MOVE_ROCK_SLIDE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ERUPTION, MOVE_PROTECT, MOVE_EXPLOSION, MOVE_EARTHQUAKE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_JUMPLUFF,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SLEEP_POWDER, MOVE_SYNTHESIS, MOVE_LEECH_SEED, MOVE_PROTECT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_WHITE_HERB,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_REST}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_FOCUS_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FIRE_BLAST, MOVE_HI_JUMP_KICK, MOVE_BATON_PASS, MOVE_AGILITY}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ERUPTION, MOVE_ROCK_SLIDE, MOVE_YAWN, MOVE_REST}
    }
};
// Flannery Rematch 4
static const struct TrainerMon sParty_Flannery5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_CHARCOAL,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_FIRE_BLAST, MOVE_EXTREME_SPEED, MOVE_SUNNY_DAY, MOVE_ROAR}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {0, 0, 252, 0, 252, 0},
    .moves = {MOVE_HEAT_WAVE, MOVE_SUBSTITUTE, MOVE_REFRESH, MOVE_ROCK_SLIDE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_SCOPE_LENS,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_LEAF_BLADE, MOVE_FAINT_ATTACK, MOVE_SYNTHESIS, MOVE_SUNNY_DAY}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_BLAZIKEN,
    .heldItem = ITEM_BLACK_BELT,
    .evs = {0, 252, 0, 0, 252, 0},
    .moves = {MOVE_BLAZE_KICK, MOVE_HI_JUMP_KICK, MOVE_THUNDER_PUNCH, MOVE_BOUNCE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_TYPHLOSION,
    .heldItem = ITEM_LIECHI_BERRY,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_ERUPTION, MOVE_ENDURE, MOVE_REVERSAL, MOVE_THUNDER_PUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_CURSE, MOVE_ROCK_SLIDE}
    }
};
// Norman Rematch 1 after getting all 8 gym badges
static const struct TrainerMon sParty_Norman2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_HELPING_HAND, MOVE_WISH, MOVE_BLIZZARD, MOVE_FAKE_OUT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_EXPLOUD,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_OVERHEAT, MOVE_TEETER_DANCE, MOVE_HYPER_VOICE, MOVE_WATER_PULSE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_ZANGOOSE,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SLASH, MOVE_SWORDS_DANCE, MOVE_CUT, MOVE_BRICK_BREAK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_HEADBUTT, MOVE_BELLY_DRUM, MOVE_FACADE, MOVE_IRON_TAIL}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_GIRAFARIG,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SKILL_SWAP, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_EARTHQUAKE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_REST, MOVE_FACADE, MOVE_FAINT_ATTACK}
    }
};
// Norman Rematch 2
static const struct TrainerMon sParty_Norman3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_AIPOM,
    .heldItem = ITEM_WIKI_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_AGILITY, MOVE_BATON_PASS, MOVE_BEAT_UP, MOVE_SUBSTITUTE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_STANTLER,
    .heldItem = ITEM_SILK_SCARF,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DREAM_EATER, MOVE_HYPNOSIS, MOVE_REFLECT, MOVE_DOUBLE_EDGE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_PORYGON2,
    .heldItem = ITEM_SHARP_BEAK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_RECOVER, MOVE_CURSE, MOVE_TRI_ATTACK, MOVE_AERIAL_ACE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_EXPLOUD,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TEETER_DANCE, MOVE_HYPER_VOICE, MOVE_OVERHEAT, MOVE_BRICK_BREAK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_GIRAFARIG,
    .heldItem = ITEM_TWISTED_SPOON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_PSYCHIC, MOVE_WISH, MOVE_CALM_MIND}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_FACADE, MOVE_FOCUS_PUNCH, MOVE_COUNTER}
    }
};
// Norman Rematch 3
static const struct TrainerMon sParty_Norman4[] = {
     {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_TAUROS,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DOUBLE_EDGE, MOVE_PURSUIT, MOVE_IRON_TAIL, MOVE_EARTHQUAKE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63, 
    .species = SPECIES_GRANBULL,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_HEAL_BELL, MOVE_PROTECT, MOVE_CRUNCH, MOVE_BODY_SLAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_URSARING,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_REST, MOVE_SLEEP_TALK, MOVE_BODY_SLAM, MOVE_CRUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_BLISSEY,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_REST, MOVE_THUNDER_WAVE, MOVE_WATER_PULSE, MOVE_BLIZZARD}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_GIRAFARIG, 
    .heldItem = ITEM_TWISTED_SPOON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDER_WAVE, MOVE_PSYCHIC, MOVE_WISH, MOVE_THUNDERBOLT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_SLAKING, 
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_HYPER_BEAM, MOVE_DOUBLE_EDGE, MOVE_BRICK_BREAK}
    }
};
// Norman Rematch 4
static const struct TrainerMon sParty_Norman5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_BLIZZARD, MOVE_THUNDER, MOVE_CRUSH_CLAW, MOVE_ROCK_SLIDE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_BLISSEY,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {252, 0, 252, 0, 0, 0},
    .moves = {MOVE_SEISMIC_TOSS, MOVE_HEAL_BELL, MOVE_SKILL_SWAP, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_TAUROS,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_PURSUIT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_SMEARGLE,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {252, 0, 0, 252, 0, 0},
    .moves = {MOVE_BELLY_DRUM, MOVE_SUBSTITUTE, MOVE_SPORE, MOVE_BATON_PASS}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_SNORLAX,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {252, 0, 252, 0, 0, 0},
    .moves = {MOVE_CURSE, MOVE_REST, MOVE_BODY_SLAM, MOVE_FOCUS_PUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_ZANGOOSE,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_BRICK_BREAK, MOVE_IRON_TAIL, MOVE_RETURN, MOVE_CUT}
    }
};
// Winona Rematch 1 after Rayquaza Event
static const struct TrainerMon sParty_Winona2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_CROBAT,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_AERIAL_ACE, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_DOUBLE_EDGE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 52,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_PROTECT, MOVE_TOXIC}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 52,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROCK_SMASH, MOVE_GIGA_DRAIN, MOVE_EARTHQUAKE, MOVE_WHIRLWIND}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 52,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SKY_ATTACK, MOVE_STEEL_WING, MOVE_FACADE, MOVE_WHIRLWIND}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_DODRIO,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DRILL_PECK, MOVE_TRI_ATTACK, MOVE_ENDEAVOR, MOVE_PURSUIT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_FLAMETHROWER, MOVE_DRAGON_DANCE, MOVE_SKY_ATTACK}
    }
};
// Winona Rematch 2
static const struct TrainerMon sParty_Winona3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_XATU,
    .heldItem = ITEM_MIRACLE_SEED,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_GIGA_DRAIN, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_CALM_MIND}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_MYSTIC_WATER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_STUN_SPORE, MOVE_HYDRO_PUMP, MOVE_GIGA_DRAIN, MOVE_SHADOW_BALL}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_MURKROW,
    .heldItem = ITEM_SHARP_BEAK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SKY_ATTACK, MOVE_DOUBLE_EDGE, MOVE_FAINT_ATTACK, MOVE_STEEL_WING}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_PIDGEOT,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SKY_ATTACK, MOVE_EXTREME_SPEED, MOVE_PROTECT, MOVE_PURSUIT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_MANTINE,
    .heldItem = ITEM_WIKI_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BLIZZARD, MOVE_HYDRO_PUMP, MOVE_HAZE, MOVE_CONFUSE_RAY}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SKY_ATTACK, MOVE_DOUBLE_EDGE, MOVE_IRON_TAIL, MOVE_EARTHQUAKE}
    }
};
// Winona Rematch 3
static const struct TrainerMon sParty_Winona4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_CROBAT,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SLEEP_TALK, MOVE_REST, MOVE_AERIAL_ACE, MOVE_CONFUSE_RAY}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SPIKES, MOVE_PROTECT, MOVE_TOXIC, MOVE_WHIRLWIND}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_SOFT_SAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_FACADE, MOVE_STEEL_WING}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_KINGS_ROCK,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDER_WAVE, MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_THUNDERBOLT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_FOCUS_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SKY_ATTACK, MOVE_STEEL_WING, MOVE_AGILITY, MOVE_BATON_PASS}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SKY_ATTACK, MOVE_DOUBLE_EDGE, MOVE_IRON_TAIL, MOVE_EARTHQUAKE}
    }
};
// Winona Rematch 4
static const struct TrainerMon sParty_Winona5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_THUNDER_WAVE, MOVE_EARTHQUAKE, MOVE_DYNAMIC_PUNCH, MOVE_THUNDERBOLT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_YANMA,
    .heldItem = ITEM_LIECHI_BERRY,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_SUBSTITUTE, MOVE_REVERSAL, MOVE_PROTECT, MOVE_TWINEEDLE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_CHARIZARD,
    .heldItem = ITEM_FOCUS_BAND,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_FIRE_BLAST, MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_STARF_BERRY,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_SUBSTITUTE, MOVE_ENDEAVOR, MOVE_QUICK_ATTACK, MOVE_BATON_PASS}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_SOFT_SAND,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_GIGA_DRAIN, MOVE_SYNTHESIS}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_SKY_ATTACK, MOVE_DRAGON_DANCE, MOVE_PURSUIT, MOVE_EARTHQUAKE}
    }
};
// Tate & Liza Rematch 1 After 8 badges
static const struct TrainerMon sParty_TateAndLiza2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_HYPNOSIS, MOVE_CALM_MIND}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_SOLAR_BEAM, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_WOBBUFFET,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ENCORE, MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_DESTINY_BOND}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_STARMIE,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_THUNDERBOLT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_XATU,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_SUNNY_DAY, MOVE_GIGA_DRAIN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    }
};
// Tate & Liza Rematch 2
static const struct TrainerMon sParty_TateAndLiza3[] = {
   {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_BLACK_BELT,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SUNNY_DAY, MOVE_FIRE_PUNCH, MOVE_FAKE_OUT, MOVE_HI_JUMP_KICK}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_SOFT_SAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SKILL_SWAP, MOVE_FACADE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_TWISTED_SPOON,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_THUNDERBOLT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_EXEGGUTOR,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SYNTHESIS, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_SLEEP_POWDER}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_HYPNOSIS, MOVE_CALM_MIND}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_WHITE_HERB,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCH_UP, MOVE_SOLAR_BEAM, MOVE_OVERHEAT, MOVE_SUNNY_DAY}
    }
};
// Tate & Liza Rematch 3
static const struct TrainerMon sParty_TateAndLiza4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_SLOWKING,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDER_WAVE, MOVE_FLAMETHROWER, MOVE_REST, MOVE_PSYCHIC}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_SLOWBRO,
    .heldItem = ITEM_SOFT_SAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDER_WAVE, MOVE_CALM_MIND, MOVE_SURF, MOVE_PSYCHIC}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_GRUMPIG,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_FOCUS_PUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_ALAKAZAM,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_TRICK, MOVE_THUNDER_PUNCH, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_HYPNOSIS, MOVE_LIGHT_SCREEN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_WHITE_HERB,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_OVERHEAT, MOVE_CURSE}
    }
};
// Tate & Liza Rematch 4
static const struct TrainerMon sParty_TateAndLiza5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {0, 0, 252, 0, 0, 252},
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_SKILL_SWAP, MOVE_LIGHT_SCREEN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_UMBREON,
    .heldItem = ITEM_APICOT_BERRY,
    .evs = {252, 0, 0, 0, 0, 252},
    .moves = {MOVE_SUBSTITUTE, MOVE_BATON_PASS, MOVE_DOUBLE_TEAM, MOVE_TOXIC}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_ESPEON,
    .heldItem = ITEM_STARF_BERRY,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_BATON_PASS, MOVE_CALM_MIND, MOVE_SHADOW_BALL, MOVE_PSYCHIC}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_BATON_PASS, MOVE_COSMIC_POWER}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_PSYCHIC, MOVE_FLAMETHROWER, MOVE_CALM_MIND, MOVE_BATON_PASS}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_METAGROSS,
    .heldItem = ITEM_WIKI_BERRY,
    .evs = {0, 252, 0, 0, 252, 0},
    .moves = {MOVE_PSYCHIC, MOVE_METEOR_MASH, MOVE_ICE_PUNCH, MOVE_ROCK_SLIDE}
    }
};
// Placeholder, Not Used
static const struct TrainerMon sParty_Juan2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_WATER_PULSE, MOVE_ATTRACT, MOVE_SWEET_KISS, MOVE_FLAIL}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_AMNESIA, MOVE_EARTHQUAKE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ENCORE, MOVE_BODY_SLAM, MOVE_AURORA_BEAM, MOVE_WATER_PULSE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_WATER_PULSE, MOVE_CRABHAMMER, MOVE_TAUNT, MOVE_LEER}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};
// Juan Rematch 1 - After Becoming Champion
static const struct TrainerMon sParty_Juan3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_HUNTAIL,
    .heldItem = ITEM_FOCUS_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CRUNCH, MOVE_DRAGON_DANCE, MOVE_BATON_PASS, MOVE_HYDRO_PUMP}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_GOREBYSS,
    .heldItem = ITEM_MYSTIC_WATER,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_ICE_BEAM, MOVE_SHADOW_BALL}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_QUAGSIRE,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_RAIN_DANCE, MOVE_MUDDY_WATER, MOVE_YAWN, MOVE_EARTHQUAKE}
    },
    
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_ENCORE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_RELICANTH,
    .heldItem = ITEM_HARD_STONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE, MOVE_RAIN_DANCE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};
// Juan Rematch 2
static const struct TrainerMon sParty_Juan4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_MANTINE,
    .heldItem = ITEM_FOCUS_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_RAIN_DANCE, MOVE_SURF, MOVE_CONFUSE_RAY, MOVE_AERIAL_ACE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SURF, MOVE_YAWN, MOVE_ICY_WIND, MOVE_EARTHQUAKE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CRABHAMMER, MOVE_SLUDGE_BOMB, MOVE_BLIZZARD, MOVE_CRUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_WHITE_HERB,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SUPERPOWER, MOVE_DOUBLE_EDGE, MOVE_IRON_TAIL, MOVE_HYDRO_PUMP}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE, MOVE_BLIZZARD, MOVE_FLAIL}
    }
};
// Juan Rematch 3 (FINAL)
static const struct TrainerMon sParty_Juan5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_POLITOED,
    .heldItem = ITEM_WIKI_BERRY,
    .evs = {252, 0, 0, 252, 0, 0},
    .moves = {MOVE_WHIRLPOOL, MOVE_PERISH_SONG, MOVE_HYPNOSIS, MOVE_PROTECT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_CASTFORM,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_RAIN_DANCE, MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_HYDRO_PUMP}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_YAWN, MOVE_ROCK_SLIDE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_SCOPE_LENS,
    .evs = {0, 252, 0, 0, 252, 0},
    .moves = {MOVE_CRABHAMMER, MOVE_RAIN_DANCE, MOVE_ANCIENT_POWER, MOVE_CRUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_BLASTOISE,
    .heldItem = ITEM_MYSTIC_WATER,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_RAIN_DANCE, MOVE_YAWN, MOVE_HYDRO_CANNON, MOVE_EARTHQUAKE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {252, 0, 0, 252, 0, 0},
    .moves = {MOVE_OCTAZOOKA, MOVE_REST, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM}
    }
};
// Mauville Gym Bug Maniac
static const struct TrainerMon sParty_Angelo[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 20,
    .species = SPECIES_ILLUMISE,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SHOCK_WAVE, MOVE_MOONLIGHT, MOVE_CHARM, MOVE_NONE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 19,
    .species = SPECIES_VOLBEAT,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SHOCK_WAVE, MOVE_QUICK_ATTACK, MOVE_CONFUSE_RAY, MOVE_NONE}
    }
};
// Fortree Gym Bird Keeper 4
static const struct TrainerMon sParty_Darius[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_PELIPPER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_TROPIUS,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Champion
static const struct TrainerMon sParty_Steven1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 57,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_LIECHI_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_TOXIC, MOVE_SKY_ATTACK, MOVE_STEEL_WING, MOVE_WHIRLWIND}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 57,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_EARTHQUAKE, MOVE_LIGHT_SCREEN, MOVE_EXPLOSION}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 57,
    .species = SPECIES_AGGRON,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDER_WAVE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_IRON_TAIL}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 57,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ANCIENT_POWER, MOVE_LEECH_SEED, MOVE_RECOVER, MOVE_CURSE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 57,
    .species = SPECIES_ARMALDO,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ROCK_BLAST, MOVE_TWINEEDLE, MOVE_IRON_TAIL, MOVE_FACADE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_METAGROSS,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_METEOR_MASH, MOVE_AGILITY}
    }
}; 
// Post Game Boss
static const struct TrainerMon sParty_Steven2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 76,
    .species = SPECIES_ARMALDO,
    .heldItem = ITEM_SCOPE_LENS,
    .evs = {0, 252, 252, 0, 0, 0},
    .moves = {MOVE_ROCK_BLAST, MOVE_TWINEEDLE, MOVE_FACADE, MOVE_EARTHQUAKE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 75,
    .species = SPECIES_TYRANITAR,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {0, 252, 252, 0, 0, 0},
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_THUNDERBOLT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 77,
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SKY_ATTACK, MOVE_DOUBLE_EDGE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 76,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {252, 0, 0, 0, 0, 252},
    .moves = {MOVE_REST, MOVE_CURSE, MOVE_SLEEP_TALK, MOVE_ANCIENT_POWER}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 76,
    .species = SPECIES_STEELIX,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_CRUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 78,
    .species = SPECIES_METAGROSS,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_METEOR_MASH, MOVE_FIRE_PUNCH}
    }
};

static const struct TrainerMon sParty_Anabel[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_BELDUM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Tucker[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_BELDUM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Spenser[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_BELDUM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Greta[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_BELDUM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Noland[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_BELDUM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Lucy[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_BELDUM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Brandon[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_BELDUM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Andres2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 34,
    .species = SPECIES_SANDSLASH,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 34,
    .species = SPECIES_WHISCASH,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_VIBRAVA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Andres3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_SANDSLASH,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_CLAYDOL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_FLYGON,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Andres4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_SANDSLASH,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 53,
    .species = SPECIES_SWAMPERT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 55,
    .species = SPECIES_FLYGON,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Andres5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_GLIGAR,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SLOT_2,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_EARTHQUAKE, MOVE_SANDSTORM, MOVE_SLUDGE_BOMB, MOVE_ROCK_TOMB}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_DUGTRIO,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_EARTHQUAKE, MOVE_TRI_ATTACK, MOVE_ROCK_SLIDE, MOVE_AERIAL_ACE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_STEELIX,
    .heldItem = ITEM_SALAC_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {150, 152, 0, 0, 0, 202},
    .moves = {MOVE_TORMENT, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_EXPLOSION}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_SWAMPERT,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 100, 0, 0, 100, 52},
    .moves = {MOVE_MIRROR_COAT, MOVE_EARTHQUAKE, MOVE_MUDDY_WATER, MOVE_COUNTER}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 126, 0, 252, 126, 0},
    .moves = {MOVE_EARTHQUAKE, MOVE_GIGA_DRAIN, MOVE_FIRE_BLAST, MOVE_ROCK_SLIDE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_MAROWAK,
    .heldItem = ITEM_THICK_CLUB,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 0, 0, 252},
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE, MOVE_DYNAMIC_PUNCH}
    }
};

static const struct TrainerMon sParty_Cory2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 33,
    .species = SPECIES_TENTACRUEL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Cory3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_MACHOKE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_TENTACRUEL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Cory4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 50,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 50,
    .species = SPECIES_MACHAMP,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 51,
    .species = SPECIES_TENTACRUEL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Cory5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 59,
    .species = SPECIES_HARIYAMA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_MACHAMP,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 60,
    .species = SPECIES_TENTACRUEL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Pablo2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_SEALEO,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_STARMIE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Pablo3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_WALREIN,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_PILOSWINE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Pablo4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 59,
    .species = SPECIES_PILOSWINE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 59,
    .species = SPECIES_SNEASEL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 61,
    .species = SPECIES_WALREIN,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Pablo5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_CLOYSTER,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 0, 252},
    .moves = {MOVE_SPIKES, MOVE_EXPLOSION, MOVE_SURF, MOVE_TOXIC}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_HAIL, MOVE_BLIZZARD, MOVE_SURF, MOVE_ENCORE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_JYNX,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_LOVELY_KISS, MOVE_DREAM_EATER, MOVE_BLIZZARD, MOVE_HAIL}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_SURF, MOVE_HAIL, MOVE_BLIZZARD, MOVE_THUNDERBOLT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_SNEASEL,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_BLIZZARD, MOVE_SLASH, MOVE_FAINT_ATTACK, MOVE_METAL_CLAW}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_PILOSWINE,
    .heldItem = ITEM_CHESTO_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_EARTHQUAKE, MOVE_BLIZZARD, MOVE_HAIL, MOVE_REST}
    }

};

static const struct TrainerMon sParty_Koji2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_MACHOKE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Koji3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_MACHOKE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_MACHAMP,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Koji4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_MACHAMP,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_MACHAMP,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Koji5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_BRELOOM,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 59,
    .species = SPECIES_MACHAMP,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 60,
    .species = SPECIES_MACHAMP,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Cristin2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_DONPHAN,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_SLAKING,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Cristin3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_LINOONE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_DONPHAN,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_SLAKING,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Cristin4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 60,
    .species = SPECIES_SLAKING,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 60,
    .species = SPECIES_EXPLOUD,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 60,
    .species = SPECIES_SNORLAX,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Cristin5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_TAUROS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_SUBSTITUTE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_MILTANK,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_MEGA_KICK, MOVE_IRON_TAIL, MOVE_ROCK_SLIDE, MOVE_DYNAMIC_PUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_GRANBULL,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_THUNDER_WAVE, MOVE_SMELLING_SALT, MOVE_CRUNCH, MOVE_BULK_UP}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_SNORLAX,
    .heldItem = ITEM_CHESTO_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_ROCK_SLIDE, MOVE_SLEEP_TALK, MOVE_REST, MOVE_BODY_SLAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_STANTLER,
    .heldItem = ITEM_LIECHI_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_FACADE, MOVE_THUNDER_WAVE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_PORYGON2,
    .heldItem = ITEM_SALAC_BERRY,
    .ability = ABILITY_SLOT_1,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_SUBSTITUTE, MOVE_RECYCLE, MOVE_TRI_ATTACK, MOVE_THUNDER_WAVE}
    }
};

static const struct TrainerMon sParty_Fernando2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_ELECTRODE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 38,
    .species = SPECIES_MANECTRIC,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_LOUDRED,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Fernando3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 42,
    .species = SPECIES_ELECTRODE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_MANECTRIC,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 43,
    .species = SPECIES_EXPLOUD,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Fernando4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_ELECTRODE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 47,
    .species = SPECIES_MANECTRIC,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_EXPLOUD,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Fernando5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 61,
    .species = SPECIES_ELECTRODE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 63,
    .species = SPECIES_MANECTRIC,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 65,
    .species = SPECIES_EXPLOUD,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Sawyer2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_NUMEL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Sawyer3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_MACHOKE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_NUMEL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_GRAVELER,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Sawyer4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_MACHOKE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_CAMERUPT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_GRAVELER,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Sawyer5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 60,
    .species = SPECIES_MACHAMP,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 61,
    .species = SPECIES_CAMERUPT,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 62,
    .species = SPECIES_GOLEM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Gabrielle2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_SHUPPET,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_DUSKULL,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_NATU,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 35,
    .species = SPECIES_CHIMECHO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Gabrielle3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 42,
    .species = SPECIES_SHUPPET,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 42,
    .species = SPECIES_DUSCLOPS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 42,
    .species = SPECIES_XATU,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 42,
    .species = SPECIES_CHIMECHO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Gabrielle4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 50,
    .species = SPECIES_BANETTE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 50,
    .species = SPECIES_DUSCLOPS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 50,
    .species = SPECIES_XATU,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 50,
    .species = SPECIES_CHIMECHO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Gabrielle5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_BANETTE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_DUSCLOPS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_XATU,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_CHIMECHO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Thalia2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_SWABLU,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 37,
    .species = SPECIES_SEADRA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Thalia3[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_ALTARIA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_SEADRA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Thalia4[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 49,
    .species = SPECIES_ALTARIA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 48,
    .species = SPECIES_SEADRA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Thalia5[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 58,
    .species = SPECIES_ROSELIA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 60,
    .species = SPECIES_ALTARIA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 61,
    .species = SPECIES_KINGDRA,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Trick Room 7
static const struct TrainerMon sParty_Mariela[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 46,
    .species = SPECIES_CHIMECHO,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Trick Room 7
static const struct TrainerMon sParty_Alvaro[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_DUSCLOPS,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 44,
    .species = SPECIES_ALAKAZAM,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Trick Room 7
static const struct TrainerMon sParty_Everett[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 44,
    .species = SPECIES_WOBBUFFET,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Red[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_CHARMANDER,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_Leaf[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_BULBASAUR,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_BrendanLinkPlaceholder[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_GROUDON,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

static const struct TrainerMon sParty_MayLinkPlaceholder[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_KYOGRE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Dewford Gym (added) Black Belt 3 (Top Left)
static const struct TrainerMon sParty_Kenji[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 14,
    .species = SPECIES_MAKUHITA,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 16,
    .species = SPECIES_MACHOP,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

// Route 106 Fisherman 3 (added) 
static const struct TrainerMon sParty_Tully[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 13,
    .species = SPECIES_GOLDEEN,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 13,
    .species = SPECIES_TENTACOOL,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Granite Cave Hiker 1 (added) 
static const struct TrainerMon sParty_Daniel[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 17,
    .species = SPECIES_GEODUDE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Granite Cave Hiker 2 (added) 
static const struct TrainerMon sParty_Tobin[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 15,
    .species = SPECIES_GEODUDE,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 15,
    .species = SPECIES_MACHOP,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};
// Petalburg (added)
static const struct TrainerMon sParty_WallyPetalburg[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 31,
    .species = SPECIES_SWABLU,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_AIR_CUTTER, MOVE_SING, MOVE_FLY, MOVE_TAKE_DOWN}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 31,
    .species = SPECIES_DELCATTY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CHARM, MOVE_FAINT_ATTACK, MOVE_TAKE_DOWN, MOVE_SING}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_KIRLIA,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_DOUBLE_TEAM, MOVE_SHOCK_WAVE, MOVE_CALM_MIND}
    }
};

// Dewford Gym Leader if beat Wattson prior
static const struct TrainerMon sParty_Brawly1_2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 25,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CONFUSION, MOVE_THUNDER_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 25,
    .species = SPECIES_MACHOKE,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_TOMB, MOVE_SEISMIC_TOSS, MOVE_REVENGE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 25,
    .species = SPECIES_BRELOOM,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_MACH_PUNCH, MOVE_MEGA_DRAIN, MOVE_BULK_UP, MOVE_STUN_SPORE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 26,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_VITAL_THROW, MOVE_REVERSAL, MOVE_BULK_UP, MOVE_FAINT_ATTACK}
    }
};

// Dewford Gym Leader if beat Flannery prior
static const struct TrainerMon sParty_Brawly1_3[] = {
   {
    .ivs = BEST_IV_SPREAD,
    .lvl = 31,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EXTRASENSORY, MOVE_THUNDER_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 31,
    .species = SPECIES_MACHOKE,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_TOMB, MOVE_SEISMIC_TOSS, MOVE_REVENGE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_MACH_PUNCH, MOVE_MEGA_DRAIN, MOVE_BULK_UP, MOVE_STUN_SPORE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 32,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_VITAL_THROW, MOVE_REVERSAL, MOVE_BULK_UP, MOVE_FAINT_ATTACK}
    }
};

// Magma Admin (Magma Hideout)
static const struct TrainerMon sParty_Courtney1[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_MURKROW,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_WING_ATTACK, MOVE_FAINT_ATTACK, MOVE_ICY_WIND, MOVE_STEEL_WING}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_ROSELIA,
    .heldItem = ITEM_PERSIM_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PETAL_DANCE, MOVE_SLUDGE_BOMB, MOVE_GRASS_WHISTLE, MOVE_SYNTHESIS}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_ANCIENT_POWER, MOVE_LIGHT_SCREEN, MOVE_REFLECT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_SHADOW_BALL}
    }
};

// Magma Admin (Space Center)
static const struct TrainerMon sParty_Courtney2[] = {
     {
    .ivs = BEST_IV_SPREAD,
    .lvl = 44,
    .species = SPECIES_MURKROW,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DRILL_PECK, MOVE_FAINT_ATTACK, MOVE_ICY_WIND, MOVE_STEEL_WING}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 45,
    .species = SPECIES_ROSELIA,
    .heldItem = ITEM_PERSIM_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PETAL_DANCE, MOVE_SLUDGE_BOMB, MOVE_GRASS_WHISTLE, MOVE_SYNTHESIS}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 44,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_PSYCHIC, MOVE_EARTHQUAKE, MOVE_LIGHT_SCREEN, MOVE_SUNNY_DAY}
    },
    {
    .ivs = BEST_IV_SPREAD,
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
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_WAILORD,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_REST, MOVE_SLEEP_TALK, MOVE_SURF, MOVE_WHIRLPOOL}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 41,
    .species = SPECIES_CROBAT,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CONFUSE_RAY, MOVE_SLUDGE_BOMB, MOVE_TOXIC, MOVE_FLY}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 42,
    .species = SPECIES_SHARPEDO,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SLASH, MOVE_CRUNCH, MOVE_WATERFALL, MOVE_EARTHQUAKE}
    }
};
// Matt Double Battle (Mt Pyre)
static const struct TrainerMon sParty_MattMyPyre[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_RAIN_DANCE, MOVE_THUNDER, MOVE_LIGHT_SCREEN, MOVE_MIRROR_COAT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 39,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_NONE,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_ICE_BEAM, MOVE_ROCK_SMASH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 40,
    .species = SPECIES_HUNTAIL,
    .heldItem = ITEM_SITRUS_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BODY_SLAM, MOVE_CURSE, MOVE_CRUNCH, MOVE_SURF}
    }
};

// Archie Marine Cave (Post Game)
static const struct TrainerMon sParty_ArchieMarineCave[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 69,
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_PETAYA_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_RAIN_DANCE, MOVE_SURF, MOVE_GIGA_DRAIN, MOVE_BLIZZARD}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 70,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SCOPE_LENS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_BULK_UP, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CROSS_CHOP}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 70,
    .species = SPECIES_WAILORD,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_WATER_SPOUT, MOVE_RAIN_DANCE, MOVE_EARTHQUAKE, MOVE_ICE_BEAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 69,
    .species = SPECIES_MUK,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDER, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_MINIMIZE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 69,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_REST, MOVE_EARTHQUAKE, MOVE_THUNDER_WAVE, MOVE_HYDRO_PUMP}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 70,
    .species = SPECIES_SHARPEDO,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_SURF, MOVE_FACADE}
    }
};

// Maxie Terra Cave (Post Game)
static const struct TrainerMon sParty_MaxieTerraCave[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SUNNY_DAY, MOVE_FIRE_BLAST, MOVE_BODY_SLAM, MOVE_REST}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 69,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_SCOPE_LENS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_LEAF_BLADE, MOVE_EXPLOSION, MOVE_FAINT_ATTACK, MOVE_EXTRASENSORY}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 69,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_WHITE_HERB,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SOLAR_BEAM, MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_CRUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_WEEZING,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_EXPLOSION, MOVE_SUNNY_DAY, MOVE_SHADOW_BALL, MOVE_FIRE_BLAST}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_STEELIX,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 70,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ERUPTION, MOVE_EARTHQUAKE, MOVE_HEAT_WAVE, MOVE_ROCK_SLIDE}
    }
};

// Zinnia (Post Game)
static const struct TrainerMon sParty_Zinnia[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 70,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_REST, MOVE_SKY_ATTACK, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 70,
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_FIRE_PUNCH, MOVE_HEAL_BELL}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 70,
    .species = SPECIES_SCEPTILE,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_LEECH_SEED, MOVE_DRAGON_CLAW, MOVE_LEAF_BLADE, MOVE_DOUBLE_TEAM}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 70,
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_SIGNAL_BEAM, MOVE_CRUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 70,
    .species = SPECIES_CHARIZARD,
    .heldItem = ITEM_PETAYA_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_ENDURE, MOVE_DRAGON_DANCE, MOVE_DRAGON_CLAW, MOVE_HEAT_WAVE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 70,
    .species = SPECIES_SALAMENCE,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {84, 84, 84, 84, 84, 84},
    .moves = {MOVE_WISH, MOVE_TOXIC, MOVE_DRAGON_CLAW, MOVE_FIRE_BLAST}
    }
};

// Elite Four Sydney Rematch
static const struct TrainerMon sParty_Sidney2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_NINJASK,
    .heldItem = ITEM_PETAYA_BERRY,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_BATON_PASS, MOVE_AERIAL_ACE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_LIECHI_BERRY,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_LEAF_BLADE, MOVE_FAINT_ATTACK, MOVE_AERIAL_ACE, MOVE_EXTRASENSORY}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_CHARCOAL,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_CRUNCH, MOVE_FIRE_BLAST, MOVE_REST, MOVE_REVERSAL}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_SHARPEDO,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_WATERFALL, MOVE_ICE_BEAM, MOVE_CRUNCH, MOVE_DOUBLE_EDGE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 67,
    .species = SPECIES_ZANGOOSE,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_ENDURE, MOVE_PURSUIT, MOVE_FLAIL, MOVE_AERIAL_ACE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 69,
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_CRUNCH, MOVE_FACADE, MOVE_ROCK_SLIDE, MOVE_AERIAL_ACE}
    }
};
//Elite Four Phoebe Rematch
static const struct TrainerMon sParty_Phoebe2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_MISDREAVUS,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {252, 0, 252, 0, 0, 0},
    .moves = {MOVE_PERISH_SONG, MOVE_PROTECT, MOVE_PAIN_SPLIT, MOVE_DESTINY_BOND}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 68,
    .species = SPECIES_WOBBUFFET,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {252, 0, 252, 0, 0, 0},
    .moves = {MOVE_COUNTER, MOVE_ENCORE, MOVE_MIRROR_COAT, MOVE_DESTINY_BOND}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 69,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_WHITE_HERB,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_OVERHEAT, MOVE_WILL_O_WISP, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 69,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_CHOICE_BAND,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_HI_JUMP_KICK, MOVE_MEGA_KICK, MOVE_REVERSAL, MOVE_ROCK_SLIDE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 70,
    .species = SPECIES_GENGAR,
    .heldItem = ITEM_SPELL_TAG,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_EXPLOSION, MOVE_FIRE_PUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 70,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {252, 0, 0, 0, 0, 252},
    .moves = {MOVE_SHADOW_BALL, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_PAIN_SPLIT}
    }
};
// Elite Four Glacia Rematch
static const struct TrainerMon sParty_Glacia2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 72,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_LEFTOVERS,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_SURF, MOVE_BLIZZARD, MOVE_THUNDERBOLT, MOVE_HAIL}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 72,
    .species = SPECIES_PILOSWINE,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {0, 252, 0, 0, 252, 0},
    .moves = {MOVE_EARTHQUAKE, MOVE_BLIZZARD, MOVE_ROCK_SLIDE, MOVE_HAIL}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 71,
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_NEVER_MELT_ICE,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_BLIZZARD, MOVE_WATER_PULSE, MOVE_SHADOW_BALL, MOVE_EXPLOSION}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 72,
    .species = SPECIES_JYNX,
    .heldItem = ITEM_LUM_BERRY,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_PSYCHIC, MOVE_BLIZZARD, MOVE_LOVELY_KISS, MOVE_CALM_MIND}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 71,
    .species = SPECIES_CASTFORM,
    .heldItem = ITEM_MYSTIC_WATER,
    .evs = {0, 0, 0, 0, 252, 252},
    .moves = {MOVE_BLIZZARD, MOVE_WATER_PULSE, MOVE_HAIL, MOVE_THUNDERBOLT}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 72,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {252, 0, 0, 0, 0, 252},
    .moves = {MOVE_REST, MOVE_BLIZZARD, MOVE_SLEEP_TALK, MOVE_SHEER_COLD}
    }
};
// Elite Four Drake Rematch
static const struct TrainerMon sParty_Drake2[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 72,
    .species = SPECIES_FERALIGATR,
    .heldItem = ITEM_QUICK_CLAW,
    .evs = {252, 252, 0, 0, 0, 0},
    .moves = {MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE, MOVE_CRUNCH}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 73,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_BLACK_BELT,
    .evs = {0, 252, 0, 252, 0, 0},
    .moves = {MOVE_THUNDERBOLT, MOVE_DYNAMIC_PUNCH, MOVE_FLAMETHROWER, MOVE_EARTHQUAKE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 72,
    .species = SPECIES_CHARIZARD,
    .heldItem = ITEM_SALAC_BERRY,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_FIRE_BLAST, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 72,
    .species = SPECIES_SCEPTILE,
    .heldItem = ITEM_PETAYA_BERRY,
    .evs = {0, 0, 0, 252, 252, 0},
    .moves = {MOVE_LEAF_BLADE, MOVE_DRAGON_CLAW, MOVE_THUNDER_PUNCH, MOVE_ENDURE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 73,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .evs = {252, 0, 0, 0, 252, 0},
    .moves = {MOVE_OCTAZOOKA, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_DOUBLE_EDGE}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 75,
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
    .evs = {252, 0, 0, 252, 0, 0},
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
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_CLEFAIRY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_CLEFAIRY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_CLEFAIRY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_CLEFAIRY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_VAPOREON,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

// Battle Frontier Attack EV trainer
static const struct TrainerMon sParty_Evin[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_NUZLEAF,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_NUZLEAF,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_NUZLEAF,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_NUZLEAF,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_NUZLEAF,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_FLAREON,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

// Battle Frontier Defense EV trainer
static const struct TrainerMon sParty_Eve[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_SILCOON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_CASCOON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_SILCOON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_CASCOON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_SILCOON,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_EEVEE,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

// Battle Frontier Speed EV trainer
static const struct TrainerMon sParty_Evangelos[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_PIKACHU,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_PIKACHU,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_PIKACHU,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_PIKACHU,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_PIKACHU,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_JOLTEON,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

// Battle Frontier Sp Attack EV trainer
static const struct TrainerMon sParty_Evvi[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_FLAAFFY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_FLAAFFY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_FLAAFFY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_FLAAFFY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_FLAAFFY,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_ESPEON,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};

// Battle Frontier Sp Defense EV trainer
static const struct TrainerMon sParty_Evern[] = {
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_TOGETIC,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_TOGETIC,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_TOGETIC,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_TOGETIC,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_TOGETIC,
    .evs = {84, 84, 84, 84, 84, 84}
    },
    {
    .ivs = BEST_IV_SPREAD,
    .lvl = 7,
    .species = SPECIES_UMBREON,
    .evs = {84, 84, 84, 84, 84, 84}
    }
};