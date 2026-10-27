// rea decompile_all
// name: FUN_0062461c
// address: 0x62461c
// body: available
// range: 0x62461c-0x624771 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x624647 (push 0x624772 followed by fs-segment stack chaining); handler 0x624772 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062461c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [8];
  undefined1 local_28;
  undefined2 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_48 = &stack0xfffffffc;
  local_38 = 0;
  local_34 = 0;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_4c = &LAB_00624772;
  puStack_50 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_50;
  FUN_00415690(param_1,&local_34);
  uVar4 = local_34;
  uVar2 = FUN_004213b8();
  FUN_005e2694(uVar4,uVar2,&local_8);
  FUN_00415690(param_2,&local_38);
  uVar4 = local_38;
  uVar2 = FUN_004213b8();
  FUN_005e2694(uVar4,uVar2,&local_c);
  FUN_00404f08(local_30,0x20,0);
  FUN_00417814(local_30,PTR_s_NTLMSSP_0077f090,8);
  local_28 = 1;
  local_24 = DAT_0077f074;
  FUN_00409a18(local_8);
  local_20 = FUN_005e0348();
  local_1e = local_20;
  iVar3 = FUN_00409a18(local_c);
  if (SCARRY4(iVar3,0x20)) {
    FUN_00405944(iVar3 + 0x20);
  }
  local_1c = FUN_005e034c();
  FUN_00409a18(local_c);
  local_18 = FUN_005e0348();
  local_14 = DAT_0077f078;
  local_16 = local_18;
  FUN_005e2bf0(local_30,0x20,&local_10);
  FUN_005e3764(&local_10,local_c,0,0xffffffff);
  FUN_005e3764(&local_10,local_8,0);
  FUN_006137e4(&PTR_FUN_00614a74,local_10,param_3);
  puVar1 = puStack_50;
  *in_FS_OFFSET = 0xffffffff;
  puStack_50 = &LAB_00624779;
  thunk_FUN_00406e80(&local_38,2,puVar1);
  FUN_00408e44(&local_10,&DAT_004108f8,3);
  return;
}
