#include "global.h"
#include "strings.h"

const u8 gExpandedPlaceholder_Empty[] = _("");
const u8 gExpandedPlaceholder_Kun[] = _("");
const u8 gExpandedPlaceholder_Chan[] = _("");
const u8 gExpandedPlaceholder_Sapphire[] = _("SAPPHIRE");
const u8 gExpandedPlaceholder_Ruby[] = _("RUBY");
const u8 gExpandedPlaceholder_Aqua[] = _("AQUA");
const u8 gExpandedPlaceholder_Magma[] = _("MAGMA");
const u8 gExpandedPlaceholder_Archie[] = _("ARCHIE");
const u8 gExpandedPlaceholder_Maxie[] = _("MAXIE");
const u8 gExpandedPlaceholder_Kyogre[] = _("KYOGRE");
const u8 gExpandedPlaceholder_Groudon[] = _("GROUDON");
const u8 gExpandedPlaceholder_Red[] = _("RED");
const u8 gExpandedPlaceholder_Green[] = _("GREEN");
const u8 gText_EggNickname[] = _("EGG");
const u8 gText_MenuPokemon[] = _("POKéMON");
const u8 gText_NewGame[] = _("NEW GAME");
const u8 gText_Continue[] = _("CONTINUE");
const u8 gTextJP_Options[] = _("せっていを かえる");
const u8 gUnusedText_MysteryGift[] = _("MYSTERY GIFT");
const u8 gText_MysteryGift[] = _("MYSTERY GIFT");
const u8 gText_WirelessNotConnected[] = _("The Wireless Adapter is not\nconnected.");
const u8 gText_MysteryGiftCantUse[] = _("MYSTERY GIFT can't be used while\nthe Wireless Adapter is attached.");
const u8 gText_UpdatingSaveExternalData[] = _("がいぶデ-タにより レポ-トを こうしんします\nしばらく おまちください");
const u8 gText_SaveFileUpdated[] = _("レポ-トが こうしんされました!");
const u8 gText_SaveFileUpdatedSwapBackup[] = _("レポ-トが こうしんされました!\pこれいじょう\nレポ-トが かききれないので\lバックアップカ-トリッジを\lこうかんしてください!\pくわしくは\nにんてんどう サ-ビスセンタ- まで\lおといあわせ ください");
const u8 gText_FailedUpdateSwapBackup[] = _("レポ-トの こうしんは\nしっぱいしました!\pバックアップカ-トリッジを\nこうかんしてください!\pくわしくは\nにんてんどう サ-ビスセンタ- まで\lおといあわせ ください");
const u8 gText_SaveFileCorrupted[] = _("The save file is corrupted.\pThe previous save file will be\nloaded.");
const u8 gText_SaveFileHasBeenDeleted[] = _("The save file has been\ndeleted...");
const u8 gText_1MSubCircuitBoardNotInstalled[] = _("The 1M sub-circuit board is\nnot installed.");
const u8 gTextJP_InternalBatteryHasRunDry[] = _("でんちぎれの ために\nとけいが うごかなくなりました\pとけいに かんけいする できごとは おきませんが\nゲ-ムを つづけて あそぶことは できます");
const u8 gText_PlayerUnused[] = _("しゅじんこう");
const u8 gText_PokedexUnused[] = _("ポケモンずかん");
const u8 gText_MainMenuTime[] = _("TIME");
const u8 gText_BadgesUnused[] = _("もっているバッジ");
const u8 gText_AButton[] = _("Aボタン");
const u8 gText_BButton[] = _("Bボタン");
const u8 gText_RButton[] = _("Rボタン");
const u8 gText_LButton[] = _("Lボタン");
const u8 gText_Start[] = _("スタ-トボタン");
const u8 gText_Select[] = _("セレクトボタン");
const u8 gText_ControlPad[] = _("じゅうじボタン");
const u8 gText_LButtonRButton[] = _("Lボタン Rボタン");
const u8 gText_Controls[] = _("CONTROLS");
ALIGNED(4)
const u8 gText_PickOk[] = _("{DPAD_UPDOWN}えらぶ {A_BUTTON}けってい");
ALIGNED(4)
const u8 gText_ABUTTONNext[] = _("{A_BUTTON}NEXT");
ALIGNED(4)
const u8 gText_ABUTTONNext_BBUTTONBack[] = _("{A_BUTTON}NEXT {B_BUTTON}BACK");
ALIGNED(4)
const u8 gText_UPDOWNPick_ABUTTONNext_BBUTTONBack[] = _("{DPAD_UPDOWN}PICK {A_BUTTON}NEXT {B_BUTTON}CANCEL");
ALIGNED(4)
const u8 gText_UPDOWNPick_ABUTTONBBUTTONCancel[] = _("{DPAD_UPDOWN}PICK {A_BUTTON}{B_BUTTON}CANCEL");
ALIGNED(4)
const u8 gText_ABUTTONExit[] = _("{A_BUTTON}EXIT");
const u8 gText_Boy[] = _("BOY");
const u8 gText_Girl[] = _("GIRL");
const u8 gText_PokedexTableOfContents[] = _("POKéDEX   TABLE OF CONTENTS");
const u8 gText_PickOK[] = _("{DPAD_UPDOWN}PICK {A_BUTTON}OK");
const u8 gText_Seen[] = _("Seen:");
const u8 gText_Owned[] = _("Owned:");
const u8 gText_Kanto[] = _("KANTO");
const u8 gText_National[] = _("NATIONAL");
const u8 gText_PokemonHabitats[] = _("{COLOR DYNAMIC_COLOR6}{SHADOW DYNAMIC_COLOR5}POKéMON HABITATS");
const u8 gText_DexCategory_GrasslandPkmn[] = _("Grassland POKéMON");
const u8 gText_DexCategory_ForestPkmn[] = _("Forest POKéMON");
const u8 gText_DexCategory_WatersEdgePkmn[] = _("Water's-edge POKéMON");
const u8 gText_DexCategory_SeaPkmn[] = _("Sea POKéMON");
const u8 gText_DexCategory_CavePkmn[] = _("Cave POKéMON");
const u8 gText_DexCategory_MountainPkmn[] = _("Mountain POKéMON");
const u8 gText_DexCategory_RoughTerrainPkmn[] = _("Rough-terrain POKéMON");
const u8 gText_DexCategory_UrbanPkmn[] = _("Urban POKéMON");
const u8 gText_DexCategory_RarePkmn[] = _("Rare POKéMON");
const u8 gText_Search[] = _("{COLOR DYNAMIC_COLOR6}{SHADOW DYNAMIC_COLOR5}SEARCH");
const u8 gText_NumericalMode[] = _("NUMERICAL MODE");
const u8 gText_AToZMode[] = _("A TO Z MODE");
const u8 gText_PokedexOther[] = _("{COLOR DYNAMIC_COLOR6}{SHADOW DYNAMIC_COLOR5}OTHER");
const u8 gTextJP_HowToUsePokedex[] = _("ずかんの つかいかた");
const u8 gText_ClosePokedex[] = _("CLOSE POKéDEX");
const u8 gText_TypeMode[] = _("TYPE MODE");
const u8 gText_LightestMode[] = _("LIGHTEST MODE");
const u8 gText_SmallestMode[] = _("SMALLEST MODE");
const u8 gText_PokemonList[] = _("{COLOR DYNAMIC_COLOR6}{SHADOW DYNAMIC_COLOR5}POKéMON LIST");
const u8 gText_NumericalModeKanto[] = _("NUMERICAL MODE: KANTO");
const u8 gText_NumericalModeNational[] = _("NUMERICAL MODE: NATIONAL");
const u8 gText_PokemonListNoColor[] = _("POKéMON LIST");
const u8 gText_SearchNoColor[] = _("SEARCH");
const u8 gText_PickOKExit[] = _("{DPAD_UPDOWN}PICK {A_BUTTON}OK {B_BUTTON}CANCEL");
const u8 gText_5Dashes[] = _("-----");
const u8 gText_PickFlipPageCheckCancel[] = _("{DPAD_LEFTRIGHT}PICK{PLUS}FLIP PAGE {A_BUTTON}CHECK {B_BUTTON}CANCEL");
const u8 gText_PokedexPokemon[] = _(" POKéMON");
const u8 gText_HT[] = _("HT");
const u8 gText_WT[] = _("WT");
const u8 gText_PokedexQuotationMark[] = _("”"); // Unused
const u8 gText_Lbs[] = _("lbs.");
const u8 gTextJP_PokemonData[] = _("ポケモンデ-タ");
const u8 gText_Cry[] = _("{START_BUTTON}CRY");
const u8 gText_NextDataCancel[] = _("{A_BUTTON}NEXT DATA {B_BUTTON}CANCEL");
const u8 gText_Next[] = _("{A_BUTTON}NEXT");
const u8 gText_CancelPreviousData[] = _("{A_BUTTON}CANCEL {B_BUTTON}PREVIOUS DATA");
const u8 gText_Area[] = _("AREA");
const u8 gText_Size[] = _("SIZE");
const u8 gText_AreaUnknown[] = _("AREA UNKNOWN");
const u8 gText_PokedexNo[] = _("{NO}");
const u8 gText_Page[] = _("PAGE");
ALIGNED(4)
const u8 gText_WelcomeToHOF[] = _("Welcome to the HALL OF FAME!");
ALIGNED(4)
const u8 gText_HOFDexRating[] = _("みつけた ポケモン {STR_VAR_1}!\nつかまえた ポケモン {STR_VAR_2}!\pオダマキはかせの\nポケモンずかん ひょうか!\pオダマキ“どれどれ\p");
ALIGNED(4)
const u8 gText_HOFDexSaving[] = _("ここまでの レポ-トを かきしるしています!\nでんげんを きらないでください");
ALIGNED(4)
const u8 gText_HOFCorrupted[] = _("The HALL OF FAME data is\ncorrupted.");
const u8 gText_HOFNumber[] = _("HALL OF FAME No. {STR_VAR_1}");
const u8 gText_LeagueChamp[] = _("LEAGUE CHAMPION!\nCONGRATULATIONS!");
ALIGNED(4)
const u8 gText_Number[] = _("No. ");
ALIGNED(4)
const u8 gText_Level[] = _("Lv. ");
ALIGNED(4)
const u8 gText_Name[] = _("NAME");
ALIGNED(4)
const u8 gText_IDNumber[] = _("IDNo.");
const u8 gText_BirchInTrouble[] = _("{HIGHLIGHT DYNAMIC_COLOR6}{COLOR WHITE}オダマキはかせが ピンチだ!\nポケモンを だして たすけてあげよう!");
const u8 gText_ConfirmStarterChoice[] = _("{HIGHLIGHT DYNAMIC_COLOR6}{COLOR WHITE}このポケモンにしますか?");
const u8 gText_Pokemon4[] = _("ポケモン");
const u8 gText_SaveError_PleaseExchangeBackupMemory[] = _("Save error.\pPlease exchange the\nbackup memory.");
const u8 gSaveStatName_Player[] = _("PLAYER");
const u8 gSaveStatName_Badges[] = _("BADGES");
const u8 gSaveStatName_Pokedex[] = _("POKéDEX");
const u8 gSaveStatName_Time[] = _("TIME");
const u8 gText_FlyToWhere[] = _("どこへ とびますか?");
const u8 gOtherText_Use[] = _("USE");
const u8 gOtherText_Toss[] = _("TOSS");
const u8 gOtherText_Register[] = _("REGISTER");
const u8 gOtherText_Give[] = _("GIVE");
const u8 gMenuText_Confirm[] = _("けってい");
const u8 gOtherText_Walk[] = _("WALK");
const u8 gFameCheckerText_Cancel[] = _("CANCEL");
const u8 gOtherText_Exit[] = _("EXIT");
const u8 gString_Dummy[] = _("");
const u8 gText_Cancel7[] = _("キャンセル");
const u8 gText_Item[] = _("ITEM");
const u8 gText_Mail[] = _("MAIL");
const u8 gText_Take[] = _("TAKE");
const u8 gText_Store[] = _("STORE");
const u8 gOtherText_Check[] = _("CHECK");
const u8 gText_PokeSum_Item_None[] = _("NONE");
const u8 gOtherText_Open[] = _("OPEN");
const u8 gOtherText_Deselect[] = _("DESELECT");
const u8 gText_PokeSum_DexNoUnknown[] = _("???");
const u8 gText_FiveMarks[] = _("?????");
const u8 gText_Slash[] = _("/");
const u8 gText_PokeSum_OneHyphen[] = _("-");
const u8 gText_PokeSum_TwoHyphens[] = _("--");
const u8 gText_ThreeHyphens[] = _("---");
const u8 gText_SevenHyphens[] = _("-------");
const u8 gText_MaleSymbol[] = _("♂");
const u8 gText_FemaleSymbol[] = _("♀");
const u8 gText_Lv[] = _("{LV_2}");
const u8 gText_NumberClear01[] = _("{NO}{CLEAR 0x01}");
const u8 gText_Plus[] = _("{PLUS}");
const u8 gText_Escape3[] = _("{ESCAPE 0x03}"); // Unused, RIGHT_ARROW in pokeemerald
const u8 gText_IDNumber2[] = _("{ID}{NO}");
const u8 gText_PokeSum_PP[] = _("{PP}");
const u8 gText_SelectorArrow2[] = _("▶");
const u8 gText_YesNo[] = _("YES\nNO");
const u8 gText_GoBackToThePreviousMenu[] = _("Go back to the\nprevious menu.");
const u8 gText_WhatWouldYouLikeToDo[] = _("What would you like to do?");
const u8 gText_MenuPokedex[] = _("POKéDEX");
const u8 gText_MenuPC[] = _("PC");
const u8 gText_MenuBag[] = _("BAG");
const u8 gText_MenuPokenav[] = _("ポケナビ");
const u8 gText_MenuPlayer[] = _("{PLAYER}");
const u8 gText_MenuSave[] = _("SAVE");
const u8 gText_MenuOption[] = _("OPTION");
const u8 gText_MenuExit[] = _("EXIT");
const u8 gText_MenuRetire[] = _("RETIRE");
const u8 gText_MenuSafariStats[] = _("{STR_VAR_1}/{STR_VAR_2}\nBALLS  {STR_VAR_3}");
const u8 gText_TimesStrVar1[] = _("×{STR_VAR_1}");
const u8 gText_Berry[] = _(" BERRY");
const u8 gText_Coins[] = _("{STR_VAR_1} COINS");
const u8 gText_Items2[] = _("ITEMS");
const u8 gText_PokeBalls2[] = _("POKé BALLS");
const u8 gText_KeyItems2[] = _("KEY ITEMS");
const u8 gText_DepositItem[] = _("DEPOSIT ITEM");
const u8 gText_CloseBag[] = _("CLOSE BAG");
const u8 gText_Var1IsSelected[] = _("{STR_VAR_1} is\nselected.");
const u8 gText_CantWriteMailHere[] = _("You can't write\nMAIL here.");
const u8 gText_ThereIsNoPokemon[] = _("There is no\nPOKéMON.");
const u8 gOtherText_WhereShouldTheStrVar1BePlaced[] = _("Where should the {STR_VAR_1}\nbe placed?");
const u8 gText_ItemCantBeHeld[] = _("The {STR_VAR_1} can't be held.");
const u8 gText_TheStrVar1CantBeHeldHere[] = _("The {STR_VAR_1} can't be held\nhere.");
const u8 gText_DepositHowManyStrVars1[] = _("Deposit how many\n{STR_VAR_1}(s)?");
const u8 gText_DepositedStrVar2StrVar1s[] = _("Deposited {STR_VAR_2}\n{STR_VAR_1}(s).");
const u8 gText_NoRoomToStoreItems[] = _("There's no room to\nstore items.");
const u8 gText_TossOutHowManyStrVar1s[] = _("Toss out how many\n{STR_VAR_1}(s)?");
const u8 gText_ThrewAwayStrVar2StrVar1s[] = _("Threw away {STR_VAR_2}\n{STR_VAR_1}(s).");
const u8 gText_ThrowAwayStrVar2OfThisItemQM[] = _("Throw away {STR_VAR_2} of\nthis item?");
const u8 gText_OakForbidsUseOfItemHere[] = _("OAK: {PLAYER}!\nThis isn't the time to use that!{PAUSE_UNTIL_PRESS}");
const u8 gText_CantDismountBike[] = _("You can't dismount your BIKE here.{PAUSE_UNTIL_PRESS}");
const u8 gText_ItemfinderResponding[] = _("Huh?\nThe ITEMFINDER's responding!\pThere's an item buried around here!{PAUSE_UNTIL_PRESS}");
const u8 gText_ItemfinderShakingWildly[] = _("Oh!\nThe ITEMFINDER's shaking wildly!\pThere's an item buried underfoot!\p‥ ‥ ‥ ‥ ‥ ‥{PAUSE_UNTIL_PRESS}");
const u8 gText_NopeTheresNoResponse[] = _("‥ ‥ ‥ ‥Nope!\nThere's no response.{PAUSE_UNTIL_PRESS}");
const u8 gText_CoinCase[] = _("Your COINS:\n{STR_VAR_1}{PAUSE_UNTIL_PRESS}");
const u8 gText_BootedUpTM[] = _("わざマシンを きどうした!");
const u8 gText_BootedUpHM[] = _("ひでんマシンを きどうした!");
const u8 gText_TMHMContainedVar1[] = _("なかには {STR_VAR_1}が\nきろくされていた!\p{STR_VAR_1}を\nポケモンに おぼえさせますか?");
const u8 gText_PlayerUsedVar2[] = _("{PLAYER} used the\n{STR_VAR_2}.{PAUSE_UNTIL_PRESS}");
const u8 gText_RepelEffectsLingered[] = _("But the effects of a REPEL\nlingered from earlier.{PAUSE_UNTIL_PRESS}");
const u8 gText_UsedVar2WildLured[] = _("{PLAYER} used the\n{STR_VAR_2}.\pWild POKéMON will be lured.{PAUSE_UNTIL_PRESS}");
const u8 gText_UsedVar2WildRepelled[] = _("{PLAYER} used the\n{STR_VAR_2}.\pWild POKéMON will be repelled.{PAUSE_UNTIL_PRESS}");
const u8 gText_BoxFull[] = _("The BOX is full.{PAUSE_UNTIL_PRESS}");
const u8 gText_PowderQty[] = _("POWDER QTY: {STR_VAR_1}{PAUSE_UNTIL_PRESS}");
const u8 gOtherText_Powder[] = _("POWDER");
const u8 gText_PlayedPokeFluteCatchy[] = _("Played the POKé FLUTE.\pNow, that's a catchy tune!{PAUSE_UNTIL_PRESS}");
const u8 gText_PlayedPokeFlute[] = _("Played the POKé FLUTE.");
const u8 gText_PokeFluteAwakenedMon[] = _("The POKé FLUTE awakened sleeping\nPOKéMON.{PAUSE_UNTIL_PRESS}");
const u8 gText_TMCase[] = _("TM CASE");
const u8 gText_Close[] = _("CLOSE");
const u8 gText_TMCaseWillBePutAway[] = _("The TM CASE will be\nput away.");
const u8 gText_FontSmall[] = _("{FONT_SMALL}");
const u8 gText_FontNormal[] = _("{FONT_NORMAL}");
const u8 gText_EmptySpace[] = _("  ");
const u8 gText_BerryPouch[] = _("BERRY POUCH");
const u8 gText_TheBerryPouchWillBePutAway[] = _("The BERRY POUCH will be\nput away.");
const u8 gText_ShopBuy[] = _("BUY");
const u8 gText_ShopSell[] = _("SELL");
const u8 gText_ShopQuit[] = _("SEE YA!");
const u8 gText_InBagVar1[] = _("IN BAG:{FONT_SMALL} {STR_VAR_1}");
const u8 gText_QuitShopping[] = _("Quit shopping.");
const u8 gText_Var1CertainlyHowMany[] = _("{STR_VAR_1}? Certainly.\nHow many would you like?");
const u8 gText_Var1AndYouWantedVar2[] = _("{STR_VAR_1}, and you want {STR_VAR_2}.\nThat will be ¥{STR_VAR_3}. Okay?");
const u8 gText_Var1IsItThatllBeVar2[] = _("{STR_VAR_1} だね!\n{STR_VAR_2}¥ だけど かうかい?");
const u8 gText_YouWantedVar1ThatllBeVar2[] = _("{STR_VAR_1} ですね!\n{STR_VAR_2}¥ だけど かいますか?");
const u8 gText_HereYouGoThankYou[] = _("Here you are!\nThank you!");
const u8 gText_ThankYouIllSendItHome[] = _("どうも ありがとう!\nじたくの パソコンに おくって おきますね!");
const u8 gText_ThanksIllSendItHome[] = _("どうも ありがとう!\nじたくの パソコンに おくって おくね!");
const u8 gText_YouDontHaveMoney[] = _("You don't have enough money.{PAUSE_UNTIL_PRESS}");
const u8 gText_NoMoreRoomForThis[] = _("You have no more room for this\nitem.{PAUSE_UNTIL_PRESS}");
const u8 gText_SpaceForVar1Full[] = _("{STR_VAR_1}を\nいれる ばしょが いっぱいです{PAUSE_UNTIL_PRESS}");
const u8 gText_AnythingElseICanHelp[] = _("Is there anything else I can do?");
const u8 gText_CanIHelpWithAnythingElse[] = _("その ほかに\nなにか ちからに なれることは?");
const u8 gText_ThrowInPremierBall[] = _("プレミアボ-ル 1コ\nおまけ しておきますね!{PAUSE_UNTIL_PRESS}");
const u8 gText_OhNoICantBuyThat[] = _("{STR_VAR_1}? Oh, no.\nI can't buy that.{PAUSE_UNTIL_PRESS}");
const u8 gText_HowManyWouldYouLikeToSell[] = _("{STR_VAR_1}?\nHow many would you like to sell?");
const u8 gText_ICanPayThisMuch_WouldThatBeOkay[] = _("I can pay ¥{STR_VAR_3}.\nWould that be okay?");
const u8 gText_TurnedOverItemsWorthYen[] = _("Turned over the {STR_VAR_1}シSス\nworth ¥{STR_VAR_3}.");
const u8 gText_PokedollarVar1[] = _("¥{STR_VAR_1}");
const u8 gText_Shift[] = _("SHIFT");
const u8 gText_SendOut[] = _("SEND OUT");
const u8 gText_Switch2[] = _("SWITCH");
const u8 gText_Summary5[] = _("SUMMARY");
const u8 gText_Moves[] = _("つかえるわざ");
const u8 gText_Enter[] = _("ENTER");
const u8 gText_NoEntry[] = _("NO ENTRY");
const u8 gText_Take2[] = _("TAKE");
const u8 gText_Read2[] = _("READ");
const u8 gText_Trade4[] = _("TRADE");
const u8 gText_ItemEffect_HP[] = _("HP");
const u8 gText_ItemEffect_SpAtk[] = _("SP. ATK");
const u8 gText_ItemEffect_SpDef[] = _("SP. DEF");
const u8 gText_PartyMenu_OK[] = _("OK");
const u8 gText_Empty[] = _("");
const u8 gText_PauseUntilPress[] = _("{PAUSE_UNTIL_PRESS}");
const u8 gText_WontHaveEffect[] = _("It won't have any effect.{PAUSE_UNTIL_PRESS}");
const u8 gText_CantBeUsedOnPkmn[] = _("This can't be used on\nthat POKéMON.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnCantSwitchOut[] = _("{STR_VAR_1} can't be switched\nout!{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnAlreadyInBattle[] = _("{STR_VAR_1} is already\nin battle!{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnAlreadySelected[] = _("{STR_VAR_1} has already been\nselected.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnHasNoEnergy[] = _("{STR_VAR_1} has no energy\nleft to battle!{PAUSE_UNTIL_PRESS}");
const u8 gText_CantSwitchWithAlly[] = _("You can't switch {STR_VAR_1}'s\nPOKéMON with one of yours!{PAUSE_UNTIL_PRESS}");
const u8 gText_EggCantBattle[] = _("An EGG can't battle!{PAUSE_UNTIL_PRESS}");
const u8 gText_CantUseUntilNewBadge[] = _("This can't be used until a new\nBADGE is obtained.{PAUSE_UNTIL_PRESS}");
const u8 gText_NoMoreThanThreeMayEnter[] = _("No more than three POKéMON\nmay enter.{PAUSE_UNTIL_PRESS}");
const u8 gText_NoMoreThanTwoMayEnter[] = _("No more than two POKéMON\nmay enter.{PAUSE_UNTIL_PRESS}");
const u8 gText_SendMailToPC[] = _("Send the removed MAIL to\nyour PC?");
const u8 gText_MailSentToPC[] = _("The MAIL was sent to your PC.{PAUSE_UNTIL_PRESS}");
const u8 gText_PCMailboxFull[] = _("Your PC's MAILBOX is full.{PAUSE_UNTIL_PRESS}");
const u8 gText_MailMessageWillBeLost[] = _("If the MAIL is removed, the\nmessage will be lost. Okay?");
const u8 gText_RemoveMailBeforeItem[] = _("MAIL must be removed before\nholding an item.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnWasGivenItem[] = _("{STR_VAR_1} was given the\n{STR_VAR_2} to hold.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnAlreadyHoldingItemSwitch[] = _("{STR_VAR_1} is already holding\none {STR_VAR_2}.\pWould you like to switch the\ntwo items?");
const u8 gText_PkmnNotHolding[] = _("{STR_VAR_1} isn't holding\nanything.{PAUSE_UNTIL_PRESS}");
const u8 gText_ReceivedItemFromPkmn[] = _("Received the {STR_VAR_2}\nfrom {STR_VAR_1}.{PAUSE_UNTIL_PRESS}");
const u8 gText_MailTakenFromPkmn[] = _("MAIL was taken from the\nPOKéMON.{PAUSE_UNTIL_PRESS}");
const u8 gText_SwitchedPkmnItem[] = _("The {STR_VAR_2} was taken and\nreplaced with the {STR_VAR_1}.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnHoldingItemCantHoldMail[] = _("This POKéMON is holding an\nitem. It cannot hold MAIL.{PAUSE_UNTIL_PRESS}");
const u8 gText_MailTransferredFromMailbox[] = _("MAIL was transferred from\nthe MAILBOX.{PAUSE_UNTIL_PRESS}");
const u8 gText_BagFullCouldNotRemoveItem[] = _("The {STR_VAR_1} is full. The POKéMON's\nitem could not be removed.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnLearnedMove3[] = _("{STR_VAR_1} learned\n{STR_VAR_2}!");
const u8 gText_PkmnCantLearnMove[] = _("{STR_VAR_1} and {STR_VAR_2}\nare not compatible.\p{STR_VAR_2} can't be\nlearned.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnNeedsToReplaceMove[] = _("{STR_VAR_1} wants to learn the\nmove {STR_VAR_2}.\pHowever, {STR_VAR_1} already\nknows four moves.\pShould a move be deleted and\nreplaced with {STR_VAR_2}?");
const u8 gText_StopLearningMove2[] = _("Stop trying to teach\n{STR_VAR_2}?");
const u8 gText_MoveNotLearned[] = _("{STR_VAR_1} did not learn the\nmove {STR_VAR_2}.{PAUSE_UNTIL_PRESS}");
const u8 gText_WhichMoveToForget[] = _("Which move should be forgotten?{PAUSE_UNTIL_PRESS}");
const u8 gText_12PoofForgotMove[] = _("1, {PAUSE 0x0F}2, and{PAUSE 0x0F}‥ {PAUSE 0x0F}‥ {PAUSE 0x0F}‥ {PAUSE 0x0F}{PLAY_SE SE_BALL_BOUNCE_1}Poof!\p{STR_VAR_1} forgot how to\nuse {STR_VAR_2}.\pAnd...{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnAlreadyKnows[] = _("{STR_VAR_1} already knows\n{STR_VAR_2}.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnHPRestoredByVar2[] = _("{STR_VAR_1}'s HP was restored\nby {STR_VAR_2} point(s).{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnCuredOfPoison[] = _("{STR_VAR_1} was cured of its\npoisoning.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnCuredOfParalysis[] = _("{STR_VAR_1} was cured of\nparalysis.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnWokeUp2[] = _("{STR_VAR_1} woke up.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnBurnHealed[] = _("{STR_VAR_1}'s burn was healed.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnThawedOut[] = _("{STR_VAR_1} was thawed out.{PAUSE_UNTIL_PRESS}");
const u8 gText_PPWasRestored[] = _("PP was restored.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnRegainhedHealth[] = _("{STR_VAR_1}は\nげんきを とりもどした!{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnBecameHealthy[] = _("{STR_VAR_1} became healthy.{PAUSE_UNTIL_PRESS}");
const u8 gText_MovesPPIncreased[] = _("{STR_VAR_1}'s PP increased.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnElevatedToLvVar2[] = _("{STR_VAR_1} was elevated to\nLv. {STR_VAR_2}.");
const u8 gText_PkmnBaseVar2StatIncreased[] = _("{STR_VAR_1}'s base {STR_VAR_2}\nstat was raised.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnSnappedOutOfConfusion[] = _("{STR_VAR_1} snapped out of its\nconfusion.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnGotOverInfatuation[] = _("{STR_VAR_1} got over its\ninfatuation.{PAUSE_UNTIL_PRESS}");
const u8 gText_OnlyPkmnForBattle[] = _("That's your only\nPOKéMON for battle.");
ALIGNED(4)
const u8 gText_PkmnCantBeTradedNow[] = _("That POKéMON can't be traded\nnow.");
ALIGNED(4)
const u8 gText_EggCantBeTradedNow[] = _("An EGG can't be traded now.");
ALIGNED(4)
const u8 gText_OtherTrainersPkmnCantBeTraded[] = _("The other TRAINER's POKéMON\ncan't be traded now.");
ALIGNED(4)
const u8 gText_OtherTrainerCantAcceptPkmn[] = _("The other TRAINER can't accept\nthat POKéMON now.");
ALIGNED(4)
const u8 gText_CantTradeWithTrainer[] = _("You can't trade with that\nTRAINER now.");
ALIGNED(4)
const u8 gText_NotPkmnOtherTrainerWants[] = _("That isn't the type of POKéMON\nthat the other TRAINER wants.");
ALIGNED(4)
const u8 gText_ThatIsntAnEgg[] = _("That isn't an EGG.");
const u8 gText_ChoosePokemon[] = _("Choose a POKéMON.");
const u8 gText_MoveToWhere[] = _("Move to where?");
const u8 gText_TeachWhichPokemon[] = _("Teach which POKéMON?");
const u8 gText_UseOnWhichPokemon[] = _("Use on which POKéMON?");
const u8 gText_GiveToWhichPokemon[] = _("Give to which POKéMON?");
const u8 gText_DoWhatWithPokemon[] = _("Do what with this {PKMN}?");
const u8 gText_NothingToCut[] = _("There's nothing to CUT.");
const u8 gText_CantSurfHere[] = _("No SURFING here!");
const u8 gText_AlreadySurfing[] = _("You're already SURFING.");
const u8 gText_CantUseHere[] = _("Can't use that here.");
const u8 gText_RestoreWhichMove[] = _("Restore which move?");
const u8 gText_BoostPp[] = _("Boost PP of which?");
const u8 gText_DoWhatWithItem[] = _("Do what with an item?");
const u8 gText_NoPokemonForBattle[] = _("No battling this way!");
const u8 gText_ChoosePokemon2[] = _("Choose a POKéMON.");
const u8 gText_NotEnoughHp[] = _("Not enough HP‥");
const u8 gText_ThreePkmnAreNeeded[] = _("Three {PKMN} are needed.");
const u8 gText_PokemonCantBeSame[] = _("{PKMN} can't be the same.");
const u8 gText_NoIdenticalHoldItems[] = _("No same hold items!");
const u8 gText_CurrentIsTooFast[] = _("The current is much too fast!");
const u8 gText_DoWhatWithMail[] = _("Do what with the MAIL?");
const u8 gText_ChoosePokemonCancel[] = _("Choose POKéMON or CANCEL.");
const u8 gText_ChoosePokemonConfirm[] = _("Choose POKéMON and confirm.");
const u8 gText_TwoPokemonAreNeeded[] = _("Two POKéMON are needed.");
const u8 gText_EnjoyCycling[] = _("Let's enjoy cycling!");
const u8 gText_InUseAlready_PM[] = _("This is in use already.");
const u8 gText_NoUse[] = _("No use.");
const u8 gText_Able[] = _("ABLE");
const u8 gText_First_PM[] = _("FIRST");
const u8 gText_Second_PM[] = _("SECOND");
const u8 gText_Third_PM[] = _("THIRD");
const u8 gText_Able2[] = _("ABLE");
const u8 gText_NotAble[] = _("NOT ABLE");
const u8 gText_Able3[] = _("ABLE!");
const u8 gText_NotAble2[] = _("NOT ABLE!");
const u8 gText_Learned[] = _("LEARNED");
const u8 gText_OakImportantToGetToKnowPokemonThroughly[] = _("OAK: It's important to get to know\nyour POKéMON thoroughly.\p");
const u8 gText_OakThisIsListOfPokemon[] = _("This is a list of your POKéMON,\n{PLAYER}.\pOpen this to check the skills\nand moves of your POKéMON.\pYou also choose POKéMON here if\nyou want to use an item on one.{PAUSE_UNTIL_PRESS}");
const u8 gText_CutATreeOrGrass[] = _("Cut a tree or grass.");
const u8 gText_FlyToAKnownTown[] = _("Fly to a known town.");
const u8 gText_TravelOnWater[] = _("Travel on water.");
const u8 gText_MoveHeavyBoulders[] = _("Move heavy boulders.");
const u8 gText_LightUpDarkness[] = _("Light up darkness.");
const u8 gText_ShatterACrackedRock[] = _("Shatter a cracked rock.");
const u8 gText_ClimbAWaterfall[] = _("Climb a waterfall.");
const u8 gText_DiveUnderwater[] = _("すいちゅうに もぐる");
const u8 gText_EscapeFromHere[] = _("Escape from here.");
const u8 gText_LureWildPokemon[] = _("Lure wild POKéMON.");
const u8 gText_ShareHp[] = _("Share HP.");
const u8 gText_ReturnToAHealingSpot[] = _("Return to a healing spot.");
const u8 gText_EscapeFromHereAndReturnTo[] = _("Want to escape from here and return\nto {STR_VAR_1}?");
const u8 gText_ReturnToHealingSpot[] = _("Want to return to the healing spot\nused last in {STR_VAR_1}?");
const u8 gText_ItemEffect_Attack[] = _("ATTACK");
const u8 gText_ItemEffect_Defense[] = _("DEFENSE");
const u8 gText_ItemEffect_SpAtk_Unused[] = _("とくこう"); // A different SpAtk is used instead
const u8 gText_ItemEffect_SpDef_Unused[] = _("とくぼう"); // A different SpDef is used instead
const u8 gText_ItemEffect_Speed[] = _("SPEED");
const u8 gText_ItemEffect_HP_Unused[] = _("HP"); // A different HP is used instead
const u8 gText_PkmnCantParticipate[] = _("That POKéMON can't participate.{PAUSE_UNTIL_PRESS}");
const u8 gText_CancelParticipation[] = _("Cancel participation?");
const u8 gText_Empty12[] = _("");
const u8 gText_CancelBattle[] = _("Cancel the battle?");
const u8 gText_TurnOff[] = _("TURN OFF");
const u8 gText_Decoration[] = _("もようがえ");
const u8 gText_ItemStorage[] = _("ITEM STORAGE");
const u8 gText_Mailbox[] = _("MAILBOX");
const u8 gText_DepositItem2[] = _("DEPOSIT ITEM");
const u8 gText_WithdrawItem2[] = _("WITHDRAW ITEM");
const u8 gText_TossItem[] = _("どうぐを すてる");
const u8 gText_StoreItemsInThePC[] = _("Store items in the PC.");
const u8 gText_TakeOutItemsFromThePC[] = _("Take out items from the PC.");
const u8 gText_ThrowAwayItemsInPC[] = _("パソコンに あずけている\nどうぐを すてます");
const u8 gText_ThereAreNoItems[] = _("There are no items.{PAUSE_UNTIL_PRESS}");
const u8 gText_NoMoreRoomInBag[] = _("There is no more\nroom in the BAG.");
const u8 gText_WithdrawHowMany[] = _("Withdraw how many\n{STR_VAR_1}(s)?");
const u8 gText_WithdrewQuantItem[] = _("Withdrew {STR_VAR_2}\n{STR_VAR_1}(s).");
const u8 gOtherText_Read[] = _("READ");
const u8 gOtherText_MoveToBag[] = _("MOVE TO BAG");
const u8 gOtherText_Give2[] = _("GIVE");
const u8 gText_TheresNoMailHere[] = _("There's no MAIL here.{PAUSE_UNTIL_PRESS}");
const u8 gText_WhatWouldYouLikeToDoWithPlayersMail[] = _("What would you like to do with\n{STR_VAR_1}'s MAIL?");
const u8 gText_MessageWillBeLost[] = _("The message will be lost.\nIs that okay?");
const u8 gText_BagIsFull[] = _("The BAG is full.{PAUSE_UNTIL_PRESS}");
const u8 gText_MailReturnedToBagMessageErased[] = _("The MAIL was returned to the BAG\nwith its message erased.{PAUSE_UNTIL_PRESS}");
const u8 gText_WithdrawItem[] = _("WITHDRAW\nITEM");
const u8 gText_Withdraw[] = _("WITHDRAW");
const u8 gText_ReturnToPC[] = _("Return to the PC.");
const u8 gText_LtSurge[] = _("LT. SURGE");
const u8 gText_Koga[] = _("KOGA");
const u8 gText_Participate[] = _("さんか する");
const u8 gText_Info[] = _("INFO");
const u8 gText_Eggs[] = _("EGGS");
const u8 gText_HallOfFame[] = _("HALL OF FAME");
const u8 gText_Victories[] = _("VICTORIES");
const u8 gText_Quit[] = _("QUIT");
const u8 gText_Psn[] = _("PSN");
const u8 gText_Par[] = _("PAR");
const u8 gText_Slp[] = _("SLP");
const u8 gText_Brn[] = _("BRN");
const u8 gText_Frz[] = _("FRZ");
const u8 gText_Toxic[] = _("TOXIC");
const u8 gText_OK[] = _("OK");
const u8 gOtherText_Quit[] = _("QUIT");
const u8 gText_SawIt[] = _("みました");
const u8 gText_NotYet[] = _("これから");
const u8 gText_Yes[] = _("YES");
const u8 gText_No[] = _("NO");
const u8 gText_Info4[] = _("せつめい");
const u8 gText_SingleBattle[] = _("SINGLE BATTLE");
const u8 gText_DoubleBattle[] = _("DOUBLE BATTLE");
const u8 gText_MultiBattle[] = _("MULTI BATTLE");
const u8 gText_MakeAChallenge[] = _("Make a challenge.");
const u8 gText_Info_2[] = _("INFO");
const u8 gText_FreshWater_200[] = _("FRESH WATER{CLEAR_TO 0x57}{FONT_SMALL}¥200");
const u8 gText_SodaPop_300[] = _("SODA POP{CLEAR_TO 0x57}{FONT_SMALL}¥300");
const u8 gText_Lemonade_350[] = _("LEMONADE{CLEAR_TO 0x57}{FONT_SMALL}¥350");
const u8 gText_50Coins_1000[] = _("{FONT_SMALL} 50 COINS{CLEAR_TO 0x45}¥1,000");
const u8 gText_500Coins_10000[] = _("{FONT_SMALL}500 COINS{CLEAR_TO 0x40}¥10,000");
const u8 gText_Excellent[] = _("Excellent");
const u8 gText_NotSoBad[] = _("Not so bad");
const u8 gText_RedShard[] = _("RED SHARD");
const u8 gText_YellowShard[] = _("YELLOW SHARD");
const u8 gText_BlueShard[] = _("BLUE SHARD");
const u8 gText_GreenShard[] = _("GREEN SHARD");
const u8 gText_BattleTower[] = _("バトルタワ-");
const u8 gText_Right[] = _("Right");
const u8 gText_Left[] = _("Left");
const u8 gText_Tm13_4000Coins[] = _("TM13{CLEAR_TO 0x48}{FONT_SMALL}4,000 COINS");
const u8 gText_Tm23_3500Coins[] = _("TM23{CLEAR_TO 0x48}{FONT_SMALL}3,500 COINS");
const u8 gText_Tm24_4000Coins[] = _("TM24{CLEAR_TO 0x48}{FONT_SMALL}4,000 COINS");
const u8 gText_Tm30_4500Coins[] = _("TM30{CLEAR_TO 0x48}{FONT_SMALL}4,500 COINS");
const u8 gText_Tm35_4000Coins[] = _("TM35{CLEAR_TO 0x48}{FONT_SMALL}4,000 COINS");
const u8 gText_1F_2[] = _("1F");
const u8 gText_2F_2[] = _("2F");
const u8 gText_3F_2[] = _("3F");
const u8 gText_4F_2[] = _("4F");
const u8 gText_5F_2[] = _("5F");
const u8 gText_Cool[] = _("COOL");
const u8 gText_Beauty[] = _("BEAUTY");
const u8 gText_Cute[] = _("CUTE");
const u8 gText_Smart[] = _("SMART");
const u8 gText_Tough[] = _("TOUGH");
const u8 gText_Normal[] = _("NORMAL");
const u8 gText_Black[] = _("BLACK");
const u8 gText_Pink[] = _("PINK");
const u8 gText_Sepia[] = _("SEPIA");
const u8 gText_Cool_2[] = _("COOL");
const u8 gText_Beauty_2[] = _("BEAUTY");
const u8 gText_Cute_2[] = _("CUTE");
const u8 gText_Smart_2[] = _("SMART");
const u8 gText_Tough_2[] = _("TOUGH");
const u8 gText_Items[] = _("ITEMS");
const u8 gText_KeyItems[] = _("KEY ITEMS");
const u8 gText_PokeBalls[] = _("POKé BALLS");
const u8 gText_TMsAndHMs[] = _("TMs & HMs");
const u8 gText_Berries[] = _("BERRIES");
const u8 gText_Boulderbadge[] = _("BOULDERBADGE");
const u8 gText_Cascadebadge[] = _("CASCADEBADGE");
const u8 gText_Thunderbadge[] = _("THUNDERBADGE");
const u8 gText_Rainbowbadge[] = _("RAINBOWBADGE");
const u8 gText_Soulbadge[] = _("SOULBADGE");
const u8 gText_Marshbadge[] = _("MARSHBADGE");
const u8 gText_Volcanobadge[] = _("VOLCANOBADGE");
const u8 gText_Earthbadge[] = _("EARTHBADGE");
const u8 gText_SomeoneSPc[] = _("SOMEONE'S PC");
const u8 gText_BillSPc[] = _("BILL'S PC");
const u8 gText_SPc[] = _("{PLAYER}'s PC");
const u8 gText_HallOfFame_2[] = _("HALL OF FAME");
const u8 gText_LogOff[] = _("LOG OFF");
const u8 gText_ProfOakSPc[] = _("PROF. OAK's PC");
const u8 gText_Eevee[] = _("EEVEE");
const u8 gText_Flareon[] = _("FLAREON");
const u8 gText_Jolteon[] = _("JOLTEON");
const u8 gText_Vaporeon[] = _("VAPOREON");
const u8 gText_QuitLooking[] = _("Quit looking.");
const u8 gText_FreshWater[] = _("FRESH WATER");
const u8 gText_SodaPop[] = _("SODA POP");
const u8 gText_Lemonade[] = _("LEMONADE");
const u8 gText_Coins_2[] = _("COINS");
const u8 gText_Bicycle_Price[] = _("BICYCLE{CLEAR_TO 0x49}{FONT_SMALL}¥1,000,000");
const u8 gText_NoThanks[] = _("NO THANKS");
const u8 gText_Abra_180Coins[] = _("ABRA{CLEAR_TO 0x55}{FONT_SMALL} 180 COINS");
const u8 gText_Clefairy_500Coins[] = _("CLEFAIRY{CLEAR_TO 0x55}{FONT_SMALL} 500 COINS");
const u8 gText_Dratini_2800Coins[] = _("DRATINI{CLEAR_TO 0x4B}{FONT_SMALL} 2,800 COINS");
const u8 gText_Scyther_5500Coins[] = _("SCYTHER{CLEAR_TO 0x4B}{FONT_SMALL} 5,500 COINS");
const u8 gText_Porygon_9999Coins[] = _("PORYGON{CLEAR_TO 0x4B}{FONT_SMALL} 9,999 COINS");
const u8 gText_Abra_120Coins[] = _("ABRA{CLEAR_TO 0x55}{FONT_SMALL} 120 COINS");
const u8 gText_Clefairy_750Coins[] = _("CLEFAIRY{CLEAR_TO 0x55}{FONT_SMALL} 750 COINS");
const u8 gText_Pinsir_2500Coins[] = _("PINSIR{CLEAR_TO 0x4B}{FONT_SMALL} 2,500 COINS");
const u8 gText_Dratini_4600Coins[] = _("DRATINI{CLEAR_TO 0x4B}{FONT_SMALL} 4,600 COINS");
const u8 gText_Porygon_6500Coins[] = _("PORYGON{CLEAR_TO 0x4B}{FONT_SMALL} 6,500 COINS");
const u8 gText_NoThanks_2[] = _("NO THANKS");
const u8 gText_HelixFossil[] = _("HELIX FOSSIL");
const u8 gText_DomeFossil[] = _("DOME FOSSIL");
const u8 gText_OldAmber[] = _("OLD AMBER");
const u8 gText_TradeCenter[] = _("TRADE CENTER");
const u8 gText_Colosseum[] = _("COLOSSEUM");
const u8 gText_GameLinkCable[] = _("Game Link cable");
const u8 gText_Wireless[] = _("Wireless");
const u8 gText_ItemsPocket[] = _("ITEMS POCKET");
const u8 gText_KeyItemsPocket[] = _("KEY ITEMS POCKET");
const u8 gText_PokeBallsPocket[] = _("POKé BALLS POCKET");
const u8 gText_TmCase[] = _("TM CASE");
const u8 gText_BerryPouch_2[] = _("BERRY POUCH");
const u8 gText_Other[] = _("OTHER");
const u8 gText_OneIsland[] = _("ONE ISLAND");
const u8 gText_TwoIsland[] = _("TWO ISLAND");
const u8 gText_ThreeIsland[] = _("THREE ISLAND");
const u8 gText_FourIsland[] = _("FOUR ISLAND");
const u8 gText_FiveIsland[] = _("FIVE ISLAND");
const u8 gText_SixIsland[] = _("SIX ISLAND");
const u8 gText_SevenIsland[] = _("SEVEN ISLAND");
const u8 gText_Vermilion[] = _("VERMILION");
const u8 gText_Colosseum_2[] = _("COLOSSEUM");
const u8 gText_BerryCrush[] = _("BERRY CRUSH");
const u8 gText_EmptyLinkService1[] = _("");
const u8 gText_EmptyLinkService2[] = _("");
const u8 gText_ListenToExplanation[] = _("せつめいを きく");
const u8 gText_RecordCorner[] = _(""); // Dummied
const u8 gText_PokemonJump[] = _("POKéMON JUMP");
const u8 gText_DodrioBerryPicking[] = _("DODRIO BERRY-PICKING");
const u8 gText_2Tinymushrooms[] = _("2 TINYMUSHROOMS");
const u8 gText_1BigMushroom[] = _("1 BIG MUSHROOM");
const u8 gText_SeviiIslands[] = _("SEVII ISLANDS");
const u8 gText_NavelRock[] = _("NAVEL ROCK");
const u8 gText_BirthIsland[] = _("BIRTH ISLAND");
const u8 gText_MiracleSeed_1000Coins[] = _("MIRACLE SEED{CLEAR_TO 0x50}{FONT_SMALL}1,000 COINS");
const u8 gText_Charcoal_1000Coins[] = _("CHARCOAL{CLEAR_TO 0x50}{FONT_SMALL}1,000 COINS");
const u8 gText_MysticWater_1000Coins[] = _("MYSTIC WATER{CLEAR_TO 0x50}{FONT_SMALL}1,000 COINS");
const u8 gText_YellowFlute_1600Coins[] = _("YELLOW FLUTE{CLEAR_TO 0x50}{FONT_SMALL}1,600 COINS");
const u8 gText_SmokeBall_800Coins[] = _("SMOKE BALL{CLEAR_TO 0x5A}{FONT_SMALL}800 COINS");
const u8 gText_Multichoice_Empty2[] = _("");
const u8 gText_Multichoice_Empty1[] = _("");
const u8 gText_BecomeLeader[] = _("BECOME LEADER");
const u8 gText_JoinGroup[] = _("JOIN GROUP");
const u8 gOtherText_Single[] = _("SINGLE");
const u8 gOtherText_Double[] = _("DOUBLE");
const u8 gOtherText_Knockout[] = _("KNOCKOUT");
const u8 gOtherText_Mixed[] = _("MIXED");
const u8 gText_99TimesPlus[] = _("99かい いじょう");
const u8 gText_1MinutePlus[] = _("1ぷん いじょう");
const u8 gText_SpaceSeconds[] = _("びょう");
const u8 gText_SpaceTimes[] = _("かい");
const u8 gText_DecimalPoint[] = _(".");
const u8 gText_BigGuy[] = _("Big guy");
const u8 gText_BigGirl[] = _("Big girl");
const u8 gText_Son[] = _("son");
const u8 gText_Daughter[] = _("daughter");
const u8 gText_BoulderBadge[] = _("BOULDERBADGE");
const u8 gText_CascadeBadge[] = _("CASCADEBADGE");
const u8 gText_ThunderBadge[] = _("THUNDERBADGE");
const u8 gText_RainbowBadge[] = _("RAINBOWBADGE");
const u8 gText_SoulBadge[] = _("SOULBADGE");
const u8 gText_MarshBadge[] = _("MARSHBADGE");
const u8 gText_VolcanoBadge[] = _("VOLCANOBADGE");
const u8 gText_EarthBadge[] = _("EARTHBADGE");
const u8 gText_1F[] = _("1F");
const u8 gText_2F[] = _("2F");
const u8 gText_3F[] = _("3F");
const u8 gText_4F[] = _("4F");
const u8 gText_5F[] = _("5F");
const u8 gText_6F[] = _("6F");
const u8 gText_7F[] = _("7F");
const u8 gText_8F[] = _("8F");
const u8 gText_9F[] = _("9F");
const u8 gText_10F[] = _("10F");
const u8 gText_11F[] = _("11F");
const u8 gText_B1F[] = _("B1F");
const u8 gText_B2F[] = _("B2F");
const u8 gText_B3F[] = _("B3F");
const u8 gText_B4F[] = _("B4F");
const u8 gText_Rooftop[] = _("ROOFTOP");
const u8 gText_NowOn[] = _("Now on:");
const u8 gText_LinkedGamePlay[] = _("LINKED GAME PLAY");
const u8 gText_DirectCorner[] = _("DIRECT CORNER");
const u8 gText_UnionRoom[] = _("UNION ROOM");
const u8 gText_Energypowder_50[] = _("ENERGYPOWDER{CLEAR_TO 0x74}{FONT_SMALL}50");
const u8 gText_EnergyRoot_80[] = _("ENERGY ROOT{CLEAR_TO 0x74}{FONT_SMALL}80");
const u8 gText_HealPowder_50[] = _("HEAL POWDER{CLEAR_TO 0x74}{FONT_SMALL}50");
const u8 gText_RevivalHerb_300[] = _("REVIVAL HERB{CLEAR_TO 0x6F}{FONT_SMALL}300");
const u8 gText_Protein_1000[] = _("PROTEIN{CLEAR_TO 0x65}{FONT_SMALL}1,000");
const u8 gText_Iron_1000[] = _("IRON{CLEAR_TO 0x65}{FONT_SMALL}1,000");
const u8 gText_Carbos_1000[] = _("CARBOS{CLEAR_TO 0x65}{FONT_SMALL}1,000");
const u8 gText_Calcium_1000[] = _("CALCIUM{CLEAR_TO 0x65}{FONT_SMALL}1,000");
const u8 gText_Zinc_1000[] = _("ZINC{CLEAR_TO 0x65}{FONT_SMALL}1,000");
const u8 gText_HpUp_1000[] = _("HP UP{CLEAR_TO 0x65}{FONT_SMALL}1,000");
const u8 gText_PpUp_3000[] = _("PP UP{CLEAR_TO 0x65}{FONT_SMALL}3,000");
const u8 gString_BattleRecords_PlayersBattleResults[] = _("{PLAYER}'s BATTLE RESULTS");
const u8 gString_BattleRecords_TotalRecord[] = _("TOTAL RECORD W:{STR_VAR_1} L:{STR_VAR_2} D:{STR_VAR_3}");
const u8 gString_BattleRecords_ColumnHeaders[] = _("WIN{CLEAR_TO 0x30}LOSE{CLEAR_TO 0x60}DRAW");
const u8 gString_BattleRecords_7Dashes[] = _("-------");
const u8 gString_BattleRecords_4Dashes[] = _("----");
const u8 gFameCheckerText_FameCheckerWillBeClosed[] = _("The FAME CHECKER will be closed.");
const u8 gFameCheckerText_ClearTextbox[] = _("\n                              ");
const u8 gText_ExitUnused[] = _("やめる");
const u8 gText_ExitFromBox[] = _("Exit from the BOX.");
const u8 gText_WhatDoYouWantToDo[] = _("What do you want to do?");
const u8 gText_PleasePickATheme[] = _("Please pick a theme.");
const u8 gText_PickTheWallpaper[] = _("Pick the wallpaper.");
const u8 gText_PkmnIsSelected[] = _("{DYNAMIC 0x00} is selected.");
const u8 gText_JumpToWhichBox[] = _("Jump to which BOX?");
const u8 gText_DepositInWhichBox[] = _("Deposit in which BOX?");
const u8 gText_PkmnWasDeposited[] = _("{DYNAMIC 0x00} was deposited.");
const u8 gText_BoxIsFull2[] = _("The BOX is full.");
const u8 gText_ReleaseThisPokemon[] = _("Release this POKéMON?");
const u8 gText_PkmnWasReleased[] = _("{DYNAMIC 0x00} was released.");
const u8 gText_ByeByePkmn[] = _("Bye-bye, {DYNAMIC 0x00}!");
const u8 gText_MarkYourPkmn[] = _("Mark your POKéMON.");
const u8 gText_ThatsYourLastPkmn[] = _("That's your last POKéMON!");
const u8 gText_YourPartysFull[] = _("Your party's full!");
const u8 gText_YoureHoldingAPkmn[] = _("You're holding a POKéMON!");
const u8 gText_WhichOneWillYouTake[] = _("Which one will you take?");
const u8 gText_YouCantReleaseAnEgg[] = _("You can't release an EGG.");
const u8 gText_ContinueBoxOperations[] = _("Continue BOX operations?");
const u8 gText_PkmnCameBack[] = _("{DYNAMIC 0x00} came back!");
const u8 gText_WasItWorriedAboutYou[] = _("Was it worried about you?");
const u8 gText_FourEllipsesExclamation[] = _("‥ ‥ ‥ ‥ ‥!");
const u8 gText_PleaseRemoveTheMail[] = _("Please remove the MAIL.");
const u8 gText_GiveToAPkmn[] = _("GIVE to a POKéMON?");
const u8 gText_PlacedItemInBag[] = _("Placed item in the BAG.");
const u8 gText_BagIsFull2[] = _("The BAG is full.");
const u8 gText_PutItemInBag[] = _("Put this item in the BAG?");
const u8 gText_ItemIsNowHeld[] = _("{DYNAMIC 0x00} is now held.");
const u8 gText_ChangedToNewItem[] = _("Changed to {DYNAMIC 0x00}.");
const u8 gText_MailCantBeStored[] = _("MAIL can't be stored!");
const u8 gPCText_Cancel[] = _("CANCEL");
const u8 gPCText_Store[] = _("STORE");
const u8 gPCText_Withdraw[] = _("WITHDRAW");
const u8 gPCText_Shift[] = _("SHIFT");
const u8 gPCText_Move[] = _("MOVE");
const u8 gPCText_Place[] = _("PLACE");
const u8 gPCText_Summary[] = _("SUMMARY");
const u8 gPCText_Release[] = _("RELEASE");
const u8 gPCText_Mark[] = _("MARK");
const u8 gPCText_Name[] = _("NAME");
const u8 gPCText_Jump[] = _("JUMP");
const u8 gPCText_Wallpaper[] = _("WALLPAPER");
const u8 gPCText_Take[] = _("TAKE");
const u8 gPCText_Give[] = _("GIVE");
const u8 gPCText_Switch[] = _("SWITCH");
const u8 gPCText_Bag[] = _("BAG");
const u8 gPCText_Info[] = _("INFO");
const u8 gPCText_Scenery1[] = _("SCENERY 1");
const u8 gPCText_Scenery2[] = _("SCENERY 2");
const u8 gPCText_Scenery3[] = _("SCENERY 3");
const u8 gPCText_Etcetera[] = _("ETCETERA");
const u8 gPCText_Forest[] = _("FOREST");
const u8 gPCText_City[] = _("CITY");
const u8 gPCText_Desert[] = _("DESERT");
const u8 gPCText_Savanna[] = _("SAVANNA");
const u8 gPCText_Crag[] = _("CRAG");
const u8 gPCText_Volcano[] = _("VOLCANO");
const u8 gPCText_Snow[] = _("SNOW");
const u8 gPCText_Cave[] = _("CAVE");
const u8 gPCText_Beach[] = _("BEACH");
const u8 gPCText_Seafloor[] = _("SEAFLOOR");
const u8 gPCText_River[] = _("RIVER");
const u8 gPCText_Sky[] = _("SKY");
const u8 gPCText_PolkaDot[] = _("STARS");
const u8 gPCText_Pokecenter[] = _("POKéCENTER");
const u8 gPCText_Machine[] = _("TILES");
const u8 gPCText_Simple[] = _("SIMPLE");
const u8 gText_PC_WhatWouldYouLikeToDo[] = _("なにを しますか?");
const u8 gText_WithdrawPokemon[] = _("WITHDRAW POKéMON");
const u8 gText_DepositPokemon[] = _("DEPOSIT POKéMON");
const u8 gText_MovePokemon[] = _("MOVE POKéMON");
const u8 gText_MoveItems[] = _("MOVE ITEMS");
const u8 gText_SeeYa[] = _("SEE YA!");
const u8 gText_WithdrawMonDescription[] = _("You can withdraw a POKéMON if you\nhave any in a BOX.");
const u8 gText_DepositMonDescription[] = _("You can deposit your party\nPOKéMON in any BOX.");
const u8 gText_MoveMonDescription[] = _("You can move POKéMON that are\nstored in any BOX.");
const u8 gText_MoveItemsDescription[] = _("You can move items held by any\nPOKéMON in a BOX or your party.");
const u8 gText_SeeYaDescription[] = _("See you later!");
const u8 gText_JustOnePkmn[] = _("Can't deposit the last POKéMON!");
const u8 gText_PartyFull[] = _("Can't take any more POKéMON.");
const u8 gText_Box[] = _("BOX");
const u8 gText_CombineFourWordsOrPhrases[] = _("Combine four words or phrases");
const u8 gText_AndMakeYourProfile[] = _("and make your profile.");
const u8 gText_MakeMessageSixPhrases[] = _("Make a message of six phrases.");
const u8 gText_MaxTwoTwelveLetterPhrases[] = _("Max two 12-letter phrases/line.");
const u8 gText_FindWordsThatDescribeYour[] = _("Find words that describe your");
const u8 gText_FeelingsRightNow[] = _("feelings right now.");
const u8 gText_WithFourPhrases[] = _("4つの ことばで");
const u8 gText_CombineNineWordsOrPhrases[] = _("Combine nine words or phrases");
const u8 gText_AndMakeAMessage[] = _("and make a message.");
const u8 gText_ChangeJustOneWordOrPhrase[] = _("Change just one word or phrase");
const u8 gText_AndImproveTheBardsSong[] = _("and improve the BARD's song.");
const u8 gText_AndFillOutTheQuestionnaire[] = _("and fill out the questionnaire.");
const u8 gText_YourProfile[] = _("Your profile");
const u8 gText_YourFeelingAtTheBattlesStart[] = _("Your feeling at the battle's start");
const u8 gText_WhatYouSayIfYouWin[] = _("What you say if you win a battle");
const u8 gText_WhatYouSayIfYouLose[] = _("What you say if you lose a battle");
const u8 gText_TheAnswer[] = _("The answer");
const u8 gText_TheMailMessage[] = _("The MAIL message");
const u8 gText_TheMailSalutation[] = _("はがきに のせる あいさつは");
const u8 gText_TheNewSong[] = _("The new song");
const u8 gText_CombineTwoWordsOrPhrases[] = _("Combine two words or phrases");
const u8 gText_AndMakeATrendySaying[] = _("and make a trendy saying.");
const u8 gText_TheTrendySaying[] = _("The trendy saying");
const u8 gText_IsAsShownOkay[] = _("is as shown. Okay?");
const u8 gText_CombineTwoWordsOrPhrases2[] = _("2つの ことばを くみあわせて");
const u8 gText_ToTeachHerAGoodSaying[] = _("いい ことばを おしえてあげよう!");
const u8 gText_AllTextBeingEditedWill[] = _("All the text being edited will");
const u8 gText_BeDeletedThatOkay[] = _("be deleted. Is that okay?");
const u8 gText_PleaseEnterPhraseOrWord[] = _("なにか ことばを いれてください!");
const u8 gText_EntireTextCantBeDeleted[] = _("ことばを ぜんぶ けすことは できません!");
const u8 gText_OnlyOnePhrase[] = _("かえられる ことばは 1つ までです!");
const u8 gText_OriginalSongWillBeUsed[] = _("うたを もとに もどします!");
const u8 gText_ThatsTrendyAlready[] = _("それは もう はやっています!");
const u8 gText_CombineTwoWordsOrPhrases3[] = _("2つの ことばを くみあわせてください!");
const u8 gText_QuitEditing[] = _("Quit editing?");
const u8 gText_StopGivingPkmnMail[] = _("Stop giving the POKéMON MAIL?");
const u8 gText_TheEditedWords[] = _("へんしゅうした ことばは ほぞん");
const u8 gText_WillNotBeSaved[] = _("されませんが いいですか?");
const u8 gText_Profile[] = _("PROFILE");
const u8 gText_AtTheBattlesStart[] = _("At the battle's start:");
const u8 gText_UponWinningABattle[] = _("Upon winning a battle:");
const u8 gText_UponLosingABattle[] = _("Upon losing a battle:");
const u8 gText_TheBardsSong[] = _("The BARD's Song");
const u8 gText_WhatsHipAndHappening[] = _("What's hip and happening?");
const u8 gText_Interview[] = _("Interview");
const u8 gText_GoodSaying[] = _("いい ことば");
const u8 gText_Questionnaire[] = _("QUESTIONNAIRE");
const u8 GiddyText_SoPretty[] = _(" きれい だよね-");
const u8 GiddyText_SoDarling[] = _(" かわいい よね-");
const u8 GiddyText_SoRelaxed[] = _(" のんびり だよね-");
const u8 GiddyText_SoSunny[] = _(" ぽっかぽか だよね-");
const u8 GiddyText_SoDesirable[] = _(" あこがれる よね-");
const u8 GiddyText_SoExciting[] = _(" ドキドキ するよね-");
const u8 GiddyText_SoAmusing[] = _(" おもしろい よね-");
const u8 GiddyText_SoMagical[] = _(" ふしぎ だよね-");
const u8 GiddyText_Is[] = _("って");
const u8 GiddyText_DontYouAgree[] = _("\nそう おもわない?");
const u8 GiddyText_ISoWantToGoOnAVacation[] = _("たびに でたいな-\nどこか いい ところ しらない?");
const u8 GiddyText_IBoughtCrayonsWith120Colors[] = _("120しょくの クレヨン かったんだ-\nいいでしょう?");
const u8 GiddyText_WouldntItBeNiceIfWeCouldFloat[] = _("しゃぼんだまに のって とべるように\nならないかな-");
const u8 GiddyText_WhenYouWriteOnASandyBeach[] = _("すなはまに かいた もじは\nすぐに きえちゃうのが かなしいよね-");
const u8 GiddyText_WhatsTheBottomOfTheSeaLike[] = _("うみの そこって どうなってるのかな-\nいちどで いいから みて みたいな-");
const u8 GiddyText_WhenYouSeeTheSettingSunDoesIt[] = _("ゆうやけを みると\nウチに かえりたく ならない?");
const u8 GiddyText_LyingBackInTheGreenGrass[] = _("みどりの しばで ねころがると\nきもちいいよね-");
const u8 GiddyText_SecretBasesAreSoWonderful[] = _("ひみつきち って いいよね!\nなんか わくわく してこない?");
const u8 gText_PokemonLeague[] = _("ポケモン リ-グ");
const u8 gText_PokemonCenter[] = _("POKéMON CENTER");
const u8 gText_GetsAPokeBlockQuestion[] = _("に ポロックを あげますか?");
const u8 gText_Coolness[] = _("かっこよさ");
const u8 gText_Beauty3[] = _("うつくしさ");
const u8 gText_Cuteness[] = _("かわいさ");
const u8 gText_Smartness[] = _("かしこさ");
const u8 gText_Toughness[] = _("たくましさ");
const u8 gText_WasEnhanced[] = _("に みがきが かかった!");
const u8 gText_NothingChanged[] = _("なにも かわらなかった!");
const u8 gText_WontEatAnymore[] = _("もう これいじょう たべない みたい‥");
const u8 gText_SaveFailedCheckingBackup[] = _("Save failed.\nChecking the backup memory‥\nPlease wait.\n“Time required:\nabout 1 minute”");
const u8 gText_BackupMemoryDamaged[] = _("The backup memory is damaged or\nthe game's battery has run dry.\nThe game can be played, but its\nprogress cannot be saved.\n“Please press the A Button.”");
const u8 gText_GamePlayCannotBeContinued[] = _("{COLOR DARK_GRAY}“このまま ぼうけんをつづけることは できません\nタイトルに もどります”");
const u8 gText_CheckCompleted[] = _("けんさが しゅうりょうしました!\nもういちど レポ-トを かきこみます\nしばらくおまちください");
const u8 gText_SaveCompleteGameCannotContinue[] = _("レポ-トの かきこみは しゅうりょうしました\n{COLOR DARK_GRAY}“このまま ぼうけんをつづけることは できません\nタイトルに もどります”");
const u8 gText_SaveCompletePressA[] = _("Save completed.\n“Please press the A Button.”");
const u8 gText_Ferry[] = _("れんらくせん");
const u8 gText_SecretBase[] = _("ひみつきち");
const u8 gText_Hideout[] = _("アジト");
const u8 gText_YourName[] = _("YOUR NAME?");
const u8 gText_BoxName[] = _("BOX NAME?");
const u8 gText_PkmnsNickname[] = _("'s nickname?");
const u8 gText_RivalsName[] = _("RIVAL's NAME?");
const u8 gText_MoveOkBack[] = _("{DPAD_ANY}MOVE {A_BUTTON}OK {B_BUTTON}BACK");
const u8 gText_AlphabetUpperLower[] = _("");
const u8 gText_RegionMap_Space[] = _(" ");
const u8 gText_RegionMap_AButtonGuide[] = _("{A_BUTTON}GUIDE");
const u8 gText_RegionMap_AButtonCancel[] = _("{A_BUTTON}CANCEL");
const u8 gText_RegionMap_AButtonCancel2[] = _("{A_BUTTON}CANCEL");
const u8 gText_RegionMap_AButtonSwitch[] = _("{A_BUTTON}SWITCH");
const u8 gText_RegionMap_AButtonOK[] = _("{A_BUTTON}OK");
const u8 gText_RegionMap_DPadMove[] = _("{DPAD_ANY}MOVE");
const u8 gText_RegionMap_UpDownPick[] = _("{DPAD_UPDOWN}PICK");
const u8 gText_RegionMap_NoData[] = _("No data");
const u8 gText_RegionMap_AreaDesc_ViridianForest[] = _("A deep and sprawling forest that\nextends around VIRIDIAN CITY.\nA natural maze, many people\nbecome lost inside.");
const u8 gText_RegionMap_AreaDesc_MtMoon[] = _("A mystical mountain that is known\nfor its frequent meteor falls.\nThe shards of stars that fall\nhere are known as MOON STONES.");
const u8 gText_RegionMap_AreaDesc_DiglettsCave[] = _("A seemingly plain tunnel that was\ndug by wild DIGLETT.\nIt is famous for connecting\nROUTES 2 and 11.");
const u8 gText_RegionMap_AreaDesc_VictoryRoad[] = _("A tunnel situated on ROUTE 23.\nIt earned its name because it\nmust be traveled by all TRAINERS\naiming for the top.");
const u8 gText_RegionMap_AreaDesc_PokemonMansion[] = _("A decrepit, burned-down mansion\non CINNABAR ISLAND.\nIt got its name because a famous\nPOKéMON researcher lived there.");
const u8 gText_RegionMap_AreaDesc_SafariZone[] = _("An amusement park outside FUCHSIA\nCITY where many rare POKéMON can\nbe observed in the wild.\nCatch them in a popular game!");
const u8 gText_RegionMap_AreaDesc_RockTunnel[] = _("A naturally formed underground\ntunnel. Because it has not been\ndeveloped, it is inky dark inside.\nA light is needed to get through.");
const u8 gText_RegionMap_AreaDesc_SeafoamIslands[] = _("A pair of islands that is situated\non ROUTE 20.\nThe two islands are shaped the\nsame, as if they were twins.");
const u8 gText_RegionMap_AreaDesc_PokemonTower[] = _("A tower that houses the graves of\ncountless POKéMON.\nMany people visit it daily to pay\ntheir respects to the fallen.");
const u8 gText_RegionMap_AreaDesc_CeruleanCave[] = _("A mysterious cave that is filled\nwith terribly tough POKéMON.\nIt is so dangerous, the POKéMON\nLEAGUE is in charge of it.");
const u8 gText_RegionMap_AreaDesc_PowerPlant[] = _("A power plant that was abandoned\nyears ago, though some of the\nmachines still work. It is infested\nwith electric POKéMON.");
const u8 gText_RegionMap_AreaDesc_MtEmber[] = _("Supposedly an inactive volcano.\nHowever, there are persistent\nreports that the peak blazes\nwith fire at night.");
const u8 gText_RegionMap_AreaDesc_BerryForest[] = _("A forest on a small islet off the\ncoast of THREE ISLAND. BERRIES\ngrow wildly in profusion, quickly\nreplenishing those that fall off.");
const u8 gText_RegionMap_AreaDesc_IcefallCave[] = _("A cave which is covered by water\nand ice on FOUR ISLAND.\nIt seems like the end of the cave\nis connected to the ocean.");
const u8 gText_RegionMap_AreaDesc_LostCave[] = _("A bewildering cave off the coast\nof RESORT GORGEOUS.\nSome curious thrill seekers have\nnever emerged from it.");
const u8 gText_RegionMap_AreaDesc_TanobyRuins[] = _("An ancient ruin that is rumored to\nbe home to a peculiar POKéMON.\nHowever, so far, the POKéMON\nremains an unconfirmed rumor.");
const u8 gText_RegionMap_AreaDesc_AlteringCave[] = _("This island has been known by this\nname since the distant past.\nNo one today knows where it got\nthis name, however.");
const u8 gText_RegionMap_AreaDesc_PatternBush[] = _("A lush and bush-like area. \nIn it are patterns where no grass\ngrows. Some study it in the belief\nthat a secret is concealed.");
const u8 gText_RegionMap_AreaDesc_DottedHole[] = _("A mysterious, just-discovered\nruin from an ancient time.\nIt got its name from the six dots\non its door.");
const u8 gText_PokeSum_MetInATrade[] = _("{DYNAMIC 0x00} nature.\nMet in a trade.");
const u8 gText_PokeSum_MetInATrade_BoldGentleGrammar[] = _("{DYNAMIC 0x00} nature.\nMet in a trade.");
const u8 gText_PokeSum_FatefulEncounterMet[] = _("{DYNAMIC 0x00} nature.\nMet in a fateful encounter when\nat {LV_2} {DYNAMIC 0x01}.");
const u8 gText_PokeSum_FatefulEncounterMet_BoldGentleGrammar[] = _("{DYNAMIC 0x00} nature.\nMet in a fateful encounter when\nat {LV_2} {DYNAMIC 0x01}.");
const u8 gText_PokeSum_Met[] = _("{DYNAMIC 0x00} nature.\nMet in {DYNAMIC 0x02} at {LV_2} {DYNAMIC 0x01}.");
const u8 gText_PokeSum_Met_BoldGentleGrammar[] = _("{DYNAMIC 0x00} nature.\nMet in {DYNAMIC 0x02} at {LV_2} {DYNAMIC 0x01}.");
const u8 gText_PokeSum_ApparentlyMet[] = _("{DYNAMIC 0x00} nature.\nApparently met in {DYNAMIC 0x02}\nat {LV_2} {DYNAMIC 0x01}.");
const u8 gText_PokeSum_ApparentlyMet_BoldGentleGrammar[] = _("{DYNAMIC 0x00} nature.\nApparently met in {DYNAMIC 0x02}\nat {LV_2} {DYNAMIC 0x01}.");
const u8 gText_PokeSum_Hatched[] = _("{DYNAMIC 0x00} nature.\nHatched: {DYNAMIC 0x02}\nat {LV_2} {DYNAMIC 0x01}.");
const u8 gText_PokeSum_Hatched_BoldGentleGrammar[] = _("{DYNAMIC 0x00} nature.\nHatched: {DYNAMIC 0x02}\nat {LV_2} {DYNAMIC 0x01}.");
const u8 gText_PokeSum_JP_ApparentlyHatched[] = _("{DYNAMIC 0x00}なせいかく {LV_2}{DYNAMIC 0x01}のとき\n{DYNAMIC 0x02}で かえった ようだ");
const u8 gText_PokeSum_JP_ApparentlyHatched_BoldGentleGrammar[] = _("{DYNAMIC 0x00}せいかく {LV_2}{DYNAMIC 0x01}のとき\n{DYNAMIC 0x02}で かえった ようだ");
const u8 gText_PokeSum_FatefulEncounterHatched[] = _("{DYNAMIC 0x00} nature. Met in a fateful\nencounter (hatched: {DYNAMIC 0x02}\nat {LV_2} {DYNAMIC 0x01}).");
const u8 gText_PokeSum_FatefulEncounterHatched_BoldGentleGrammar[] = _("{DYNAMIC 0x00} nature. Met in a fateful\nencounter (hatched: {DYNAMIC 0x02}\nat {LV_2} {DYNAMIC 0x01}).");
const u8 gText_PokeSum_ApparentlyFatefulEncounterHatched[] = _("{DYNAMIC 0x00} nature. Apparently met in\na fateful encounter (hatched:\n{DYNAMIC 0x02} at {LV_2} {DYNAMIC 0x01}).");
const u8 gText_PokeSum_ApparentlyFatefulEncounterHatched_BoldGentleGrammar[] = _("{DYNAMIC 0x00} nature. Apparently met in\na fateful encounter (hatched:\n{DYNAMIC 0x02} at {LV_2} {DYNAMIC 0x01}).");
const u8 gText_PokeSum_EggOrigin_DayCare[] = _("An odd POKéMON EGG found by the\nDAY-CARE couple.");
const u8 gText_PokeSum_EggOrigin_TravelingMan[] = _("An odd POKéMON EGG obtained from\nthe traveling man.");
const u8 gText_PokeSum_EggOrigin_NicePlace[] = _("A wondrously peculiar POKéMON EGG\nobtained at a nice place.");
const u8 gText_PokeSum_EggOrigin_Spa[] = _("An odd POKéMON EGG obtained from\nan old woman at the SPA.");
const u8 gText_PokeSum_EggOrigin_Trade[] = _("A peculiar POKéMON EGG obtained\nin a trade.");
const u8 gText_PokeSum_EggHatch_LongTime[] = _("It looks like this\nEGG will take a\nlong time to hatch.");
const u8 gText_PokeSum_EggHatch_SomeTime[] = _("What will hatch\nfrom this? It will\ntake some time.");
const u8 gText_PokeSum_EggHatch_Soon[] = _("It occasionally\nmoves. It should\nhatch soon.");
const u8 gText_PokeSum_EggHatch_AlmostReady[] = _("It's making sounds.\nIt's almost ready\nto hatch!");
const u8 gText_PokeSum_ATrade[] = _("a trade");
const u8 gText_Somewhere[] = _("Somewhere");
const u8 gText_PokeSum_PageName_PokemonInfo[] = _("POKéMON INFO");
const u8 gText_PokeSum_PageName_PokemonSkills[] = _("POKéMON SKILLS");
const u8 gText_PokeSum_PageName_KnownMoves[] = _("KNOWN MOVES");
const u8 gText_PokeSum_NoData[] = _("No data");
const u8 gText_PokeSum_ExpPoints[] = _("EXP. POINTS");
const u8 gText_PokeSum_NextLv[] = _("NEXT LV.");
const u8 gText_PokeSum_Controls_PageCancel[] = _("{DPAD_RIGHT}PAGE {A_BUTTON}CANCEL");
const u8 gText_PokeSum_Controls_Cancel[] = _("{A_BUTTON}CANCEL");
const u8 gText_PokeSum_Controls_Page[] = _("{DPAD_LEFTRIGHT}PAGE");
const u8 gText_PokeSum_Controls_PageDetail[] = _("{DPAD_LEFT}PAGE {A_BUTTON}DETAIL");
const u8 gText_PokeSum_Controls_PickSwitch[] = _("{DPAD_UPDOWN}PICK {A_BUTTON}SWITCH");
const u8 gText_PokeSum_Controls_Pick[] = _("{DPAD_UPDOWN}PICK");
const u8 gText_PokeSum_Controls_PickDelete[] = _("{DPAD_UPDOWN}PICK {A_BUTTON}DELETE");
const u8 gText_PokeSum_HmMovesCantBeForgotten[] = _("HM moves can't be\nforgotten now.");
const u8 gText_TrainerCardName[] = _("NAME: ");
const u8 gText_TrainerCardIDNo[] = _("IDNo.");
const u8 gText_TrainerCardMoney[] = _("MONEY");
const u8 gText_TrainerCardYen[] = _("¥");
const u8 gText_TrainerCardPokedex[] = _("POKéDEX");
const u8 gText_TrainerCardNull[] = _("");
const u8 gText_Colon2[] = _(":");
const u8 gText_Points[] = _("てん");
const u8 gText_TrainerCardTime[] = _("TIME");
const u8 gText_BattlePoints[] = _("ゲ-ムポイント"); // Unused. Name presumed, translation is Game Points
const u8 gText_Var1sTrainerCard[] = _("'s TRAINER CARD");
const u8 gText_HallOfFameDebut[] = _("HALL OF FAME DEBUT  ");
const u8 gText_LinkBattles[] = _("LINK BATTLES");
const u8 gText_LinkCableBattles[] = _("LINK CABLE BATTLES");
const u8 gText_WinLossRatio[] = _("W:{CLEAR_TO 0x30}L:");
const u8 gText_PokemonTrades[] = _("POKéMON TRADES");
const u8 gText_UnionRoomTradesBattles[] = _("UNION TRADES & BATTLES");
const u8 gText_BerryCrushes[] = _("BERRY CRUSH");
const u8 gText_WaitingTrainerFinishReading[] = _("Waiting for the other TRAINER to\nfinish reading your TRAINER CARD.");
const u8 gText_Option[] = _("OPTION");
const u8 gText_TextSpeed[] = _("TEXT SPEED");
const u8 gText_BattleScene[] = _("BATTLE SCENE");
const u8 gText_BattleStyle[] = _("BATTLE STYLE");
const u8 gText_Sound[] = _("SOUND");
const u8 gText_ButtonMode[] = _("BUTTON MODE");
const u8 gText_Frame[] = _("FRAME");
const u8 gText_OptionMenuCancel[] = _("CANCEL");
const u8 gText_TextSpeedSlow[] = _("SLOW");
const u8 gText_TextSpeedMid[] = _("MID");
const u8 gText_TextSpeedFast[] = _("FAST");
const u8 gText_BattleSceneOn[] = _("ON");
const u8 gText_BattleSceneOff[] = _("OFF");
const u8 gText_BattleStyleShift[] = _("SHIFT");
const u8 gText_BattleStyleSet[] = _("SET");
const u8 gText_SoundMono[] = _("MONO");
const u8 gText_SoundStereo[] = _("STEREO");
const u8 gTextJP_Type[] = _("タイプ");
const u8 gText_ButtonTypeHelp[] = _("HELP");
const u8 gText_ButtonTypeLEqualsA[] = _("L=A");
const u8 gText_ButtonTypeLR[] = _("LR");
const u8 gText_FrameType[] = _("TYPE");
const u8 gText_PickSwitchCancel[] = _("{DPAD_UPDOWN}PICK {DPAD_LEFTRIGHT}SWITCH {A_BUTTON}{B_BUTTON}CANCEL");
const u8 gText_ResetRTCConfirmCancel[] = _("RTCを リセットします\nAで けってい Bで キャンセル");
const u8 gText_PresentTime[] = _("げんざいの ゲ-ムない じかん");
const u8 gText_PreviousTime[] = _("ぜんかいの ゲ-ムない じかん");
const u8 gText_PleaseResetTime[] = _("じかんを さいせってい してください");
const u8 gText_ClockHasBeenReset[] = _("じかんを さいせってい しました!\nレポ-トを かいています おまちください");
const u8 gText_SaveCompleted[] = _("レポ-トを かきこみました!");
const u8 gText_SaveFailed[] = _("レポ-トの かきこみに\nしっぱい しました‥");
const u8 gText_NoSaveFileCantSetTime[] = _("レポ-トが ないので\nじかんの せっていは できません!");
const u8 gText_InGameClockUsable[] = _("ゲ-ムない じかんの しゅうせい システムが\nつかえる ように なりました!");
const u8 gText_SavingDontTurnOffThePower2[] = _("SAVING…\nDON'T TURN OFF THE POWER.");

// Start menu option descriptions
const u8 gStartMenuDesc_Pokedex[] = _("A device that records POKéMON secrets\nupon meeting or catching them.");
const u8 gStartMenuDesc_Pokemon[] = _("Check and organize POKéMON that are\ntraveling with you in your party.");
const u8 gStartMenuDesc_Bag[] = _("Equipped with pockets for storing items\nyou bought, received, or found.");
const u8 gStartMenuDesc_PC[] = _("Access the PC.");
const u8 gStartMenuDesc_Player[] = _("Check your money and other game data.");
const u8 gStartMenuDesc_Save[] = _("Save your game with a complete record\nof your progress to take a break.");
const u8 gStartMenuDesc_Option[] = _("Adjust various game settings such as text\nspeed, game rules, etc.");
const u8 gStartMenuDesc_Exit[] = _("Close this MENU window.");
const u8 gStartMenuDesc_Retire[] = _("Retire from the SAFARI GAME and return to\nthe registration counter.");

#include "data/text/quest_log.h"

const u8 gText_WasUsedOn[] = _(" was used on\n");
const u8 gText_Period[] = _(".");
const u8 gText_LevelRoseTo[] = _("'s level rose to\n");
const u8 gText_Period2[] = _(".");
const u8 gText_LevelUp_MaxHP[] = _("{FONT_SMALL}MAX.{FONT_NORMAL} HP");
const u8 gText_LevelUp_Attack[] = _("ATTACK");
const u8 gText_LevelUp_Defense[] = _("DEFENSE");
const u8 gText_LevelUp_Speed[] = _("SPEED");
const u8 gText_LevelUp_SpAtk[] = _("SP. ATK");
const u8 gText_LevelUp_SpDef[] = _("SP. DEF");
const u8 gText_LevelUp_Plus[] = _("{FONT_SMALL}{PLUS}{FONT_NORMAL}");
const u8 gText_LevelUp_Minus[] = _("{FONT_SMALL}-{FONT_NORMAL}");
const u8 gText_Counting_1[] = _("1, ");
const u8 gText_Counting_2And[] = _("2, and ‥ ‥ ‥ ");
const u8 gText_Poof[] = _("Poof!\p");
const u8 gText_MonForgotMove[] = _("{DYNAMIC 0x00} forgot\n{DYNAMIC 0x01}.\p");
const u8 gText_And[] = _("And‥\p");
const u8 gText_MachineSet[] = _("Machine set!\p");
const u8 gText_Huh[] = _("Huh?");
const u8 gText_MonLearnedTMHM[] = _("{DYNAMIC 0x00} learned\n{DYNAMIC 0x01}!");
const u8 gText_Upper[] = _("UPPER");
const u8 gText_Lower[] = _("lower");
const u8 gText_Others[] = _("OTHERS");
const u8 gText_Symbols[] = _("SYMBOLS");
const u8 gText_Register2[] = _("REGISTER");
const u8 gText_Exit[] = _("EXIT");
const u8 gText_QuitChatting[] = _("Quit chatting?");
const u8 gText_RegisterTextWhere[] = _("Register text where?");
const u8 gText_RegisterTextHere[] = _("Register text here?");
const u8 gText_InputText[] = _("Input text.");
const u8 gText_F700JoinedChat[] = _("{DYNAMIC 0x00} joined the chat!");
const u8 gText_F700LeftChat[] = _("{DYNAMIC 0x00} left the chat.");
const u8 gText_PlayersXPokemon[] = _("{DYNAMIC 0x00}の{DYNAMIC 0x01}ひきめ:");
const u8 gText_PlayersXPokmonDoesNotExist[] = _("{DYNAMIC 0x00}の{DYNAMIC 0x01}ひきめは いません");
const u8 gText_ExitingTheChat[] = _("Exiting the chat‥");
const u8 gText_LeaderHasLeftEndingChat[] = _("The LEADER, {DYNAMIC 0x00}, has\nleft, ending the chat.");
const u8 gText_RegisteredTextChanged_OKtoSave[] = _("The registered text has been changed.\nIs it okay to save the game?");
const u8 gText_RegisteredTextChanged_AlreadySavedFile[] = _("There is already a saved file.\nIs it okay to overwrite it?");
const u8 gText_RegisteredTextChanged_SavingDontTurnOff[] = _("SAVING‥\nDON'T TURN OFF THE POWER.");
const u8 gText_RegisteredTextChanged_SavedTheGame[] = _("{DYNAMIC 0x00} saved the game.");
const u8 gText_IfLeaderLeavesChatWillEnd[] = _("If the LEADER leaves, the chat\nwill end. Is that okay?");
const u8 gText_Hello[] = _("HELLO");
const u8 gText_Pokemon2[] = _("POKéMON");
const u8 gText_Trade[] = _("TRADE");
const u8 gText_Battle[] = _("BATTLE");
const u8 gText_Lets[] = _("LET'S");
const u8 gText_Ok[] = _("OK!");
const u8 gText_Sorry[] = _("SORRY");
const u8 gText_YaySmileEmoji[] = _("YAY{EMOJI_BIGSMILE}");
const u8 gText_ThankYou[] = _("THANK YOU");
const u8 gText_ByeBye[] = _("BYE-BYE!");
const u8 gText_PlayerScurriedToCenter[] = _("{PLAYER} scurried to a POKéMON CENTER,\nprotecting the exhausted and fainted\nPOKéMON from further harm‥\p");
const u8 gText_PlayerScurriedBackHome[] = _("{PLAYER} scurried back home, protecting\nthe exhausted and fainted POKéMON from\nfurther harm‥\p");
const u8 gText_Diploma_Player[] = _("PLAYER: {DYNAMIC 0x00}");
const u8 gText_Diploma_ThisDocument[] = _("This document is issued in\nrecognition of your magnificent\nachievement - the completion of\nthe {DYNAMIC 0x01} POKéDEX.");
const u8 gText_Diploma_GameFreak[] = _("GAME FREAK");
const u8 gText_Diploma_National[] = _("NATIONAL");
const u8 gText_Diploma_Kanto[] = _("KANTO");
const u8 gText_ClearAllSaveData[] = _("Clear all save data areas?");
const u8 gText_ClearingData[] = _("Clearing data‥\nPlease wait.");
const u8 gText_Player[] = _("PLAYER");
const u8 gText_Time[] = _("TIME");
const u8 gText_Colon[] = _(":");
const u8 gText_Pokedex[] = _("POKéDEX");
const u8 gTextJPDummy_Hiki[] = _("");
const u8 gText_Badges[] = _("BADGES");
const u8 gTextJPDummy_Ko[] = _("");
const u8 gText_Register[] = _("REGISTER");
const u8 gText_HatchedFromEgg[] = _("{STR_VAR_1} hatched from the EGG!");
const u8 gText_NickHatchPrompt[] = _("Would you like to nickname the newly\nhatched {STR_VAR_1}?");
const u8 gString_OutOfCoins[] = _("You've run out of COINS.\nGame over!");
const u8 gString_QuitPlaying[] = _("Quit playing?");
const u8 gString_SlotMachineControls[] = _("{DPAD_LEFTRIGHT}COMBOS {DPAD_DOWN}WAGER {A_BUTTON}STOP {B_BUTTON}EXIT");
const u8 gText_TeachyTV[] = _("おしえテレビ");
const u8 gText_End[] = _("おしまい");

#include "data/text/teachy_tv.h"

const u8 gString_Bill[] = _("BILL");
const u8 gString_Someone[] = _("SOMEONE");
const u8 gString_Help[] = _("HELP");
const u8 gString_HelpSystem_ClearTo8[] = _("{CLEAR_TO 8}");
const u8 gText_SpacePoints2[] = _(" points");
const u8 gText_SpaceTimes3[] = _(" time(s)");
const u8 gText_PkmnJumpRecords[] = _("POKéMON JUMP RECORDS");
const u8 gText_JumpsInARow[] = _("Jumps in a row:");
const u8 gText_BestScore2[] = _("Best score:");
const u8 gText_ExcellentsInARow[] = _("EXCELLENTS in a row:");
const u8 gText_AwesomeWonF701F700[] = _("Awesome score! You've\nwon {DYNAMIC 01} {DYNAMIC 00}!");
const u8 gText_FilledStorageSpace2[] = _("There's no room left now.");
const u8 gText_CantHoldMore[] = _("You can't hold any more!");
const u8 gText_WantToPlayAgain2[] = _("Want to play again?");
const u8 gText_SomeoneDroppedOut2[] = _("Somebody dropped out.\nThe link will be canceled.");
const u8 gText_SavingDontTurnOffPower[] = _("SAVING…\nDON'T TURN OFF THE POWER.");
const u8 gText_CommunicationStandby4[] = _("Communication standby…");
const u8 gText_SavingDontTurnOffPower2[] = _("SAVING...\nDON'T TURN OFF THE POWER."); // Unused
const u8 gText_BerryPickingRecords[] = _("DODRIO BERRY-PICKING RECORDS");
const u8 gText_BerriesPicked[] = _("BERRIES picked:");
const u8 gText_BestScore[] = _("Best score:");
const u8 gText_BerriesInRowFivePlayers[] = _("BERRIES picked in a row with\nfive players:");
const u8 gText_BerryPickingResults[] = _("Announcing BERRY-PICKING results!");
const u8 gText_10P30P50P50P[] = _("10P     30P     50P     {EMOJI_MINUS}50P");
const u8 gText_AnnouncingRankings[] = _("Announcing rankings!");
const u8 gText_AnnouncingPrizes[] = _("Announcing prizes!");
const u8 gText_1Colon[] = _("1:");
const u8 gText_2Colon[] = _("2:");
const u8 gText_3Colon[] = _("3:");
const u8 gText_4Colon[] = _("4:");
const u8 gText_5Colon[] = _("5:");
const u8 gText_FirstPlacePrize[] = _("The first-place winner gets\nthis {DYNAMIC 00}!");
const u8 gText_CantHoldAnyMore[] = _("You can't hold any more...");
const u8 gText_FilledStorageSpace[] = _("It filled its storage space.");
const u8 gText_WantToPlayAgain[] = _("Want to play again?");
const u8 gText_SomeoneDroppedOut[] = _("Somebody dropped out.\nThe link will be canceled.");
const u8 gText_SpacePoints[] = _(" points");
const u8 gText_CommunicationStandby3[] = _("Communication standby…");
ALIGNED(4)
const u8 gText_BerryCrush_AreYouReady[] = _("Are you ready to BERRY-CRUSH?\nPlease pick a BERRY for use.\p");
ALIGNED(4)
const u8 gText_BerryCrush_WaitForOthersToChooseBerry[] = _("Please wait while each member\nchooses a BERRY.");
ALIGNED(4)
const u8 gText_BerryCrush_GainedXUnitsOfPowder[] = _("{PAUSE_MUSIC}{PLAY_BGM MUS_LEVEL_UP}You ended up with {STR_VAR_1} units of\nsilky-smooth BERRY POWDER.{RESUME_MUSIC}\pYour total amount of BERRY POWDER\nis {STR_VAR_2}.\p");
ALIGNED(4)
const u8 gText_BerryCrush_RecordingGameResults[] = _("Recording your game results in the\nsave file.\nPlease wait.");
ALIGNED(4)
const u8 gText_BerryCrush_WantToPlayAgain[] = _("Want to play BERRY CRUSH again?");
ALIGNED(4)
const u8 gText_BerryCrush_NoBerries[] = _("You have no BERRIES.\nThe game will be canceled.");
ALIGNED(4)
const u8 gText_BerryCrush_MemberDroppedOut[] = _("A member dropped out.\nThe game will be canceled.");
ALIGNED(4)
const u8 gText_BerryCrush_TimeUp[] = _("Time's up.\pGood BERRY POWDER could not be\nmade…\p");
ALIGNED(4)
const u8 gText_BerryCrush_CommunicationStandby[] = _("Communication standby…");
ALIGNED(4)
const u8 gText_1_ClrBluShdwLtBlu_Dynamic0[] = _("1. {COLOR BLUE}{SHADOW LIGHT_BLUE}{DYNAMIC 0x00}");
const u8 gText_1_Dynamic0[] = _("1. {DYNAMIC 0x00}");
ALIGNED(4)
const u8 gText_SpaceTimes2[] = _(" times");
ALIGNED(4)
const u8 gText_XDotY[] = _("{STR_VAR_1}.{STR_VAR_2}");
ALIGNED(4)
const u8 gText_StrVar1Berry[] = _("{STR_VAR_1} BERRY");
ALIGNED(4)
const u8 gText_TimeColon[] = _("Time:");
ALIGNED(4)
const u8 gText_PressingSpeed[] = _("Pressing Speed:");
const u8 gText_Silkiness[] = _("Silkiness:");
ALIGNED(4)
const u8 gText_StrVar1[] = _("{STR_VAR_1}");
ALIGNED(4)
const u8 gText_SpaceMin[] = _("min.");
ALIGNED(4)
const u8 gText_XDotY2[] = _("{STR_VAR_1}.{STR_VAR_2}");
ALIGNED(4)
const u8 gText_SpaceSec[] = _("sec.");
ALIGNED(4)
const u8 gText_XDotY3[] = _("{STR_VAR_1}.{STR_VAR_2}");
ALIGNED(4)
const u8 gText_TimesPerSec[] = _("Times/sec.");
ALIGNED(4)
const u8 gText_Var1Percent[] = _("{STR_VAR_1}%");
ALIGNED(4)
const u8 gText_PressesRankings[] = _("No. of Presses Rankings");
ALIGNED(4)
const u8 gText_CrushingResults[] = _("Crushing Results");
ALIGNED(4)
const u8 gText_NeatnessRankings[] = _("Neatness Rankings");
ALIGNED(4)
const u8 gText_CooperativeRankings[] = _("Cooperative Rankings");
ALIGNED(4)
const u8 gText_PressingPowerRankings[] = _("Pressing-Power Rankings");
const u8 gText_BerryCrush2[] = _("BERRY CRUSH");
const u8 gText_PressingSpeedRankings[] = _("Pressing-Speed Rankings");
const u8 gText_Var1Players[] = _("{STR_VAR_1} PLAYERS");
ALIGNED(4)
const u8 gText_Ghost[] = _("GHOST");
const u8 gText_PokemonOnHook[] = _("A POKéMON's on the hook!{PAUSE_UNTIL_PRESS}");
const u8 gText_NotEvenANibble[] = _("Not even a nibble‥{PAUSE_UNTIL_PRESS}");
const u8 gText_ItGotAway[] = _("It got away‥{PAUSE_UNTIL_PRESS}");
const u8 gText_Rooftop2[] = _("ROOFTOP");
ALIGNED(4)
const u8 gString_PokemonFireRed_Staff[] = _("Pokémon FireRed Version\nStaff");
ALIGNED(4)
const u8 gString_PokemonLeafGreen_Staff[] = _("Pokémon LeafGreen Version\nStaff");
ALIGNED(4)
const u8 gCreditsString_Director[] = _("\n\nDirector\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Junichi_Masuda[] = _("\n\n\nJunichi Masuda\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Art_Director_Battle_Director[] = _("\nArt Director\n\nBattle Director\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Ken_Sugimori_Shigeki_Morimoto[] = _("\n\nKen Sugimori\n\nShigeki Morimoto\n\n");
ALIGNED(4)
const u8 gCreditsString_Program_Leader_Planning_Leader_Graphic_Design_Leader[] = _("Program Leader\n\nPlanning Leader\n\nGraphic Design Leader\n\n");
ALIGNED(4)
const u8 gCreditsString_Tetsuya_Watanabe_Koji_Nishino_Takao_Unno[] = _("\nTetsuya Watanabe\n\nKoji Nishino\n\nTakao Unno\n");
ALIGNED(4)
const u8 gCreditsString_Programmers[] = _("Programmers\n\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Hiroyuki_Nakamura_Masao_Taya_Satoshi_Nohara_Miyuki_Iwasawa_Daisuke_Goto[] = _("\nHiroyuki Nakamura\nMasao Taya\nSatoshi Nohara\nMiyuki Iwasawa\nDaisuke Goto\n");
ALIGNED(4)
const u8 gCreditsString_System_Programmers[] = _("System Programmers\n\n\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Tetsuya_Watanabe_Akito_Mori_Hisashi_Sogabe_Sousuke_Tamada[] = _("\nTetsuya Watanabe\nAkito Mori\nHisashi Sogabe\nSousuke Tamada\n\n");
ALIGNED(4)
const u8 gCreditsString_Graphic_Designers[] = _("Graphic Designers\n\n\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Takao_Unno_Asuka_Iwashita_Kanako_Eo_Hiroki_Fuchino[] = _("\nTakao Unno\nAsuka Iwashita\nKanako Eo\nHiroki Fuchino\n\n");
ALIGNED(4)
const u8 gCreditsString_Graphic_Designers_2[] = _("\nGraphic Designers\n\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Ken_Sugimori_Hironobu_Yoshida[] = _("\n\nKen Sugimori\nHironobu Yoshida\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Music_Composition[] = _("\nMusic Composition\n\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Go_Ichinose_Junichi_Masuda[] = _("\n\nGo Ichinose\nJunichi Masuda\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Sound_Effects[] = _("\n\nSound Effects\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Go_Ichinose[] = _("\n\n\nGo Ichinose\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Game_Designers[] = _("\nGame Designers\n\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Junichi_Masuda_Koji_Nishino_Tetsuji_Ohta[] = _("\n\nJunichi Masuda\nKoji Nishino\nTetsuji Ohta\n\n");
ALIGNED(4)
const u8 gCreditsString_Game_Designers_2[] = _("\nGame Designers\n\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Hitomi_Sato_Shigeru_Ohmori_Tadashi_Takahashi[] = _("\n\nHitomi Sato\nShigeru Ohmori\nTadashi Takahashi\n\n");
ALIGNED(4)
const u8 gCreditsString_Game_Scenario[] = _("\nGame Scenario\n\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Hitomi_Sato_Satoshi_Tajiri[] = _("\n\nHitomi Sato\nSatoshi Tajiri\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Script_Designer_Map_Designer[] = _("\nScript Designer\n\nMap Designer\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Satoshi_Nohara_Shigeru_Ohmori[] = _("\n\nSatoshi Nohara\n\nShigeru Ohmori\n\n");
ALIGNED(4)
const u8 gCreditsString_Parametric_Designers[] = _("\nParametric Designers\n\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Koji_Nishino_Tetsuji_Ohta_Shigeki_Morimoto[] = _("\n\nKoji Nishino\nTetsuji Ohta\nShigeki Morimoto\n\n");
ALIGNED(4)
const u8 gCreditsString_POKeDEX_Text[] = _("\n\nPOKéDEX Text\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Kenji_Matsushima[] = _("\n\n\nKenji Matsushima\n\n\n");
ALIGNED(4)
const u8 gCreditsString_POKeMON_Designers[] = _("POKéMON Designers\n\n\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Ken_Sugimori_Motofumi_Fujiwara_Shigeki_Morimoto_Hironobu_Yoshida[] = _("\nKen Sugimori\nMotofumi Fujiwara\nShigeki Morimoto\nHironobu Yoshida\n\n");
ALIGNED(4)
const u8 gCreditsString_POKeMON_Designers_2[] = _("POKéMON Designers\n\n\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Satoshi_Ohta_Asuka_Iwashita_Takao_Unno_Kanako_Eo_Aimi_Tomita[] = _("\nSatoshi Ohta\nAsuka Iwashita\nTakao Unno\nKanako Eo\nAimi Tomita\n");
ALIGNED(4)
const u8 gCreditsString_POKeMON_Designers_3[] = _("POKéMON Designers\n\n\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Atsuko_Nishida_Muneo_Saito_Rena_Yoshikawa_Jun_Okutani[] = _("\nAtsuko Nishida\nMuneo Saito\nRena Yoshikawa\nJun Okutani\n\n");
ALIGNED(4)
const u8 gCreditsString_Supporting_Programmers[] = _("Supporting Programmers\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Teruyuki_Yoshioka_Takao_Nakano_Satoshi_Mitsuhara_Daisuke_Hoshino[] = _("\nTeruyuki Yoshioka\nTakao Nakano\n\nSatoshi Mitsuhara\nDaisuke Hoshino\n");
ALIGNED(4)
const u8 gCreditsString_NCL_Product_Testing[] = _("\n\nNCL Product Testing\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_NCL_Super_Mario_Club[] = _("\n\n\nNCL Super Mario Club\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Special_Thanks[] = _("Special Thanks\n\n\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Hiro_Nakamura_Hiroyuki_Uesugi_Teruki_Murakawa_Kazuya_Suyama[] = _("\nHiro Nakamura\nHiroyuki Uesugi\nTeruki Murakawa\n\nKazuya Suyama\n");
ALIGNED(4)
const u8 gCreditsString_Special_Thanks_2[] = _("Special Thanks\n\n\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Kenji_Tominaga_Kenjiro_Ito_Tomotaka_Komura_Michiko_Takizawa[] = _("\nKenji Tominaga\n\nKenjiro Ito\nTomotaka Komura\nMichiko Takizawa\n");
ALIGNED(4)
const u8 gCreditsString_Special_Thanks_3[] = _("Special Thanks\n\n\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Makiko_Takada_Mikiko_Ohashi_Shusaku_Egami_Takanao_Kondo_Rui_Kawaguchi[] = _("\nMakiko Takada\nMikiko Ohashi\nShusaku Egami\nTakanao Kondo\nRui Kawaguchi\n");
ALIGNED(4)
const u8 gCreditsString_Braille_Code_Check[] = _("\n\nBraille Code Check\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Japan_Braille_Library[] = _("\n\n\nJapan Braille Library\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Information_Supervisors[] = _("Information Supervisors\n\n\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Hiroki_Enomoto_Kazuyuki_Terada_Yuri_Sakurai_Yumi_Funasaka_Naoko_Yanase[] = _("\nHiroki Enomoto\nKazuyuki Terada\nYuri Sakurai\nYumi Funasaka\nNaoko Yanase\n");
ALIGNED(4)
const u8 gCreditsString_Coordinators[] = _("Coordinators\n\n\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Azusa_Tajima_Akira_Kinashi_Kazuki_Yoshihara_Retsuji_Nomoto[] = _("\nAzusa Tajima\nAkira Kinashi\nKazuki Yoshihara\n\nRetsuji Nomoto\n");
ALIGNED(4)
const u8 gCreditsString_Task_Managers[] = _("\nTask Managers\n\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Hitoshi_Yamagami_Gakuji_Nomoto[] = _("\n\nHitoshi Yamagami\nGakuji Nomoto\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Producers[] = _("\nProducers\n\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Hiroyuki_Jinnai_Takehiro_Izushi_Hiroaki_Tsuru[] = _("\n\nHiroyuki Jinnai\nTakehiro Izushi\nHiroaki Tsuru\n\n");
ALIGNED(4)
const u8 gCreditsString_Executive_Director[] = _("\n\nExecutive Director\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Satoshi_Tajiri[] = _("\n\n\nSatoshi Tajiri\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Executive_Producer[] = _("\n\nExecutive Producer\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Satoru_Iwata[] = _("\n\n\nSatoru Iwata\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Executive_Producer_2[] = _("\n\nExecutive Producer\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Tsunekaz_Ishihara[] = _("\n\n\nTsunekaz Ishihara\n\n\n");
ALIGNED(4)
const u8 gCreditsString_English_Version_Coordinators[] = _("\nEnglish Version Coordinators\n\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Hiro_Nakamura_Seth_McMahill[] = _("\n\nHiro Nakamura\nSeth McMahill\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Translator_Text_Editor[] = _("\nTranslator\n\nText Editor\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Nob_Ogasawara_Teresa_Lillygren[] = _("\n\nNob Ogasawara\n\nTeresa Lillygren\n\n");
ALIGNED(4)
const u8 gCreditsString_Programmers_2[] = _("Programmers\n\n\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Teruki_Murakawa_Souichi_Yamamoto_Yuichiro_Ito_Akira_Kinashi[] = _("\nTeruki Murakawa\nSouichi Yamamoto\nYuichiro Ito\nAkira Kinashi\n\n");
ALIGNED(4)
const u8 gCreditsString_Environment_Tool_Programmers[] = _("\nEnvironment & Tool Programmers\n\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Teruki_Murakawa_Souichi_Yamamoto_Kimiko_Nakamichi[] = _("\n\nTeruki Murakawa\nSouichi Yamamoto\nKimiko Nakamichi\n\n");
ALIGNED(4)
const u8 gCreditsString_NOA_Product_Testing[] = _("NOA Product Testing\n\n\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Thomas_Hertzog_Kathy_Huguenard_Mika_Kurosawa[] = _("\nThomas Hertzog\nKathy Huguenard\nMika Kurosawa\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Braille_Code_Check_2[] = _("Braille Code Check\n\n\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_National_Federation_of_the_Blind_Patricia_A_Maurer_Japan_Braille_Library_European_Blind_Union[] = _("\nNational Federation\n{CLEAR_TO 0x13}of the Blind\nPatricia A. Maurer\nJapan Braille Library\nEuropean Blind Union\n");
ALIGNED(4)
const u8 gCreditsString_Braille_Code_Check_3[] = _("\nBraille Code Check\n\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_National_Information_Library_Service_Margaret_Campion[] = _("\n\nNational Information Library\n{CLEAR_TO 0x2D}Service\nMargaret Campion\n\n");
ALIGNED(4)
const u8 gCreditsString_Special_Thanks_4[] = _("Special Thanks\n\n\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Takehiro_Izushi_Motoyasu_Tojima_Hitoshi_Yamagami_Hiroyuki_Uesugi[] = _("\nTakehiro Izushi\nMotoyasu Tojima\nHitoshi Yamagami\nHiroyuki Uesugi\n\n");
ALIGNED(4)
const u8 gCreditsString_Special_Thanks_5[] = _("Special Thanks\n\n\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Nicola_Pratt_Barlow_Shellie_Dow_Anthony_Howitt_Naoko_Saeki_Kyoko_Onishi[] = _("\nNicola Pratt-Barlow\nShellie Dow\nAnthony Howitt\nNaoko Saeki\nKyoko Onishi\n");
ALIGNED(4)
const u8 gCreditsString_Braille_Code_Check_4[] = _("\nBraille Code Check\n\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_The_Royal_New_Zealand_Foundation_of_the_Blind_Greg_Moran[] = _("\n\nThe Royal New Zealand\nFoundation of the Blind\nGreg Moran\n\n");
ALIGNED(4)
const u8 gCreditsString_Graphic_Designer[] = _("\n\nGraphic Designer\n\n\n\n");
ALIGNED(4)
const u8 gCreditsString_Akira_Kinashi[] = _("\n\n\nAkira Kinashi\n\n\n");
const u8 gJPText_MysteryGift[] = _("");
const u8 gJPText_DecideStop[] = _("");
const u8 gJPText_ReceiveMysteryGiftWithEReader[] = _("");
const u8 gJPText_SelectConnectFromEReaderMenu[] = _("");
const u8 gJPText_SelectConnectWithGBA[] = _("");
const u8 gJPText_SelectConnectAndPressA[] = _("カ-ドeリ-ダ-{PLUS}の ‘つうしん'を\nえらんで Aボタンを おしてください");
const u8 gJPText_LinkIsIncorrect[] = _("");
const u8 gJPText_CardReadingHasBeenHalted[] = _("");
const u8 gJPText_UnableConnectWithEReader[] = _("カ-ドeリ-ダ-{PLUS}と\nつうしん できません");
const u8 gJPText_Connecting[] = _("");
const u8 gJPText_ConnectionErrorCheckLink[] = _("");
const u8 gJPText_ConnectionErrorTryAgain[] = _("");
const u8 gJPText_AllowEReaderToLoadCard[] = _("");
const u8 gJPText_ConnectionComplete[] = _("");
const u8 gJPText_NewTrainerHasComeToSevii[] = _("");
const u8 gJPText_PleaseWaitAMoment[] = _("");
const u8 gJPText_WriteErrorUnableToSaveData[] = _("");
const u8 gText_CommErrorCheckConnections[] = _("Communication error…\nPlease check all connections,\nthen turn the power OFF and ON.");
const u8 gText_CommErrorEllipsis[] = _("Communication error…");
const u8 gText_MoveCloserToLinkPartner[] = _("Move closer to your link partner(s).\nAvoid obstacles between partners.");
const u8 gText_ABtnRegistrationCounter[] = _("A Button: Registration Counter");
const u8 gText_ABtnTitleScreen[] = _("A Button: Title Screen");
const u8 gText_NumPlayerLink[] = _("{STR_VAR_1}P LINK");
const u8 gText_BronzeCard[] = _("BRONZE");
const u8 gText_CopperCard[] = _("COPPER");
const u8 gText_SilverCard[] = _("SILVER");
const u8 gText_GoldCard[] = _("GOLD");
const u8 gText_HelpSystemControls_A_Next[] = _("{A_BUTTON}NEXT");
const u8 gText_HelpSystemControls_PickOkEnd[] = _("{DPAD_UPDOWN}PICK {A_BUTTON}OK {B_BUTTON}END");
const u8 gText_HelpSystemControls_AorBtoCancel[] = _("{A_BUTTON}{B_BUTTON}CANCEL");
const u8 gText_HelpSystemControls_PickOkCancel[] = _("{DPAD_UPDOWN}PICK {A_BUTTON}OK {B_BUTTON}CANCEL");
const u8 gEasyChatGroupName_Pokemon[] = _("POKéMON");
const u8 gEasyChatGroupName_Trainer[] = _("TRAINER");
const u8 gEasyChatGroupName_Status[] = _("STATUS");
const u8 gEasyChatGroupName_Battle[] = _("BATTLE");
const u8 gEasyChatGroupName_Greetings[] = _("GREETINGS");
const u8 gEasyChatGroupName_People[] = _("PEOPLE");
const u8 gEasyChatGroupName_Voices[] = _("VOICES");
const u8 gEasyChatGroupName_Speech[] = _("SPEECH");
const u8 gEasyChatGroupName_Endings[] = _("ENDINGS");
const u8 gEasyChatGroupName_Feelings[] = _("FEELINGS");
const u8 gEasyChatGroupName_Conditions[] = _("CONDITIONS");
const u8 gEasyChatGroupName_Actions[] = _("ACTIONS");
const u8 gEasyChatGroupName_Lifestyle[] = _("LIFESTYLE");
const u8 gEasyChatGroupName_Hobbies[] = _("HOBBIES");
const u8 gEasyChatGroupName_Time[] = _("TIME");
const u8 gEasyChatGroupName_Misc[] = _("MISC.");
const u8 gEasyChatGroupName_Adjectives[] = _("ADJECTIVES");
const u8 gEasyChatGroupName_Events[] = _("EVENTS");
const u8 gEasyChatGroupName_Move1[] = _("MOVE 1");
const u8 gEasyChatGroupName_Move2[] = _("MOVE 2");
const u8 gEasyChatGroupName_TrendySaying[] = _("TRENDY SAYING");
const u8 gEasyChatGroupName_Pokemon2[] = _("POKéMON2");
const u8 gText_ThreeQuestionMarks[] = _("???");
const u8 gText_UnusedEmpty[] = _("");
const u8 gText_UnusedLv[] = _("Lv");
const u8 gText_UnusedDashes[] = _("---");
const u8 gText_4Qmark[] = _("????");
const u8 gText_UnusedEmpty2[] = _("");
const u8 gText_IsThisTradeOkay[] = _("Is this trade okay?");
const u8 gTradeText_Cancel[] = _("CANCEL");
const u8 gTradeText_ChooseAPokemon[] = _("Choose a POKéMON.");
const u8 gTradeText_Summary[] = _("SUMMARY");
const u8 gTradeText_Trade[] = _("TRADE");
const u8 gText_CancelTrade[] = _("Cancel trade?");
const u8 gTradeText_PressBButtonToExit[] = _("Press the B Button to exit.");
const u8 gText_TradeAction_Summary[] = _("SUMMARY");
const u8 gText_TradeAction_Trade[] = _("TRADE");
const u8 gText_Trade_CommunicationStandby[] = _("{COLOR DARK_GRAY}{HIGHLIGHT WHITE}{SHADOW LIGHT_GRAY}Communication standby…\nPlease wait.");
const u8 gText_TradeHasBeenCanceled[] = _("{COLOR DARK_GRAY}{HIGHLIGHT WHITE}{SHADOW LIGHT_GRAY}The trade has been canceled.");
const u8 gText_Trade_OnlyPkmnForBattle[] = _("{COLOR DARK_GRAY}{HIGHLIGHT WHITE}{SHADOW LIGHT_GRAY}That's your only POKéMON\nfor battle.");
const u8 gText_WaitingForFriendToFinish[] = _("{COLOR DARK_GRAY}{HIGHLIGHT WHITE}{SHADOW LIGHT_GRAY}Waiting for your friend\nto finish…");
const u8 gText_FriendWantsToTrade[] = _("Your friend wants\nto trade POKéMON.");
const u8 gText_XWillBeSentToY[] = _("{STR_VAR_2} will be\nsent to {STR_VAR_1}.");
const u8 gText_ByeByeVar1[] = _("Bye-bye, {STR_VAR_2}!");
const u8 gText_XSentOverY[] = _("{STR_VAR_1} sent over {STR_VAR_3}.");
const u8 gText_TakeGoodCareOfX[] = _("Take good care of {STR_VAR_3}!");
const u8 gText_From[] = _("From ");
const u8 gText_Empty1[] = _("");
const u8 gText_Empty2[] = _("");
const u8 gText_Empty3[] = _("");
const u8 gText_Empty4[] = _("");
const u8 gText_Empty5[] = _("");
const u8 gText_Empty6[] = _("");
const u8 gText_Empty7[] = _("");
const u8 gText_Empty8[] = _("");
const u8 gText_Empty9[] = _("");
const u8 gText_Empty10[] = _("");
const u8 gText_Empty11[] = _("");
const u8 gText_WirelessCommunicationStatus[] = _("Wireless Communication Status");
const u8 gText_PeopleTrading[] = _("People trading:");
const u8 gText_PeopleBattling[] = _("People battling:");
const u8 gText_PeopleInUnionRoom[] = _("People in the UNION ROOM:");
const u8 gText_PeopleCommunicating[] = _("People communicating:");
const u8 gText_Dynamic0Players[] = _("{DYNAMIC 0x00} players");
const u8 gText_Dynamic1Players[] = _("{DYNAMIC 0x01} player"); // Typo? This is "players" in Emerald
const u8 gText_Dynamic2Players[] = _("{DYNAMIC 0x02} players");
const u8 gText_Dynamic3Players[] = _("{DYNAMIC 0x03} players");
const u8 gText_DPadChooseAButtonConfirm[] = _("{DPAD_ANY}えらぶ:{A_BUTTON}けってい");
const u8 gText_BButtonCancel[] = _("{B_BUTTON}CANCEL");
const u8 gText_ChooseBattleLineup[] = _("{COLOR RED}{SHADOW LIGHT_RED}   たいせんの くみあわせ\n{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}じぶんの ばしょをきめて ください");
const u8 gText_UnusedId[] = _("{ID}");
const u8 gText_CommunicationStandby5[] = _("Communication standby…");
const u8 gDaycareText_GetAlongVeryWell[] = _("The two seem to get along\nvery well.");
const u8 gDaycareText_GetAlong[] = _("The two seem to get along.");
const u8 gDaycareText_DontLikeOther[] = _("The two don't seem to like\neach other much.");
const u8 gDaycareText_PlayOther[] = _("The two prefer to play with other\nPOKéMON than each other.");
const u8 gText_TeachWhichMoveToMon[] = _("Teach which move to {STR_VAR_1}?");
const u8 gText_TeachMoveQues[] = _("Teach {STR_VAR_2}?");
const u8 gText_MonLearnedMove[] = _("{STR_VAR_1} learned\n{STR_VAR_2}.");
const u8 gText_MonIsTryingToLearnMove[] = _("{STR_VAR_1} is trying to learn\n{STR_VAR_2}.\pBut {STR_VAR_1} can't learn more\nthan four moves.\pDelete an older move to make\nroom for {STR_VAR_2}?");
const u8 gText_StopLearningMove[] = _("Stop learning {STR_VAR_2}?");
const u8 gText_1_2_and_Poof[] = _("{PAUSE 0x20}1, {PAUSE 0x0F}2, and {PAUSE 0x0F}‥ {PAUSE 0x0F}‥ {PAUSE 0x0F}‥ {PAUSE 0x0F}{PLAY_SE SE_BALL_BOUNCE_1}Poof!\p");
const u8 gText_MonForgotOldMoveAndMonLearnedNewMove[] = _("{STR_VAR_1} forgot {STR_VAR_3}.\pAnd‥\p{STR_VAR_1}\nlearned {STR_VAR_2}.");
const u8 gText_GiveUpTryingToTeachNewMove[] = _("Give up trying to teach a new\nmove to {STR_VAR_1}?");
const u8 gText_WhichMoveShouldBeForgotten[] = _("Which move should be forgotten?\p");
const u8 gText_TenDashes[] = _("----------");
const u8 gText_CommStandbyAwaitingOtherPlayer[] = _("Communication standby‥\nAwaiting another player to choose.");
const u8 gText_BattleWasRefused[] = _("The battle was refused.{PAUSE 0x3C}");
const u8 gText_RefusedBattle[] = _("Refused the battle.{PAUSE 0x3C}");
const u8 gFameCheckerText_MainScreenUI[] = _("{START_BUTTON}PICK {DPAD_UPDOWN}SELECT {A_BUTTON}OK");
const u8 gFameCheckerText_PickScreenUI[] = _("{START_BUTTON}PICK {DPAD_UPDOWN}SELECT {B_BUTTON}CANCEL");
const u8 gFameCheckerText_FlavorTextUI[] = _("{DPAD_ANY}PICK {A_BUTTON}READ {B_BUTTON}CANCEL");
const u8 gFameCheckerOakName[] = _("OAK");
const u8 gFameCheckerDaisyName[] = _("DAISY");
const u8 gFameCheckerBillName[] = _("BILL");
const u8 gFameCheckerMrFujiName[] = _("FUJI");
const u8 gText_VarietyOfEventsImportedWireless[] = _("A variety of events will be imported\nover Wireless Communication.");
const u8 gText_WonderCardsInPossession[] = _("Read the WONDER CARDS in your\npossession.");
const u8 gText_ReadNewsThatArrived[] = _("Read the NEWS that arrived.");
const u8 gText_ReturnToTitle[] = _("Return to the title screen.");
const u8 gText_DontHaveCardNewOneInput[] = _("You don't have a WONDER CARD,\nso a new CARD will be input.");
const u8 gText_DontHaveNewsNewOneInput[] = _("You don't have any WONDER NEWS,\nso new NEWS will be input.");
const u8 gText_WhereShouldCardBeAccessed[] = _("Where should the WONDER CARD\nbe accessed?");
const u8 gText_WhereShouldNewsBeAccessed[] = _("Where should the WONDER NEWS\nbe accessed?");
const u8 gText_LinkStandyBButtonCancel[] = _("Link standby...\n... ... B Button: Cancel");
const u8 gText_Communicating[] = _("Communicating…");
const u8 gText_CommunicationCompleted[] = _("Communication completed.");
const u8 gText_CommunicationError[] = _("Communication error.");
const u8 gText_CommunicationCanceled[] = _("Communication has been canceled.");
const u8 gText_ThrowAwayWonderCard[] = _("Throw away the WONDER CARD\nand input a new CARD?");
const u8 gText_HaventReceivedCardsGift[] = _("You haven't received the CARD's gift\nyet. Input a new CARD anyway?");
const u8 gText_WonderCardReceivedFrom[] = _("A WONDER CARD has been received\nfrom {STR_VAR_1}.");
const u8 gText_WonderNewsReceivedFrom[] = _("A WONDER NEWS item has been\nreceived from {STR_VAR_1}.");
const u8 gText_WonderCardReceived[] = _("A new WONDER CARD has been\nreceived.");
const u8 gText_WonderNewsReceived[] = _("A new WONDER NEWS item has been\nreceived.");
const u8 gText_NewStampReceived[] = _("A new STAMP has been received.");
const u8 gText_NewTrainerReceived[] = _("A new TRAINER has arrived.");
const u8 gText_AlreadyHadCard[] = _("You already had that\nWONDER CARD.");
const u8 gText_AlreadyHadNews[] = _("You already had that\nWONDER NEWS item.");
const u8 gText_AlreadyHadStamp[] = _("You already had that\nSTAMP.");
const u8 gText_NoMoreRoomForStamps[] = _("There's no more room for adding\nSTAMPS.");
const u8 gText_RecordUploadedViaWireless[] = _("Your record has been uploaded via\nWIRELESS COMMUNICATION.");
const u8 gText_CantAcceptCardFromTrainer[] = _("You can't accept a WONDER CARD\nfrom this TRAINER.");
const u8 gText_CantAcceptNewsFromTrainer[] = _("You can't accept WONDER NEWS\nfrom this TRAINER.");
const u8 gText_NothingSentOver[] = _("Nothing was sent over…");
const u8 gText_WhatToDoWithCards[] = _("What would you like to do\nwith the WONDER CARDS?");
const u8 gText_WhatToDoWithNews[] = _("What would you like to do\nwith the WONDER NEWS?");
const u8 gText_SendingWonderCard[] = _("Sending your WONDER CARD…");
const u8 gText_SendingWonderNews[] = _("Sending your WONDER NEWS item…");
const u8 gText_WonderCardSentTo[] = _("Your WONDER CARD has been sent\nto {STR_VAR_1}.");
const u8 gText_WonderNewsSentTo[] = _("Your WONDER NEWS item has been\nsent to {STR_VAR_1}.");
const u8 gText_StampSentTo[] = _("A STAMP has been sent to {STR_VAR_1}.");
const u8 gText_GiftSentTo[] = _("A GIFT has been sent to {STR_VAR_1}.");
const u8 gText_OtherTrainerHasCard[] = _("The other TRAINER has the same\nWONDER CARD already.");
const u8 gText_OtherTrainerHasNews[] = _("The other TRAINER has the same\nWONDER NEWS already.");
const u8 gText_OtherTrainerHasStamp[] = _("The other TRAINER has the same\nSTAMP already.");
const u8 gText_OtherTrainerCanceled[] = _("The other TRAINER canceled\ncommunication.");
const u8 gText_CantSendGiftToTrainer[] = _("You can't send a MYSTERY GIFT to\nthis TRAINER.");
const u8 gText_IfThrowAwayCardEventWontHappen[] = _("If you throw away the CARD,\nits event won't happen. Okay?");
const u8 gText_OkayToDiscardNews[] = _("Is it okay to discard this\nNEWS item?");
const u8 gText_HaventReceivedGiftOkayToDiscard[] = _("You haven't received the\nGIFT. Is it okay to discard?");
const u8 gText_DataWillBeSaved[] = _("Data will be saved.\nPlease wait.");
const u8 gText_SaveCompletedPressA[] = _("Save completed.\nPlease press the A Button.");
const u8 gText_WonderCardThrownAway[] = _("The WONDER CARD was thrown away.");
const u8 gText_WonderNewsThrownAway[] = _("The WONDER NEWS was thrown away.");
const u8 gText_MysteryGift2[] = _("MYSTERY GIFT");
const u8 gText_PickOKCancel[] = _("{DPAD_UPDOWN}PICK {A_BUTTON}OK {B_BUTTON}EXIT");
const u8 gText_WonderCards[] = _("WONDER CARDS");
const u8 gText_WonderNews[] = _("WONDER NEWS");
const u8 gText_WirelessCommunication[] = _("WIRELESS COMMUNICATION");
const u8 gText_Friend2[] = _("FRIEND");
const u8 gText_Exit3[] = _("EXIT");
const u8 gText_Receive[] = _("RECEIVE");
const u8 gText_Send[] = _("SEND");
const u8 gText_Toss[] = _("TOSS");
const u8 gText_DelAllCancelOk[] = _("DEL. ALL{CLEAR_TO 0x57}CANCEL{CLEAR_TO 0xA4}OK");
