// rea decompile_all
// name: FUN_005cea78
// address: 0x5cea78
// body: available
// range: 0x5cea78-0x5ceb63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ceaaf (push 0x5ceb64 followed by fs-segment stack chaining); handler 0x5ceb64 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cea78(void)

{
  undefined1 *puVar1;
  int iVar2;
  int *in_FS_OFFSET;
  undefined4 local_2a94;
  undefined1 local_2a90 [404];
  undefined1 auStack_28fc [3656];
  undefined4 uStack_1ab4;
  undefined1 *puStack_1ab0;
  undefined4 *puStack_1aac;
  undefined1 *puStack_1aa8;
  undefined1 *puStack_1aa4;
  undefined1 *puStack_1aa0;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;

  puStack_1aa0 = &stack0xfffffffc;
  iVar2 = 2;
  do {
    local_c = iVar2;
    iVar2 = local_c + -1;
  } while (local_c + -1 != 0);
  local_2a94 = 0;
  local_8 = 0;
  puStack_1aa4 = &LAB_005ceb64;
  puStack_1aa8 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_1aa8;
  local_10 = 0x2a80;
  puStack_1aac = &local_10;
  uStack_1ab4 = 0x5ceac9;
  puStack_1ab0 = local_2a90;
  iVar2 = GetAdaptersInfo();
  if (iVar2 == 0) {
    if (local_2a90 == (undefined1 *)0x0) {
      uStack_1ab4 = 0x5ceae7;
      FUN_00407eb8(local_c,0);
    }
    else {
      uStack_1ab4 = 0x5ceaf9;
      FUN_00407f0c(&local_8,0);
      iVar2 = 0;
      do {
        if (iVar2 != 0) {
          uStack_1ab4 = 0x5ceb0c;
          FUN_004082dc(&local_8,&DAT_005ceb80);
        }
        uStack_1ab4 = 0x5ceb24;
        FUN_004168d8(auStack_28fc[iVar2],2,&local_2a94);
        uStack_1ab4 = 0x5ceb32;
        FUN_004082dc(&local_8,local_2a94);
        iVar2 = iVar2 + 1;
      } while (iVar2 != 6);
      uStack_1ab4 = 0x5ceb43;
      FUN_00407eb8(local_c,local_8);
    }
  }
  else {
    uStack_1ab4 = 0x5cead7;
    FUN_00407eb8(local_c,0);
  }
  puVar1 = puStack_1aa8;
  *in_FS_OFFSET = (int)puStack_1ab0;
  puStack_1aa8 = &LAB_005ceb6b;
  puStack_1aac = (undefined4 *)0x5ceb5b;
  thunk_FUN_00406e5c(&local_2a94,puStack_1ab0,puVar1);
  puStack_1aac = (undefined4 *)0x5ceb63;
  thunk_FUN_00406e5c(&local_8);
  return;
}
