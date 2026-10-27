// rea decompile_all
// name: FUN_00589f98
// address: 0x589f98
// body: available
// range: 0x589f98-0x58a0e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00589f98(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_18;
  int local_10;
  int local_c;

  if ((param_4 < *(int *)(param_3 + 8)) && (*(int *)PTR_DAT_00688c4c == -1)) {
    *(int *)PTR_DAT_00689478 = param_4;
    local_c = param_4 + 1;
    iVar1 = FUN_0060fdc0(param_3,param_4);
    if (*(int *)(iVar1 + 0xc) == 4) {
      local_c = 10000000;
    }
    else {
      if (*(char *)(iVar1 + 0x12) == '\0') {
        uVar2 = FUN_0060fdc0(param_3,param_4);
        FUN_005897a0(param_1,param_2,uVar2);
      }
      else {
        iVar1 = *(int *)(iVar1 + 0x48);
        if (iVar1 == -1) {
          uVar2 = FUN_0060fdc0(param_3,param_4);
          FUN_005897a0(param_1,param_2,uVar2);
        }
        else if (iVar1 == -2) {
          uVar2 = FUN_0060fdc0(param_3,param_4);
          FUN_005897a0(param_2,param_1,uVar2);
        }
        else if (((-1 < iVar1) && (iVar3 = FUN_00571ea8(), iVar1 <= iVar3)) &&
                (local_18 = FUN_0060aa64(*(undefined4 *)PTR_DAT_0068939c,iVar1), -1 < local_18 + -1)
                ) {
          local_10 = 0;
          do {
            iVar3 = FUN_0060aa90(*(undefined4 *)PTR_DAT_0068939c,iVar1,local_10);
            if (*(char *)(iVar3 + 0x108) == '\0') {
              uVar2 = FUN_0060fdc0(param_3,param_4);
              FUN_005897a0(iVar3,param_2,uVar2);
              if (*(int *)PTR_DAT_00688c4c != -1) {
                return 10000000;
              }
            }
            local_10 = local_10 + 1;
            local_18 = local_18 + -1;
          } while (local_18 != 0);
        }
      }
      if (*(int *)PTR_DAT_00688c4c != -1) {
        local_c = 10000000;
      }
    }
  }
  else {
    local_c = 10000000;
  }
  return local_c;
}
