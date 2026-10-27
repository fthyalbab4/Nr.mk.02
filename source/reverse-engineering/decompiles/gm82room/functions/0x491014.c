// rea decompile_all
// name: FUN_00491014
// address: 0x491014
// body: available
// range: 0x491014-0x49107d inclusive
// range: 0x491085-0x491089 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x491047 (push 0x49107e followed by fs-segment stack chaining); handler 0x49107e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00491014(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  if (((*(byte *)(param_1 + 0x1c) & 1) == 0) && (*(int *)(param_1 + 0x2e0) < 1)) {
    puStack_14 = (undefined1 *)0x49103c;
    FUN_00492630(param_1);
    puStack_18 = &LAB_0049107e;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puStack_14 = &stack0xfffffffc;
    iVar2 = FUN_00492678(param_1);
    iVar2 = iVar2 + -1;
    if (param_2 - iVar2 == 0 || param_2 < iVar2) {
      iVar3 = (param_2 - iVar2) + -1;
      do {
        FUN_00490eb0(param_1,iVar2);
        iVar2 = iVar2 + -1;
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0);
    }
    puVar1 = puStack_14;
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = (undefined1 *)0x491085;
    puStack_18 = (undefined1 *)0x49107d;
    FUN_00492638(param_1,uStack_1c,puVar1);
    return;
  }
  return;
}
