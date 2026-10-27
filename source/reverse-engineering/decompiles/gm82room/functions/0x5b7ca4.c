// rea decompile_all
// name: FUN_005b7ca4
// address: 0x5b7ca4
// body: available
// range: 0x5b7ca4-0x5b800a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b7ca4(int param_1,char param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;

  cVar1 = FUN_005b7c74(param_1,param_3,param_3,*(undefined4 *)(param_1 + 0x58),
                       *(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x50),
                       (short)*(undefined4 *)(param_1 + 0x54));
  bVar5 = cVar1 == '\0';
  if (bVar5) {
    FUN_0060ddec(param_1);
  }
  if (param_2 == '\0') {
    bVar2 = FUN_005b7c74(param_1,param_3);
    bVar2 = bVar2 ^ 1;
    bVar3 = FUN_005b7c74(param_1,param_3);
    bVar3 = bVar3 ^ 1;
    cVar1 = FUN_005b7c74(param_1,param_3);
    if ((bVar2 & bVar3) == 0) {
      if (((bVar2 == 0) && (bVar3 == 0)) && (cVar1 != '\x01')) {
        FUN_0060d14c(param_1);
        FUN_0060d180(param_1);
      }
      else if (bVar2 == 0) {
        if (bVar3 != 0) {
          FUN_0060d180(param_1);
        }
      }
      else {
        FUN_0060d14c(param_1);
      }
    }
    else {
      FUN_0060d14c(param_1);
      FUN_0060d180(param_1);
    }
  }
  else {
    FUN_004048b8();
    FUN_00409748(10,0);
    iVar4 = 0x23;
    do {
      FUN_00404864();
      FUN_00404874();
      cVar1 = FUN_005b7c74(param_1,param_3);
      if (cVar1 != '\0') break;
      bVar5 = true;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 0x23;
    do {
      FUN_00404864();
      FUN_00404874();
      cVar1 = FUN_005b7c74(param_1,param_3);
      if (cVar1 != '\0') break;
      bVar5 = true;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (bVar5) {
      FUN_0060d0ac(param_1);
    }
  }
  return;
}
