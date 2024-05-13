#ifndef GUARD_POKEMON_SUMMARY_SCREEN_NEW_H
#define GUARD_POKEMON_SUMMARY_SCREEN_NEW_H

#include "main.h"

#define NEW_SUMMARY_SCREEN  TRUE

void ShowPokemonSummaryScreen_New(u8 mode, void *mons, u8 monIndex, u8 maxMonIndex, void (*callback)(void));
void ShowSelectMovePokemonSummaryScreen_New(struct Pokemon *mons, u8 monIndex, u8 maxMonIndex, void (*callback)(void), u16 newMove);
void ShowPokemonSummaryScreenHandleDeoxys_New(u8 mode, struct BoxPokemon *mons, u8 monIndex, u8 maxMonIndex, void (*callback)(void));
u8 GetMoveSlotToReplace_New(void);
void SummaryScreen_SetAnimDelayTaskId_New(u8 taskId);

// The Pokémon Summary Screen can operate in different modes. Certain features,
// such as move re-ordering, are available in the different modes.
enum PokemonSummaryScreenMode_New
{
    NEW_SUMMARY_MODE_NORMAL,
    NEW_SUMMARY_MODE_LOCK_MOVES,
    NEW_SUMMARY_MODE_BOX,
    NEW_SUMMARY_MODE_SELECT_MOVE,
};

#endif // GUARD_POKEMON_SUMMARY_SCREEN_NEW_H
