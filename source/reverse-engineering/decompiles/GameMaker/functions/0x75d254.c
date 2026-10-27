// rea decompile_all
// name: FUN_0075d254
// address: 0x75d254
// body: available
// range: 0x75d254-0x75d2bd inclusive
// range: 0x75d2c5-0x75d2c9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x75d291 (push 0x75d2be followed by fs-segment stack chaining); handler 0x75d2be lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0075d254(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  if (*(int *)(param_1 + 0xc) != *param_2) {
    cVar1 = *PTR_DAT_007819dc;
    if (cVar1 != '\0') {
      puStack_14 = (undefined1 *)0x75d286;
      FUN_00744024(*(undefined4 *)(param_1 + 8));
    }
    puStack_18 = &LAB_0075d2be;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    iVar2 = *param_2;
    *param_2 = 0;
    puStack_14 = &stack0xfffffffc;
    FUN_00405a7c(iVar2);
    puVar3 = puStack_14;
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = (undefined1 *)0x75d2c5;
    if (cVar1 != '\0') {
      puStack_18 = (undefined1 *)0x75d2bd;
      FUN_00744030(*(undefined4 *)(param_1 + 8),uStack_1c,puVar3);
    }
    return;
  }
  return;
}
