// rea decompile_all
// name: FUN_004c81fc
// address: 0x4c81fc
// body: available
// range: 0x4c81fc-0x4c8290 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_004c81fc(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 local_20 [16];

  iVar2 = FUN_004c00dc(*(undefined4 *)(param_1 + 0x14));
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    do {
      piVar3 = (int *)FUN_004c00a0(*(undefined4 *)(param_1 + 0x14),iVar2);
      if ((*(char *)((int)piVar3 + 0x59) != '\0') &&
         ((cVar1 = FUN_004061f8(piVar3,&PTR_LAB_004b3174), cVar1 == '\0' ||
          (*(char *)((int)piVar3 + 0x1ea) != '\0')))) {
        local_30 = *param_2 - piVar3[0x10];
        local_2c = param_2[1] - piVar3[0x11];
        local_28 = local_30;
        local_24 = local_2c;
        (**(code **)(*piVar3 + 0x54))(piVar3,local_20);
        cVar1 = FUN_0040c39c(local_20,&local_30);
        if (cVar1 != '\0') {
          return piVar3;
        }
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return (int *)0x0;
}
