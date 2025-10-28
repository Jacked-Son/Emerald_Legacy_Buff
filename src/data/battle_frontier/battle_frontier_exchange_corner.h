static const u16 sFrontierExchangeCorner_Decor1[] =
{
    DECOR_KISS_POSTER,
    DECOR_KISS_CUSHION,
    DECOR_SMOOCHUM_DOLL,
    DECOR_TOGEPI_DOLL,
    DECOR_MEOWTH_DOLL,
    DECOR_CLEFAIRY_DOLL,
    DECOR_DITTO_DOLL,
    DECOR_CYNDAQUIL_DOLL,
    DECOR_CHIKORITA_DOLL,
    DECOR_TOTODILE_DOLL,
    ITEM_LIST_END
};

static const u16 sFrontierExchangeCorner_Decor2[] =
{
    DECOR_LAPRAS_DOLL,
    DECOR_SNORLAX_DOLL,
    DECOR_VENUSAUR_DOLL,
    DECOR_CHARIZARD_DOLL,
    DECOR_BLASTOISE_DOLL,
    ITEM_LIST_END
};

static const u16 sFrontierExchangeCorner_Vitamins[] =
{
    ITEM_PROTEIN,
    ITEM_CALCIUM,
    ITEM_IRON,
    ITEM_ZINC,
    ITEM_CARBOS,
    ITEM_HP_UP,
    ITEM_PP_MAX,
    ITEM_RARE_CANDY,
    ITEM_LIST_END
};

static const u16 sFrontierExchangeCorner_HoldItems[] =
{
    ITEM_LEFTOVERS,
    ITEM_WHITE_HERB,
    ITEM_QUICK_CLAW,
    ITEM_MENTAL_HERB,
    ITEM_BRIGHT_POWDER,
    ITEM_CHOICE_BAND,
    ITEM_KINGS_ROCK,
    ITEM_FOCUS_BAND,
    ITEM_SCOPE_LENS,
    ITEM_METAL_COAT,
    ITEM_CHARCOAL,
    ITEM_MYSTIC_WATER,
    ITEM_MIRACLE_SEED,
    ITEM_MAGNET,
    ITEM_HARD_STONE,
    ITEM_NEVER_MELT_ICE,
    ITEM_BLACK_BELT,
    ITEM_POISON_BARB,
    ITEM_SOFT_SAND,
    ITEM_SHARP_BEAK,
    ITEM_SILVER_POWDER,
    ITEM_TWISTED_SPOON,
    ITEM_SPELL_TAG,
    ITEM_BLACK_GLASSES,
    ITEM_DRAGON_FANG,
    ITEM_SILK_SCARF,
    ITEM_LIST_END
};

static const u16 sFrontierExchangeCorner_Berries[] =
{
    ITEM_LIECHI_BERRY,
    ITEM_GANLON_BERRY,
    ITEM_SALAC_BERRY,
    ITEM_PETAYA_BERRY,
    ITEM_APICOT_BERRY,
    ITEM_POMEG_BERRY,
    ITEM_KELPSY_BERRY,
    ITEM_QUALOT_BERRY,
    ITEM_HONDEW_BERRY,
    ITEM_GREPA_BERRY,
    ITEM_TAMATO_BERRY,
    ITEM_LIST_END
};

static const u8 *const sFrontierExchangeCorner_Decor1Descriptions[] =
{
    BattleFrontier_ExchangeServiceCorner_Text_KissPosterDesc,
    BattleFrontier_ExchangeServiceCorner_Text_KissCushionDesc,
    BattleFrontier_ExchangeServiceCorner_Text_SmoochumDollDesc,
    BattleFrontier_ExchangeServiceCorner_Text_TogepiDollDesc,
    BattleFrontier_ExchangeServiceCorner_Text_MeowthDollDesc,
    BattleFrontier_ExchangeServiceCorner_Text_ClefairyDollDesc,
    BattleFrontier_ExchangeServiceCorner_Text_DittoDollDesc,
    BattleFrontier_ExchangeServiceCorner_Text_CyndaquilDollDesc,
    BattleFrontier_ExchangeServiceCorner_Text_ChikoritaDollDesc,
    BattleFrontier_ExchangeServiceCorner_Text_TotodileDollDesc,
    gText_Exit,
};

static const u8 *const sFrontierExchangeCorner_Decor2Descriptions[] =
{
    BattleFrontier_ExchangeServiceCorner_Text_LargeDollDesc,
    BattleFrontier_ExchangeServiceCorner_Text_LargeDollDesc,
    BattleFrontier_ExchangeServiceCorner_Text_LargeDollDesc,
    BattleFrontier_ExchangeServiceCorner_Text_LargeDollDesc,
    BattleFrontier_ExchangeServiceCorner_Text_LargeDollDesc,
    gText_Exit
};

static const u8 *const sFrontierExchangeCorner_VitaminsDescriptions[] =
{
    BattleFrontier_ExchangeServiceCorner_Text_ProteinDesc,
    BattleFrontier_ExchangeServiceCorner_Text_CalciumDesc,
    BattleFrontier_ExchangeServiceCorner_Text_IronDesc,
    BattleFrontier_ExchangeServiceCorner_Text_ZincDesc,
    BattleFrontier_ExchangeServiceCorner_Text_CarbosDesc,
    BattleFrontier_ExchangeServiceCorner_Text_HPUpDesc,
    BattleFrontier_ExchangeServiceCorner_Text_PpMaxDesc,
    BattleFrontier_ExchangeServiceCorner_Text_RareCandyDesc,
    gText_Exit
};

static const u8 *const sFrontierExchangeCorner_HoldItemsDescriptions[] =
{
    BattleFrontier_ExchangeServiceCorner_Text_LeftoversDesc,
    BattleFrontier_ExchangeServiceCorner_Text_WhiteHerbDesc,
    BattleFrontier_ExchangeServiceCorner_Text_QuickClawDesc,
    BattleFrontier_ExchangeServiceCorner_Text_MentalHerbDesc,
    BattleFrontier_ExchangeServiceCorner_Text_BrightpowderDesc,
    BattleFrontier_ExchangeServiceCorner_Text_ChoiceBandDesc,
    BattleFrontier_ExchangeServiceCorner_Text_KingsRockDesc,
    BattleFrontier_ExchangeServiceCorner_Text_FocusBandDesc,
    BattleFrontier_ExchangeServiceCorner_Text_ScopeLensDesc,
    BattleFrontier_ExchangeServiceCorner_Text_MetalCoatDesc,
    BattleFrontier_ExchangeServiceCorner_Text_CharcoalDesc,
    BattleFrontier_ExchangeServiceCorner_Text_MysticWaterDesc,
    BattleFrontier_ExchangeServiceCorner_Text_MiracleSeedDesc,
    BattleFrontier_ExchangeServiceCorner_Text_MagnetDesc,
    BattleFrontier_ExchangeServiceCorner_Text_HardStoneDesc,
    BattleFrontier_ExchangeServiceCorner_Text_NeverMeltIceDesc,
    BattleFrontier_ExchangeServiceCorner_Text_BlackBeltDesc,
    BattleFrontier_ExchangeServiceCorner_Text_PoisonBarbDesc,
    BattleFrontier_ExchangeServiceCorner_Text_SoftSandDesc,
    BattleFrontier_ExchangeServiceCorner_Text_SharpBeakDesc,
    BattleFrontier_ExchangeServiceCorner_Text_SilverPowderDesc,
    BattleFrontier_ExchangeServiceCorner_Text_TwistedSpoonDesc,
    BattleFrontier_ExchangeServiceCorner_Text_SpellTagDesc,
    BattleFrontier_ExchangeServiceCorner_Text_BlackGlassesDesc,
    BattleFrontier_ExchangeServiceCorner_Text_DragonFangDesc,
    BattleFrontier_ExchangeServiceCorner_Text_SilkScarfDesc,
    gText_Exit
};

static const u8 *const sFrontierExchangeCorner_BerryDescriptions[] =
{
    BattleFrontier_ExchangeServiceCorner_Text_LiechiDesc,
    BattleFrontier_ExchangeServiceCorner_Text_GanlonDesc,
    BattleFrontier_ExchangeServiceCorner_Text_SalacDesc,
    BattleFrontier_ExchangeServiceCorner_Text_PetayaDesc,
    BattleFrontier_ExchangeServiceCorner_Text_ApicotDesc,
    BattleFrontier_ExchangeServiceCorner_Text_PomegDesc,
    BattleFrontier_ExchangeServiceCorner_Text_KelpsyDesc,
    BattleFrontier_ExchangeServiceCorner_Text_QualotDesc,
    BattleFrontier_ExchangeServiceCorner_Text_HondewDesc,
    BattleFrontier_ExchangeServiceCorner_Text_GrepaDesc,
    BattleFrontier_ExchangeServiceCorner_Text_TamatoDesc,
    gText_Exit
};
