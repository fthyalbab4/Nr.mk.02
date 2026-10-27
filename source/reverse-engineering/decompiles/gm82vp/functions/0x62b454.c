// rea decompile_all
// name: FUN_0062b454
// address: 0x62b454
// body: available
// range: 0x62b454-0x62b4de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62b469 (push 0x62b4df followed by fs-segment stack chaining); handler 0x62b4df lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062b454(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar3;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_1c = &LAB_0062b4df;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_0062b00c(L"open cdaudio",&local_8);
  cVar2 = FUN_0062b1d4();
  uVar3 = cVar2 == '\0';
  if (!(bool)uVar3) {
    FUN_0062b00c(L"status cdaudio mode",&local_c);
    FUN_0040891c(local_c,L"paused");
    if (!(bool)uVar3) {
      FUN_0062b00c(L"status cdaudio mode",&local_10);
      FUN_0040891c(local_10,L"stopped");
    }
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0062b4e6;
  puStack_1c = (undefined1 *)0x62b4de;
  thunk_FUN_004072fc(&local_10,3,puVar1);
  return;
}
