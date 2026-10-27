// rea decompile_all
// name: FUN_0058e980
// address: 0x58e980
// body: available
// range: 0x58e980-0x58ea19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058e980(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;

  cVar2 = FUN_0058d584(param_1,param_2,param_3,param_3);
  if (cVar2 != '\0') {
    uVar3 = FUN_0061ed20();
    uVar3 = uVar3 & 0xff;
    FUN_0061eb80(1);
    iVar1 = DAT_00686b30 + param_1 * 0x58;
    if (*(char *)(iVar1 + 0x34) == '\0') {
      iVar5 = *(int *)(iVar1 + 8) + -1;
      if (-1 < iVar5) {
        do {
          FUN_0058e720(*(int *)(iVar1 + 4) + iVar5 * 0x68);
          iVar5 = iVar5 + -1;
        } while (iVar5 != -1);
      }
    }
    else {
      iVar5 = *(int *)(iVar1 + 8);
      if (-1 < iVar5 + -1) {
        iVar4 = 0;
        do {
          FUN_0058e720(*(int *)(iVar1 + 4) + iVar4 * 0x68);
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    FUN_0061eb80(uVar3 & 0xff);
  }
  return;
}
