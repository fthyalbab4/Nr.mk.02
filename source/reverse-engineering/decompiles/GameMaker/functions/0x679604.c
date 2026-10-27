// rea decompile_all
// name: FUN_00679604
// address: 0x679604
// body: available
// range: 0x679604-0x6796e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x67961a (push 0x6796e1 followed by fs-segment stack chaining); handler 0x6796e1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00679604(int *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_006796e1;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar2 = param_1[0x6d];
  puVar1 = &stack0xfffffffc;
  if (param_2 != iVar2) {
    puVar1 = &stack0xfffffffc;
    if (iVar2 != 0) {
      FUN_00672584(iVar2,0);
      puVar1 = puStack_14;
    }
    puStack_14 = puVar1;
    param_1[0x6d] = param_2;
    iVar2 = (**(code **)(*param_1 + 0x4c))();
    if (iVar2 != 0) {
      param_1[0x14] = param_1[0x14] | 0x8000;
    }
    puVar1 = puStack_14;
    if (param_2 != 0) {
      iVar2 = *(int *)(param_1[0x6d] + 0x24);
      if (iVar2 == 0x1fffffff) {
        FUN_00679318(param_1,1);
        FUN_004ee8ac(param_1,1);
      }
      else if (iVar2 == 0x20000000) {
        FUN_004ee8ac(param_1,1);
      }
      else if (iVar2 == 0x20000000) {
        FUN_004ee8ac(param_1,1);
      }
      else {
        FUN_004ee858(param_1,iVar2);
      }
      FUN_004ee5c0(param_1,*(undefined1 *)(param_2 + 0x30));
      FUN_00673fe0(param_1[0x6d],&local_8);
      FUN_004ee6d8(param_1,local_8);
      puVar1 = puStack_14;
    }
  }
  puStack_14 = puVar1;
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_006796e8;
  puStack_18 = (undefined1 *)0x6796e0;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar1);
  return;
}
