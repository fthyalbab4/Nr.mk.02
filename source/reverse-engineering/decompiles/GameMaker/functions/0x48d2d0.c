// rea decompile_all
// name: FUN_0048d2d0
// address: 0x48d2d0
// body: available
// range: 0x48d2d0-0x48d3e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0048d2d0(int param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_1c;
  int local_18;
  int local_14;

  piVar2 = *(int **)(param_1 + 0x1a8);
  FUN_0045cd30(piVar2,*(undefined4 *)(param_1 + 0x1b0));
  FUN_0045cd3c(piVar2,*(undefined4 *)(param_1 + 0x1b4));
  uVar3 = *(uint *)(*(int *)(piVar2[0x11] + 0x10) + 0x18);
  local_18 = (int)uVar3 >> 1;
  if (local_18 < 0) {
    local_18 = local_18 + (uint)((uVar3 & 1) != 0);
  }
  iVar7 = *(int *)(param_1 + 0x48) - uVar3;
  iVar4 = *(int *)(param_1 + 0x4c) - uVar3;
  iVar6 = iVar4 + 1;
  iVar5 = iVar7 + 1;
  if (uVar3 == 0) {
    iVar6 = iVar4;
    iVar5 = iVar7;
  }
  local_14 = iVar6;
  if (iVar5 < iVar6) {
    local_14 = iVar5;
  }
  bVar1 = *(byte *)(param_1 + 0x1b8);
  if (((bVar1 == 1) || (bVar1 == 3)) || (local_1c = local_18, bVar1 == 5)) {
    local_1c = iVar5 - local_14 >> 1;
    if (local_1c < 0) {
      local_1c = local_1c + (uint)((iVar5 - local_14 & 1U) != 0);
    }
    local_1c = local_18 + local_1c;
    iVar5 = iVar6 - local_14 >> 1;
    if (iVar5 < 0) {
      iVar5 = iVar5 + (uint)((iVar6 - local_14 & 1U) != 0);
    }
    local_18 = local_18 + iVar5;
    iVar6 = local_14;
    iVar5 = local_14;
  }
  if (bVar1 < 2) {
    uVar3 = (**(code **)(*piVar2 + 0x74))
                      (piVar2,local_1c,local_18,iVar6 + local_18,iVar5 + local_1c);
  }
  else if ((byte)(bVar1 - 2) < 2) {
    if (local_14 < 0) {
      local_14 = local_14 + 3;
    }
    uVar3 = (**(code **)(*piVar2 + 0x7c))
                      (piVar2,local_1c,local_18,local_14 >> 2,local_14 >> 2,iVar6 + local_18,
                       iVar5 + local_1c);
  }
  else {
    uVar3 = (uint)(byte)(bVar1 - 6);
    if ((byte)(bVar1 - 4) < 2) {
      uVar3 = (**(code **)(*piVar2 + 0x48))
                        (piVar2,local_1c,local_18,iVar6 + local_18,iVar5 + local_1c);
    }
  }
  return uVar3;
}
