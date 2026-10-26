// rea decompile_all
// name: FUN_10104810
// address: 0x10104810
// body: available
// range: 0x10104810-0x10104994 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 __fastcall FUN_10104810(int *param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;

  if (*param_1 == 0) {
    if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
      uVar4 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"?",(undefined1 *)0x1);
      return uVar4;
    }
    return 0;
  }
  uVar1 = param_1[2];
  if (uVar1 < (uint)param_1[1]) {
    cVar3 = *(char *)(*param_1 + uVar1);
    param_1[2] = uVar1 + 1;
    if (cVar3 == 'N') {
      if ((undefined4 *)param_1[4] == (undefined4 *)0x0) {
        return 0;
      }
      cVar3 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"!null",(undefined1 *)0x5);
joined_r0x101048f1:
      if (cVar3 != '\0') {
        return 1;
      }
      return 0;
    }
    if (cVar3 == 'O') {
      iVar2 = param_1[3];
      param_1[3] = iVar2 + 1U;
      if (500 < iVar2 + 1U) {
        if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
           (cVar3 = FUN_10093f00((undefined4 *)param_1[4],
                                 (undefined1 (*) [16])"{recursion limit reached}",(undefined1 *)0x19
                                ), cVar3 != '\0')) {
          return 1;
        }
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 1;
        return 0;
      }
      cVar3 = FUN_10104810(param_1);
      while( true ) {
        if (cVar3 != '\0') {
          return 1;
        }
        if (*param_1 == 0) break;
        uVar1 = param_1[2];
        if ((uVar1 < (uint)param_1[1]) && (*(char *)(*param_1 + uVar1) == 'E')) {
          param_1[2] = uVar1 + 1;
          param_1[3] = param_1[3] + -1;
          return 0;
        }
        if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
           (cVar3 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])" | ",
                                 (undefined1 *)0x3), cVar3 != '\0')) {
          return 1;
        }
        cVar3 = FUN_10104810(param_1);
      }
    }
    else if (cVar3 == 'R') {
      cVar3 = FUN_10101fc0(param_1,'\0');
      if (cVar3 != '\0') {
        return 1;
      }
      if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
         (cVar3 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"..=",(undefined1 *)0x3
                              ), cVar3 != '\0')) {
        return 1;
      }
      cVar3 = FUN_10101fc0(param_1,'\0');
      goto joined_r0x101048f1;
    }
  }
  if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
     (cVar3 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"{invalid syntax}",
                           &DAT_00000010), cVar3 != '\0')) {
    return 1;
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return 0;
}
