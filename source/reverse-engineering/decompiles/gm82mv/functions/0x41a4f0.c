// rea decompile_all
// name: FUN_0041a4f0
// address: 0x41a4f0
// body: available
// range: 0x41a4f0-0x41a5bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41a519 (push 0x41a5bd followed by fs-segment stack chaining); handler 0x41a5bd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041a4f0(undefined4 param_1,int *param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_FS_OFFSET;
  undefined4 *puStack_2c;
  int iStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  local_10 = 0;
  puStack_20 = (undefined1 *)0x41a50e;
  local_c = param_1;
  local_8 = param_3;
  thunk_FUN_00407ad0(param_3);
  puStack_24 = &LAB_0041a5bd;
  iStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_28;
  puStack_20 = &stack0xfffffffc;
  if (local_8 != 0) {
    puStack_20 = &stack0xfffffffc;
    FUN_0041a3bc(local_c,param_2);
    iVar2 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar2 = FUN_00407488(&local_8,local_8);
    }
    uVar4 = 0;
    if (iVar2 != 0) {
      uVar4 = *(undefined4 *)(iVar2 + -4);
    }
    puStack_2c = &local_10;
    FUN_00408984(local_c,*param_2,uVar4);
    iVar2 = FUN_00415a90(local_8,local_10);
    if (iVar2 == 0) {
      iVar2 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar2 = FUN_00407488(&local_8,local_8);
      }
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + -4);
      }
      *param_2 = *param_2 + iVar3;
    }
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = (int)puStack_2c;
  puStack_24 = &LAB_0041a5c4;
  iStack_28 = 0x41a5b4;
  thunk_FUN_004072d8(&local_10,puStack_2c,puVar1);
  iStack_28 = 0x41a5bc;
  thunk_FUN_004072d8(&local_8);
  return;
}
