// rea decompile_all
// name: FUN_0042bee0
// address: 0x42bee0
// body: available
// range: 0x42bee0-0x42bf3a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042bee0(int *param_1,undefined4 *param_2,int param_3)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  byte bVar4;

  pcVar1 = *(char **)*param_2;
  bVar4 = 4;
  if (*pcVar1 != '\a') {
    bVar4 = pcVar1[(byte)pcVar1[1] + 2];
  }
  iVar3 = param_2[4];
  if (param_2[4] == -0x80000000) {
    iVar3 = param_3;
  }
  pcVar2 = (code *)param_2[2];
  if (*(byte *)((int)param_2 + 0xb) == 0xff) {
    param_1 = (int *)((int)param_1 + ((uint)pcVar2 & 0xffffff));
    *(char *)param_1 = (char)param_3;
    if ((1 < bVar4) && (*(short *)param_1 = (short)param_3, 3 < bVar4)) {
      *param_1 = param_3;
    }
  }
  else if (*(byte *)((int)param_2 + 0xb) < 0xfe) {
    (*pcVar2)(param_1,iVar3);
  }
  else {
    (**(code **)((int)(short)pcVar2 + *param_1))();
  }
  return;
}
