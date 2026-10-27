// rea decompile_all
// name: FUN_0062b7f4
// address: 0x62b7f4
// body: available
// range: 0x62b7f4-0x62b8a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62b80d (push 0x62b8a4 followed by fs-segment stack chaining); handler 0x62b8a4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062b7f4(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_28 = &LAB_0062b8a4;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  FUN_0062b00c(L"open cdaudio",&local_8);
  if ((0 < param_1) && (iVar3 = FUN_0062b2b0(), param_1 <= iVar3)) {
    FUN_0062b00c(L"set cdaudio time format milliseconds wait",&local_c);
    cVar2 = FUN_0062b1d4();
    if (cVar2 != '\0') {
      FUN_0041636c(param_1,&local_18);
      FUN_00408678(&local_14,L"status cdaudio length track ",local_18);
      uVar4 = FUN_00408220(local_14);
      FUN_0062b00c(uVar4,&local_10);
      FUN_0062b03c(local_10);
    }
    FUN_0062b00c(L"set cdaudio time format tmsf wait",&local_1c);
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0062b8ab;
  puStack_28 = (undefined1 *)0x62b8a3;
  thunk_FUN_004072fc(&local_1c,6,puVar1);
  return;
}
