// rea decompile_all
// name: FUN_005f03a0
// address: 0x5f03a0
// body: available
// range: 0x5f03a0-0x5f0436 inclusive
// range: 0x5f047e-0x5f049b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f03bf (push 0x5f049c followed by fs-segment stack chaining); handler 0x5f049c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f0413 (push 0x5f0437 followed by fs-segment stack chaining); handler 0x5f0437 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f03a0(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18 [3];
  undefined4 local_c;
  undefined4 local_8;

  puStack_28 = &stack0xfffffffc;
  local_18[0] = 0;
  local_8 = 0;
  puStack_2c = &LAB_005f049c;
  puStack_30 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_30;
  uStack_34 = 0x5f03d2;
  local_c = param_2;
  FUN_0040810c(&local_8,param_2,0);
  uStack_34 = 0;
  uStack_38 = 0x5f03dc;
  uStack_38 = FUN_00407670(local_8);
  puStack_3c = (undefined1 *)0x5f03e6;
  iVar2 = (**(code **)PTR_DAT_00781a08)();
  if (iVar2 == 0) {
    puStack_40 = &LAB_005f0437;
    uStack_44 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_44;
    puStack_3c = &stack0xfffffffc;
    uVar3 = FUN_005e25f0(local_c);
    if (0xffff < uVar3) {
      thunk_FUN_00404478();
    }
    *in_FS_OFFSET = uStack_44;
  }
  else {
    puStack_3c = (undefined1 *)(int)*(short *)(iVar2 + 8);
    if ((undefined1 *)0xffff < puStack_3c) {
      puStack_3c = (undefined1 *)0x5f03fa;
      puStack_3c = (undefined1 *)thunk_FUN_00404478();
    }
    puStack_40 = (undefined1 *)0x5f0404;
    (**(code **)PTR_DAT_00781c98)();
  }
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_005f04a3;
  uStack_34 = 0x5f0493;
  thunk_FUN_00406e5c(local_18,uStack_38,puVar1);
  uStack_34 = 0x5f049b;
  FUN_00406e5c(&local_8);
  return;
}
