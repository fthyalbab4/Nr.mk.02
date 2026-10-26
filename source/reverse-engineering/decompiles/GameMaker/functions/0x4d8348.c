// rea decompile_all
// name: FUN_004d8348
// address: 0x4d8348
// body: available
// range: 0x4d8348-0x4d8422 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d836c (push 0x4d8423 followed by fs-segment stack chaining); handler 0x4d8423 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d8348(int param_1)

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
  puStack_1c = (undefined1 *)0x4d8361;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_20 = &LAB_004d8423;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  do {
    do {
      cVar2 = FUN_004d821c(&local_8,DAT_007789ac);
    } while (cVar2 != '\0');
    cVar2 = FUN_004d821c(&local_8,&DAT_004d8440);
  } while (((cVar2 != '\0') || (cVar2 = FUN_004d821c(&local_8,DAT_007789b0), cVar2 != '\0')) ||
          (cVar2 = FUN_004d821c(&local_8,DAT_007789b4), cVar2 != '\0'));
  if (local_8 != 0) {
    sVar4 = 8;
    do {
      FUN_004d801c(sVar4,&local_c);
      iVar3 = FUN_00415c5c(local_8,local_c);
      if (iVar3 == 0) break;
      sVar4 = sVar4 + 1;
    } while (sVar4 != 0x256);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004d842a;
  puStack_20 = (undefined1 *)0x4d8422;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
