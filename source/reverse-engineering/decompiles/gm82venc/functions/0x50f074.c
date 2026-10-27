// rea decompile_all
// name: FUN_0050f074
// address: 0x50f074
// body: available
// range: 0x50f074-0x50f0e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050f074(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;

  piVar1 = *(int **)(param_1 + 0x270);
  FUN_0045c464(piVar1[0x12],1);
  FUN_0045bf10(piVar1[0x11],0xff000006);
  FUN_0045c064(piVar1[0x11],1);
  (**(code **)(*piVar1 + 0x74))
            (piVar1,0,0,*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x48));
  iVar3 = 0;
  uVar2 = 0;
  do {
    if (*(char *)(param_1 + 0x278 + (uVar2 & 0xff) * 0x10) != '\0') {
      FUN_0050ed7c(param_1,uVar2,iVar3);
      iVar3 = iVar3 + *(int *)(param_1 + 0x324) + -1;
    }
    uVar2 = uVar2 + 1;
  } while ((char)uVar2 != '\t');
  return;
}
