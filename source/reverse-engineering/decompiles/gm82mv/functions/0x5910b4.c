// rea decompile_all
// name: FUN_005910b4
// address: 0x5910b4
// body: available
// range: 0x5910b4-0x5912ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5910ec (push 0x5912af followed by fs-segment stack chaining); handler 0x5912af lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005910b4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 param_5,int param_6,int param_7)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_EDI;
  int *in_FS_OFFSET;
  undefined1 **ppuStackY_34;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  iVar4 = 4;
  do {
    local_c = 0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  LOCK();
  UNLOCK();
  local_24 = (undefined1 *)0x5910e1;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  local_28 = &LAB_005912af;
  local_2c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_2c;
  if (param_7 < param_6) {
    local_24 = &stack0xfffffffc;
    bVar2 = FUN_00590748(param_1,1);
    iVar4 = param_7 + -1;
    if ((bVar2 & 1) != 0) {
      iVar4 = -1;
    }
    FUN_00408984(local_8,1,iVar4,param_4);
    param_6 = param_6 - param_7;
    if (0 < param_6) {
      do {
        FUN_00408310(&stack0xffffffe0,param_5);
        FUN_004085b8(param_4,unaff_EDI);
        param_6 = param_6 + -1;
      } while (param_6 != 0);
    }
    iVar3 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar3 = FUN_00407488(&local_8,local_8);
    }
    uVar5 = 0;
    if (iVar3 != 0) {
      uVar5 = *(undefined4 *)(iVar3 + -4);
    }
    ppuStackY_34 = &local_24;
    FUN_00408984(local_8,iVar4 + 1,uVar5);
    FUN_004085b8(param_4,local_24);
  }
  else if (param_6 < param_7) {
    local_24 = &stack0xfffffffc;
    bVar2 = FUN_00590748(param_1,1);
    if ((bVar2 & 1) == 0) {
      FUN_00408984(local_8,1,param_6 + -1,&local_10);
      iVar4 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar4 = FUN_00407488(&local_8,local_8);
      }
      uVar5 = 0;
      if (iVar4 != 0) {
        uVar5 = *(undefined4 *)(iVar4 + -4);
      }
      ppuStackY_34 = &local_2c;
      FUN_00408984(local_8,param_7,uVar5);
      FUN_00408678(param_4,local_10,local_2c);
    }
    else {
      FUN_00408984(local_8,1,0xffffffff,&local_c);
      iVar4 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar4 = FUN_00407488(&local_8,local_8);
      }
      uVar5 = 0;
      if (iVar4 != 0) {
        uVar5 = *(undefined4 *)(iVar4 + -4);
      }
      ppuStackY_34 = &local_28;
      FUN_00408984(local_8,param_7 - param_6,uVar5);
      FUN_00408678(param_4,local_c,local_28);
    }
  }
  else {
    local_24 = &stack0xfffffffc;
    FUN_00408194(param_4,local_8);
  }
  puVar1 = local_2c;
  *in_FS_OFFSET = (int)ppuStackY_34;
  local_2c = &LAB_005912b6;
  thunk_FUN_004072fc(&local_2c,4,puVar1);
  thunk_FUN_004072fc(&local_10,3);
  return;
}
