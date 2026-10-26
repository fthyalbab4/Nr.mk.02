// rea decompile_all
// name: FUN_004927d0
// address: 0x4927d0
// body: available
// range: 0x4927d0-0x492884 inclusive
// range: 0x49288c-0x492896 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x492847 (push 0x492885 followed by fs-segment stack chaining); handler 0x492885 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004927d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_FS_OFFSET;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_c;

  puStack_18 = (undefined1 *)param_4;
  puStack_1c = (undefined1 *)0x4927eb;
  local_c = FUN_00492688(param_1,param_2);
  if (param_2 != local_c) {
    if (param_2 < local_c) {
      local_c = local_c + -1;
    }
    puStack_18 = (undefined1 *)0x49280f;
    uVar2 = FUN_00438ec4(*(undefined4 *)(param_1 + 0x288),param_2);
    puStack_18 = (undefined1 *)0x492821;
    FUN_00438d5c(*(undefined4 *)(param_1 + 0x288),param_2);
    puStack_18 = (undefined1 *)0x492834;
    FUN_00438f7c(*(undefined4 *)(param_1 + 0x288),local_c,uVar2);
    puStack_18 = (undefined1 *)0x49283c;
    FUN_00492630(param_1);
    puStack_1c = &LAB_00492885;
    iStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_004bcb48(param_1,0x416,param_2,0);
    FUN_00491320(param_1,0x443,local_c);
    puVar1 = puStack_1c;
    *in_FS_OFFSET = local_c;
    puStack_1c = (undefined1 *)0x49288c;
    iStack_20 = 0x492884;
    iVar3 = FUN_00492638(param_1,local_c,puVar1);
    return iVar3;
  }
  return local_c;
}
