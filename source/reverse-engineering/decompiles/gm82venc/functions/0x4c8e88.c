// rea decompile_all
// name: FUN_004c8e88
// address: 0x4c8e88
// body: available
// range: 0x4c8e88-0x4c9119 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c8ea4 (push 0x4c911a followed by fs-segment stack chaining); handler 0x4c911a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c8e88(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_2c = &LAB_004c911a;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puVar3 = &stack0xfffffffc;
  if (param_2 == 0) {
    FUN_0040b9d0(PTR_LAB_00688d4c,&local_c);
    FUN_0040b9d0(PTR_LAB_00688994,&local_10);
    FUN_004085b8(&local_c,local_10);
    FUN_0041bd4c(&LAB_004109ac,1,local_c);
    FUN_00406ab4();
    puVar3 = puStack_28;
  }
  puStack_28 = puVar3;
  if (*(int *)(param_2 + 4) == 0) {
    FUN_0040b9d0(PTR_LAB_00688d4c,&local_14);
    FUN_0040b9d0(PTR_LAB_006892c0,&local_18);
    FUN_004085b8(&local_14,local_18);
    FUN_0041bd4c(&LAB_004109ac,1,local_14);
    FUN_00406ab4();
  }
  iVar4 = FUN_004c7310(*(undefined4 *)(param_2 + 0x14));
  if (iVar4 == 1) {
    iVar4 = *(int *)(param_1 + 100);
    *(undefined4 *)(iVar4 + 8) = 0;
    *(undefined1 *)(iVar4 + 0x10) = 0;
  }
  else if (iVar4 == 2) {
    iVar4 = *(int *)(param_2 + 0x18);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_2 + 0xc);
    }
    if (*(int *)(iVar4 + 4) == 0) {
      if (*(int *)(param_2 + 0x14) == *(int *)(param_1 + 100)) {
        FUN_004c78a8(iVar4,*(undefined4 *)(param_1 + 0x68));
        uVar5 = FUN_004c786c(*(undefined4 *)(param_1 + 100));
        *(undefined4 *)(param_1 + 0x68) = uVar5;
        FUN_00405fdc(*(undefined4 *)(param_1 + 100));
        *(int *)(param_1 + 100) = iVar4;
        *(undefined4 *)(iVar4 + 0xc) = 0;
        *(undefined4 *)(iVar4 + 0x18) = 0;
        *(undefined4 *)(iVar4 + 0x14) = 0;
        FUN_004c97d4(param_1);
      }
      else {
        iVar1 = *(int *)(iVar4 + 8);
        if (iVar1 == 0) {
          *(undefined4 *)(*(int *)(iVar4 + 0x14) + 8) = 0;
          FUN_00405fdc(iVar4);
        }
        else {
          *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(*(int *)(param_2 + 0x14) + 0x18);
          if (*(int *)(*(int *)(iVar4 + 8) + 0x18) == 0) {
            *(int *)(*(int *)(*(int *)(param_2 + 0x14) + 0x14) + 8) = iVar1;
          }
          else {
            *(int *)(*(int *)(*(int *)(iVar4 + 8) + 0x18) + 0xc) = iVar1;
          }
          iVar1 = *(int *)(iVar4 + 8);
          *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(*(int *)(param_2 + 0x14) + 0x14);
          iVar2 = *(int *)(iVar1 + 0xc);
          while (iVar2 != 0) {
            iVar1 = *(int *)(iVar1 + 0xc);
            *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(*(int *)(param_2 + 0x14) + 0x14);
            iVar2 = *(int *)(iVar1 + 0xc);
          }
          *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(*(int *)(param_2 + 0x14) + 0xc);
          if (*(int *)(iVar1 + 0xc) != 0) {
            *(int *)(*(int *)(iVar1 + 0xc) + 0x18) = iVar1;
          }
          FUN_004c7c28(param_1,*(undefined4 *)(iVar1 + 0x14));
          FUN_00405fdc(*(undefined4 *)(param_2 + 0x14));
          FUN_00405fdc(iVar4);
        }
      }
    }
    else {
      iVar1 = *(int *)(param_2 + 0x14);
      if (*(int *)(param_1 + 100) == iVar1) {
        *(int *)(*(int *)(param_1 + 100) + 8) = iVar4;
        *(undefined4 *)(iVar4 + 0x18) = 0;
        *(undefined4 *)(iVar4 + 0xc) = 0;
        local_8 = iVar4;
        uVar5 = FUN_004c73c8(*(undefined4 *)(param_1 + 100));
        *(undefined4 *)(local_8 + 0x20) = uVar5;
        FUN_004c76f0(iVar4);
      }
      else {
        *(undefined1 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar4 + 4);
        *(undefined4 *)(iVar1 + 8) = 0;
        FUN_00405fdc(iVar4);
      }
      FUN_004c7c28(param_1,*(undefined4 *)(param_2 + 0x14));
    }
  }
  else {
    iVar4 = *(int *)(param_2 + 0x18);
    if (iVar4 == 0) {
      *(undefined4 *)(*(int *)(param_2 + 0x14) + 8) = *(undefined4 *)(param_2 + 0xc);
      *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x18) = 0;
      FUN_004c76f0();
    }
    else {
      *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      if (*(int *)(param_2 + 0xc) != 0) {
        *(int *)(*(int *)(param_2 + 0xc) + 0x18) = iVar4;
      }
      uVar5 = FUN_004c786c(param_2);
      FUN_004c78a8(*(undefined4 *)(param_2 + 0x18),uVar5);
      FUN_004c76f0(*(undefined4 *)(param_2 + 0x18));
    }
    FUN_004c7c28(param_1,*(undefined4 *)(param_2 + 0x14));
  }
  FUN_00405fdc(param_2);
  puVar3 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004c9121;
  puStack_2c = (undefined1 *)0x4c9119;
  thunk_FUN_004072fc(&local_18,4,puVar3);
  return;
}
