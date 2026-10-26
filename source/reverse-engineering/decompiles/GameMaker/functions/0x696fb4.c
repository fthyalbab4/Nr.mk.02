// rea decompile_all
// name: FUN_00696fb4
// address: 0x696fb4
// body: available
// range: 0x696fb4-0x69705d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x696fd5 (push 0x69705e followed by fs-segment stack chaining); handler 0x69705e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00696fb4(undefined4 param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_10;
  undefined4 local_8;

  puStack_20 = (undefined1 *)0x696fca;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_24 = &LAB_0069705e;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  *param_2 = -1;
  puStack_20 = &stack0xfffffffc;
  if (-1 < DAT_0077f3d4 + -1) {
    bVar4 = DAT_0077f3d4 == 0;
    local_10 = 0;
    puVar2 = &DAT_0078c180;
    iVar3 = DAT_0077f3d4;
    puStack_20 = &stack0xfffffffc;
    do {
      FUN_00408640(*puVar2,local_8);
      if (bVar4) {
        *param_2 = local_10;
        goto LAB_00697048;
      }
      local_10 = local_10 + 1;
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
      bVar4 = iVar3 == 0;
    } while (!bVar4);
  }
  iVar3 = FUN_00655c2c(local_8);
  *param_2 = iVar3 + 100000;
  if (*param_2 < 100000) {
    iVar3 = FUN_00713534(local_8);
    *param_2 = iVar3 + 500000;
  }
LAB_00697048:
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00697065;
  puStack_24 = (undefined1 *)0x69705d;
  thunk_FUN_00406e5c(&local_8,uStack_28,puVar1);
  return;
}
