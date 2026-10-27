// rea decompile_all
// name: FUN_0050a9d4
// address: 0x50a9d4
// body: available
// range: 0x50a9d4-0x50aa76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050a9d4(int param_1,char param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  cVar1 = *(char *)(param_1 + 0x58);
  if ((cVar1 != param_2) && (*(char *)(param_1 + 0x58) = param_2, param_2 != '\x01')) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x34) + 8);
    if (-1 < iVar4 + -1) {
      iVar3 = 0;
      do {
        piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x34) + 4) + iVar3 * 4);
        if (param_2 == '\0') {
          if ((piVar2 != (int *)0x0) && (cVar1 == '\x02')) {
            FUN_0050aef0(piVar2,(char)piVar2[0x25]);
          }
          (**(code **)(*piVar2 + 0x48))();
        }
        else if ((param_2 == '\x02') && (piVar2 != (int *)0x0)) {
          *(undefined1 *)(piVar2 + 0x25) = *(undefined1 *)((int)piVar2 + 0x6a);
          FUN_0050aef0(piVar2,1);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (*(short *)(param_1 + 0x62) != 0) {
      (**(code **)(param_1 + 0x60))(*(undefined4 *)(param_1 + 100),param_1);
    }
  }
  return;
}
