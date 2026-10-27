// rea decompile_all
// name: FUN_00585238
// address: 0x585238
// body: available
// range: 0x585238-0x58532e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x585279 (push 0x58532f followed by fs-segment stack chaining); handler 0x58532f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00585238(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  wchar_t *pwStackY_50;
  undefined **ppuVar2;
  wchar_t *pwVar3;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [28];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_34 = 0;
  local_30 = 0;
  local_10 = 0;
  puStack_3c = (undefined1 *)0x585258;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_3c = (undefined1 *)0x585260;
  thunk_FUN_00407ad0(local_c);
  puStack_3c = (undefined1 *)0x58526e;
  FUN_00408ff8(local_2c,&DAT_00615f70);
  puStack_40 = &LAB_0058532f;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_3c = &stack0xfffffffc;
  FUN_00415c04(local_8,&local_10);
  cVar1 = FUN_00584cec(local_10);
  if (cVar1 == '\0') {
    ppuVar2 = &PTR_DAT_0058534c;
    pwStackY_50 = L"  is not valid.";
    FUN_0040875c(&local_30,3);
    FUN_004a17e4(local_30);
  }
  else {
    cVar1 = FUN_00584f94(local_c,local_2c);
    if (cVar1 == '\0') {
      pwVar3 = L"Value for constant ";
      pwStackY_50 = L"  is not valid.";
      FUN_0040875c(&local_34,3);
      FUN_004a17e4(local_34);
      ppuVar2 = (undefined **)pwVar3;
    }
    else {
      ppuVar2 = (undefined **)0x5852f7;
      FUN_00584b70(local_10,local_2c);
    }
  }
  *in_FS_OFFSET = pwStackY_50;
  thunk_FUN_004072fc(&local_34,2,ppuVar2,&LAB_00585336);
  FUN_004090d0(local_2c,&DAT_00615f70);
  thunk_FUN_004072fc(&local_10,3);
  return;
}
