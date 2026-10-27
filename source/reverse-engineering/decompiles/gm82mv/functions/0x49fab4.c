// rea decompile_all
// name: FUN_0049fab4
// address: 0x49fab4
// body: available
// range: 0x49fab4-0x49fb1d inclusive
// range: 0x49fb25-0x49fb2d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x49fad6 (push 0x49fb1e followed by fs-segment stack chaining); handler 0x49fb1e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0049fab4(undefined4 param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;

  puStack_18 = (undefined1 *)0x49fac8;
  piVar2 = (int *)FUN_0049fb30();
  puStack_1c = &LAB_0049fb1e;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  do {
    cVar1 = FUN_0049f9fc(piVar2);
    if (cVar1 == '\0') {
      iVar3 = 0;
      *in_FS_OFFSET = uStack_20;
      puStack_18 = (undefined1 *)0x49fb25;
      if (piVar2 != (int *)0x0) {
        puStack_1c = (undefined1 *)0x49fb1d;
        iVar3 = (**(code **)(*piVar2 + -4))(piVar2,1);
      }
      return iVar3;
    }
    iVar3 = FUN_0049f9f0(piVar2);
  } while (param_2 != *(int *)(iVar3 + 0x18));
  FUN_00406ba8();
  return iVar3;
}
