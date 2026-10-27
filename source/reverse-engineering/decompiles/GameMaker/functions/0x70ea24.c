// rea decompile_all
// name: FUN_0070ea24
// address: 0x70ea24
// body: available
// range: 0x70ea24-0x70eb40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x70ea45 (push 0x70eb41 followed by fs-segment stack chaining); handler 0x70eb41 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0070ea24(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
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
  puStack_1c = (undefined1 *)0x70ea3a;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_20 = &LAB_0070eb41;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_00417398(local_8,&local_10);
  FUN_00417288(local_10,0,&local_c);
  FUN_00407eb8(&DAT_00790840,local_c);
  uVar2 = FUN_00405a4c(&LAB_0052e8fc,1);
  FUN_0043ff44(uVar2,local_8);
  uVar3 = FUN_0052f2e4(uVar2);
  FUN_00405a7c(uVar2);
  iVar4 = FUN_0052f024(uVar3);
  if (iVar4 == 800) {
    FUN_0070a618(uVar3);
    FUN_0070ac5c(uVar3);
    FUN_0070b288(uVar3);
    FUN_0070b8cc(uVar3);
    FUN_0070bef8(uVar3);
    FUN_0070c524(uVar3);
    FUN_0070cb50(uVar3);
    FUN_0070d1c4(uVar3);
    FUN_0070d838(uVar3);
    FUN_0070ddd0(uVar3);
    FUN_0070e150(uVar3);
    FUN_0070e41c(uVar3);
    FUN_0070e5b4(uVar3);
    FUN_0070e8f4(uVar3);
    FUN_0070e98c(uVar3);
    FUN_00405a7c(uVar3);
  }
  else {
    FUN_004d43f8(L"This file is created with a newer version of Game Maker and cannot be imported.")
    ;
    FUN_00405a7c(uVar3);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0070eb48;
  puStack_20 = (undefined1 *)0x70eb40;
  thunk_FUN_00406e80(&local_10,3,puVar1);
  return;
}
