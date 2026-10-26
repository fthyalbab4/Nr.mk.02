// rea decompile_all
// name: FUN_0064fde4
// address: 0x64fde4
// body: available
// range: 0x64fde4-0x64ff74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x64fdff (push 0x64ff75 followed by fs-segment stack chaining); handler 0x64ff75 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064fde4(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 in_ST1;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;

  puStack_24 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_0064ff75;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  uStack_8 = 0;
  FUN_0064fba8(param_1);
  iVar5 = FUN_0052f024(param_2);
  if (((iVar5 == 0x1b8) || (iVar5 == 600)) || (iVar5 == 800)) {
    if (iVar5 == 0x1b8) {
      uVar6 = FUN_0052f024(param_2);
      *(undefined4 *)(param_1 + 4) = uVar6;
      FUN_0052f060(param_2,&local_c);
      FUN_00407eb8(param_1 + 8,local_c);
      FUN_00407eb8(param_1 + 0x10,0);
      if (-1 < *(int *)(param_1 + 4)) {
        uVar6 = FUN_0052f2e4(param_2);
        *(undefined4 *)(param_1 + 0x2c) = uVar6;
      }
      iVar5 = FUN_00415924(*(undefined4 *)(param_1 + 8),L".wav");
      if (iVar5 == 0) {
        *(undefined4 *)(param_1 + 4) = 0;
      }
      else {
        iVar5 = FUN_00415924(*(undefined4 *)(param_1 + 8),L".mid");
        if (iVar5 == 0) {
          *(undefined4 *)(param_1 + 4) = 1;
        }
        else {
          *(undefined4 *)(param_1 + 4) = 3;
        }
      }
      FUN_0052f114(param_2);
      FUN_0052f024(param_2);
      bVar2 = FUN_0052f114(param_2);
      *(byte *)(param_1 + 0x28) = bVar2 ^ 1;
    }
    else {
      uVar6 = FUN_0052f024(param_2);
      *(undefined4 *)(param_1 + 4) = uVar6;
      FUN_0052f060(param_2,&local_10);
      FUN_00407eb8(param_1 + 8,local_10);
      FUN_0052f060(param_2,&local_14);
      FUN_00407eb8(param_1 + 0x10,local_14);
      cVar3 = FUN_0052f114(param_2);
      if (cVar3 != '\0') {
        if (iVar5 < 800) {
          uVar6 = FUN_0052f2e4(param_2);
          *(undefined4 *)(param_1 + 0x2c) = uVar6;
        }
        else {
          uVar6 = FUN_0052f258(param_2);
          *(undefined4 *)(param_1 + 0x2c) = uVar6;
        }
      }
      uVar6 = FUN_0052f024(param_2);
      *(undefined4 *)(param_1 + 0xc) = uVar6;
      FUN_0052f038(param_2);
      *(double *)(param_1 + 0x18) = (double)in_ST0;
      FUN_0052f038(param_2);
      *(double *)(param_1 + 0x20) = (double)in_ST1;
      uVar4 = FUN_0052f114(param_2);
      *(undefined1 *)(param_1 + 0x28) = uVar4;
    }
    uStack_8 = CONCAT13(1,(undefined3)uStack_8);
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0064ff7c;
  puStack_28 = (undefined1 *)0x64ff74;
  thunk_FUN_00406e80(&local_14,3,puVar1);
  return;
}
