// rea decompile_all
// name: FUN_005a6300
// address: 0x5a6300
// body: available
// range: 0x5a6300-0x5a6437 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a6300(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int local_1c;
  int iStack_18;
  int *local_14;
  undefined4 *local_10;

  iVar1 = param_1[0x6f];
  if ((((param_1[100] != 0) || (param_1[0x65] != 0x3f)) || (param_1[0x66] != 0)) ||
     (param_1[0x67] != 0)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x7a;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
  }
  local_10 = (undefined4 *)(iVar1 + 0x14);
  local_14 = param_1 + 0x53;
  for (local_1c = 0; local_1c < param_1[0x52]; local_1c = local_1c + 1) {
    iVar3 = *(int *)(*local_14 + 0x14);
    iVar2 = *(int *)(*local_14 + 0x18);
    FUN_005a6438(param_1,1,iVar3,iVar1 + 0x28 + iVar3 * 4);
    FUN_005a6438(param_1,0,iVar2,iVar1 + 0x38 + iVar2 * 4);
    *local_10 = 0;
    local_10 = local_10 + 1;
    local_14 = local_14 + 1;
  }
  puVar4 = (undefined4 *)(iVar1 + 0x48);
  piVar5 = param_1 + 0x5a;
  for (iStack_18 = 0; iStack_18 < param_1[0x59]; iStack_18 = iStack_18 + 1) {
    iVar3 = param_1[*piVar5 + 0x53];
    *puVar4 = *(undefined4 *)(iVar1 + 0x28 + *(int *)(iVar3 + 0x14) * 4);
    puVar4[10] = *(undefined4 *)(iVar1 + 0x38 + *(int *)(iVar3 + 0x18) * 4);
    if (*(int *)(iVar3 + 0x30) == 0) {
      puVar4[0x1e] = 0;
      puVar4[0x14] = 0;
    }
    else {
      puVar4[0x14] = 1;
      puVar4[0x1e] = (uint)(1 < *(int *)(iVar3 + 0x24));
    }
    puVar4 = puVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(int *)(iVar1 + 0x24) = param_1[0x45];
  return;
}
