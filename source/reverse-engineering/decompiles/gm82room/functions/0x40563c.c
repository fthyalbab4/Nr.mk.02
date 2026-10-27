// rea decompile_all
// name: FUN_0040563c
// address: 0x40563c
// body: available
// range: 0x40563c-0x40569a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040563c(uint param_1,int param_2,char *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char acStack_25 [21];
  int local_10;

  local_10 = param_2;
  uVar2 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
  iVar4 = 0;
  do {
    iVar3 = iVar4;
    uVar1 = (ulonglong)uVar2;
    uVar2 = uVar2 / 10;
    acStack_25[iVar3 + 1] = (char)(uVar1 % 10) + '0';
    iVar4 = iVar3 + 1;
  } while (uVar2 != 0);
  if ((int)param_1 < 0) {
    acStack_25[iVar3 + 2] = '-';
    iVar4 = iVar3 + 2;
  }
  *param_3 = (char)iVar4;
  pcVar5 = param_3 + 1;
  if (0xff < local_10) {
    local_10 = 0xff;
  }
  iVar3 = local_10 - iVar4;
  if (iVar3 != 0 && iVar4 <= local_10) {
    *param_3 = *param_3 + (char)iVar3;
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pcVar5 = ' ';
      pcVar5 = pcVar5 + 1;
    }
  }
  do {
    *pcVar5 = acStack_25[iVar4];
    pcVar5 = pcVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}
