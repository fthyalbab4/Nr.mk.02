// rea decompile_all
// name: FUN_006bc3c4
// address: 0x6bc3c4
// body: available
// range: 0x6bc3c4-0x6bc4c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6bc3e0 (push 0x6bc4ca followed by fs-segment stack chaining); handler 0x6bc4ca lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006bc3c4(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int local_8;

  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_006bc4ca;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  cVar2 = (**(code **)(**(int **)(param_1 + 0x3d4) + 0x40))();
  if (cVar2 != '\0') {
    uVar3 = FUN_00405a4c(&LAB_0052e8fc,1);
    FUN_004cf2f4(*(undefined4 *)(local_8 + 0x3d4),&local_c);
    FUN_0043ff44(uVar3,local_c);
    iVar4 = FUN_0052f024(uVar3);
    if (iVar4 == 800) {
      iVar4 = FUN_0052f024(uVar3);
      if (-1 < iVar4 + -1) {
        do {
          uVar5 = FUN_006bcb90();
          uVar5 = FUN_006bccc8(uVar5);
          FUN_0062d298(uVar5,uVar3);
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      FUN_00405a7c(uVar3);
      iVar4 = (**(code **)(**(int **)(local_8 + 0x388) + 0xec))();
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      FUN_006bc078(local_8);
      iVar6 = *(int *)(local_8 + 0xa020) + -1;
      if (iVar4 < iVar6) {
        iVar6 = iVar4;
      }
      FUN_006bc118(local_8,iVar6);
      *(undefined1 *)(local_8 + 0xa026) = 1;
      FUN_006bcb60();
    }
    else {
      FUN_004d43f8(L"File is not created with the correct version of Game Maker.");
    }
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_006bc4d1;
  puStack_20 = (undefined1 *)0x6bc4c9;
  thunk_FUN_00406e5c(&local_c,uStack_24,puVar1);
  return;
}
