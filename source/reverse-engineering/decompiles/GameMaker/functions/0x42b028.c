// rea decompile_all
// name: FUN_0042b028
// address: 0x42b028
// body: available
// range: 0x42b028-0x42b07e inclusive
// range: 0x42b0af-0x42b2c8 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042b028(undefined2 *param_1,undefined2 *param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;

  uVar4 = FUN_0042a690(*param_1,param_2,param_3,param_3);
  bVar2 = (&DAT_00773e64)[uVar4 & 0xffff];
  uVar4 = FUN_0042a690(*param_2);
  bVar3 = (&DAT_00773e64)[uVar4 & 0xffff];
  switch((&DAT_00773e94)[(uint)bVar3 + (uint)bVar2 * 0xc]) {
  case 0:
    FUN_00424220();
    break;
  case 1:
    FUN_0042ae08(param_1,param_2,param_3);
    break;
  case 2:
    FUN_0042ad5c(param_1,param_2,param_3);
    break;
  case 3:
    if (param_3 == 3) {
      FUN_0042a748(param_1,param_2,3);
    }
    else {
      FUN_0042a850(param_1,param_2,param_3);
    }
    break;
  case 4:
    if (param_3 < 4) {
      FUN_0042a748(param_1,param_2,param_3);
    }
    else {
      FUN_0042a850(param_1,param_2,param_3);
    }
    break;
  case 5:
    FUN_0042aea0(param_1,param_2,param_3,bVar3,(uint)bVar2);
    break;
  case 6:
    if (param_3 == 0) {
      FUN_0042a24c(param_1,param_2);
    }
    else if (param_3 < 4) {
      FUN_0042a748(param_1,param_2,param_3);
    }
    else {
      FUN_0042a850(param_1,param_2,param_3);
    }
    break;
  case 7:
    if (param_3 < 8) {
      if (param_3 < 4) {
        FUN_0042a748(param_1,param_2,param_3);
      }
      else {
        FUN_0042a850(param_1,param_2,param_3);
      }
    }
    else if (param_3 == 8) {
      cVar1 = FUN_00426988(param_1);
      if ((cVar1 == '\0') || (cVar1 = FUN_00426988(param_2), cVar1 == '\0')) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      FUN_00429e2c(param_1,uVar5);
    }
    else if (param_3 == 9) {
      cVar1 = FUN_00426988(param_1);
      if ((cVar1 == '\0') && (cVar1 = FUN_00426988(param_2), cVar1 == '\0')) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      FUN_00429e2c(param_1,uVar5);
    }
    else if (param_3 == 10) {
      bVar2 = FUN_00426988(param_1);
      bVar3 = FUN_00426988(param_2);
      FUN_00429e2c(param_1,bVar2 ^ bVar3);
    }
    break;
  case 8:
    if (param_3 == 0) {
      FUN_0042a7dc(param_1,param_2,0);
    }
    else if (param_3 == 1) {
      FUN_0042a7dc(param_1,param_2,1);
      if ((bVar2 == 8) && (bVar3 == 8)) {
        *param_1 = 5;
      }
    }
    else if (param_3 - 2U < 2) {
      FUN_0042a748(param_1,param_2,param_3);
    }
    else {
      FUN_0042a850(param_1,param_2,param_3);
    }
    break;
  case 9:
    if (param_3 == 3) {
      FUN_0042a748(param_1,param_2,3);
    }
    else {
      FUN_0042a96c(param_1,param_2,param_3);
    }
    break;
  case 10:
    if (param_3 == 3) {
      FUN_0042a748(param_1,param_2,3);
    }
    else {
      FUN_0042ab64(param_1,param_2,param_3);
    }
    break;
  case 0xb:
    FUN_0042a6bc(param_1,param_2,param_3);
    break;
  default:
    FUN_00424220();
  }
  return;
}
