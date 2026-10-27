// rea decompile_all
// name: FUN_004ab42c
// address: 0x4ab42c
// body: available
// range: 0x4ab42c-0x4ab4ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004ab42c(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_1c;
  undefined4 local_18;

  local_1c = *param_2;
  local_18 = param_2[1];
  iVar3 = 0;
  if (*(char *)(param_1 + 0x1ec) != '\0') {
    puVar5 = &local_1c;
    uVar1 = FUN_004f76a8(param_1,param_2,param_3,puVar5);
    iVar2 = FUN_0040efb8(uVar1,0x130d,0,puVar5);
    if (-1 < iVar2) {
      iVar4 = 0;
      if (-1 < iVar2) {
        iVar2 = iVar2 + 1;
        do {
          iVar4 = FUN_004aab78(param_1,iVar4,1,1);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      if (iVar4 != 0) {
        iVar2 = FUN_004f3124(iVar4);
        if (0 < iVar2) {
          iVar3 = FUN_004f30e8(iVar4,0);
          if (param_1 != *(int *)(iVar3 + 0x90)) {
            iVar3 = 0;
          }
        }
      }
    }
  }
  return iVar3;
}
