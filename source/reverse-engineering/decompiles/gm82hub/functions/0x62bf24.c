// rea decompile_all
// name: FUN_0062bf24
// address: 0x62bf24
// body: available
// range: 0x62bf24-0x62bfde inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62bf3f (push 0x62bfdf followed by fs-segment stack chaining); handler 0x62bfdf lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062bf24(undefined4 param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_2c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  puStack_30 = &LAB_0062bfdf;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  cVar2 = FUN_0062b1d4();
  if (cVar2 != '\0') {
    FUN_0062b00c(L"set cdaudio time format milliseconds wait",&local_8);
    cVar2 = FUN_0062b37c();
    if (cVar2 == '\0') {
      FUN_0041636c(param_1,&local_20);
      FUN_00408678(&local_1c,L"seek cdaudio to ",local_20);
      uVar3 = FUN_00408220(local_1c);
      FUN_0062b00c(uVar3,&local_18);
    }
    else {
      FUN_0041636c(param_1,&local_14);
      FUN_00408678(&local_10,L"play cdaudio from ",local_14);
      uVar3 = FUN_00408220(local_10);
      FUN_0062b00c(uVar3,&local_c);
    }
    FUN_0062b00c(L"set cdaudio time format tmsf",&local_24);
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0062bfe6;
  puStack_30 = (undefined1 *)0x62bfde;
  thunk_FUN_004072fc(&local_24,8,puVar1);
  return;
}
