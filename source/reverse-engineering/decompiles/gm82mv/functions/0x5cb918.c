// rea decompile_all
// name: FUN_005cb918
// address: 0x5cb918
// body: available
// range: 0x5cb918-0x5cba2e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005cb918(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_14;
  undefined4 local_10;

  local_10 = *(int *)(param_2 + 0xc);
  uVar3 = *(uint *)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x34) < uVar3) {
    uVar2 = *(int *)(param_1 + 0x2c) - uVar3;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x34) - uVar3;
  }
  if (*(uint *)(param_2 + 0x10) < uVar2) {
    uVar2 = *(uint *)(param_2 + 0x10);
  }
  local_14 = param_3;
  if ((uVar2 != 0) && (param_3 == -5)) {
    local_14 = 0;
  }
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - uVar2;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + uVar2;
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar1 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x3c),uVar3,uVar2);
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x3c);
  }
  FUN_00404514(uVar3,local_10,uVar2);
  local_10 = local_10 + uVar2;
  iVar4 = uVar3 + uVar2;
  if (iVar4 == *(int *)(param_1 + 0x2c)) {
    iVar4 = *(int *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x2c) == *(int *)(param_1 + 0x34)) {
      *(int *)(param_1 + 0x34) = iVar4;
    }
    uVar3 = *(int *)(param_1 + 0x34) - iVar4;
    if (*(uint *)(param_2 + 0x10) < uVar3) {
      uVar3 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar3 != 0) && (local_14 == -5)) {
      local_14 = 0;
    }
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - uVar3;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + uVar3;
    if (*(int *)(param_1 + 0x38) != 0) {
      uVar1 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x3c),iVar4,uVar3);
      *(undefined4 *)(param_1 + 0x3c) = uVar1;
      *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x3c);
    }
    FUN_00404514(iVar4,local_10,uVar3);
    local_10 = local_10 + uVar3;
    iVar4 = iVar4 + uVar3;
  }
  *(int *)(param_2 + 0xc) = local_10;
  *(int *)(param_1 + 0x30) = iVar4;
  return local_14;
}
