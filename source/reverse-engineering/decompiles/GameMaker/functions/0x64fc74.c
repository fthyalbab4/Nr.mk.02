// rea decompile_all
// name: FUN_0064fc74
// address: 0x64fc74
// body: available
// range: 0x64fc74-0x64fd54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x64fc97 (push 0x64fd55 followed by fs-segment stack chaining); handler 0x64fd55 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064fc74(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_c = 0;
  local_10 = 0;
  puStack_1c = (undefined1 *)0x64fc8c;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_20 = &LAB_0064fd55;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  cVar2 = FUN_00416e40(local_8);
  if (cVar2 != '\0') {
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_00405a7c();
    }
    uVar3 = FUN_00405a4c(&LAB_00433630,1);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    FUN_0043ff44(uVar3,local_8);
    FUN_004173d8(local_8,&local_c);
    FUN_00407eb8(param_1 + 8,local_c);
    FUN_00417398(local_8,&local_10);
    FUN_00407eb8(param_1 + 0x10,local_10);
    iVar4 = FUN_00415924(*(undefined4 *)(param_1 + 8),L".wav");
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 4) = 0;
    }
    else {
      iVar4 = FUN_00415924(*(undefined4 *)(param_1 + 8),L".mid");
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 4) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 4) = 3;
      }
    }
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0064fd5c;
  puStack_20 = (undefined1 *)0x64fd54;
  thunk_FUN_00406e80(&local_10,3,puVar1);
  return;
}
