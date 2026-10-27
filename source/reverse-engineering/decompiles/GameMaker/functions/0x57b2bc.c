// rea decompile_all
// name: FUN_0057b2bc
// address: 0x57b2bc
// body: available
// range: 0x57b2bc-0x57b4c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0057b2e0) */

void FUN_0057b2bc(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;

  iVar1 = *(int *)((int)param_1 + 0x196);
  FUN_0057b030(param_1);
  FUN_0057b220(param_1);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  uVar3 = FUN_0057afa0(param_1);
  *(undefined4 *)(iVar1 + 0x10) = uVar3;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  if ((param_1[0x14] == 0) || (param_1[0xf] == 0)) {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
  }
  if (param_1[0x14] != 0) {
    if (param_1[0x10] != 0) {
      *(undefined4 *)(*param_1 + 0x14) = 0x2e;
      (**(code **)*param_1)();
    }
    if (param_1[0x1d] == 3) {
      if (param_1[0x21] == 0) {
        if (param_1[0x16] == 0) {
          param_1[0x18] = 1;
        }
        else {
          param_1[0x1a] = 1;
        }
      }
      else {
        param_1[0x19] = 1;
      }
    }
    else {
      param_1[0x18] = 1;
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      param_1[0x21] = 0;
    }
    if (param_1[0x18] != 0) {
      FUN_0057e68c(param_1);
      *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)((int)param_1 + 0x1be);
    }
    if ((param_1[0x1a] != 0) || (param_1[0x19] != 0)) {
      FUN_0057f908(param_1);
      *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)((int)param_1 + 0x1be);
    }
  }
  if (param_1[0x10] == 0) {
    if (*(int *)(iVar1 + 0x10) == 0) {
      FUN_0057d8fc(param_1);
      FUN_00581c60(param_1);
    }
    else {
      FUN_0057d49c(param_1);
    }
    FUN_005813fc(param_1,param_1[0x1a]);
  }
  FUN_00581700(param_1);
  if (param_1[0x37] == 0) {
    if (param_1[0x36] == 0) {
      FUN_0057cef0(param_1);
    }
    else {
      FUN_0057c42c(param_1);
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 1;
    (**(code **)*param_1)();
  }
  if ((*(int *)(*(int *)((int)param_1 + 0x1a6) + 0x10) == 0) && (param_1[0xf] == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  FUN_00581088(param_1,uVar3);
  if (param_1[0x10] == 0) {
    FUN_00580020(param_1,0);
  }
  (**(code **)(param_1[1] + 0x18))();
  (**(code **)(*(int *)((int)param_1 + 0x1a6) + 8))();
  if (((param_1[2] != 0) && (param_1[0xf] == 0)) &&
     (*(int *)(*(int *)((int)param_1 + 0x1a6) + 0x10) != 0)) {
    if (param_1[0x36] == 0) {
      iVar4 = param_1[8];
    }
    else {
      iVar4 = param_1[8] * 3 + 2;
    }
    iVar2 = param_1[2];
    *(undefined4 *)(iVar2 + 4) = 0;
    *(int *)(iVar2 + 8) = *(int *)((int)param_1 + 0x132) * iVar4;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    uVar3 = 3;
    if (param_1[0x1a] == 0) {
      uVar3 = 2;
    }
    *(undefined4 *)(param_1[2] + 0x10) = uVar3;
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  }
  return;
}
