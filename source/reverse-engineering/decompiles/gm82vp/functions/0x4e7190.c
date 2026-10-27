// rea decompile_all
// name: FUN_004e7190
// address: 0x4e7190
// body: available
// range: 0x4e7190-0x4e7213 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e7190(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_8;

  if ((*(char *)(param_1 + 0x1ea) != '\0') && ((*(byte *)(param_1 + 0x1c) & 0x10) == 0)) {
    iVar2 = FUN_004c00dc(param_1);
    if (-1 < iVar2 + -1) {
      local_8 = 0;
      do {
        piVar3 = (int *)FUN_004c00a0(param_1,local_8);
        if (((*(byte *)((int)piVar3 + 0x51) & 0x80) != 0) && (*(char *)((int)piVar3 + 0x59) != '\0')
           ) {
          (**(code **)(*piVar3 + 0x8c))();
        }
        cVar1 = FUN_004061f8(piVar3,&PTR_LAB_004b3174);
        if (cVar1 != '\0') {
          iVar4 = FUN_004c00dc(piVar3);
          if (0 < iVar4) {
            FUN_004e7190(piVar3);
          }
        }
        local_8 = local_8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}
