// rea decompile_all
// name: FUN_004e7aa0
// address: 0x4e7aa0
// body: available
// range: 0x4e7aa0-0x4e7bd8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e7aa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;

  local_8 = param_1;
  iVar3 = FUN_004c00dc(param_1);
  if (-1 < iVar3 + -1) {
    local_c = 0;
    do {
      piVar4 = (int *)FUN_004c00a0(local_8,local_c);
      if (*(char *)(*(int *)(*(int *)(param_4 + -4) + 0x374) + 0x28) == '\0') {
        (**(code **)(*piVar4 + 0x54))(piVar4,&local_1c);
        FUN_004be628(piVar4,&local_1c,*(undefined4 *)(param_4 + -4),&local_24);
        local_1c = local_24;
        local_18 = local_20;
        FUN_004be628(piVar4,&local_14,*(undefined4 *)(param_4 + -4),&local_24);
        local_14 = local_24;
        local_10 = local_20;
      }
      if (*(char *)(*(int *)(*(int *)(param_4 + -4) + 0x374) + 0x28) == '\0') {
        if ((((local_1c < **(int **)(param_4 + -8)) ||
             (*(int *)(*(int *)(param_4 + -8) + 8) < local_14)) ||
            (local_18 < *(int *)(*(int *)(param_4 + -8) + 4))) ||
           (*(int *)(*(int *)(param_4 + -8) + 0xc) < local_10)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if ((*(byte *)((int)piVar4 + 0x55) & 0x80) == 0) {
          piVar4[0x15] = piVar4[0x15] | 0x8000;
        }
      }
      else if ((*(byte *)((int)piVar4 + 0x55) & 0x80) != 0) {
        piVar4[0x15] = piVar4[0x15] & 0xffff7fff;
      }
      cVar2 = FUN_004061f8(piVar4,&PTR_LAB_004b3174);
      if (cVar2 != '\0') {
        FUN_004e7aa0(piVar4);
      }
      local_c = local_c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}
