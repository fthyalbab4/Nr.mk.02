// rea decompile_all
// name: FUN_00627b3c
// address: 0x627b3c
// body: available
// range: 0x627b3c-0x627ba7 inclusive
// range: 0x627bbf-0x627bd9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x627b5a (push 0x627bda followed by fs-segment stack chaining); handler 0x627bda lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x627b91 (push 0x627ba8 followed by fs-segment stack chaining); handler 0x627ba8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00627b3c(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;

  puStack_18 = (undefined1 *)0x627b4d;
  uVar2 = FUN_0043bb30(DAT_0077f0ac);
  puStack_1c = &LAB_00627bda;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = (undefined1 *)0x627b66;
  puStack_18 = &stack0xfffffffc;
  iVar3 = (**(code **)PTR_DAT_00781890)();
  if (SBORROW4(iVar3,1)) {
    puStack_24 = (undefined1 *)0x627b72;
    FUN_00405944();
  }
  if (-1 < iVar3 + -1) {
    do {
      puStack_24 = (undefined1 *)0x627b83;
      uVar4 = FUN_0044ba7c(&PTR_LAB_005dfe54,1);
      puStack_28 = &LAB_00627ba8;
      uStack_2c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_2c;
      puStack_24 = &stack0xfffffffc;
      FUN_0043ae88(uVar2,uVar4);
      *in_FS_OFFSET = uStack_2c;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00627be1;
  puStack_1c = (undefined1 *)0x627bd9;
  FUN_0043bba0(DAT_0077f0ac,uStack_20,puVar1);
  return;
}
