// rea decompile_all
// name: FUN_004a53f8
// address: 0x4a53f8
// body: available
// range: 0x4a53f8-0x4a54d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4a541c (push 0x4a54d3 followed by fs-segment stack chaining); handler 0x4a54d3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a53f8(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  short sVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int local_8;

  local_c = 0;
  puStack_1c = (undefined1 *)0x4a5411;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_20 = &LAB_004a54d3;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  do {
    do {
      cVar2 = FUN_004a52cc(&local_8,DAT_00681744);
    } while (cVar2 != '\0');
    cVar2 = FUN_004a52cc(&local_8,&DAT_004a54f0);
  } while (((cVar2 != '\0') || (cVar2 = FUN_004a52cc(&local_8,DAT_00681748), cVar2 != '\0')) ||
          (cVar2 = FUN_004a52cc(&local_8,DAT_0068174c), cVar2 != '\0'));
  if (local_8 != 0) {
    sVar4 = 8;
    do {
      FUN_004a50cc(sVar4,&local_c);
      iVar3 = FUN_00415a90(local_8,local_c);
      if (iVar3 == 0) break;
      sVar4 = sVar4 + 1;
    } while (sVar4 != 0x256);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004a54da;
  puStack_20 = (undefined1 *)0x4a54d2;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}
