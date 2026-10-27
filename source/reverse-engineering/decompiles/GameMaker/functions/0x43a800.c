// rea decompile_all
// name: FUN_0043a800
// address: 0x43a800
// body: available
// range: 0x43a800-0x43a869 inclusive
// range: 0x43a871-0x43a879 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43a825 (push 0x43a86a followed by fs-segment stack chaining); handler 0x43a86a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0043a800(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;

  puStack_18 = (undefined1 *)0x43a818;
  iVar2 = FUN_0043bb30(DAT_00787f6c);
  puStack_1c = &LAB_0043a86a;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar5 = *(int *)(iVar2 + 8) + -1;
  puStack_18 = &stack0xfffffffc;
  puVar1 = &stack0xfffffffc;
  if (-1 < iVar5) {
    do {
      iVar3 = FUN_0043b048(iVar2,iVar5);
      if (param_1 == *(int *)(iVar3 + 4)) {
        uVar4 = *(undefined4 *)(iVar3 + 8);
        FUN_0040670c();
        return uVar4;
      }
      iVar5 = iVar5 + -1;
      puVar1 = puStack_18;
    } while (iVar5 != -1);
  }
  puStack_18 = puVar1;
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = (undefined1 *)0x43a871;
  puStack_1c = (undefined1 *)0x43a869;
  uVar4 = FUN_0043bba0(DAT_00787f6c,uStack_20,puVar1);
  return uVar4;
}
