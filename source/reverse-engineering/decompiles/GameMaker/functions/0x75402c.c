// rea decompile_all
// name: FUN_0075402c
// address: 0x75402c
// body: available
// range: 0x75402c-0x7540f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0075402c(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_24;
  int local_20;
  undefined1 local_1c [8];
  uint local_14;

  if ((*(char *)(param_1 + 0x20) != '\0') && (local_20 = FUN_00753f44(param_1), -1 < local_20 + -1))
  {
    local_24 = 0;
    do {
      iVar1 = FUN_00753f30(param_1,local_24);
      iVar4 = *(int *)(iVar1 + 0xc);
      if (-1 < iVar4 + -1) {
        iVar3 = 0;
        do {
          if (((*(short *)(*(int *)(iVar1 + 8) + 2 + iVar3 * 0xc) == 1) &&
              (*(uint *)(*(int *)(iVar1 + 8) + 4 + iVar3 * 0xc) <= param_2)) &&
             (FUN_007534f8(iVar1,iVar3,local_1c),
             param_2 - *(int *)(*(int *)(iVar1 + 8) + 4 + iVar3 * 0xc) <= local_14)) {
            uVar2 = FUN_00753f30(param_1,local_24);
            *param_3 = uVar2;
            return CONCAT31((int3)((uint)iVar3 >> 8),1);
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      local_24 = local_24 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  *param_3 = 0;
  return 0;
}
