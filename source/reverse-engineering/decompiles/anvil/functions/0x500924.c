// rea decompile_all
// name: FUN_00500924
// address: 0x500924
// body: available
// range: 0x500924-0x500a05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x50094c (push 0x500a06 followed by fs-segment stack chaining); handler 0x500a06 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00500924(undefined4 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  WCHAR WVar2;
  DWORD DVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_238;
  undefined1 *puStack_234;
  undefined1 *puStack_230;
  undefined4 local_224;
  undefined4 local_220;
  WCHAR local_21a [261];
  WCHAR local_10 [4];
  DWORD local_8;

  puStack_230 = &stack0xfffffffc;
  local_224 = 0;
  local_220 = 0;
  puStack_234 = &LAB_00500a06;
  uStack_238 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_238;
  local_8 = 0x105;
  WVar2 = (WCHAR)param_1;
  local_10[0] = WVar2;
  if ((ushort)(WVar2 + L'ﾟ') < 0x1a) {
    local_10[0] = WVar2 & 0xffdf;
  }
  local_10[1] = 0x3a;
  local_10[2] = 0;
  DVar3 = WNetGetConnectionW(local_10,local_21a,&local_8);
  if (DVar3 == 0) {
    FUN_004082d0(param_2,local_21a,local_8);
    if ((ushort)WVar2 < 0x61) {
      FUN_0041da90(*param_2,&local_220);
      FUN_00408194(param_2,local_220);
    }
    else {
      FUN_0041da7c(*param_2,&local_224);
      FUN_00408194(param_2,local_224);
    }
  }
  else {
    FUN_00500774(param_1,param_2);
  }
  puVar1 = puStack_230;
  *in_FS_OFFSET = uStack_238;
  puStack_230 = &LAB_00500a0d;
  puStack_234 = (undefined1 *)0x500a05;
  thunk_FUN_004072fc(&local_224,2,puVar1);
  return;
}
