// rea decompile_all
// name: FUN_0062b56c
// address: 0x62b56c
// body: available
// range: 0x62b56c-0x62b5ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62b581 (push 0x62b5f0 followed by fs-segment stack chaining); handler 0x62b5f0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062b56c(void)

{
  undefined1 *puVar1;
  char cVar2;
  int *in_FS_OFFSET;
  undefined4 *puStack_28;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_20 = &LAB_0062b5f0;
  iStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_24;
  FUN_0062b00c(L"open cdaudio",&local_8);
  FUN_0062b00c(L"set cdaudio time format tmsf wait",&local_c);
  puStack_28 = (undefined4 *)0x62b5a3;
  cVar2 = FUN_0062b1d4();
  if (cVar2 != '\0') {
    puStack_28 = &local_10;
    FUN_0062b00c(L"status cdaudio position",&local_14);
    FUN_00408984(local_14,0,2);
    FUN_0062b03c(local_10);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = (int)puStack_28;
  puStack_20 = &LAB_0062b5f7;
  iStack_24 = 0x62b5ef;
  thunk_FUN_004072fc(&local_14,4,puVar1);
  return;
}
