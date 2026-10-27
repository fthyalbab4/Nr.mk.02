// rea decompile_all
// name: FUN_0055b924
// address: 0x55b924
// body: available
// range: 0x55b924-0x55bb39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055b924(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_10;

  iVar1 = param_1[0xe];
  if (param_1[5] != 100) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x14) = 0x14;
    *(int *)(iVar2 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  if ((iVar1 == 3) && (param_1[0xf] == 3)) {
    local_10 = 10;
  }
  else if (iVar1 < 5) {
    local_10 = iVar1 * 4 + 2;
  }
  else {
    local_10 = iVar1 * 6;
  }
  if ((param_1[0x5b] == 0) || (param_1[0x5c] < local_10)) {
    iVar2 = local_10;
    if (local_10 < 0xb) {
      iVar2 = 10;
    }
    param_1[0x5c] = iVar2;
    iVar2 = (**(code **)param_1[1])(param_1,0,iVar2 * 0x24);
    param_1[0x5b] = iVar2;
  }
  iVar2 = param_1[0x5b];
  param_1[0x2a] = iVar2;
  param_1[0x29] = local_10;
  if ((iVar1 == 3) && (param_1[0xf] == 3)) {
    uVar3 = FUN_0055b8d8(iVar2,3,0,1);
    uVar3 = FUN_0055b874(uVar3,0,1,2,0,5);
    uVar3 = FUN_0055b874(uVar3,2,1,1,0,0x3f);
    uVar3 = FUN_0055b874(uVar3,1,1,1,0,0x3f);
    uVar3 = FUN_0055b874(uVar3,0,6,2,0,0x3f);
    uVar3 = FUN_0055b874(uVar3,0,1,1,2,0x3f);
    uVar3 = FUN_0055b8d8(uVar3,3,1,0);
    uVar3 = FUN_0055b874(uVar3,2,1,0,1,0x3f);
    uVar3 = FUN_0055b874(uVar3,1,1,0,1,0x3f);
    FUN_0055b874(uVar3,0,1,0,1,0x3f);
  }
  else {
    uVar3 = FUN_0055b8d8(iVar2,iVar1,0,1);
    uVar3 = FUN_0055b89c(uVar3,iVar1,1,2,0,5);
    uVar3 = FUN_0055b89c(uVar3,iVar1,6,2,0,0x3f);
    uVar3 = FUN_0055b89c(uVar3,iVar1,1,1,2,0x3f);
    uVar3 = FUN_0055b8d8(uVar3,iVar1,1,0);
    FUN_0055b89c(uVar3,iVar1,1,0,1,0x3f);
  }
  return;
}
