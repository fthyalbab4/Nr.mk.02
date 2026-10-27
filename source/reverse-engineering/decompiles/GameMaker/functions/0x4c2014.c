// rea decompile_all
// name: FUN_004c2014
// address: 0x4c2014
// body: available
// range: 0x4c2014-0x4c2084 inclusive
// range: 0x4c208c-0x4c2094 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c2038 (push 0x4c2085 followed by fs-segment stack chaining); handler 0x4c2085 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004c2014(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  puStack_14 = (undefined1 *)0x4c202a;
  piVar2 = (int *)FUN_004c1c2c(*(undefined4 *)(in_stack_00000004 + -4));
  puStack_18 = &LAB_004c2085;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  do {
    cVar1 = FUN_004c0884(piVar2);
    if (cVar1 == '\0') {
      uVar4 = 0;
      *in_FS_OFFSET = uStack_1c;
      puStack_14 = (undefined1 *)0x4c208c;
      if (piVar2 != (int *)0x0) {
        puStack_18 = (undefined1 *)0x4c2084;
        uVar4 = (**(code **)(*piVar2 + -4))(piVar2,1);
      }
      return uVar4;
    }
    iVar3 = FUN_004c0878(piVar2);
  } while (*(char *)(iVar3 + 0x1c6) != '\x02');
  FUN_0040670c();
  return 1;
}
