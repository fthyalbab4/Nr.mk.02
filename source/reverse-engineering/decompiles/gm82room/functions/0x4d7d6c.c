// rea decompile_all
// name: FUN_004d7d6c
// address: 0x4d7d6c
// body: available
// range: 0x4d7d6c-0x4d7de5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d7d6c(int *param_1,char param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  if (param_2 != *(char *)((int)param_1 + 0x6a)) {
    if (param_1[0x17] != 0) {
      cVar1 = *(char *)(param_1[0x17] + 0x58);
      if (cVar1 == '\x01') {
        *(char *)((int)param_1 + 0x6a) = param_2;
        return;
      }
      if (cVar1 == '\x02') {
        param_2 = '\x01';
      }
    }
    iVar3 = *(int *)(param_1[0x14] + 8);
    if (-1 < iVar3 + -1) {
      iVar4 = 0;
      do {
        piVar2 = (int *)FUN_0040621c(*(undefined4 *)(*(int *)(param_1[0x14] + 4) + iVar4 * 4),
                                     &PTR_LAB_004d7194);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x54))(piVar2,param_2);
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(char *)((int)param_1 + 0x6a) = param_2;
    (**(code **)(*param_1 + 0x34))();
  }
  return;
}
