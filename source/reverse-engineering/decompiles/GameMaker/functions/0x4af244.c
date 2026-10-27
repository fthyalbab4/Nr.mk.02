// rea decompile_all
// name: FUN_004af244
// address: 0x4af244
// body: available
// range: 0x4af244-0x4af40d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4af26a (push 0x4af462 followed by fs-segment stack chaining); handler 0x4af462 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4af292 (push 0x4af41f followed by fs-segment stack chaining); handler 0x4af41f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4af2a0 (push 0x4af40e followed by fs-segment stack chaining); handler 0x4af40e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004af244(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  int local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int *local_c;
  undefined4 local_8;

  puStack_40 = &stack0xfffffffc;
  local_20 = 0;
  local_1c = 0;
  local_8 = 0;
  puStack_44 = &LAB_004af462;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  puStack_4c = (undefined1 *)0x4af279;
  local_c = param_1;
  local_10 = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
  puStack_4c = (undefined1 *)0x4af287;
  FUN_004ae6b8(local_c[7]);
  puStack_50 = &LAB_004af41f;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  puStack_5c = &LAB_004af40e;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  puStack_58 = &stack0xfffffffc;
  puStack_4c = &stack0xfffffffc;
  (**(code **)(*local_c + 0x44))();
  (**(code **)(*local_10 + 0x74))(local_10,param_2,param_3);
  iVar5 = 0;
  iVar2 = (**(code **)(*local_10 + 0x14))();
  if (-1 < iVar2 + -1) {
    local_18 = 0;
    do {
      (**(code **)(*local_10 + 0xc))(local_10,local_18,&local_1c);
      uVar3 = FUN_00407f44(local_1c);
      uVar3 = FUN_004aefc4(local_c,uVar3,&local_14);
      FUN_00408074(&local_8,uVar3);
      if (iVar5 == 0) {
        iVar5 = FUN_004ae1e8(local_c[7],0,local_8);
      }
      else {
        iVar4 = FUN_004ad85c(iVar5);
        if (iVar4 == local_14) {
          uVar3 = FUN_004ad0f0(iVar5);
          iVar5 = FUN_004ae1e8(local_c[7],uVar3,local_8);
        }
        else {
          iVar4 = FUN_004ad85c(iVar5);
          if (iVar4 == local_14 + -1) {
            iVar5 = FUN_004ae1e8(local_c[7],iVar5,local_8);
          }
          else {
            iVar4 = FUN_004ad85c(iVar5);
            if (local_14 < iVar4) {
              uVar3 = FUN_004ad0f0(iVar5);
              while( true ) {
                iVar5 = FUN_004ad85c(uVar3);
                if (iVar5 <= local_14) break;
                uVar3 = FUN_004ad0f0(uVar3);
              }
              uVar3 = FUN_004ad0f0(uVar3);
              iVar5 = FUN_004ae1e8(local_c[7],uVar3,local_8);
            }
            else {
              FUN_0040b75c(PTR_PTR_00781cec,&local_20);
              local_30 = local_14;
              local_2c = 0;
              local_28 = local_8;
              local_24 = 0x11;
              FUN_004ac700(local_20,&local_30,1);
            }
          }
        }
      }
      local_18 = local_18 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  puVar1 = puStack_58;
  *in_FS_OFFSET = uStack_60;
  puStack_58 = &LAB_004af415;
  puStack_5c = (undefined1 *)0x4af405;
  FUN_004ae704(local_c[7],uStack_60,puVar1);
  puStack_5c = (undefined1 *)0x4af40d;
  FUN_00405a7c(local_10);
  return;
}
