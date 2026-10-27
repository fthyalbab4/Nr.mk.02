// rea decompile_all
// name: FUN_004d26c8
// address: 0x4d26c8
// body: available
// range: 0x4d26c8-0x4d2731 inclusive
// range: 0x4d2739-0x4d2741 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d26ea (push 0x4d2732 followed by fs-segment stack chaining); handler 0x4d2732 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004d26c8(undefined4 param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;

  puStack_18 = (undefined1 *)0x4d26dc;
  piVar2 = (int *)FUN_004d2744();
  puStack_1c = &LAB_004d2732;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  do {
    cVar1 = FUN_004d2610(piVar2);
    if (cVar1 == '\0') {
      iVar3 = 0;
      *in_FS_OFFSET = uStack_20;
      puStack_18 = (undefined1 *)0x4d2739;
      if (piVar2 != (int *)0x0) {
        puStack_1c = (undefined1 *)0x4d2731;
        iVar3 = (**(code **)(*piVar2 + -4))(piVar2,1);
      }
      return iVar3;
    }
    iVar3 = FUN_004d2604(piVar2);
  } while (param_2 != *(int *)(iVar3 + 0x18));
  FUN_0040670c();
  return iVar3;
}
