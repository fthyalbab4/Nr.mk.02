// rea decompile_all
// name: FUN_004281d0
// address: 0x4281d0
// body: available
// range: 0x4281d0-0x428287 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4281ea (push 0x428288 followed by fs-segment stack chaining); handler 0x428288 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004281d0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_24 = &LAB_00428288;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  uVar1 = FUN_00407a78(param_2);
  uVar4 = 0;
  uVar3 = 0x400;
  uVar2 = (**(code **)PTR_DAT_007824cc)();
  FUN_00424618(uVar2,CONCAT22(extraout_var_00,0xb),CONCAT22(extraout_var,8),param_1,uVar3,uVar4,
               uVar1);
  if (DAT_00773e5c != '\0') {
    if (DAT_00773e5c == '\x01') {
      FUN_00408130(&local_c,*param_2);
      FUN_00415758(local_c,&local_8);
      FUN_00408144(param_2,local_8);
    }
    else if (DAT_00773e5c == '\x02') {
      FUN_00408130(&local_14,*param_2);
      FUN_00415690(local_14,&local_10);
      FUN_00408144(param_2,local_10);
    }
    else {
      FUN_00424220();
    }
  }
  *in_FS_OFFSET = param_1;
  thunk_FUN_00406e80(&local_14,4,uVar4,&LAB_0042828f);
  return;
}
