// rea decompile_all
// name: FUN_10138880
// address: 0x10138880
// body: available
// range: 0x10138880-0x101389e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10138880(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint local_2c;
  int *local_28;
  int local_24;
  int **local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;

  local_2c = 0;
  pcVar4 = Sleep_exref;
  uVar5 = *param_1;
  do {
    while ((uVar5 & 1) != 0) {
      if (uVar5 < 4 && local_2c < 10) {
        if (local_2c < 3) {
          iVar1 = 2 << ((byte)local_2c & 0x1f);
          do {
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        else {
          (*pcVar4)(0);
        }
        local_2c = local_2c + 1;
        uVar5 = *param_1;
      }
      else {
        local_28 = (int *)0x0;
        piVar3 = DAT_101632ec;
        if (DAT_101632ec == (int *)0x0) {
          piVar3 = FUN_101386f0();
          pcVar4 = Sleep_exref;
        }
        local_20 = &local_28;
        local_18 = 0;
        local_24 = 1;
        if ((uVar5 & 0xfffffffc) != 0) {
          local_20 = (int **)0x0;
          local_18 = uVar5 & 0xfffffffc;
        }
        local_1c = 0;
        LOCK();
        uVar2 = *param_1;
        bVar6 = uVar5 == uVar2;
        if (bVar6) {
          *param_1 = uVar5 & 3 | (uint)&local_28;
          uVar2 = uVar5;
        }
        UNLOCK();
        uVar5 = uVar2;
        local_28 = piVar3;
        if (bVar6) {
          if (*piVar3 == 0) {
            do {
              local_14 = 1;
              (*(code *)piVar3[1])(&local_24,&local_14,4,0xffffffff);
            } while (local_24 != 0);
          }
          else {
            (*(code *)piVar3[1])(piVar3[2],&local_24,0,0);
          }
          local_2c = 0;
          pcVar4 = Sleep_exref;
          uVar5 = *param_1;
        }
      }
    }
    LOCK();
    uVar2 = *param_1;
    bVar6 = uVar5 == uVar2;
    if (bVar6) {
      *param_1 = uVar5 | 1;
      uVar2 = uVar5;
    }
    UNLOCK();
    uVar5 = uVar2;
  } while (!bVar6);
  return;
}
