// rea decompile_all
// name: FUN_005cf6b0
// address: 0x5cf6b0
// body: available
// range: 0x5cf6b0-0x5cf7cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5cf6e1 (push 0x5cf7ef followed by fs-segment stack chaining); handler 0x5cf7ef lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5cf743 (push 0x5cf7cd followed by fs-segment stack chaining); handler 0x5cf7cd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cf6b0(undefined1 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 *local_8;

  local_10 = 0;
  local_14 = 0;
  puStack_24 = (undefined1 *)0x5cf6ce;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_24 = (undefined1 *)0x5cf6d6;
  thunk_FUN_00407660(local_c);
  puStack_28 = &LAB_005cf7ef;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_30 = (undefined1 *)0x5cf6f0;
  puStack_24 = &stack0xfffffffc;
  uVar2 = FUN_00452480(&DAT_004512d4,1);
  puStack_30 = (undefined1 *)0x5cf6fe;
  FUN_00452568(uVar2,0x80000001);
  puStack_30 = (undefined1 *)0x5cf70a;
  uVar3 = FUN_0043f190(&PTR_FUN_00432364,1);
  puStack_30 = (undefined1 *)0x5cf717;
  FUN_0043e910(uVar3,CONCAT22(extraout_var,0x3a));
  puStack_30 = (undefined1 *)0x5cf721;
  FUN_0043e6d4(uVar3,local_8);
  puStack_30 = (undefined1 *)0x5cf72e;
  FUN_00407f0c(&local_8,L"\\Software\\Game Maker");
  puStack_30 = (undefined1 *)0x5cf735;
  piVar4 = (int *)FUN_0043d9e4(uVar3);
  puStack_34 = &LAB_005cf7cd;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  while( true ) {
    cVar1 = FUN_0043d140(piVar4);
    if (cVar1 == '\0') break;
    (**(code **)(*(int *)piVar4[2] + 0xc))((int *)piVar4[2],piVar4[1],&local_14);
    puStack_30 = (undefined1 *)0x5cf767;
    FUN_00407f0c(&local_10,local_14);
    puStack_30 = local_8;
    puStack_34 = &DAT_005cf840;
    uStack_38 = local_10;
    FUN_00408480(&local_8,3);
    cVar1 = FUN_004526b0(uVar2,local_8,1);
    if (cVar1 != '\0') {
      FUN_00452fc8(uVar2,local_10,local_c);
      FUN_00452538(uVar2);
    }
  }
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_005cf7d4;
  if (piVar4 != (int *)0x0) {
    puStack_34 = (undefined1 *)0x5cf7cc;
    (**(code **)(*piVar4 + -4))(piVar4,1);
  }
  return;
}
