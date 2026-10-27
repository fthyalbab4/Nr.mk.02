// rea decompile_all
// name: FUN_00507dd8
// address: 0x507dd8
// body: available
// range: 0x507dd8-0x507e52 inclusive
// range: 0x507e5a-0x507e67 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x507e1a (push 0x507e53 followed by fs-segment stack chaining); handler 0x507e53 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00507dd8(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  if (param_2 == (int *)0x0) {
    puStack_14 = (undefined1 *)0x507ded;
    FUN_00506c30(param_1);
  }
  else {
    puStack_14 = (undefined1 *)0x507dfc;
    cVar2 = FUN_00405c98(param_2,&PTR_FUN_005055b4);
    if (cVar2 != '\0') {
      puStack_14 = (undefined1 *)0x507e0c;
      uVar3 = FUN_00405a4c(&LAB_00433630,1);
      puStack_18 = &LAB_00507e53;
      uStack_1c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_1c;
      puStack_14 = &stack0xfffffffc;
      (**(code **)(*param_2 + 0x40))(param_2,uVar3);
      FUN_0043f254(uVar3);
      (**(code **)(*param_1 + 0x3c))(param_1,uVar3);
      puVar1 = puStack_14;
      *in_FS_OFFSET = uStack_1c;
      puStack_14 = (undefined1 *)0x507e63;
      puStack_18 = (undefined1 *)0x507e52;
      FUN_00405a7c(uVar3,uStack_1c,puVar1);
      return;
    }
    puStack_14 = (undefined1 *)0x507e63;
    FUN_0043c550(param_1,param_2);
  }
  return;
}
