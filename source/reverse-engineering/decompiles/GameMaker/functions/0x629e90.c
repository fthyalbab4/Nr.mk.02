// rea decompile_all
// name: FUN_00629e90
// address: 0x629e90
// body: available
// range: 0x629e90-0x629f54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x629eb0 (push 0x629f55 followed by fs-segment stack chaining); handler 0x629f55 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00629e90(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int *in_FS_OFFSET;
  undefined4 uVar4;
  undefined4 *puStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  uint local_58;
  undefined1 local_54;
  undefined4 local_50;
  int local_4c;
  byte abStack_48 [64];
  undefined4 local_8;

  puStack_68 = &stack0xfffffffc;
  local_50 = 0;
  local_8 = 0;
  puStack_6c = &LAB_00629f55;
  puStack_70 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_70;
  FUN_00629e68(param_1,&local_4c);
  uVar4 = 0x629ec7;
  FUN_00407f0c(&local_8,0);
  if (local_4c == 0) {
    uVar4 = 0x629ed4;
    FUN_00405944();
  }
  if (local_4c + -1 < 0) {
    uVar4 = 0x629edd;
    thunk_FUN_00404478();
  }
  if (-1 < local_4c + -1) {
    uVar2 = 0;
    iVar3 = local_4c;
    do {
      if (uVar2 != 0) {
        uVar4 = 0x629ef5;
        FUN_004082dc(&local_8,&DAT_00629f70);
      }
      puStack_70 = &local_50;
      if (0x3f < uVar2) {
        thunk_FUN_00404478();
      }
      local_58 = (uint)abStack_48[uVar2];
      local_54 = 0;
      FUN_005e1dd0(L"%.2x",&local_58,0,uVar4);
      FUN_004082dc(&local_8,local_50);
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00407eb8(param_2,local_8);
  puVar1 = puStack_68;
  *in_FS_OFFSET = (int)puStack_70;
  puStack_68 = &LAB_00629f5c;
  puStack_6c = (undefined1 *)0x629f4c;
  thunk_FUN_00406e5c(&local_50,puStack_70,puVar1);
  puStack_6c = (undefined1 *)0x629f54;
  thunk_FUN_00406e5c(&local_8);
  return;
}
