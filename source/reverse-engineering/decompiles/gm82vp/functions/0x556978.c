// rea decompile_all
// name: FUN_00556978
// address: 0x556978
// body: available
// range: 0x556978-0x556a14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00556978(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;

  if ((*(char *)(param_1 + 0x20) != '\0') && (local_1c = FUN_00556880(param_1), -1 < local_1c + -1))
  {
    local_20 = 0;
    do {
      iVar1 = FUN_0055686c(param_1,local_20);
      iVar3 = *(int *)(iVar1 + 0xc);
      if (-1 < iVar3 + -1) {
        iVar4 = 0;
        do {
          FUN_00555f24(iVar1,iVar4,&local_18);
          if ((local_18 <= param_2) && (param_2 < local_14)) {
            uVar2 = FUN_0055686c(param_1,local_20);
            *param_3 = uVar2;
            return CONCAT31((int3)((uint)iVar3 >> 8),1);
          }
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_20 = local_20 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  *param_3 = 0;
  return 0;
}
